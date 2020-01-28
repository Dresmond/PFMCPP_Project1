#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase


/*
1)
Noun:        elevator      
action 1:    go up one floor from current position
action 2:    go down one floor from current position
action 3:    open elevator doors 
Action 4;    close elevator doors 
*/
 elevator.goUpOneFloor();
 elevator.goDownOneFloor();
 elevator.openDoors();
 elevator.closeDoors();
/*
2)
Noun:       chordPlayer
action 1:   play minor chord
action 2:   play major chord
action 3:   play dominant chord
action 4:   play chord progression
*/
 chordPlayer.playMinor();
 chordPlayer.playMajor();
 chordPlayer.playDominant();
 chordPlayer.playProgression();
/*
3)
Noun:       sound
action 1:   play sound
action 2:   mute sound
action 3:   play sound louder
action 4:   play sound quieter  
*/
 sound.play();
 sound.mute();
 sound.louder();
 sound.quieter();
/*
4)
Noun:        mechanicalEye
action 1:    look up
action 2:    look down 
action 3:    look left
action 4:    look right
action 5:    find something to look at
*/
 mechanicalEye.lookUp();        
 mechanicalEye.lookDown();
 mechanicalEye.lookLeft();
 mechanicalEye.lookRight();
 mechanicalEye.findAndFocus();
/*
5)  
Noun:        desk
action 1:    select drawer for action
action 2:    open the drawer
action 3:    close the drawer
*/
 desk.selectDrawer();
 desk.openDrawer();             
 desk.closeDrawer();
/*
6)
Noun:      compressor
action 1:  adjust the ratio up or down
action 2:  adjust the attack up or down
action 3:  adjust the release up or down
action 4:  adjust the threshold up or down
action 5:  adjust the bypass on or off
*/
compressor.adjustRatio();
compressor.adjustAttack();
compressor.adjustRelease();
compressor.adjustThreshold();
compressor.adjustBypassOnOff();
/*
7)
Noun: minor scale
action 1: play dorian mode
action 2: play Phrygian mode
action 3: play aeolian mode
*/
minorScale.playDorian();
minorScale.playPhrygian();
minorScale.playAeolian();
/*
8)
Noun: major scale
action 1: play ionian mode
action 2: play lydian mode
action 3: play lydian augmented
*/
majorScale.playIonian();
majorScale.playLydian();
majorScale.playLydianAugmented();
/*
9)  
Noun:      trumpet 
action 1:  move to appropriate slot
action 2:  lower valve #1
action 3:  lower valve #2
action 4:  lower valve #3
action 5:  play the note
action 6:  reset slot and valves
*/
 trumpet.lowerValve1();
 trumpet.lowerValve2();
 trumpet.lowerValve3();
 trumpet.lowerValve1();
 trumpet.playCurrent();
 trumpet.reset();
/*
10)
Noun:  spaceShip
action 1:  adjust current flight pitch
action 2:  adjust current flight roll
action 3:  adjust current flight yaw
action 4:  accelerate to velocity
action 5:  decelerate to velocity
*/ 
 spaceShip.adjustPitch();
 spaceShip.adjustRoll();
 spaceShip.adjustYaw();
 spaceShip.accelerate();
 spaceShip.decelerate();

#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
