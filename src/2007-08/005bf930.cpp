// from server: 69% by colin
// roc 2007-08 005bf930  unit: RBX::Lua::LuaArguments  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf930
//
// 005bf930  83ec0c               sub esp, 0xc
// 005bf933  56                   push esi
// 005bf934  6a00                 push 0
// 005bf936  68187c8800           push 0x887c18
// 005bf93b  8bf1                 mov esi, ecx
// 005bf93d  8b06                 mov eax, dword ptr [esi]
// 005bf93f  6874718800           push 0x887174
// 005bf944  6a00                 push 0
// 005bf946  50                   push eax
// 005bf947  e8ea130700           call 0x630d36
// 005bf94c  83c414               add esp, 0x14
// 005bf94f  85c0                 test eax, eax
// 005bf951  751e                 jne 0x5bf971
// 005bf953  68046e7800           push 0x786e04
// 005bf958  8d4c2408             lea ecx, [esp + 8]
// 005bf95c  ff1510e77700         call dword ptr [0x77e710]
// 005bf962  680c1e8400           push 0x841e0c
// 005bf967  8d442408             lea eax, [esp + 8]
// 005bf96b  50                   push eax
// 005bf96c  e82d120700           call 0x630b9e
// 005bf971  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bf975  8b4018               mov eax, dword ptr [eax + 0x18]
// 005bf978  8b10                 mov edx, dword ptr [eax]
// 005bf97a  8b5208               mov edx, dword ptr [edx + 8]
// 005bf97d  51                   push ecx
// 005bf97e  8b4e04               mov ecx, dword ptr [esi + 4]
// 005bf981  51                   push ecx
// 005bf982  8bc8                 mov ecx, eax
// 005bf984  ffd2                 call edx
// 005bf986  5e                   pop esi
// 005bf987  83c40c               add esp, 0xc
// 005bf98a  c20400               ret 4

extern "C" int __cdecl func_00630d36(int, int, int, int, int);
extern "C" int __cdecl func_00630b9e(int, int);
extern "C" void* __stdcall func_0077e710(int);

struct LuaArguments {
    int field0;
    int field4;
    void method(int);
};

void LuaArguments::method(int arg)
{
    int local[3];
    int result;

    result = func_00630d36(field0, 0, 0x887174, 0x887c18, 0);
    if (result == 0) {
        func_0077e710(0x786e04);
        func_00630b9e(0x841e0c, (int)local);
    }
    int* obj = *(int**)(result + 0x18);
    int* vtbl = *(int**)obj;
    int fn = *(int*)((char*)vtbl + 8);
    ((void (__thiscall*)(int*, int, int))fn)(obj, field4, arg);
}
