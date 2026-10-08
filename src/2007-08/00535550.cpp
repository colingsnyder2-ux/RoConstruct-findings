// from server: 100% by colin
// roc 2007-08 00535550  unit: std::logic_error  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535550
//
// 00535550  56                   push esi
// 00535551  8b742408             mov esi, dword ptr [esp + 8]
// 00535555  57                   push edi
// 00535556  6a00                 push 0
// 00535558  6a02                 push 2
// 0053555a  56                   push esi
// 0053555b  e8f09d0800           call 0x5bf350
// 00535560  8bf8                 mov edi, eax
// 00535562  a1d8f78900           mov eax, dword ptr [0x89f7d8]
// 00535567  50                   push eax
// 00535568  6a01                 push 1
// 0053556a  56                   push esi
// 0053556b  e8d09c0800           call 0x5bf240
// 00535570  56                   push esi
// 00535571  57                   push edi
// 00535572  50                   push eax
// 00535573  e8c8710300           call 0x56c740
// 00535578  83c424               add esp, 0x24
// 0053557b  5f                   pop edi
// 0053557c  33c0                 xor eax, eax
// 0053557e  5e                   pop esi
// 0053557f  c3                   ret 

extern int GLOBAL_0089F7D8;

extern int __cdecl func_005BF350(int, int, int);
extern int __cdecl func_005BF240(int, int, int);
extern int __cdecl func_0056C740(int, int, int);

int __cdecl func_00535550(int a)
{
    int v1 = func_005BF350(a, 2, 0);
    int v2 = func_005BF240(a, 1, GLOBAL_0089F7D8);
    func_0056C740(v2, v1, a);
    return 0;
}
