// from server: 43% by colin
extern "C" int __cdecl sub_51E8E0(int, const char*);
extern "C" int __cdecl sub_51E990(int, const char*);
extern "C" int __cdecl sub_521750(int, int);
extern "C" int __cdecl sub_5206A0(int, void*, int);
extern "C" int __cdecl sub_520650(void*);
extern "C" int __cdecl sub_5144C0(int, int, int, int, int);
extern "C" int __cdecl sub_630A1E(int, int);

struct S {
    int f(int a, int b, int c);
};

int S::f(int a, int b, int c)
{
    char buf[16];
    int flags = *(int*)(a + 0x68);
    if ((flags & 1) == 0) {
        sub_51E8E0(a, (const char*)0x7a4024);
        if (c == 9) {
            sub_5206A0(a, buf, 9);
            if (sub_521750(a, 0) == 0) {
                int v1 = sub_520650(buf);
                int v2 = sub_520650(buf);
                sub_5144C0(a, b, v2, v1, *(unsigned char*)buf);
            }
        } else {
            sub_51E990(a, (const char*)0x7a4008);
            sub_521750(a, c);
        }
    } else if ((flags & 4) != 0) {
        sub_51E990(a, (const char*)0x7a3ff0);
        sub_521750(a, c);
    } else if (b != 0 && (*(unsigned char*)(b + 8) & 0x80) != 0) {
        sub_51E990(a, (const char*)0x7a3fd8);
        sub_521750(a, c);
    } else {
        if (c == 9) {
            sub_5206A0(a, buf, 9);
            if (sub_521750(a, 0) == 0) {
                int v1 = sub_520650(buf);
                int v2 = sub_520650(buf);
                sub_5144C0(a, b, v2, v1, *(unsigned char*)buf);
            }
        } else {
            sub_51E990(a, (const char*)0x7a4008);
            sub_521750(a, c);
        }
    }
    return sub_630A1E(*(int*)0x8b5188, 0);
}
