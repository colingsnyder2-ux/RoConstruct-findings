// from server: 44% by colin
extern "C" int __cdecl sprintf(char* buffer, const char* format, ...);
extern "C" void __cdecl __security_check_cookie(unsigned int cookie);

struct Ctx {
    char pad0[0x74];
    int field_74;
    int field_78;
    int field_7c;
    int field_80;
    int field_84;
    char pad88[0x8c - 0x88];
    int field_8c;
    char pad90[0xac - 0x90];
    int field_ac;
    int field_b0;
    char padb4[0x11c - 0xb4];
    char field_11c[1];
};

extern "C" int __cdecl sub_51ED00(Ctx* ctx, int size);
extern "C" void __cdecl sub_51ECD0(Ctx* ctx, int arg);
extern "C" void __cdecl sub_51E8E0(Ctx* ctx, const char* msg);
extern "C" void __cdecl sub_51E990(Ctx* ctx, const char* msg);
extern "C" int __cdecl sub_72D3D0(int* state, int flag);
extern "C" void __cdecl sub_72D180(int* state);
extern "C" void* __cdecl memcpy(void* dst, const void* src, unsigned int size);

extern "C" int __cdecl sub_520740(Ctx* ctx, int a, int b, int c, int d, int* out)
{
    int result;
    int state;
    int avail;
    int total;
    int consumed;
    int produced;
    int chunk;
    int remaining;
    int old_avail;
    int old_total;
    int err;
    char buffer[32];

    if (c != 0) {
        sprintf(buffer, "Buffer error in compressed datastream in %s chunk", ctx->field_11c);
        sub_51E990(ctx, buffer);
        *out = b;
        return 0;
    }

    ctx->field_78 = d - b;
    ctx->field_74 = b + a;
    ctx->field_80 = ctx->field_ac;
    ctx->field_84 = ctx->field_b0;

    result = 0;
    produced = 0;
    consumed = 0;
    remaining = d - b;

    if (remaining == 0) {
        goto done;
    }

    for (;;) {
        state = sub_72D3D0(&ctx->field_74, 1);
        if (state != 0 && state != 1) {
            goto error_state;
        }

        if (ctx->field_84 != 0 && state != 1) {
            goto check_remaining;
        }

        if (produced == 0) {
            avail = ctx->field_b0 + (consumed - ctx->field_84);
            produced = sub_51ED00(ctx, avail + 1);
            if (produced == 0) {
                sub_51ECD0(ctx, a);
                sub_51E8E0(ctx, "Not enough memory for text.");
            }
            memcpy((char*)produced + consumed, (char*)ctx->field_ac, avail - consumed);
            memcpy((char*)produced, (char*)a, consumed);
        } else {
            old_avail = ctx->field_b0;
            old_total = ctx->field_84;
            chunk = old_avail + (consumed - old_total) + 1;
            produced = sub_51ED00(ctx, chunk);
            if (produced == 0) {
                sub_51ECD0(ctx, a);
                sub_51ECD0(ctx, a);
                sub_51E8E0(ctx, "Not enough memory for text.");
            }
            memcpy((char*)produced, (char*)a, consumed);
            sub_51ECD0(ctx, a);
            memcpy((char*)produced + consumed, (char*)ctx->field_ac, ctx->field_b0 - ctx->field_84);
            consumed += ctx->field_b0 - ctx->field_84;
        }

        ((char*)produced)[consumed] = 0;

        if (state == 1) {
            goto finish;
        }

        ctx->field_80 = ctx->field_ac;
        ctx->field_84 = ctx->field_b0;

    check_remaining:
        if (ctx->field_78 != 0) {
            continue;
        }
        goto done;

    error_state:
        if (ctx->field_8c != 0) {
            sub_51E990(ctx, (const char*)ctx->field_8c);
        } else {
            sub_51E990(ctx, (const char*)0x898748);
        }
        sub_72D180(&ctx->field_74);
        ctx->field_78 = 0;

        if (produced == 0) {
            chunk = b + 0x20;
            produced = sub_51ED00(ctx, chunk);
            if (produced == 0) {
                sub_51ECD0(ctx, a);
                sub_51E8E0(ctx, "Error decoding compressed text");
            }
            memcpy((char*)produced, (char*)a, b);
        }

        ((char*)produced)[chunk - 1] = 0;
        remaining = (a - produced) + d - 1;
        if (remaining >= 0x1f) {
            remaining = 0x1f;
        }
        memcpy((char*)produced + b, (const char*)0x898748, remaining + 1);

        err = state;
        if (err == 1) {
            goto finish;
        }
        if (err == -5) {
            sprintf(buffer, "Incomplete compressed datastream in %s chunk", ctx->field_11c);
        } else if (err == -3) {
            sprintf(buffer, "Data error in compressed datastream in %s chunk", ctx->field_11c);
        } else {
            sprintf(buffer, "Buffer error in compressed datastream in %s chunk", ctx->field_11c);
        }
        sub_51E990(ctx, buffer);

        if (produced == 0) {
            produced = sub_51ED00(ctx, b + 1);
            if (produced == 0) {
                sub_51ECD0(ctx, a);
                sub_51E8E0(ctx, "Not enough memory for text.");
            }
            memcpy((char*)produced, (char*)a, b);
        }
        ((char*)produced)[b] = 0;
        goto finish;
    }

done:
    sub_72D180(&ctx->field_74);
    ctx->field_78 = 0;
    sub_51ECD0(ctx, a);
    *out = consumed;
    return produced;

finish:
    sub_72D180(&ctx->field_74);
    ctx->field_78 = 0;
    sub_51ECD0(ctx, a);
    *out = consumed;
    return produced;
}
