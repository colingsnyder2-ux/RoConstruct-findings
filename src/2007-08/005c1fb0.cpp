// from server: 100% by colin
// roc 2007-08 005c1fb0  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c1fb0
//
// 005c1fb0  56                   push esi
// 005c1fb1  8b742408             mov esi, dword ptr [esp + 8]
// 005c1fb5  6a04                 push 4
// 005c1fb7  56                   push esi
// 005c1fb8  e8f3c5ffff           call 0x5be5b0
// 005c1fbd  83c408               add esp, 8
// 005c1fc0  85c0                 test eax, eax
// 005c1fc2  7406                 je 0x5c1fca
// 005c1fc4  c7001c000000         mov dword ptr [eax], 0x1c
// 005c1fca  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 005c1fcf  50                   push eax
// 005c1fd0  68f0d8ffff           push 0xffffd8f0
// 005c1fd5  56                   push esi
// 005c1fd6  e825beffff           call 0x5bde00
// 005c1fdb  6afe                 push -2
// 005c1fdd  56                   push esi
// 005c1fde  e87dc1ffff           call 0x5be160
// 005c1fe3  83c414               add esp, 0x14
// 005c1fe6  b801000000           mov eax, 1
// 005c1feb  5e                   pop esi
// 005c1fec  c3                   ret 

struct LuaArguments {
    int construct(int a, int b);
};

extern "C" int* __cdecl sub_5BE5B0(int, int);
extern "C" void __cdecl sub_5BDE00(int, int, int);
extern "C" void __cdecl sub_5BE160(int, int);

extern int dword_8ABE7C;

int __cdecl LuaArguments_construct(int a, int b)
{
    int* p = sub_5BE5B0(a, 4);
    if (p != 0)
        *p = 0x1c;
    sub_5BDE00(a, -10000, dword_8ABE7C);
    sub_5BE160(a, -2);
    return 1;
}
