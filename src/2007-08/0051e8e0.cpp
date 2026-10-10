// from server: 84% by colin
extern "C" void __cdecl sub_630D4C(void*, const void*, int);
extern "C" void __cdecl sub_51E630(void*, void*);

extern unsigned int __security_cookie;

struct Ctx {
    char pad[0x40];
    int (__cdecl *fn)(Ctx*, char*);
    char pad2[0x6c - 0x44];
    unsigned int flags;
};

void __cdecl sub_51E8E0(Ctx* ctx, char* s) {
    char buf[16];
    unsigned int cookie = __security_cookie ^ (unsigned int)&buf;
    unsigned int f = ctx->flags;
    if (f & 0xc0000) {
        if (*s == '#') {
            int i = 1;
            while (i < 0xf) {
                if (s[i] == ' ') break;
                if (s[i + 1] == ' ') { i++; break; }
                i += 2;
            }
            if (f & 0x80000) {
                int n = i - 1;
                if (n > 0) {
                    sub_630D4C(buf, s + 1, n);
                }
                buf[n] = 0;
                s = buf;
            } else {
                s += i;
            }
        } else if (f & 0x80000) {
            buf[0] = '0';
            buf[1] = 0;
            s = buf;
        }
    }
    if (ctx->fn) {
        ctx->fn(ctx, s);
    }
    sub_51E630(ctx, s);
}
