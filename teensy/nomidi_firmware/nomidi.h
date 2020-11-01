#define _VERSION_ 0.02
int segmentMax = 10;
volatile int lastSegmentPos = 0;
volatile int segmentPos = 0;
volatile int segmentTic = 0;
volatile char segmentData[] = "--noMIDI--";
const int segCathodePins[] = {19, 20, 21, 22, 23, 24, 25, 26, 27, 38};
const int segAnodePins[] = {39, 40, 41, 30, 31, 28, 29, 34};


const int ledPins[] = {0, 1, 35, 11, 12, 13, 32, 33, 36, 37};
volatile int ledIntesity[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
volatile int softPWMtic = 0;
volatile int softPWMres = 100;

const float inputValueSmoothing = 0.4; // the smaller the smoother
const float inputValueGain = 1.007;
const float inputValueOffset = -0.3;
const int intputReadDelay = 10;

const int ADDR_A = 2;
const int ADDR_B = 3;
const int ADDR_C = 4;
const int ADDR_D = 5;

const int POT1_X = A3;
const int POT1_INH = 9;
volatile float POT1_VALUES[] = { 0 , 0, 0, 0, 0, 0 , 0, 0, 0, 0};

const int POT0_X = A2;
const int POT0_INH = 8;
volatile float POT0_VALUES[] = { 0 , 0, 0, 0, 0, 0 , 0, 0, 0, 0};

const int FADER_X = A0;
const int FADER_INH = 6;
volatile float FADER_VALUES_LAST[] = { 0 , 0, 0, 0, 0, 0 , 0, 0, 0, 0};
volatile float FADER_VALUES[] = { 0 , 0, 0, 0, 0, 0 , 0, 0, 0, 0};

const int BUTTON0_X = 15;
const int BUTTON0_INH = 7;
volatile int BUTTON0_VALUES[] = { 0 , 0, 0, 0, 0, 0 , 0, 0, 0, 0};


const int BUTTON1_X = A4;
const int BUTTON1_INH = 10;
volatile int BUTTON1_VALUES[] = { 0 , 0, 0, 0, 0, 0 , 0, 0, 0, 0};
