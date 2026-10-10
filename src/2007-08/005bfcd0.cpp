// from server: 58% by colin
struct LuaArguments {
    int field0;
    int field4;
    int construct(int a);
};

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern "C" int __cdecl sub_630b9e(int, int);
extern "C" int __stdcall sub_77e710(int);
extern "C" int __cdecl sub_5bfa80(int, int, int);

extern int dword_8ABD50;
extern int dword_887174;
extern int dword_786E04;
extern int dword_841E0C;

int LuaArguments::construct(int a)
{
    int local = 0;
    int result = sub_630d36(field0, 0, dword_887174, dword_8ABD50, 0);
    if (result == 0) {
        sub_77e710((int)&local);
        sub_630b9e((int)&local, dword_841E0C);
    }
    sub_5bfa80(result, local, field4);
    return local;
}
