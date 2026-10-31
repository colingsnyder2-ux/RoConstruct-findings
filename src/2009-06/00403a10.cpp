// roc 2009-06 00403a10  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00403a10
//
// 00403a10  53                   push ebx
// 00403a11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00403a15  57                   push edi
// 00403a16  8bf9                 mov edi, ecx
// 00403a18  85db                 test ebx, ebx
// 00403a1a  750a                 jne 0x403a26
// 00403a1c  6805400080           push 0x80004005
// 00403a21  e88af4ffff           call 0x402eb0
// 00403a26  803b00               cmp byte ptr [ebx], 0
// 00403a29  7410                 je 0x403a3b
// 00403a2b  80bf2201000000       cmp byte ptr [edi + 0x122], 0
// 00403a32  7507                 jne 0x403a3b
// 00403a34  5f                   pop edi
// 00403a35  33c0                 xor eax, eax
// 00403a37  5b                   pop ebx
// 00403a38  c20400               ret 4
// 00403a3b  56                   push esi
// 00403a3c  6881000000           push 0x81
// 00403a41  53                   push ebx
// 00403a42  ff158ce98900         call dword ptr [0x89e98c]
// 00403a48  8bf0                 mov esi, eax
// 00403a4a  83c408               add esp, 8
// 00403a4d  81fe80000000         cmp esi, 0x80
// 00403a53  7608                 jbe 0x403a5d
// 00403a55  5e                   pop esi
// 00403a56  5f                   pop edi
// 00403a57  33c0                 xor eax, eax
// 00403a59  5b                   pop ebx
// 00403a5a  c20400               ret 4
// 00403a5d  56                   push esi
// 00403a5e  53                   push ebx
// 00403a5f  8d87a3010000         lea eax, [edi + 0x1a3]
// 00403a65  6881000000           push 0x81
// 00403a6a  50                   push eax
// 00403a6b  ff15a0e98900         call dword ptr [0x89e9a0]
// 00403a71  50                   push eax
// 00403a72  e8a9f2ffff           call 0x402d20
// 00403a77  83c414               add esp, 0x14
// 00403a7a  89b738120000         mov dword ptr [edi + 0x1238], esi
// 00403a80  5e                   pop esi
// 00403a81  5f                   pop edi
// 00403a82  b801000000           mov eax, 1
// 00403a87  5b                   pop ebx
// 00403a88  c20400               ret 4
// copied from an identical function in another client (function ?SetPassword@CUrl@ATL@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_188c2f09ea8697a7.cpp