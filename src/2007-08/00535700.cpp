// from server: 100% by colin
// roc 2007-08 00535700  unit: std::logic_error  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535700
//
// 00535700  56                   push esi
// 00535701  8b742408             mov esi, dword ptr [esp + 8]
// 00535705  57                   push edi
// 00535706  6a00                 push 0
// 00535708  6a02                 push 2
// 0053570a  56                   push esi
// 0053570b  e8409c0800           call 0x5bf350
// 00535710  8bf8                 mov edi, eax
// 00535712  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 00535717  50                   push eax
// 00535718  6a01                 push 1
// 0053571a  56                   push esi
// 0053571b  e8209b0800           call 0x5bf240
// 00535720  56                   push esi
// 00535721  57                   push edi
// 00535722  50                   push eax
// 00535723  e818700300           call 0x56c740
// 00535728  83c424               add esp, 0x24
// 0053572b  5f                   pop edi
// 0053572c  33c0                 xor eax, eax
// 0053572e  5e                   pop esi
// 0053572f  c3                   ret 

extern "C" int __cdecl func_5bf350(int, int, int);
extern "C" int __cdecl func_5bf240(int, int, int);
extern "C" int __cdecl func_56c740(int, int, int);
extern int G_func_8abe7c;

int func_00535700(int a)
{
    int v1 = func_5bf350(a, 2, 0);
    int v2 = func_5bf240(a, 1, G_func_8abe7c);
    func_56c740(v2, v1, a);
    return 0;
}
