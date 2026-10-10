// from server: 54% by colin
// roc 2007-08 006693b0  unit: CXTPColorManager  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006693b0

extern "C" float __stdcall sub_630D60(float);
extern "C" float __stdcall sub_6686A0(float);
extern "C" float __stdcall sub_6692F0(int, int, float, float);
extern "C" float __stdcall sub_669390(int, int, float);

struct CXTPColorManager {
    int SetColor(int a, int b, float c, float d);
};

int CXTPColorManager::SetColor(int a, int b, float c, float d) {
    if (b != 0) {
        float t = sub_630D60(d);
        sub_669390(a, 0, t);
        float u = sub_630D60(d);
        sub_6686A0(u);
        d = u;
    }

    float x = d;
    float y = 1.0f;
    int n = 2;
    do {
        if (n & 1) {
            y = y * x;
        }
        n >>= 1;
        if (n != 0) {
            x = x * x;
        }
    } while (n != 0);

    sub_6692F0(a, b, c, y);

    float r = y;
    if (r == c) {
        return 1;
    }
    return 0;
}
