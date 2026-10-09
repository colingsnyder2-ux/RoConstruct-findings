// from server: 56% by colin
// roc 2007-08 005bfd40  unit: RBX::Lua::LuaArguments  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bfd40
//
// 005bfd40  83ec0c               sub esp, 0xc
// 005bfd43  56                   push esi
// 005bfd44  6a00                 push 0
// 005bfd46  6800bd8a00           push 0x8abd00
// 005bfd4b  8bf1                 mov esi, ecx
// 005bfd4d  8b06                 mov eax, dword ptr [esi]
// 005bfd4f  6874718800           push 0x887174
// 005bfd54  6a00                 push 0
// 005bfd56  50                   push eax
// 005bfd57  e8da0f0700           call 0x630d36
// 005bfd5c  83c414               add esp, 0x14
// 005bfd5f  85c0                 test eax, eax
// 005bfd61  751e                 jne 0x5bfd81
// 005bfd63  68046e7800           push 0x786e04
// 005bfd68  8d4c2408             lea ecx, [esp + 8]
// 005bfd6c  ff1510e77700         call dword ptr [0x77e710]
// 005bfd72  680c1e8400           push 0x841e0c
// 005bfd77  8d442408             lea eax, [esp + 8]
// 005bfd7b  50                   push eax
// 005bfd7c  e81d0e0700           call 0x630b9e
// 005bfd81  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bfd85  8b4018               mov eax, dword ptr [eax + 0x18]
// 005bfd88  8b10                 mov edx, dword ptr [eax]
// 005bfd8a  8b5208               mov edx, dword ptr [edx + 8]
// 005bfd8d  51                   push ecx
// 005bfd8e  8b4e04               mov ecx, dword ptr [esi + 4]
// 005bfd91  51                   push ecx
// 005bfd92  8bc8                 mov ecx, eax
// 005bfd94  ffd2                 call edx
// 005bfd96  5e                   pop esi
// 005bfd97  83c40c               add esp, 0xc
// 005bfd9a  c20400               ret 4

struct LuaArguments {
    void* field_0;
    void* field_4;
    void construct(void* arg);
};

extern "C" int __cdecl func_00630d36(void* a, void* b, const char* c, void* d, void* e);
extern "C" void __cdecl func_00630b9e(void* a, void* b);
extern "C" void __stdcall func_0077e710(void* a);

void LuaArguments::construct(void* arg)
{
    if (func_00630d36(field_0, 0, (const char*)0x887174, (void*)0x8abd00, 0) == 0) {
        func_0077e710((void*)0x786e04);
        func_00630b9e((void*)0x841e0c, (void*)0x786e04);
    }
    void* p = *(void**)((char*)0 + 0x18);
    void** vt = *(void***)p;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vt[2];
    fn(p, field_4, arg);
}
