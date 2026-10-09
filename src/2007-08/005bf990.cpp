// from server: 64% by colin
// roc 2007-08 005bf990  unit: RBX::Lua::LuaArguments  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf990
//
// 005bf990  83ec0c               sub esp, 0xc
// 005bf993  56                   push esi
// 005bf994  6a00                 push 0
// 005bf996  68607c8800           push 0x887c60
// 005bf99b  8bf1                 mov esi, ecx
// 005bf99d  8b06                 mov eax, dword ptr [esi]
// 005bf99f  6874718800           push 0x887174
// 005bf9a4  6a00                 push 0
// 005bf9a6  50                   push eax
// 005bf9a7  e88a130700           call 0x630d36
// 005bf9ac  83c414               add esp, 0x14
// 005bf9af  85c0                 test eax, eax
// 005bf9b1  751e                 jne 0x5bf9d1
// 005bf9b3  68046e7800           push 0x786e04
// 005bf9b8  8d4c2408             lea ecx, [esp + 8]
// 005bf9bc  ff1510e77700         call dword ptr [0x77e710]
// 005bf9c2  680c1e8400           push 0x841e0c
// 005bf9c7  8d442408             lea eax, [esp + 8]
// 005bf9cb  50                   push eax
// 005bf9cc  e8cd110700           call 0x630b9e
// 005bf9d1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bf9d5  8b4018               mov eax, dword ptr [eax + 0x18]
// 005bf9d8  8b10                 mov edx, dword ptr [eax]
// 005bf9da  8b5208               mov edx, dword ptr [edx + 8]
// 005bf9dd  51                   push ecx
// 005bf9de  8b4e04               mov ecx, dword ptr [esi + 4]
// 005bf9e1  51                   push ecx
// 005bf9e2  8bc8                 mov ecx, eax
// 005bf9e4  ffd2                 call edx
// 005bf9e6  5e                   pop esi
// 005bf9e7  83c40c               add esp, 0xc
// 005bf9ea  c20400               ret 4

struct LuaArguments {
    int m_L;
    int m_offset;
    void f(int a1);
};

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern "C" void __cdecl sub_630b9e(int, int);
extern "C" void __stdcall sub_77e710(int);
extern "C" void __stdcall sub_77e710_bad_cast(int);

void LuaArguments::f(int a1)
{
    int v = sub_630d36(m_L, 0, 0x887174, 0x887c60, 0);
    if (v == 0) {
        sub_77e710(0x786e04);
        sub_630b9e(0x841e0c, (int)&v);
    }
    int* p = (int*)(v + 0x18);
    int* obj = (int*)*p;
    int* vtbl = (int*)*obj;
    int fn = vtbl[2];
    ((void (__thiscall*)(int*, int, int))fn)(obj, m_offset, a1);
}
