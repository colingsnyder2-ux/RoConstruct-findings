// from server: 26% by colin
struct Ctx {
    char pad0[0x1c];
    int field1c;
    char pad20[0x14];
    int field34;
};

struct Sink {
    int f0;
    int f4;
    int f8;
    int fc;
    char pad10[0x48];
    int f58[7];
};

extern "C" int __stdcall sub_738376();
extern "C" int __stdcall sub_6a3040(int);
extern "C" int __stdcall sub_6a3020();
extern "C" int __stdcall sub_6a3070();
extern "C" int __stdcall sub_6a2b90();
extern "C" int __stdcall sub_62ff3e(int);
extern "C" int __stdcall sub_62ff38(int, int);
extern "C" int __stdcall CallWindowProcA(int, int, int, int, int);

int __stdcall sub_6a3320(int a, int b, int c, int d)
{
    Sink* sink;
    Ctx* ctx;
    int tmp[7];
    int v1c;
    int v14;
    int v54;
    int v4c;
    int i;
    int result;

    sink = (Sink*)sub_738376();
    sink = (Sink*)((char*)sink + 0x58);

    for (i = 0; i < 7; i++)
        tmp[i] = sink->f58[i];

    sink->f0 = a;
    sink->f4 = b;
    sink->f8 = c;
    sink->fc = d;

    ctx = (Ctx*)sub_6a3040(a);
    ctx = (Ctx*)sub_6a3020();

    if (ctx == 0)
        return 0;

    sub_62ff3e(ctx->field1c);

    v4c = 0;
    v14 = 0;
    v54 = ctx->field34;

    if (b == 0x82) {
        ctx = (Ctx*)sub_6a3040(a);
        sub_6a3070();
    } else {
        if (sub_6a2b90() == 0) {
            result = CallWindowProcA(v54, a, b, c, d);
            v14 = result;
        }
    }

    for (i = 0; i < 7; i++)
        sink->f58[i] = tmp[i];

    v4c = -1;

    if (v1c != 0) {
        *(int*)(v1c + 4) = v14;
    }

    if (tmp[0] != 0) {
        sub_62ff38(tmp[0], 0);
    }

    return v14;
}
