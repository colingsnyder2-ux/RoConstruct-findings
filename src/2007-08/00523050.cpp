// from server: 38% by colin
extern "C" int __cdecl sub_51E8E0(int, const char*);
extern "C" int __cdecl sub_51E990(int, const char*);
extern "C" int __cdecl sub_521750(int, int);
extern "C" int __cdecl sub_5206A0(int, void*, int);
extern "C" int __cdecl sub_520650(void*, int);
extern "C" int __cdecl sub_5142B0(int, int, int);
extern "C" void __cdecl sub_630A1E();

struct S_00523050 {
    int f(int a, int b, int c);
};

int S_00523050::f(int a, int b, int c)
{
    int local;
    int flags = *(int*)(a + 0x68);
    if ((flags & 1) == 0) {
        sub_51E8E0(a, (const char*)0x7a408c);
        if (b == 9) {
            sub_5206A0(a, &local, 9);
            if (sub_521750(a, 0) == 0) {
                int v1 = sub_520650(&local, *(unsigned char*)&local);
                int v2 = sub_520650(&local, v1);
                sub_5142B0(a, c, v2);
            }
        } else {
            sub_51E990(a, (const char*)0x7a4070);
            sub_521750(a, b);
        }
    } else if ((flags & 4) != 0) {
        sub_51E990(a, (const char*)0x7a4058);
        sub_521750(a, c);
    } else if (c != 0 && (*(int*)(c + 8) & 0x100) != 0) {
        sub_51E990(a, (const char*)0x7a4040);
        sub_521750(a, c);
    } else {
        sub_51E8E0(a, (const char*)0x7a408c);
        if (b == 9) {
            sub_5206A0(a, &local, 9);
            if (sub_521750(a, 0) == 0) {
                int v1 = sub_520650(&local, *(unsigned char*)&local);
                int v2 = sub_520650(&local, v1);
                sub_5142B0(a, c, v2);
            }
        } else {
            sub_51E990(a, (const char*)0x7a4070);
            sub_521750(a, b);
        }
    }
    return 0;
}
