# CoreXY_HapticPanel
[poster_BP_EA-ICT_Baeten.pdf](https://github.com/maartenbaeten509/CoreXY_HapticPanel/files/8714601/poster_BP_EA-ICT_Baeten.pdf)

# CoreXY HapticPanel: An Open System to Render Haptic Interfaces in Virtual Reality for Manufacturing Industry
The HapticPanel is a system that allows the user can interact with a product in a virtual environment simulated by different types of physical input elements e.g. buttons and sliders. The HapticPanel will position the input elements according to the user's interaction. For the haptic panel to be user friendly, the system must be sufficiently responsive. This paper looks at the option to use CoreXY as an implementation to improve system speed and characteristics. This paper also takes a closer look at different communication protocols for parsing the inputs from the input panel to the Unity framework.

## Paper information
* Link to the paper with the new CoreXY HapticPanel: https://dl.acm.org/doi/10.1145/3489849.3489901
* Link to the paper with the former Cartesian HapticPanel: https://dl.acm.org/doi/10.1145/3489849.3489901

![HapticPanel Poster](https://github.com/maartenbaeten509/CoreXY_HapticPanel/blob/main/Images/poster1.jpg)

## Quick overview
* The files can be found in the 'Platform files' directory.
* The assembly steps can be found in the wiki of this repository.
* The VR framework software can be found in the 'VR Unity core' directory.
* The Arduino software and serial parser code can be found in the 'UnityHardwareBridge' directory.

## CoreXY HapticPanel Haptic Platform:
![HapticPanel Platform](https://github.com/maartenbaeten509/CoreXY_HapticPanel/blob/main/Images/CoreXY_HapticPanel.jpg)
Picture showing the Simulated Reality Haptic Platform for which the build file and instructions are shared in this repository.


## Installation instruction:
1. Include SteamVR from the Unity asset store.
2. Include the OptiTrack Unity plugin, found here: https://optitrack.com/support/downloads/plugins.html
3. Deploy the Arduino software on the Arduino's controlling the stepper motors and the Arduino handling the physical input.
4. Deploy the Arduino slave code to the arduino at the input panel.
5. Open the Sample demo scene in the Demos subdirectory.
6. Align the SteamVR and OptiTrack tracking.
7. Assign the correct OptiTrack id's to the finger tracker and the input panel tracker.
8. Assign the correct COM ports.
9. Update the 'sample interface.json' to match:
	1. The Arduino port used for each physical input element
	2. The physical position of the input element on the input panel. The centre of the input panel is 0,0. 


