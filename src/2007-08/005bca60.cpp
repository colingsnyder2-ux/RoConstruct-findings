// from server: 65% by colin
struct EnumPropDescriptor {
    float f0;
    float f4;
    float f8;
    float fc;
    float f10;
    float f14;
    float* getValue(int index, float* out);
};

float* EnumPropDescriptor::getValue(int index, float* out) {
    float a = fc + f0;
    float b = f10 + f4;
    float c = f14 + f8;
    out[0] = a;
    out[1] = b;
    out[2] = c;
    int q = index / 3;
    int r = index - q * 3;
    if (index < 3) {
        out[r] = *(float*)((char*)this + r * 4 + 0xc);
    } else {
        out[r] = *(float*)((char*)this + r * 4);
    }
    return out;
}
