// from server: 82% by colin
struct Ctx {
    char pad0[0x18];
    int field18;
    int field1c;
    int (*field20)(int, int, int);
    int (*field24)(int, int);
    int field28;
};

extern "C" int __cdecl sub_72d180(Ctx* ctx);

int __stdcall sub_72d1f0(Ctx* ctx, char* str, int a, int b)
{
    if (str == 0)
        return 0xfffffffa;
    if (str[0] != 0x31)
        return 0xfffffffa;
    if (a != 0x38)
        return 0xfffffffa;

    if (ctx == 0)
        return 0xfffffffe;

    ctx->field18 = 0;
    if (ctx->field20 == 0) {
        ctx->field20 = (int (*)(int, int, int))0x7223e0;
        ctx->field28 = 0;
    }
    if (ctx->field24 == 0) {
        ctx->field24 = (int (*)(int, int))0x5244d0;
    }

    int r = ctx->field20(ctx->field28, 1, 0x2530);
    if (r == 0)
        return 0xfffffffc;

    ctx->field1c = r;

    if (b < 0) {
        *(int*)(r + 8) = 0;
        b = -b;
    } else {
        int t = b >> 4;
        t = t + 1;
        *(int*)(r + 8) = t;
        if (b < 0x30) {
            b = b & 0xf;
        }
    }

    int d = b - 8;
    if ((unsigned)d <= 7) {
        *(int*)(r + 0x24) = b;
        *(int*)(r + 0x34) = 0;
        sub_72d180(ctx);
        return 0;
    }

    ctx->field24(ctx->field28, r);
    ctx->field1c = 0;
    return 0xfffffffe;
}
