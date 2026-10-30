// roc 2009-12 0084ff60  unit: CXTPPropExchangeEnumerator  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084ff60
//
// 0084ff60  6aff                 push -1
// 0084ff62  68a98e9500           push 0x958ea9
// 0084ff67  64a100000000         mov eax, dword ptr fs:[0]
// 0084ff6d  50                   push eax
// 0084ff6e  51                   push ecx
// 0084ff6f  53                   push ebx
// 0084ff70  56                   push esi
// 0084ff71  57                   push edi
// 0084ff72  a10052b600           mov eax, dword ptr [0xb65200]
// 0084ff77  33c4                 xor eax, esp
// 0084ff79  50                   push eax
// 0084ff7a  8d442414             lea eax, [esp + 0x14]
// 0084ff7e  64a300000000         mov dword ptr fs:[0], eax
// 0084ff84  8bf1                 mov esi, ecx
// 0084ff86  8d4c2410             lea ecx, [esp + 0x10]
// 0084ff8a  ff1574de9800         call dword ptr [0x98de74]
// 0084ff90  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0084ff94  8b07                 mov eax, dword ptr [edi]
// 0084ff96  48                   dec eax
// 0084ff97  50                   push eax
// 0084ff98  8d4e08               lea ecx, [esi + 8]
// 0084ff9b  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0084ffa3  ff1580de9800         call dword ptr [0x98de80]
// 0084ffa9  50                   push eax
// 0084ffaa  8d4c2418             lea ecx, [esp + 0x18]
// 0084ffae  68407b9f00           push 0x9f7b40
// 0084ffb3  51                   push ecx
// 0084ffb4  ff157cde9800         call dword ptr [0x98de7c]
// 0084ffba  8b5604               mov edx, dword ptr [esi + 4]
// 0084ffbd  8b1a                 mov ebx, dword ptr [edx]
// 0084ffbf  83c410               add esp, 0x10
// 0084ffc2  8d4c2410             lea ecx, [esp + 0x10]
// 0084ffc6  ff1580de9800         call dword ptr [0x98de80]
// 0084ffcc  8b4e04               mov ecx, dword ptr [esi + 4]
// 0084ffcf  50                   push eax
// 0084ffd0  8b4370               mov eax, dword ptr [ebx + 0x70]
// 0084ffd3  ffd0                 call eax
// 0084ffd5  ff07                 inc dword ptr [edi]
// 0084ffd7  8bd8                 mov ebx, eax
// 0084ffd9  8b07                 mov eax, dword ptr [edi]
// 0084ffdb  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0084ffde  7606                 jbe 0x84ffe6
// 0084ffe0  c70700000000         mov dword ptr [edi], 0
// 0084ffe6  8d4c2410             lea ecx, [esp + 0x10]
// 0084ffea  ff15c0de9800         call dword ptr [0x98dec0]
// 0084fff0  8bc3                 mov eax, ebx
// 0084fff2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084fff6  64890d00000000       mov dword ptr fs:[0], ecx
// 0084fffd  59                   pop ecx
// 0084fffe  5f                   pop edi
// 0084ffff  5e                   pop esi
// 00850000  5b                   pop ebx
// 00850001  83c410               add esp, 0x10
// 00850004  c20400               ret 4
// copied from an identical function in another client (function ?GetNext@CXTPPropExchangeEnumerator@@UAEPAVCXTPPropExchange@@AAPAU__POSITION@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp