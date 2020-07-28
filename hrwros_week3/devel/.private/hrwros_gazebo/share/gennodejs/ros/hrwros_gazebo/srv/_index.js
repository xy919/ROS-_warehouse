
"use strict";

let GetMaterialLocations = require('./GetMaterialLocations.js')
let ConveyorBeltControl = require('./ConveyorBeltControl.js')
let PopulationControl = require('./PopulationControl.js')
let VacuumGripperControl = require('./VacuumGripperControl.js')
let SubmitTray = require('./SubmitTray.js')
let AGVControl = require('./AGVControl.js')

module.exports = {
  GetMaterialLocations: GetMaterialLocations,
  ConveyorBeltControl: ConveyorBeltControl,
  PopulationControl: PopulationControl,
  VacuumGripperControl: VacuumGripperControl,
  SubmitTray: SubmitTray,
  AGVControl: AGVControl,
};
