/*
 * Copyright (c) 2011-2014 BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import bb.cascades 1.2

Page {
    ScrollView {
        Container {
            layout: DockLayout {}
            topPadding: 30
            bottomPadding: topPadding
            leftPadding: topPadding
            rightPadding: topPadding
            horizontalAlignment: HorizontalAlignment.Fill
            verticalAlignment: VerticalAlignment.Fill
            Container {
                horizontalAlignment: HorizontalAlignment.Center
                verticalAlignment: VerticalAlignment.Center
                Container {
                    bottomPadding: 30
                    layout: StackLayout {
                        orientation: LayoutOrientation.LeftToRight
                    }
                    Label {
                        text: "Key"
                    }
                    TextField {
                        id: key
                    }
                }
                Container {
                    bottomPadding: 30
                    layout: StackLayout {
                        orientation: LayoutOrientation.LeftToRight
                    }
                    Label {
                        text: "Value"
                    }
                    TextField {
                        id: value
                    }
                }
                Container {
                    bottomPadding: 30
                    horizontalAlignment: HorizontalAlignment.Center
                    layout: StackLayout {
                        orientation: LayoutOrientation.LeftToRight
                    }
                    CustomButton {
                        text: "Add to Settings"
                        rightPadding: 30
                        onClicked: {
                            if (key.text != "")
                                _settings.setValue(key.text, value.text)
                            key.resetText()
                            value.resetText()
                            settingsAsJson.setText(_app.loadJson())
                        }
                    }
                    CustomButton {
                        text: "Clear Settings"
                        onClicked: {
                            _settings.clear()                            
                            settingsAsJson.setText(_app.loadJson())
                        }
                    }
                }
                TextArea {
                    id: settingsAsJson
                    text: _app.loadJson()
                    editable: false
                }
            }
        }
    }
}
