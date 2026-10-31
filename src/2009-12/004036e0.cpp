// roc 2009-12 004036e0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004036e0
//
// 004036e0  53                   push ebx
// 004036e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004036e5  57                   push edi
// 004036e6  8bf9                 mov edi, ecx
// 004036e8  85db                 test ebx, ebx
// 004036ea  750a                 jne 0x4036f6
// 004036ec  6805400080           push 0x80004005
// 004036f1  e88af4ffff           call 0x402b80
// 004036f6  803b00               cmp byte ptr [ebx], 0
// 004036f9  7410                 je 0x40370b
// 004036fb  80bf2201000000       cmp byte ptr [edi + 0x122], 0
// 00403702  7507                 jne 0x40370b
// 00403704  5f                   pop edi
// 00403705  33c0                 xor eax, eax
// 00403707  5b                   pop ebx
// 00403708  c20400               ret 4
// 0040370b  56                   push esi
// 0040370c  6881000000           push 0x81
// 00403711  53                   push ebx
// 00403712  ff1580b79800         call dword ptr [0x98b780]
// 00403718  8bf0                 mov esi, eax
// 0040371a  83c408               add esp, 8
// 0040371d  81fe80000000         cmp esi, 0x80
// 00403723  7608                 jbe 0x40372d
// 00403725  5e                   pop esi
// 00403726  5f                   pop edi
// 00403727  33c0                 xor eax, eax
// 00403729  5b                   pop ebx
// 0040372a  c20400               ret 4
// 0040372d  56                   push esi
// 0040372e  53                   push ebx
// 0040372f  8d87a3010000         lea eax, [edi + 0x1a3]
// 00403735  6881000000           push 0x81
// 0040373a  50                   push eax
// 0040373b  ff156cb79800         call dword ptr [0x98b76c]
// 00403741  50                   push eax
// 00403742  e8a9f2ffff           call 0x4029f0
// 00403747  83c414               add esp, 0x14
// 0040374a  89b738120000         mov dword ptr [edi + 0x1238], esi
// 00403750  5e                   pop esi
// 00403751  5f                   pop edi
// 00403752  b801000000           mov eax, 1
// 00403757  5b                   pop ebx
// 00403758  c20400               ret 4
// copied from an identical function in another client (function ?SetPassword@CUrl@ATL@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_188c2f09ea8697a7.cpp