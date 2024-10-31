function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "pwm"};
	this.sidHashMap["pwm"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/ADC1"] = {sid: "pwm:12"};
	this.sidHashMap["pwm:12"] = {rtwname: "<Root>/ADC1"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "pwm:14"};
	this.sidHashMap["pwm:14"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Constant5"] = {sid: "pwm:16"};
	this.sidHashMap["pwm:16"] = {rtwname: "<Root>/Constant5"};
	this.rtwnameHashMap["<Root>/Digital Output"] = {sid: "pwm:1"};
	this.sidHashMap["pwm:1"] = {rtwname: "<Root>/Digital Output"};
	this.rtwnameHashMap["<Root>/Gain1"] = {sid: "pwm:13"};
	this.sidHashMap["pwm:13"] = {rtwname: "<Root>/Gain1"};
	this.rtwnameHashMap["<Root>/Pulse Generator"] = {sid: "pwm:2"};
	this.sidHashMap["pwm:2"] = {rtwname: "<Root>/Pulse Generator"};
	this.rtwnameHashMap["<Root>/ePWM"] = {sid: "pwm:3"};
	this.sidHashMap["pwm:3"] = {rtwname: "<Root>/ePWM"};
	this.rtwnameHashMap["<Root>/ePWM1"] = {sid: "pwm:23"};
	this.sidHashMap["pwm:23"] = {rtwname: "<Root>/ePWM1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
