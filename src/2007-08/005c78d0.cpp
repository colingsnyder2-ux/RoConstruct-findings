// from server: 61% by colin
extern "C" int __cdecl sub_5BD770(int, int);
extern "C" int __cdecl sub_5BD980(int, int, int);
extern "C" int __cdecl sub_5BE5B0(int, int);
extern "C" int __cdecl sub_5BDE00(int, int, int);
extern "C" int __cdecl sub_5BE160(int, int);
extern "C" int __cdecl sub_5C7380(int, int);
extern "C" int __cdecl sub_5BF240(int, int, int);
extern "C" int __cdecl sub_5BE8E0(int, int);
extern "C" int __cdecl sub_5BD740(int, int);
extern "C" int __cdecl sub_5BE0F0(int, int, int);
extern "C" int __cdecl sub_5BDEA0(int, int, int);
extern "C" void* __cdecl fopen(const char*, const char*);

struct lua_exception {
    int func(int);
};

int lua_exception::func(int a) {
    int ebp = a;
    int esi = (int)this;
    if (sub_5BD770(esi, 1) <= 0) {
        sub_5BDEA0(esi, -10001, ebp);
        return 1;
    }
    int ebx = sub_5BD980(esi, 1, 0);
    if (ebx != 0) {
        int* edi = (int*)sub_5BE5B0(esi, 4);
        *edi = 0;
        sub_5BDE00(esi, -10000, (int)"r");
        sub_5BE160(esi, -2);
        int r = (int)fopen((const char*)ebx, (const char*)ebp);
        *edi = r;
        if (r != 0) {
            sub_5BE0F0(esi, -10001, ebp);
            return 1;
        }
        sub_5C7380(1, ebx);
    } else {
        int* p = (int*)sub_5BF240(esi, 1, (int)"r");
        if (*p == 0) {
            sub_5BE8E0(esi, (int)"attempt to use a closed file");
        }
        sub_5BD740(esi, 1);
    }
    sub_5BE0F0(esi, -10001, ebp);
    sub_5BDEA0(esi, -10001, ebp);
    return 1;
}
