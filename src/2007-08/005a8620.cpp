// from server: 56% by colin
struct VHumanoid {
    char pad0[0x128];
    float field128;
    float field12c;
    char pad130[0x34];
    unsigned char field164;
    char pad165[0x37];
    void* field19c;
    char pad1a0[0x1c];
    void* fieldbc;
    char padc0[4];
    char field4;

    void sub_5a8620(int arg);
};

extern "C" void* __cdecl sub_62fef6(unsigned int size);
extern "C" void* __cdecl sub_5a4700();
extern "C" void* __cdecl sub_602cd0(void* a, void* b, float c);
extern "C" void __cdecl sub_487f40(void* a, void* b);
extern "C" void* __cdecl sub_570270(void* a, void* b);
extern "C" void __cdecl sub_4b0360(void* a, void* b);

void VHumanoid::sub_5a8620(int arg)
{
    float a = field128;
    float b = field12c;
    float c = 0.0f;
    float m;
    if (c < a) {
        if (c < b) {
            m = c;
        } else {
            m = b;
        }
    } else {
        if (a < b) {
            m = a;
        } else {
            m = b;
        }
    }
    field128 = m;
    if (m == 0.0f) {
        if (!(field164 & 2)) {
            field164 |= 2;
            void* p = sub_62fef6(0x10);
            void* r;
            if (p) {
                float* f = (float*)sub_5a4700();
                r = sub_602cd0(p, this, *f);
            } else {
                r = 0;
            }
            if (r != field19c) {
                void* old = field19c;
                if (old && old != r) {
                    void** vt = *(void***)old;
                    void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
                    fn(old, 1);
                }
                field19c = r;
            }
            if (fieldbc) {
                sub_487f40(fieldbc, (void*)0x5a56c0);
            }
            void* q = sub_570270((void*)0x8c57c4, &field4);
            if (q) {
                sub_4b0360((char*)q + 0x10, (char*)&arg + 3);
            }
        }
    }
}
