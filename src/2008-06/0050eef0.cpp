// from server: 42% by atomic.potato
extern "C" void __cdecl sys_free(void*);
extern "C" void* __cdecl sys_alloc(unsigned int);
extern "C" unsigned char* __cdecl blend(unsigned char*, unsigned int, unsigned int, float);
extern "C" void __cdecl log_copy(void*, int, int, int, int, int, int, int, int);
extern "C" void __cdecl log_copy2(void*, int, int, int, int, int, int, int, int);

struct S {
    int f(int a, int b, int c, int d, int e, int g, int h, int i);
};

int S::f(int a, int b, int c, int d, int e, int g, int h, int i) {
    int si = (b > c) ? b : c;
    si = si + 1;
    volatile int magic = 0x81975c;
    sys_free(0);
    int sz = si * si * 4;
    int* buf = (int*)sys_alloc(sz);
    int* p = buf;
    int mode = h;
    if (mode == 0) {
        log_copy(p, 0, si - b, c, b, d, e, g, 0);
    } else if (mode == 0x5a || mode == -0x5a) {
        log_copy2(p, 0, si - c, b, c, d, e, g, mode);
        int t = b; b = c; c = t;
    } else if (mode == 0xb4) {
        int* src = (int*)g;
        if (src[4] == 4 && c > 0) {
            int dj = si - b;
            for (int j = 0; j < c; j++) {
                if (b > 0) {
                    int base = (dj + b - 1) * si - 0 + c;
                    int stride = -si * 2;
                    int* dp = p + base - 1;
                    int* sp = (int*)src[1];
                    int mul = src[2];
                    int off = src[3];
                    for (int x = 0; x < b; x++) {
                        int idx = (x * mul) + j + off + e;
                        *dp = sp[idx];
                        dp += stride;
                    }
                }
            }
        }
    }
    int diff = si - b;
    int v0 = p[0];
    int v1 = p[(si - 1) * si + c];
    if (diff > 0) {
        int* dp = p;
        for (int k = 0; k < diff; k++) {
            *dp = v0;
            dp += si;
        }
    }
    if (si - 1 >= c) {
        int* dp = p + (si - 1) * si + (si - 1);
        for (int k = si - 1; k >= c; k--) {
            *dp = v1;
            dp -= 1;
        }
    }
    blend((unsigned char*)p, v0, v1, *(float*)0x819bac);
    if (si > 1) {
        int* dp = p + 1;
        for (int row = 0; row < si - 1; row++) {
            for (int col = 0; col < si - 1; col++) {
                *dp = v0;
                dp += si;
            }
            dp += 4;
        }
    }
    if (si > 0) {
        int* dp = p;
        for (int row = 0; row < si; row++) {
            int* sp = p + row * si;
            for (int col = 1; col < si; col++) {
                int a2 = sp[0];
                int b2 = sp[col];
                float t1 = (float)col;
                float t2 = (float)(col - 1);
                float inv = 1.0f - t2 / t1;
                blend((unsigned char*)(dp + col), a2, b2, inv);
            }
            dp += si;
        }
    }
    int mode2 = i;
    if (mode2 == 0) {
        log_copy(p, 0, diff, c, b, d, e, g, 0);
    } else if (mode2 == 0x5a || mode2 == -0x5a) {
        log_copy2(p, 0, diff, b, c, d, e, g, -mode2);
    } else if (mode2 == 0xb4) {
        int* src = (int*)g;
        if (src[4] == 4 && c > 0 && b > 0) {
            for (int j = 0; j < c; j++) {
                int* sp = (int*)src[1];
                int mul = src[2];
                int off = src[3];
                int* dp = p + (diff * si + j);
                for (int x = 0; x < b; x++) {
                    int idx = (b - 1 - x) * mul + j + off + e;
                    dp[x * si] = sp[idx];
                }
            }
        }
    }
    sys_free(p);
    return 0;
}
