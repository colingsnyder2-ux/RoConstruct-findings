// from server: 93% by colin
struct DxUserInput {
    static void getCursorPos(float* out, int* state);
};

void DxUserInput::getCursorPos(float* out, int* state)
{
    out[0] = 0.0f;
    float v = (float)state[1];
    if (state[0] == 0)
        out[0] = v;
    else
        out[1] = v;
}
