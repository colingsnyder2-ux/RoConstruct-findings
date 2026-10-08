// from server: 100% by colin
// roc 2007-08 00535470  unit: std::logic_error  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535470
//
// 00535470  56                   push esi
// 00535471  8b742408             mov esi, dword ptr [esp + 8]
// 00535475  57                   push edi
// 00535476  6a00                 push 0
// 00535478  6a02                 push 2
// 0053547a  56                   push esi
// 0053547b  e8d09e0800           call 0x5bf350
// 00535480  8bf8                 mov edi, eax
// 00535482  a18cbe8a00           mov eax, dword ptr [0x8abe8c]
// 00535487  50                   push eax
// 00535488  6a01                 push 1
// 0053548a  56                   push esi
// 0053548b  e8b09d0800           call 0x5bf240
// 00535490  56                   push esi
// 00535491  57                   push edi
// 00535492  50                   push eax
// 00535493  e8a8720300           call 0x56c740
// 00535498  83c424               add esp, 0x24
// 0053549b  5f                   pop edi
// 0053549c  33c0                 xor eax, eax
// 0053549e  5e                   pop esi
// 0053549f  c3                   ret 

extern "C" int __cdecl sub_5BF350(int, int, int);
extern "C" int __cdecl sub_5BF240(int, int, int);
extern "C" int __cdecl sub_56C740(int, int, int);

extern int dword_8ABE8C;

int __cdecl sub_535470(int a1)
{
    int v2 = sub_5BF350(a1, 2, 0);
    int v3 = sub_5BF240(a1, 1, dword_8ABE8C);
    sub_56C740(v3, v2, a1);
    return 0;
}
