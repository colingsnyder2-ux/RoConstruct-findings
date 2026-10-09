// from server: 100% by colin
// roc 2007-08 005c1e30  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c1e30
//
// 005c1e30  56                   push esi
// 005c1e31  8b742408             mov esi, dword ptr [esp + 8]
// 005c1e35  6a04                 push 4
// 005c1e37  56                   push esi
// 005c1e38  e873c7ffff           call 0x5be5b0
// 005c1e3d  83c408               add esp, 8
// 005c1e40  85c0                 test eax, eax
// 005c1e42  7406                 je 0x5c1e4a
// 005c1e44  c70015000000         mov dword ptr [eax], 0x15
// 005c1e4a  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 005c1e4f  50                   push eax
// 005c1e50  68f0d8ffff           push 0xffffd8f0
// 005c1e55  56                   push esi
// 005c1e56  e8a5bfffff           call 0x5bde00
// 005c1e5b  6afe                 push -2
// 005c1e5d  56                   push esi
// 005c1e5e  e8fdc2ffff           call 0x5be160
// 005c1e63  83c414               add esp, 0x14
// 005c1e66  b801000000           mov eax, 1
// 005c1e6b  5e                   pop esi
// 005c1e6c  c3                   ret 

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
        *p = 0x15;
    sub_5bde00(a, -10000, dword_8ABE7C);
    sub_5be160(a, -2);
    return 1;
}
