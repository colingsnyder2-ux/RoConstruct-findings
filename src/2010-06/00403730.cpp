// roc 2010-06 00403730  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00403730
//
// 00403730  53                   push ebx
// 00403731  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00403735  57                   push edi
// 00403736  8bf9                 mov edi, ecx
// 00403738  85db                 test ebx, ebx
// 0040373a  750a                 jne 0x403746
// 0040373c  6805400080           push 0x80004005
// 00403741  e88af4ffff           call 0x402bd0
// 00403746  803b00               cmp byte ptr [ebx], 0
// 00403749  7410                 je 0x40375b
// 0040374b  80bf2201000000       cmp byte ptr [edi + 0x122], 0
// 00403752  7507                 jne 0x40375b
// 00403754  5f                   pop edi
// 00403755  33c0                 xor eax, eax
// 00403757  5b                   pop ebx
// 00403758  c20400               ret 4
// 0040375b  56                   push esi
// 0040375c  6881000000           push 0x81
// 00403761  53                   push ebx
// 00403762  ff15c0a89e00         call dword ptr [0x9ea8c0]
// 00403768  8bf0                 mov esi, eax
// 0040376a  83c408               add esp, 8
// 0040376d  81fe80000000         cmp esi, 0x80
// 00403773  7608                 jbe 0x40377d
// 00403775  5e                   pop esi
// 00403776  5f                   pop edi
// 00403777  33c0                 xor eax, eax
// 00403779  5b                   pop ebx
// 0040377a  c20400               ret 4
// 0040377d  56                   push esi
// 0040377e  53                   push ebx
// 0040377f  8d87a3010000         lea eax, [edi + 0x1a3]
// 00403785  6881000000           push 0x81
// 0040378a  50                   push eax
// 0040378b  ff15d4a89e00         call dword ptr [0x9ea8d4]
// 00403791  50                   push eax
// 00403792  e8a9f2ffff           call 0x402a40
// 00403797  83c414               add esp, 0x14
// 0040379a  89b738120000         mov dword ptr [edi + 0x1238], esi
// 004037a0  5e                   pop esi
// 004037a1  5f                   pop edi
// 004037a2  b801000000           mov eax, 1
// 004037a7  5b                   pop ebx
// 004037a8  c20400               ret 4
// copied from an identical function in another client (function ?SetPassword@CUrl@ATL@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_188c2f09ea8697a7.cpp