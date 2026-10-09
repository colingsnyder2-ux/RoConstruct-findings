// roc 2011-06 00619860  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619860
//
// 00619860  56                   push esi
// 00619861  8b742408             mov esi, dword ptr [esp + 8]
// 00619865  57                   push edi
// 00619866  6a00                 push 0
// 00619868  6a02                 push 2
// 0061986a  56                   push esi
// 0061986b  e820a91400           call 0x764190
// 00619870  8bf8                 mov edi, eax
// 00619872  a1ccefc800           mov eax, dword ptr [0xc8efcc]
// 00619877  50                   push eax
// 00619878  6a01                 push 1
// 0061987a  56                   push esi
// 0061987b  e800a81400           call 0x764080
// 00619880  56                   push esi
// 00619881  57                   push edi
// 00619882  50                   push eax
// 00619883  e898130100           call 0x62ac20
// 00619888  83c424               add esp, 0x24
// 0061988b  5f                   pop edi
// 0061988c  33c0                 xor eax, eax
// 0061988e  5e                   pop esi
// 0061988f  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000008@@YAHH@Z)

namespace ns_ROCX000008 {
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
