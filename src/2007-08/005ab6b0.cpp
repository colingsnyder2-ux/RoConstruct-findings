// from server: 59% by colin
struct World {
    float f0;
    float f1;
    float f2;
    float f3;
    float f4;
    float f5;
    float f6;
    float f7;
    float f8;
    int classify(const float* v) const;
};

int World::classify(const float* v) const {
    float a = f3 * v[1] + f6 * v[2] + f0 * v[0];
    float b = f4 * v[1] + f1 * v[0] + f7 * v[2];
    float c = f5 * v[1] + f2 * v[0] + f8 * v[2];

    float aa = a < 0.0f ? -a : a;
    float bb = b < 0.0f ? -b : b;
    float cc = c < 0.0f ? -c : c;

    if (aa >= bb) {
        if (aa >= cc) {
            if (a == 0.0f)
                return 0;
            return 3;
        }
        if (c == 0.0f)
            return 2;
        return 5;
    }
    if (bb >= cc) {
        if (b == 0.0f)
            return 1;
        return 4;
    }
    if (c == 0.0f)
        return 2;
    return 5;
}
