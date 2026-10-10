// from server: 55% by colin
struct SleepStage {
    char pad[0x60];
    float* data;
    float compute();
};

float SleepStage::compute() {
    float* p = data;
    float a = p[2];
    p += 1;
    if (a > p[0]) {
        if (p[2] > p[1]) {
            return p[2] * p[1];
        }
    } else {
        if (p[2] > p[0]) {
            return p[2] * p[0];
        }
    }
    return p[0] * p[1];
}
