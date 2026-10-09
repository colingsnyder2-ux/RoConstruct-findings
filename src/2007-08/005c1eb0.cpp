// from server: 100% by colin
// roc 2007-08 005c1eb0  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c1eb0
//
// 005c1eb0  56                   push esi
// 005c1eb1  8b742408             mov esi, dword ptr [esp + 8]
// 005c1eb5  6a04                 push 4
// 005c1eb7  56                   push esi
// 005c1eb8  e8f3c6ffff           call 0x5be5b0
// 005c1ebd  83c408               add esp, 8
// 005c1ec0  85c0                 test eax, eax
// 005c1ec2  7406                 je 0x5c1eca
// 005c1ec4  c700c2000000         mov dword ptr [eax], 0xc2
// 005c1eca  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 005c1ecf  50                   push eax
// 005c1ed0  68f0d8ffff           push 0xffffd8f0
// 005c1ed5  56                   push esi
// 005c1ed6  e825bfffff           call 0x5bde00
// 005c1edb  6afe                 push -2
// 005c1edd  56                   push esi
// 005c1ede  e87dc2ffff           call 0x5be160
// 005c1ee3  83c414               add esp, 0x14
// 005c1ee6  b801000000           mov eax, 1
// 005c1eeb  5e                   pop esi
// 005c1eec  c3                   ret 

struct LuaArguments {
    int construct(int a, int b, int c);
};

extern "C" int __cdecl sub_5be5b0(int, int);
extern "C" int __cdecl sub_5bde00(int, int, int);
extern "C" int __cdecl sub_5be160(int, int);

extern int dword_8ABE7C;

int __cdecl LuaArguments_construct(int a, int b, int c)
{
    int* p = (int*)sub_5be5b0(a, 4);
    if (p != 0)
        *p = 0xC2;
    sub_5bde00(a, -10000, dword_8ABE7C);
    sub_5be160(a, -2);
    return 1;
}
