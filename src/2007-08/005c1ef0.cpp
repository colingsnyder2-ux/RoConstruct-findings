// from server: 100% by colin
// roc 2007-08 005c1ef0  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c1ef0
//
// 005c1ef0  56                   push esi
// 005c1ef1  8b742408             mov esi, dword ptr [esp + 8]
// 005c1ef5  6a04                 push 4
// 005c1ef7  56                   push esi
// 005c1ef8  e8b3c6ffff           call 0x5be5b0
// 005c1efd  83c408               add esp, 8
// 005c1f00  85c0                 test eax, eax
// 005c1f02  7406                 je 0x5c1f0a
// 005c1f04  c700c7000000         mov dword ptr [eax], 0xc7
// 005c1f0a  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 005c1f0f  50                   push eax
// 005c1f10  68f0d8ffff           push 0xffffd8f0
// 005c1f15  56                   push esi
// 005c1f16  e8e5beffff           call 0x5bde00
// 005c1f1b  6afe                 push -2
// 005c1f1d  56                   push esi
// 005c1f1e  e83dc2ffff           call 0x5be160
// 005c1f23  83c414               add esp, 0x14
// 005c1f26  b801000000           mov eax, 1
// 005c1f2b  5e                   pop esi
// 005c1f2c  c3                   ret 

struct LuaArguments {
    int construct(int a, int b);
};

extern "C" int* __cdecl sub_5be5b0(int, int);
extern "C" void __cdecl sub_5bde00(int, int, int);
extern "C" void __cdecl sub_5be160(int, int);

extern int dword_8ABE7C;

int __cdecl LuaArguments_construct(int a, int b)
{
    int* p = sub_5be5b0(a, 4);
    if (p != 0)
        *p = 0xc7;
    sub_5bde00(a, -10000, dword_8ABE7C);
    sub_5be160(a, -2);
    return 1;
}
