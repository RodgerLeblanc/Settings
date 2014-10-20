Settings (project) (intermediate)
--------------
This sample app shows how to implement Settings object into a project and access it from QML. Settings object can be access from c++ too, exactly the same way as QSettings, except that I recommend using a pointer to refer to this object instead of calling it directly, but this is not mandatory.

This was done to mimic QSettings but using a JSON file instead. Only the most common functions from QSettings have been implemented. Those are :
- allKeys()
- contains()
- clear()
- fileName()
- remove()
- setValue()
- sync()
- value()

The problem with QSettings is it will crash your headless part if the QSettings file is too big, and that will not happen using JSON. This object was created with headless in mind, you can add a Settings object in both your headless and UI parts and they will stay in sync as soon as one part makes a change to the file.

To add this object to your project, follow these steps :

1- Copy both Settings.cpp and Settings.h to your src folder

2- In your applicationui.hpp, add those lines :

	#include "Settings.h"
	
	private:
 	     Settings *settings;
3- In your application.cpp, add those lines :

	(in constructor)
	settings = new Settings(this);
		...
	QmlDocument *qml = QmlDocument::create("asset:///main.qml").parent(this);
	qml->setContextProperty("_settings", settings);

4- In your PRO file :

	LIBS += -lbbdata



LICENSE
--------------
This app doesn't have a license, but it doesn't mean it can be used freely. Here's what GitHub says about it :
"Generally speaking, the absence of a license means that the default copyright laws apply. This means that you retain all rights to your source code and that nobody else may reproduce, distribute, or create derivative works from your work. This might not be what you intend."

In fact, that's what I intend. You can look at the code and learn from it, but YOU ARE NOT ALLOWED TO COPY, REPRODUCE OR PUBLISH THIS CODE ON YOUR OWN NAME.

If you want to use this code inside one of your app, please contat me by email. My email address can be found here :
https://github.com/RodgerLeblanc
