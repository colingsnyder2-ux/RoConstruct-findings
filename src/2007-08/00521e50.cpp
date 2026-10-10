// from server: 64% by colin
extern "C" int __cdecl __iob_func();
extern "C" int __cdecl fprintf(int, const char*, ...);

struct Ctx {
    char pad0[0x68];
    unsigned int flags;
};

struct Chunk {
    char pad0[8];
    unsigned int flags;
};

extern "C" void __cdecl sub_51e8e0(Ctx*, const char*);
extern "C" void __cdecl sub_51e990(Ctx*, const char*);
extern "C" void __cdecl sub_521750(Ctx*, int);
extern "C" void __cdecl sub_5206a0(Ctx*, void*, int);
extern "C" int __cdecl sub_520650(void*);
extern "C" void __cdecl sub_513990(Ctx*, int, ...);
extern "C" void __cdecl sub_513cd0(Ctx*, Chunk*, ...);

extern "C" void __cdecl sub_521e50(Ctx* ctx, Chunk* chunk, int mode)
{
    int v1, v2, v3, v4, v5, v6, v7, v8;
    int a, b, c, d, e, f, g, h;
    int r1, r2;
    float f1, f2, f3, f4, f5, f6, f7, f8;

    if (!(ctx->flags & 1)) {
        sub_51e8e0(ctx, (const char*)0x7a3b78);
    } else if (ctx->flags & 4) {
        sub_51e990(ctx, (const char*)0x7a3b60);
        sub_521750(ctx, mode);
        return;
    } else if (ctx->flags & 2) {
        sub_51e990(ctx, (const char*)0x7a3b44);
    }

    if (chunk != 0 && (chunk->flags & 4) && !(chunk->flags & 0x800)) {
        sub_51e990(ctx, (const char*)0x7a3b2c);
        sub_521750(ctx, mode);
        return;
    }

    if (mode != 0x20) {
        sub_51e990(ctx, (const char*)0x7a3b10);
        sub_521750(ctx, mode);
        return;
    }

    sub_5206a0(ctx, &v1, 4);
    r1 = sub_520650(&v1);
    sub_5206a0(ctx, &v2, 4);
    r2 = sub_520650(&v2);
    if ((unsigned)r1 > 0x13880 || (unsigned)r2 > 0x13880 || (unsigned)(r1 + r2) > 0x186a0) {
        sub_51e990(ctx, (const char*)0x7a3a38);
        sub_521750(ctx, 0x18);
        return;
    }
    a = r1; b = r2;

    sub_5206a0(ctx, &v3, 4);
    r1 = sub_520650(&v3);
    sub_5206a0(ctx, &v4, 4);
    r2 = sub_520650(&v4);
    if ((unsigned)r1 > 0x13880 || (unsigned)r2 > 0x13880 || (unsigned)(r1 + r2) > 0x186a0) {
        sub_51e990(ctx, (const char*)0x7a3a54);
        sub_521750(ctx, 0x10);
        return;
    }
    c = r1; d = r2;

    sub_5206a0(ctx, &v5, 4);
    r1 = sub_520650(&v5);
    sub_5206a0(ctx, &v6, 4);
    r2 = sub_520650(&v6);
    if ((unsigned)r1 > 0x13880 || (unsigned)r2 > 0x13880 || (unsigned)(r1 + r2) > 0x186a0) {
        sub_51e990(ctx, (const char*)0x7a3a6c);
        sub_521750(ctx, 8);
        return;
    }
    e = r1; f = r2;

    sub_5206a0(ctx, &v7, 4);
    r1 = sub_520650(&v7);
    sub_5206a0(ctx, &v8, 4);
    r2 = sub_520650(&v8);
    if ((unsigned)r1 > 0x13880 || (unsigned)r2 > 0x13880 || (unsigned)(r1 + r2) > 0x186a0) {
        sub_51e990(ctx, (const char*)0x7a3a88);
        sub_521750(ctx, 0);
        return;
    }
    g = r1; h = r2;

    f1 = (float)a / 100000.0f;
    f2 = (float)b / 100000.0f;
    f3 = (float)c / 100000.0f;
    f4 = (float)d / 100000.0f;
    f5 = (float)e / 100000.0f;
    f6 = (float)f / 100000.0f;
    f7 = (float)g / 100000.0f;
    f8 = 100000.0f / (float)h;

    if (chunk != 0 && (chunk->flags & 0x800)) {
        if (a + 0xffff89c2 > 0x7d0 ||
            b + 0xffff8364 > 0x7d0 ||
            c + 0xffff09e8 > 0x7d0 ||
            d + 0xffff8300 > 0x7d0 ||
            e + 0xffff8eb8 > 0x7d0 ||
            f + 0xffff1988 > 0x7d0 ||
            g < 0x36b0 || g > 0x3e80 ||
            h < 0x1388 || h > 0x1b58) {
            sub_51e990(ctx, (const char*)0x7a3ad8);
            fprintf(__iob_func(), (const char*)0x7a3abc, (double)f2, (double)f1, (double)f4, (double)f3);
            fprintf(__iob_func(), (const char*)0x7a3aa0, (double)f6, (double)f5, (double)f8, (double)f7);
        }
        sub_521750(ctx, 0);
        return;
    }

    sub_513990(ctx, 0, (double)f1, (double)f2, (double)f3, (double)f4, (double)f5, (double)f6, (double)f7, (double)f8);
    sub_513cd0(ctx, chunk, a, b, c, d, e, f, g, h);
    sub_521750(ctx, 0);
}
