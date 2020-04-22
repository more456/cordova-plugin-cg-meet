var exec = require('cordova/exec');

exports.loadURL = function(url, key, isInvisible, success, error) {
    exec(success, error, "CGPlugin", "loadURL", [url, key, !!isInvisible]);
};

exports.destroy = function(success, error) {
    exec(success, error, "CGPlugin", "destroy", []);
};