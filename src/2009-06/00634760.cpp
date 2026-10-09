// roc 2009-06 00634760  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634760
//
// 00634760  56                   push esi
// 00634761  8b742408             mov esi, dword ptr [esp + 8]
// 00634765  57                   push edi
// 00634766  6a00                 push 0
// 00634768  6a02                 push 2
// 0063476a  56                   push esi
// 0063476b  e850650800           call 0x6bacc0
// 00634770  8bf8                 mov edi, eax
// 00634772  a14ce2a100           mov eax, dword ptr [0xa1e24c]
// 00634777  50                   push eax
// 00634778  6a01                 push 1
// 0063477a  56                   push esi
// 0063477b  e830640800           call 0x6babb0
// 00634780  56                   push esi
// 00634781  57                   push edi
// 00634782  50                   push eax
// 00634783  e8f8ba0800           call 0x6c0280
// 00634788  83c424               add esp, 0x24
// 0063478b  5f                   pop edi
// 0063478c  33c0                 xor eax, eax
// 0063478e  5e                   pop esi
// 0063478f  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000004@@YAHH@Z)

namespace ns_ROCX000004 {
extern "C" int __cdecl sub_5BF350(int, int, int);
extern "C" int __cdecl sub_5BF240(int, int, int);
extern "C" int __cdecl sub_56C740(int, int, int);

extern int dword_8ABE80;

int __cdecl sub_535140(int a)
{
    int v1 = sub_5BF350(a, 2, 0);
    int v2 = sub_5BF240(a, 1, dword_8ABE80);
    sub_56C740(v2, v1, a);
    return 0;
}
}
