// from server: 34% by colin
struct PBBBuilder {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    void build(float a, float b, float c, int d);
};

extern "C" void __cdecl sub_5EC1A0(int* a, int* b);
extern "C" void __cdecl sub_5185D0(float* a, float* b);
extern "C" float __cdecl sub_4F1FF0(int a);
extern "C" void __cdecl sub_4F35D0(float* a, float* b, float* c, float* d, int e, int f);
extern "C" void __cdecl sub_4F4E60(PBBBuilder* self, int a, int b);
extern "C" double __cdecl ceil(double x);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

void PBBBuilder::build(float a, float b, float c, int d)
{
    int ebp = this->field10 & 7;
    int local10 = (int)this;
    float f38, f3c, f40;
    sub_5EC1A0(&this->field4, (int*)&f38);

    float fa = a < 0 ? -a : a;
    float fb = b < 0 ? -b : b;
    float fc = c < 0 ? -c : c;

    float f44 = fa;
    float f48 = fb;
    float f4c = fc;

    bool al;
    if (d == 0) {
        al = (fa == fb);
    } else {
        al = false;
    }
    int esi = al ? 0 : 1;

    int ebx;
    if (d == 0 && ebp != 0) {
        float v = (&f44)[esi];
        ebx = (int)ceil((double)(v * g_819bac));
    } else {
        ebx = 1;
    }

    short local12 = 0;
    short local10w = 0;
    int ecx2 = esi + esi;
    short di = *(short*)((char*)&f38 + 0x26 - ecx2);
    int eax2 = (int)di;
    int div = eax2 / ebx;
    short local18 = (short)div;
    short local20 = 1;
    short* p = (local20 < local18) ? &local18 : &local20;
    short ax = *p;
    *(short*)((char*)&local10w + ecx2) = ax;
    float f20 = f4c;
    *(short*)((char*)&local12 - ecx2) = di;

    float f30, f34;
    sub_5185D0(&f38, &f30);
    f30 = -f30;
    f34 = -f34;
    float f28, f2c;
    sub_5185D0(&f38, &f28);

    float f18 = 0.0f;
    float f1c = 0.0f;
    float f28b = 0.0f;
    float f2cb = 0.0f;

    if (d == 0) {
        if (ebp == 0) {
            f28b = g_83a3e4;
            f2cb = g_819bac;
            (&f1c)[esi] = g_819bac;
            (&f18)[esi] = g_83a3e4;
        } else {
            (&f2c)[esi] = 0.0f;
            float r = sub_4F1FF0(ebp);
            (&f2c)[esi] = r;
            (&f20)[esi] = (&f4c)[esi] * 2.0f;
            (&f18)[esi] = g_819bac;
            if (esi == 1) {
                f18 = -f18;
            }
        }
    } else if (d == 1) {
        f28b = this->field0;
        f2cb = this->fieldC;
        f18 = this->field8;
        f1c = -this->fieldC;
    } else if (d == 2) {
        f28b = 0.0f;
        f2cb = 0.0f;
        f18 = 0.0f;
        f1c = 0.0f;
    }

    int edi = 0;
    if (ebx > 0) {
        int ebp2 = local10;
        do {
            if (edi == ebx - 1) {
                float v = (&f44)[esi];
                (&f30)[esi] = v;
                if (d == 0 && local10w != 0) {
                    float t = v - (&f38)[esi];
                    t = t * (&f18)[esi];
                    t = t * g_83a3e4;
                    (&f18)[esi] = t;
                }
            } else {
                (&f30)[esi] = (&f38)[esi] + g_826e6c;
            }

            float args[5];
            args[0] = f18;
            args[1] = f1c;
            args[2] = f28b;
            args[3] = f2cb;
            args[4] = f20;
            sub_4F35D0(args, &f30, &f28, &f20, esi, ebp2);
            sub_4F4E60(this, d, ebp2);

            (&f38)[esi] = (&f30)[esi];
            edi++;
        } while (edi < ebx);
    }
}
