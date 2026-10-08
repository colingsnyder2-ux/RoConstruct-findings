// from server: 100% by colin
// roc 2007-08 005355f0  unit: std::logic_error  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005355f0
//
// 005355f0  56                   push esi
// 005355f1  8b742408             mov esi, dword ptr [esp + 8]
// 005355f5  57                   push edi
// 005355f6  6a00                 push 0
// 005355f8  6a02                 push 2
// 005355fa  56                   push esi
// 005355fb  e8509d0800           call 0x5bf350
// 00535600  8bf8                 mov edi, eax
// 00535602  a174be8a00           mov eax, dword ptr [0x8abe74]
// 00535607  50                   push eax
// 00535608  6a01                 push 1
// 0053560a  56                   push esi
// 0053560b  e8309c0800           call 0x5bf240
// 00535610  56                   push esi
// 00535611  57                   push edi
// 00535612  50                   push eax
// 00535613  e828710300           call 0x56c740
// 00535618  83c424               add esp, 0x24
// 0053561b  5f                   pop edi
// 0053561c  33c0                 xor eax, eax
// 0053561e  5e                   pop esi
// 0053561f  c3                   ret 

extern "C" int __cdecl func_5bf350(int, int, int);
extern "C" int __cdecl func_5bf240(int, int, int);
extern "C" int __cdecl func_56c740(int, int, int);
extern int G_func_008abe74;

int __cdecl func_005355f0(int a)
{
    int v1 = func_5bf350(a, 2, 0);
    int v2 = func_5bf240(a, 1, G_func_008abe74);
    func_56c740(v2, v1, a);
    return 0;
}
