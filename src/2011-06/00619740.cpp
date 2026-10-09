// roc 2011-06 00619740  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619740
//
// 00619740  56                   push esi
// 00619741  8b742408             mov esi, dword ptr [esp + 8]
// 00619745  57                   push edi
// 00619746  6a00                 push 0
// 00619748  6a02                 push 2
// 0061974a  56                   push esi
// 0061974b  e840aa1400           call 0x764190
// 00619750  8bf8                 mov edi, eax
// 00619752  a108f0c800           mov eax, dword ptr [0xc8f008]
// 00619757  50                   push eax
// 00619758  6a01                 push 1
// 0061975a  56                   push esi
// 0061975b  e820a91400           call 0x764080
// 00619760  56                   push esi
// 00619761  57                   push edi
// 00619762  50                   push eax
// 00619763  e8b8140100           call 0x62ac20
// 00619768  83c424               add esp, 0x24
// 0061976b  5f                   pop edi
// 0061976c  33c0                 xor eax, eax
// 0061976e  5e                   pop esi
// 0061976f  c3                   ret 
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
