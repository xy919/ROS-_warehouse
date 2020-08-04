
"use strict";

let AGVControl = require('./AGVControl.js')
let SubmitTray = require('./SubmitTray.js')
let VacuumGripperControl = require('./VacuumGripperControl.js')
let PopulationControl = require('./PopulationControl.js')
let GetMaterialLocations = require('./GetMaterialLocations.js')
let ConveyorBeltControl = require('./ConveyorBeltControl.js')

module.exports = {
  AGVControl: AGVControl,
  SubmitTray: SubmitTray,
  VacuumGripperControl: VacuumGripperControl,
  PopulationControl: PopulationControl,
  GetMaterialLocations: GetMaterialLocations,
  ConveyorBeltControl: ConveyorBeltControl,
};
