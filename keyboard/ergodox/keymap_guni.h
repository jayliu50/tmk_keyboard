static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(  // layer 0 : default
        // left hand
        EQL  ,  1,    2,   3,   4,   5,   LBRC,
	FN25 ,  Q,    W,   E,   R,   T,   FN26,
        FN30  ,  A,    S,   D,   F,   G,
        LSFT ,  Z,    X,   C,   V,   B,   FN27,
        LGUI , GRV,LEFT,RGHT, NO,
                                      FN23 ,LALT,
                                           HOME,
                                  BSPC,DEL, END,
        // right hand
             RBRC, 6,   7,   8,    9,   0,MINS,
             QUOT, Y,   U,   I,    O,   P,FN28,
                   H,   J,   K,    L,SCLN,FN30,
             FN27, N,   M, COMM, DOT,SLSH,RSFT,
                     NO, DOWN,  UP,NO,RGUI,
        RALT,FN29,
        PGUP,
        PGDN,ENT, SPC
    ),

    KEYMAP(  // layer 1 : function and symbol keys
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F11,
        TRNS,FN18,FN2 ,LBRC,RBRC,FN3 ,FN1,
        TRNS,BSLS,SLSH,FN4 ,FN5 ,FN22,
        TRNS,FN6 ,FN7 ,FN8 ,FN9 ,GRV ,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F12, F6,  F7,  F8,  F9,  F10, TRNS,
             FN24,FN10,FN11,FN12,EQL,FN13, TRNS,
                  FN14,FN15,FN16,MINS,FN17,TRNS,
             TRNS,FN19,FN20,FN21,QUOT,SCLN,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layer 2: navigation 
        // left hand
        NO,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,PGUP,HOME,UP ,END,NO ,TRNS,
        TRNS,PGDN,LEFT,DOWN,RGHT,NO,
        TRNS,NO,  NO,  NO,  NO,NO,NO,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      FN1,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             FN1,TRNS,  HOME,  TRNS,  TRNS, END ,TRNS,
                  NO,  LEFT,  UP,    DOWN, RGHT,TRNS,
             TRNS,TRNS,  HOME,  UP,  END, PGUP,TRNS,
                       LEFT,  DOWN,RGHT,PGDN,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
    KEYMAP(  // layer 3 : teensy bootloader functions
        // left hand
        FN0, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN1,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),


    KEYMAP(  // layer 4: numpad
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             TRNS,NO,  P7,  P8,  P9,  PMNS,BSPC,
                  NO,  P4,  P5,  P6,  PPLS,PENT,
             TRNS,NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
   	[0] =   ACTION_FUNCTION(TEENSY_KEY),                    // FN0 - Teensy key
	[1]  =  ACTION_LAYER_SET(0, ON_PRESS),              
        [2]  =  ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
	[3]  =  ACTION_MODS_KEY(MOD_LSFT, KC_6),
	[4]  =  ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
	[5]  =  ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
	[6]  =  ACTION_MODS_KEY(MOD_LSFT, KC_3),
	[7]  =  ACTION_MODS_KEY(MOD_LSFT, KC_4),
	[8]  =  ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),
	[9]  =  ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
	[10]  =  ACTION_MODS_KEY(MOD_LSFT, KC_1),
	[11]  =  ACTION_MODS_KEY(MOD_LSFT, KC_COMM),
	[12]  =  ACTION_MODS_KEY(MOD_LSFT, KC_DOT),
	[13]  =  ACTION_MODS_KEY(MOD_LSFT, KC_7),
	[14]  =  ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),
	[15]  =  ACTION_MODS_KEY(MOD_LSFT, KC_9),
	[16]  =  ACTION_MODS_KEY(MOD_LSFT, KC_0),
	[17]  =  ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),
	[18]  =  ACTION_MODS_KEY(MOD_LSFT, KC_2),
	[19]  =  ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
	[20]  =  ACTION_MODS_KEY(MOD_LSFT, KC_5),
	[21]  =  ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),
	[22]  =  ACTION_MODS_KEY(MOD_LSFT, KC_8),
 	[23]  =  ACTION_LAYER_SET(3, ON_PRESS),
        [24]  =  ACTION_LAYER_SET(3, ON_PRESS),   
	[25]  =  ACTION_MODS_TAP_KEY(MOD_LCTL, KC_TAB),
	[26]  =  ACTION_LAYER_SET(1, ON_PRESS),
	[27]  =	 ACTION_LAYER_MOMENTARY(1),
        [28]  =  ACTION_MODS_TAP_KEY(MOD_RCTL,KC_BSLS),
	[29]  =  ACTION_LAYER_TOGGLE(4),
	//[26]  =  ACTION_LAYER_TAP_KEY(4, KC_S),
	//[27]  =  ACTION_LAYER_TAP_KEY(3, KC_L),
	[30]   =  ACTION_LAYER_TAP_KEY(1, KC_ESC),
        [31]  = ACTION_LAYER_MOMENTARY(2),
};



void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
   
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}
