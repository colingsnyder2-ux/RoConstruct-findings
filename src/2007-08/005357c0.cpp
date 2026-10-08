// from server: 100% by colin
// roc 2007-08 005357c0  unit: std::logic_error  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005357c0
//
// 005357c0  56                   push esi
// 005357c1  8b742408             mov esi, dword ptr [esp + 8]
// 005357c5  57                   push edi
// 005357c6  6a00                 push 0
// 005357c8  6a02                 push 2
// 005357ca  56                   push esi
// 005357cb  e8809b0800           call 0x5bf350
// 005357d0  8bf8                 mov edi, eax
// 005357d2  a188be8a00           mov eax, dword ptr [0x8abe88]
// 005357d7  50                   push eax
// 005357d8  6a01                 push 1
// 005357da  56                   push esi
// 005357db  e8609a0800           call 0x5bf240
// 005357e0  56                   push esi
// 005357e1  57                   push edi
// 005357e2  50                   push eax
// 005357e3  e848df0800           call 0x5c3730
// 005357e8  83c424               add esp, 0x24
// 005357eb  5f                   pop edi
// 005357ec  33c0                 xor eax, eax
// 005357ee  5e                   pop esi
// 005357ef  c3                   ret 

extern "C" int __cdecl func_005bf350(int, int, int);
extern "C" int __cdecl func_005bf240(int, int, int);
extern "C" int __cdecl func_005c3730(int, int, int);

extern int G_func_008abe88;

int func_005357c0(int a)
{
    int v1 = func_005bf350(a, 2, 0);
    int v2 = func_005bf240(a, 1, G_func_008abe88);
    func_005c3730(v2, v1, a);
    return 0;
}
