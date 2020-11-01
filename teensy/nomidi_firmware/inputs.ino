
void readInputs() {
  for (int i = 0; i < 10 ; i++) {
    POT0_VALUES[i] = constrain(inputValueOffset + ((POT0_VALUES[i] * (1 - inputValueSmoothing)) + (mux_pot0.read(9 - i) * inputValueSmoothing) * inputValueGain), 0, 4095);
    if (POT0_VALUES[i] <= 2) POT0_VALUES[i]  = 0;

    POT1_VALUES[i] = constrain(inputValueOffset + ((POT1_VALUES[i] * (1 - inputValueSmoothing)) + (mux_pot1.read(9 - i) * inputValueSmoothing) * inputValueGain), 0, 4095);
    if (POT1_VALUES[i] <= 2) POT1_VALUES[i]  = 0;

    FADER_VALUES[i] = constrain(inputValueOffset + ((FADER_VALUES[i] * (1 - inputValueSmoothing)) + (mux_fader.read(9 - i) * inputValueSmoothing) * inputValueGain), 0, 4095);
    if (FADER_VALUES[i] <= 2) FADER_VALUES[i]  = 0;

    if (mux_button0.read(9 - i) > 10) {
      BUTTON0_VALUES[i] = 1;
    } else {
      BUTTON0_VALUES[i] = 0;
    }

    if (mux_button1.read(9 - i) > 10) {
      BUTTON1_VALUES[i] = 1;
    } else {
      BUTTON1_VALUES[i] = 0;
    }
  }
}
