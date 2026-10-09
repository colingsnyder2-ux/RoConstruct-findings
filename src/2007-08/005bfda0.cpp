// from server: 49% by colin
// roc 2007-08 005bfda0  unit: RBX::Lua::LuaArguments  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bfda0
//
// 005bfda0  83ec0c               sub esp, 0xc
// 005bfda3  56                   push esi
// 005bfda4  6a00                 push 0
// 005bfda6  6830bc8a00           push 0x8abc30
// 005bfdab  8bf1                 mov esi, ecx
// 005bfdad  8b06                 mov eax, dword ptr [esi]
// 005bfdaf  6874718800           push 0x887174
// 005bfdb4  6a00                 push 0
// 005bfdb6  50                   push eax
// 005bfdb7  e87a0f0700           call 0x630d36
// 005bfdbc  83c414               add esp, 0x14
// 005bfdbf  85c0                 test eax, eax
// 005bfdc1  751e                 jne 0x5bfde1
// 005bfdc3  68046e7800           push 0x786e04
// 005bfdc8  8d4c2408             lea ecx, [esp + 8]
// 005bfdcc  ff1510e77700         call dword ptr [0x77e710]
// 005bfdd2  680c1e8400           push 0x841e0c
// 005bfdd7  8d442408             lea eax, [esp + 8]
// 005bfddb  50                   push eax
// 005bfddc  e8bd0d0700           call 0x630b9e
// 005bfde1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bfde5  8b4018               mov eax, dword ptr [eax + 0x18]
// 005bfde8  8b10                 mov edx, dword ptr [eax]
// 005bfdea  8b5208               mov edx, dword ptr [edx + 8]
// 005bfded  51                   push ecx
// 005bfdee  8b4e04               mov ecx, dword ptr [esi + 4]
// 005bfdf1  51                   push ecx
// 005bfdf2  8bc8                 mov ecx, eax
// 005bfdf4  ffd2                 call edx
// 005bfdf6  5e                   pop esi
// 005bfdf7  83c40c               add esp, 0xc
// 005bfdfa  c20400               ret 4

struct LuaArguments {
    void* field_0;
    void* field_4;
    void pushValue(int);
};

extern "C" void* __cdecl sub_630d36(void*, int, const char*, int, const char*);
extern "C" void __cdecl sub_630b9e(void*, void*);
extern "C" void* __stdcall sub_77e710(const char*);

void LuaArguments::pushValue(int value)
{
    void* p = sub_630d36(field_0, 0, (const char*)0x887174, 0, (const char*)0x8abc30);
    if (p == 0) {
        char buf[8];
        sub_77e710(buf);
        sub_630b9e((void*)0x841e0c, buf);
    }
    void* obj = *(void**)((char*)p + 0x18);
    void** vtbl = *(void***)obj;
    void (*fn)(void*, void*, int) = (void (*)(void*, void*, int))vtbl[2];
    fn(obj, field_4, value);
}
