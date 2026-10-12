// from server: 40% by colin
struct Ball {
    char pad0[4];
    float x;
    float y;
    float z;
    float radius;
    bool method(float a, float b, float c);
};

extern "C" int __stdcall sub_7BB5A0(float*, float*, float*, float*, float*);

bool Ball::method(float a, float b, float c) {
    float dx = x - a;
    float dy = y - b;
    float dz = z - c;
    float dist2 = dx * dx + dy * dy + dz * dz;
    bool result = dist2 <= radius * radius;

    static bool init = false;
    static float gx, gy, gz;
    if (!init) {
        init = true;
        gx = 0.0f;
        gy = 0.0f;
        gz = 0.0f;
    }

    float out[3];
    out[0] = gx;
    out[1] = gy;
    out[2] = gz;

    float tmp[3];
    tmp[0] = 0.0f;
    tmp[1] = 0.0f;
    tmp[2] = 0.0f;

    static double dbl = 0.0;
    static bool dblInit = false;
    if (!dblInit) {
        dblInit = true;
        dbl = *(double*)0x8024ac;
    }

    sub_7BB5A0(&x, &a, tmp, out, (float*)0x97f6d8);

    if (out[0] == (float)dbl)
        return true;
    return false;
}
