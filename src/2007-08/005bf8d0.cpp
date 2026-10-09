// from server: 50% by colin
// roc 2007-08 005bf8d0  unit: RBX::Lua::LuaArguments  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf8d0
//
// 005bf8d0  83ec0c               sub esp, 0xc
// 005bf8d3  56                   push esi
// 005bf8d4  6a00                 push 0
// 005bf8d6  68a0828800           push 0x8882a0
// 005bf8db  8bf1                 mov esi, ecx
// 005bf8dd  8b06                 mov eax, dword ptr [esi]
// 005bf8df  6874718800           push 0x887174
// 005bf8e4  6a00                 push 0
// 005bf8e6  50                   push eax
// 005bf8e7  e84a140700           call 0x630d36
// 005bf8ec  83c414               add esp, 0x14
// 005bf8ef  85c0                 test eax, eax
// 005bf8f1  751e                 jne 0x5bf911
// 005bf8f3  68046e7800           push 0x786e04
// 005bf8f8  8d4c2408             lea ecx, [esp + 8]
// 005bf8fc  ff1510e77700         call dword ptr [0x77e710]
// 005bf902  680c1e8400           push 0x841e0c
// 005bf907  8d442408             lea eax, [esp + 8]
// 005bf90b  50                   push eax
// 005bf90c  e88d120700           call 0x630b9e
// 005bf911  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005bf915  8b4018               mov eax, dword ptr [eax + 0x18]
// 005bf918  8b10                 mov edx, dword ptr [eax]
// 005bf91a  8b5208               mov edx, dword ptr [edx + 8]
// 005bf91d  51                   push ecx
// 005bf91e  8b4e04               mov ecx, dword ptr [esi + 4]
// 005bf921  51                   push ecx
// 005bf922  8bc8                 mov ecx, eax
// 005bf924  ffd2                 call edx
// 005bf926  5e                   pop esi
// 005bf927  83c40c               add esp, 0xc
// 005bf92a  c20400               ret 4

struct LuaArguments {
    void* field_0;
    void* field_4;
    void construct(int arg);
};

extern "C" int __cdecl sub_00630d36(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_00630b9e(void*, void*);
extern "C" void* __stdcall sub_0077e710(void*);

void LuaArguments::construct(int arg)
{
    void* p = (void*)sub_00630d36(field_0, 0, (void*)0x887174, (void*)0x8882a0, 0);
    if (p == 0) {
        char buf[8];
        sub_0077e710(buf);
        sub_00630b9e((void*)0x841e0c, buf);
    }
    void* obj = *(void**)((char*)p + 0x18);
    void** vtbl = *(void***)obj;
    void (*fn)(void*, void*, int) = (void (*)(void*, void*, int))vtbl[2];
    fn(obj, field_4, arg);
}
