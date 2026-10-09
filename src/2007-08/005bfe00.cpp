// from server: 48% by colin
// roc 2007-08 005bfe00  unit: RBX::Lua::LuaArguments  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bfe00
//
// 005bfe00  83ec0c               sub esp, 0xc
// 005bfe03  56                   push esi
// 005bfe04  6a00                 push 0
// 005bfe06  6890bc8a00           push 0x8abc90
// 005bfe0b  8bf1                 mov esi, ecx
// 005bfe0d  8b06                 mov eax, dword ptr [esi]
// 005bfe0f  6874718800           push 0x887174
// 005bfe14  6a00                 push 0
// 005bfe16  50                   push eax
// 005bfe17  e81a0f0700           call 0x630d36
// 005bfe1c  83c414               add esp, 0x14
// 005bfe1f  85c0                 test eax, eax
// 005bfe21  751e                 jne 0x5bfe41
// 005bfe23  68046e7800           push 0x786e04
// 005bfe28  8d4c2408             lea ecx, [esp + 8]
// 005bfe2c  ff1510e77700         call dword ptr [0x77e710]
// 005bfe32  680c1e8400           push 0x841e0c
// 005bfe37  8d442408             lea eax, [esp + 8]
// 005bfe3b  50                   push eax
// 005bfe3c  e85d0d0700           call 0x630b9e
// 005bfe41  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bfe45  8b4018               mov eax, dword ptr [eax + 0x18]
// 005bfe48  8b10                 mov edx, dword ptr [eax]
// 005bfe4a  8b5208               mov edx, dword ptr [edx + 8]
// 005bfe4d  51                   push ecx
// 005bfe4e  8b4e04               mov ecx, dword ptr [esi + 4]
// 005bfe51  51                   push ecx
// 005bfe52  8bc8                 mov ecx, eax
// 005bfe54  ffd2                 call edx
// 005bfe56  5e                   pop esi
// 005bfe57  83c40c               add esp, 0xc
// 005bfe5a  c20400               ret 4

struct LuaArguments {
    void pushArguments(int);
};

extern "C" int __cdecl func_00630d36(int, int, int, int, int);
extern "C" int __cdecl func_00630b9e(int, int);
extern "C" void __stdcall func_0077e710(int);

void LuaArguments::pushArguments(int a)
{
    int local;
    int result = func_00630d36(*(int*)this, 0, 0x887174, 0x8abc90, 0);
    if (result == 0) {
        func_0077e710(0x786e04);
        func_00630b9e(0x841e0c, (int)&local);
    }
    int* p = (int*)result;
    int* q = (int*)p[6];
    int (*fn)(void*, int, int) = (int (*)(void*, int, int))q[2];
    fn(q, *(int*)((char*)this + 4), a);
}
