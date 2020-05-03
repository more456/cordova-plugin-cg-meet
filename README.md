# cordova-plugin-cg-meet
Cordova plugin for CG Meet React Native SDK. Works with both iOS and Android, and fixes the 64-bit binary dependency issue with Android found in previous versions of this plugin.

# Summary 
I created this repo as there were multiple versions of this plugin, one which worked for iOS and Android, but neither worked with both. This verison satisfies the 64bit requirement for Android and also works in iOS and is currently being used in production.

# Installation
`cordova plugin add https://github.com/findmate/cordova-plugin-cg-meet`

## iOS Installation
On iOS/Xcode you will need to manually specify the WebRTC and CGMeet frameworks manually to be embedded.

Example of how to select them here: https://github.com/findmate/cordova-plugin-cg-meet/blob/master/xcode-ios-framework-embed-example.png


# Usage
```
const roomId = 'your-custom-room-id';

cgplugin.loadURL('https://meet.jit.si/' + roomId, roomId, false, function (data) {
    if (data === "CONFERENCE_WILL_LEAVE") {
        cgplugin.destroy(function (data) {
            // call finished
        }, function (err) {
            console.log(err);
        });
    }
}, function (err) {
    console.log(err);
});
```
