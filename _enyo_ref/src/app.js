var
        kind = require('enyo/kind'),
        utils = require('enyo/utils'),
        Button = require('enyo/Button');

    var
        FittableRows = require('layout/FittableRows');

    var
        Toolbar = require('onyx/Toolbar');

    // By returning the result of kind() to module.exports, other files that require this file will
    // gain access to the kind (like the kinds required above)
    module.exports = kind({
        name: 'ex.App',
        // Note that the 'kind' property should always be a reference to the constructor
        // (in this case via the local variable FittableRows), rather than a string
        // (e.g., 'enyo.FittableRows') or global reference (e.g., enyo.FittableRows).
        kind: FittableRows,
        components: [
            {kind: Toolbar, components: [
                {content: 'Welcome to Enyo 2.6!'}
            ]},
            {fit: true, components: [
                {content: 'Default kinds are supported so we can omit the kind key of the config'},
                {kind: Button, content: 'Continue', ontap: 'continueTapped'}
            ]}
        ],
        continueTapped: function (sender, event) {
            utils.asyncMethod(this, function () {
                this.log('Log this message in just a moment');
            });
        }
    });
