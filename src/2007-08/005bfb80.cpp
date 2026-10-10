// from server: 72% by colin
struct LuaArguments {
    int field0;
    int field4;
    int construct(int a);
};

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern "C" int __cdecl sub_630b9e(int, int);
extern "C" void __stdcall sub_77e710(int);
extern "C" int __cdecl sub_5bfa80(int, int, int);

extern int dword_8abc30;
extern int dword_887174;
extern int dword_786e04;
extern int dword_841e0c;

int LuaArguments::construct(int a)
{
    int local = 0;
    int result = sub_630d36(field0, 0, dword_887174, (int)&dword_8abc30, 0);
    if (result == 0) {
        sub_77e710((int)&dword_786e04);
        sub_630b9e((int)&local, (int)&dword_841e0c);
    }
    return sub_5bfa80(result, local, field4);
}
