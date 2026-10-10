// from server: 47% by colin
// roc 2007-08 00612780  unit: seg_00610000  size: 474 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00612780

extern "C" void __cdecl sub_005c7000(const char*, void*);
extern "C" void* __cdecl sub_00612260(void*, int);
extern "C" void __cdecl sub_006122c0(void*, int);
extern "C" void* __cdecl sub_00612440(void*, int);
extern "C" void* __cdecl sub_00612510(void*, void*);
extern "C" void* __cdecl sub_00612ad0(void*, int, void*);
extern "C" void* __cdecl sub_006139d0(int);
extern "C" void* __cdecl sub_006139f0(void*, int, int, int);

struct S {
    char pad0[4];
    char pad4[4];
    char pad8[4];
    void* field_c;
    void* field_10;
    char pad14[8];
    int field_1c;
    char field_6;
    char field_7;
    void f(int, int);
};

void S::f(int a, int b)
{
    int saved_7 = (unsigned char)field_7;
    int saved_1c = field_1c;
    void* saved_10 = field_10;
    int i;

    if (a > saved_1c) {
        sub_00612260(this, a);
    }

    sub_006122c0(this, b);

    if (a < saved_1c) {
        int newcount = a + 1;
        int offset = a << 4;
        int remaining = saved_1c - a;
        int cur = offset;
        int idx = newcount;
        field_1c = a;

        for (;;) {
            void* base = (char*)field_c + cur;
            if (*(int*)((char*)base + 8) != 0) {
                void* r = sub_00612440(this, idx);
                if (r == (void*)0x7c2fe8) {
                    double d = (double)idx;
                    int tmp = 3;
                    r = sub_00612ad0(this, b, &tmp);
                    *(double*)r = d;
                }
                *(int*)((char*)r + 0) = *(int*)((char*)base + 0);
                *(int*)((char*)r + 4) = *(int*)((char*)base + 4);
                *(int*)((char*)r + 8) = *(int*)((char*)base + 8);
            }
            cur += 16;
            idx += 1;
            remaining -= 1;
            if (remaining == 0) break;
        }

        if ((unsigned)newcount > 0xfffffff) {
            void* p = sub_006139d0(b);
            field_c = p;
        } else {
            void* p = sub_006139f0(field_c, saved_1c << 4, offset, b);
            field_c = p;
        }
    }

    int mask = (1 << saved_7) - 1;
    int count = 1 << saved_7;
    if (mask >= 0) {
        char* p = (char*)saved_10 + (mask << 5) + 16;
        int n = mask;
        for (;;) {
            if (*(int*)(p - 8) != 0) {
                void* r = sub_00612510(this, p);
                field_6 = 0;
                if (r == (void*)0x7c2fe8) {
                    int t = *(int*)(p + 8);
                    if (t == 0) {
                        sub_005c7000("table index is nil", (void*)b);
                    } else if (t == 3) {
                        double d = *(double*)p;
                        if (!(d == d)) {
                            sub_005c7000("table index is NaN", (void*)b);
                        }
                    }
                    r = sub_00612ad0(this, b, p);
                }
                *(int*)((char*)r + 0) = *(int*)(p - 16);
                *(int*)((char*)r + 4) = *(int*)(p - 12);
                *(int*)((char*)r + 8) = *(int*)(p - 8);
            }
            n -= 1;
            p -= 32;
            if (n < 0) break;
        }
    }

    if (saved_10 != (void*)0x7c32b8) {
        sub_006139f0(saved_10, count << 5, 0, b);
    }
}
