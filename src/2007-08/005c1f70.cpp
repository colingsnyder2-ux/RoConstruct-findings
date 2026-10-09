// from server: 100% by colin
// roc 2007-08 005c1f70  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c1f70
//
// 005c1f70  56                   push esi
// 005c1f71  8b742408             mov esi, dword ptr [esp + 8]
// 005c1f75  6a04                 push 4
// 005c1f77  56                   push esi
// 005c1f78  e833c6ffff           call 0x5be5b0
// 005c1f7d  83c408               add esp, 8
// 005c1f80  85c0                 test eax, eax
// 005c1f82  7406                 je 0x5c1f8a
// 005c1f84  c70018000000         mov dword ptr [eax], 0x18
// 005c1f8a  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 005c1f8f  50                   push eax
// 005c1f90  68f0d8ffff           push 0xffffd8f0
// 005c1f95  56                   push esi
// 005c1f96  e865beffff           call 0x5bde00
// 005c1f9b  6afe                 push -2
// 005c1f9d  56                   push esi
// 005c1f9e  e8bdc1ffff           call 0x5be160
// 005c1fa3  83c414               add esp, 0x14
// 005c1fa6  b801000000           mov eax, 1
// 005c1fab  5e                   pop esi
// 005c1fac  c3                   ret 

struct LuaArguments {
    int construct(void* L);
};

extern "C" void* __cdecl sub_5be5b0(void* p, unsigned int size);
extern "C" void __cdecl sub_5bde00(void* L, int offset, void* f);
extern "C" void __cdecl sub_5be160(void* L, int idx);

extern void* g_8abe7c;

int __cdecl LuaArguments_construct(void* L)
{
    void* p = sub_5be5b0(L, 4);
    if (p)
        *(int*)p = 0x18;
    sub_5bde00(L, -10000, g_8abe7c);
    sub_5be160(L, -2);
    return 1;
}
