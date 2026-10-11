// from server: 57% by atomic.potato
struct TwoDManager {
    char pad0[0x134];
    int field134;
    char pad138[0x200 - 0x138];
    int field200;
    int field204;
    char pad208[0x400 - 0x208];
    int table[0x80];

    void compute(float* out, int a, double b, int c);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern double dbl_82d038;
extern double dbl_84e800;

void TwoDManager::compute(float* out, int a, double b, int c) {
    double v = b * dbl_82d038;
    int count = *(int*)((char*)a + 0x14);
    double scale = (double)field200 * v / (double)field204;
    double acc = 0.0;
    if (c != 0) {
        int t = field134 * count;
        double r = (double)t * v * dbl_84e800;
        out[0] = (float)r;
        out[1] = (float)scale;
        return;
    }
    int i = 0;
    if (count > 0) {
        do {
            if (i > *(int*)((char*)a + 0x14)) {
                _invalid_parameter_noinfo();
            }
            char* p;
            if (*(int*)((char*)a + 0x18) >= 0x10)
                p = *(char**)((char*)a + 4);
            else
                p = (char*)a + 4;
            int idx = (int)(signed char)p[i] & 0x7f;
            i++;
            acc += (double)table[idx] * scale;
        } while (i < count);
    }
    out[0] = (float)scale;
    out[1] = (float)acc;
}
