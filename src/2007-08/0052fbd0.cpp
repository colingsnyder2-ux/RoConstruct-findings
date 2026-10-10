// from server: 61% by colin
struct SignalDesc {
    char pad[0x24];
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    void transform(const float* in, float* out);
};

void SignalDesc::transform(const float* in, float* out) {
    float dx = in[0] - f24;
    float dy = in[1] - f28;
    float dz = in[2] - f2c;

    out[0] = f40 * dy - f44 * dz + f30;
    out[1] = f44 * dx - f3c * dy + f34;
    out[2] = f3c * dz - f40 * dx + f38;
    out[3] = f3c;
    out[4] = f40;
    out[5] = f44;
}
