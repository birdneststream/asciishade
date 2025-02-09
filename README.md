```
                   _ _      __              __   
  ____ ___________(_|_)____/ /_  ____ _____/ /__ 
 / __ `/ ___/ ___/ / / ___/ __ \/ __ `/ __  / _ \
/ /_/ (__  ) /__/ / (__  ) / / / /_/ / /_/ /  __/
\__,_/____/\___/_/_/____/_/ /_/\__,_/\__,_/\___/ 

                   -by darkmage 
               www.evildojo.com
```

<img src="https://raw.githubusercontent.com/mikedesu/asciishade/main/preview.png"/>

*doin' ascii? throw some shade on it*

*what is an "ascii bird" even? idk*

**i know what shade is**

1. shade keeps me cool on a hot day
2. shade is what haters throw at me so imma throw back at them
3. shade is the spirit of shadow in the old SNES RPG: **Secret of Mana**

Now, asciishade is an ASCII Art Editor.

-----

### What is asciishade?

asciishade is an upcoming ASCII creation and editing tool.
It is written from the ground up in C using the ncurses library.

### Why write asciishade?

Highly dissatisfied with the complete lack of options in the ascii-creation department, I decided to begin implementing a pure CLI tool. I began writing shade late at night on April 30th, 2022. It was easier than expected to get something close to what I wanted right-away. Now is just about fine-tuning the system.

The state of developers online is largely sided towards web applications. I admire the simplicity and purity of CLI and 'tui' tools and programs. They can often perform much better than their web counterparts. 

### Update 2023-06-23

One of the goals of `asciishade` is to support absurdly large or small console dimensions. At the moment, the smallest size supported is `20x11`. This is because the initial canvas size is automatically determined by your console's dimensions. Naturally, once loading asciis is supported, this will require managing a "view frame" that sits on top of the canvas, so that one can scroll-around their larger image.

### Update 2023

Holy hell it has been a long time. The original version of asciishade was began as a Python3 project, but I later decided to start the project over in pure C to keep better in-line with my prefered style of development. Getting back into the swing of things is hard, but better to not subject yourself to the constraints of a language you learned later-on in life. While I *could* write asciishade in Python, C is just more fun!

### Who cares about ASCII art in 2022+?

A good number of people care about ASCII art.

- Blocktronics: [http://blocktronics.org/](http://blocktronics.org/)
- AciD Productions: [https://16colo.rs/group/acid](https://16colo.rs/group/acid)

### Web ASCII editors

- ASCII Blaster: [https://asdf.us/asciiblaster/](https://asdf.us/asciiblaster/)
- asciibird: [https://asciibird.birdnest.live/](https://asciibird.birdnest.live/)

### Using asciishade

##### Building

From the project root folder, execute:

```
make
```

##### Running

This section is subject to change soon.

```
./asciishade --help
Usage: ./asciishade [OPTION]...
  -f, --filename=FILENAME    specify a filename to save to
  -h, --help                 display this help and exit
```

#### Examples

```
./asciishade 

./asciishade -f test.ascii

./asciishade --filename=test.ascii

./asciishade -h

./asciishade --help
```


**Keyboard Controls**

**Normal Mode**

- 'escape': Switch to text mode
- 'w': place a block and move up
- 'a': place a block and move left
- 's': place a block and move down
- 'd': place a block and move right
- 'S': save to file
    - if the filename was not specified on program run, it will save to `untitled.ascii`
- 'o': go back one color pair / one foreground color
- 'p': go forward one color pair / one foreground color
- 'O': go back one background color
- 'P': go forward one background color
- 'c': clear canvas
- 'q': quit
- arrow keys: cursor navigation
- space bar: place a block
- delete: delete a block
- backspace: delete a block and move left one

`if the numpad is on...`

- '1': place a block and move down left
- '2': place a block and move down
- '3': place a block and move down right
- '4': place a block and move left
- '6': place a block and move right
- '7': place a block and move up left
- '8': place a block and move up
- '9': place a block and move up right

**Text Mode**

- 'escape': Switch back to normal mode
- delete: delete a block
- backspace: delete a block and move left one

### Features On The Way

- Loading from file
- Exporting to:
    - irc
    - ascii
    - png
    - gif
- Upload to:
    - termbin
- Half-block and quarter-block support
- Full Unicode / UTF-8 support
- Copy / paste
- Multiple tabs
- Layers
- Frames
- Custom Palettes
- Support for beyond 16 colors
- More!

### Any plans for mouse support?

No!

-----

All of my social media contact info can be found on my website: [www.evildojo.com](https://www.evildojo.com)

I stream regularly on Twitch as well at: [twitch.tv/darkmage666](https://www.twitch.tv/darkmage666)

