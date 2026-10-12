// from server: 87% by king_originala
struct Block {
    char padding[16];
    float *limits;
    void clamp(float *value, short *side, int *count);
};

void Block::clamp(float *value, short *side, int *count)
{
    *count = 0;
    float *source = limits;

    if (value[0] > source[0]) {
        value[0] = source[0];
        ++*count;
        side[0] = 1;
    }
    double lower0 = -(double)source[0];
    if (value[0] < lower0) {
        value[0] = (float)lower0;
        ++*count;
        side[0] = -1;
    }

    if (value[1] > source[1]) {
        value[1] = source[1];
        ++*count;
        side[1] = 1;
    }
    double lower1 = -(double)source[1];
    if (value[1] < lower1) {
        value[1] = (float)lower1;
        ++*count;
        side[1] = -1;
    }

    if (value[2] > source[2]) {
        value[2] = source[2];
        ++*count;
        side[2] = 1;
    }
    double lower2 = -(double)source[2];
    if (value[2] < lower2) {
        value[2] = (float)lower2;
        ++*count;
        side[2] = -1;
    }
}
