var
	strawman = require('./src/app');

var 
	ready = require('enyo/ready');

ready(function(){
	new strawman().renderInto(document.body);
});