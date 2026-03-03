# DEVICO HANDHELD SDK (V0.1.0)

This repo is designed to be used as a base for all Devico Handheld Games.
All games designed with this SDK should still work for the PC runtime (as it develops)
even after large updates, I plan to keep backwards compatibility as much as i can

## PROGRAMMING LAYOUT
- game_init(SystemAPI &sys) - acts as the entry point, all initialisation happens here
- game_update(SystemAPI &sys) - all game logic should go here
- game_render(SystemAPI &sys) - all rendering code should go here

## DOCS (only 1 function exists at the moment) 

### Logic Functions
- N/A

### Rendering Functions
- sys->clear(uint16_t colour) - clears the screen to a single colour using the RGB565 Format

## Credits
- X_EpicDev (Literally Everything)