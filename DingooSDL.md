![http://dingoo-sdk.googlecode.com/svn/wiki/images/dingoo-a320_small.png](http://dingoo-sdk.googlecode.com/svn/wiki/images/dingoo-a320_small.png)

# Keybindings #

Native Dingo SDL key/button bindings are the same as the Dingux SDL bindings, viz.

| ![http://www.dingoowiki.com/images/d/da/Up.png](http://www.dingoowiki.com/images/d/da/Up.png) | D-pad up        | SDLK\_UP |
|:----------------------------------------------------------------------------------------------|:----------------|:---------|
| ![http://www.dingoowiki.com/images/f/f9/Down.png](http://www.dingoowiki.com/images/f/f9/Down.png) | D-pad down      | SDLK\_DOWN |
| ![http://www.dingoowiki.com/images/7/7f/Leftright.png](http://www.dingoowiki.com/images/7/7f/Leftright.png) | D-pad left      | SDLK\_LEFT |
| ![http://www.dingoowiki.com/images/7/7f/Leftright.png](http://www.dingoowiki.com/images/7/7f/Leftright.png) | D-pad right     | SDLK\_RIGHT |
| ![http://www.dingoowiki.com/images/7/70/A.png](http://www.dingoowiki.com/images/7/70/A.png) | A button        | SDLK\_LCTRL |
| ![http://www.dingoowiki.com/images/5/57/B.png](http://www.dingoowiki.com/images/5/57/B.png) | B button        | SDLK\_LALT |
| ![http://www.dingoowiki.com/images/a/a5/X.png](http://www.dingoowiki.com/images/a/a5/X.png) | X button        | SDLK\_SPACE |
| ![http://www.dingoowiki.com/images/8/8a/Y.png](http://www.dingoowiki.com/images/8/8a/Y.png) | Y button        | SDLK\_LSHIFT |
| ![http://www.dingoowiki.com/images/b/b8/Start.png](http://www.dingoowiki.com/images/b/b8/Start.png) | START button    | SDLK\_RETURN |
| ![http://www.dingoowiki.com/images/e/e8/Select.png](http://www.dingoowiki.com/images/e/e8/Select.png) | SELECT button   | SDLK\_ESCAPE |
| ![http://www.dingoowiki.com/images/f/fe/L.png](http://www.dingoowiki.com/images/f/fe/L.png) | Left shoulder   | SDLK\_TAB |
| ![http://www.dingoowiki.com/images/f/f7/R.png](http://www.dingoowiki.com/images/f/f7/R.png) | Right shoulder  | SDLK\_BACKSPACE |
| ? | POWER UP button (NOTE OpenDingux uses HOLD instead) | SDLK\_PAUSE |

Images in table from http://dingoowiki.com/index.php?title=Editing:Guidelines#Controls_section

See [keyCodes.zip](http://code.google.com/p/pirate-dev/downloads/detail?name=keyCodes.zip) from http://code.google.com/p/pirate-dev/downloads/list for key identification.

Sample C switch
```
    case  SDLK_UP:          /* Dingoo  D-pad up */
    case  SDLK_DOWN:        /* Dingoo  D-pad down */
    case  SDLK_LEFT:        /* Dingoo  D-pad left */
    case  SDLK_RIGHT:       /* Dingoo  D-pad right */
    case  SDLK_LCTRL:       /* Dingoo  A button */
    case  SDLK_LALT:        /* Dingoo  B button */
    case  SDLK_SPACE:       /* Dingoo  X button */
    case  SDLK_LSHIFT:      /* Dingoo  Y button */
    case  SDLK_RETURN:      /* Dingoo  START button */
    case  SDLK_ESCAPE:      /* Dingoo  SELECT button */
    case  SDLK_TAB:         /* Dingoo  Left shoulder */
    case  SDLK_BACKSPACE:   /* Dingoo  Right shoulder */
    case  SDLK_PAUSE:       /* Dingoo  POWER UP button */
```