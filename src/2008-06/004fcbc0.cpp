// from server: 45% by colin
// roc 2008-06 004fcbc0  unit: RBX::ViewNew::TorsoBuilder  size: 711 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fcbc0

extern "C" __declspec(dllimport) double __stdcall ceil(double);

struct V2 { float x, y; };
struct V3 { float x, y, z; };

struct TorsoBuilder {
    char pad0[0x10];
    unsigned int flags;
    void method(int a, int b, int c);
};

extern "C" void __cdecl sub_5ec220(void*, void*);
extern "C" void __cdecl sub_5185d0(void*, void*);
extern "C" void __cdecl sub_4f35d0(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_4fbac0(void*, void*);
extern "C" float __cdecl sub_4f1ff0(int);

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

void TorsoBuilder::method(int a, int b, int c)
{
    float v44, v48, v4c;
    float v18, v1c, v28, v2c;
    float v30, v38;
    int ebx;
    int esi;
    int edi;
    int ebp;
    unsigned short w10, w12;
    int i20;
    int i18;
    V2 tmp;

    ebp = (this->flags >> 0xf) & 7;

    sub_5ec220(&v44, &this->pad0[4]);

    v44 = (float)(v44 < 0 ? -v44 : v44);
    v48 = (float)(v48 < 0 ? -v48 : v48);
    v4c = (float)(v4c < 0 ? -v4c : v4c);

    {
        float fa = v44;
        float fb = v48;
        float fc = v4c;
        v44 = fa;
        v48 = fb;
        v4c = fc;
    }

    if (c != 0) {
        esi = (v44 == v48) ? 0 : 1;
    } else {
        esi = 0;
    }

    if (c == 0 && ebp != 0) {
        float f = (&v44)[esi];
        f = (float)(f * g_819bac);
        v2c = (float)ceil((double)f);
        ebx = (int)v2c;
    } else {
        ebx = 1;
    }

    w10 = 0;
    w12 = 0;
    {
        unsigned short t = *(unsigned short*)((char*)&v44 + 0x16 - esi*2);
        edi = (int)(short)t;
    }
    i20 = 1;
    {
        int q = edi / ebx;
        i18 = (int)(unsigned short)q;
    }
    {
        unsigned short cmpv = 1;
        unsigned short qv = (unsigned short)i18;
        unsigned short* p;
        if (cmpv < qv) p = (unsigned short*)&i18;
        else p = (unsigned short*)&i20;
        *(unsigned short*)((char*)&w10 + esi*2) = *p;
    }
    v2c = v4c;
    *(unsigned short*)((char*)&w12 - esi*2) = (unsigned short)edi;

    sub_5185d0(&v44, &tmp);
    v28 = -tmp.x;
    v2c = -tmp.y;

    sub_5185d0(&v44, &tmp);

    v18 = 0.0f;
    v1c = 0.0f;
    v28 = 0.0f;
    v2c = 0.0f;

    if (c == 0) {
        if (ebp == 0) {
            v28 = g_83a3e4;
            v2c = g_819bac;
            (&v18)[esi] = g_819bac;
            (&v1c)[-esi] = g_819bac;
        } else {
            (&v2c)[-esi] = 0.0f;
            v2c = sub_4f1ff0(ebp);
            (&v1c)[-esi] = (&v4c)[-esi] * 2.0f;
            (&v18)[esi] = g_819bac;
            if (esi == 1) {
                v18 = -v18;
            }
        }
    } else if (c == 1) {
        v28 = 0.0f;
        v2c = this->pad0[0x1c];
        v18 = this->pad0[0x18];
        v1c = -this->pad0[0x1c];
    } else if (c == 2) {
        v1c = 0.0f;
    }

    edi = 0;
    while (edi < ebx) {
        if (edi == ebx - 1) {
            v30 = (&v44)[esi];
            if (c == 0 && i20 != 0) {
                (&v18)[esi] = ((&v44)[esi] - (&v38)[esi]) * (&v18)[esi] * g_83a3e4;
            }
        } else {
            v30 = (&v38)[esi] + g_826e6c;
        }

        {
            float args[5];
            args[0] = v18;
            args[1] = v1c;
            args[2] = v28;
            args[3] = v2c;
            args[4] = v30;
            sub_4f35d0(&args[0], &args[1], &args[2], &args[3], &args[4]);
        }
        sub_4fbac0(this, &v30);
        (&v38)[esi] = v30;
        edi++;
    }
}
