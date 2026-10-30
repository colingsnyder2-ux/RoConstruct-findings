// roc 2010-06 007c01e0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c01e0
//
// 007c01e0  6aff                 push -1
// 007c01e2  68b8f79a00           push 0x9af7b8
// 007c01e7  64a100000000         mov eax, dword ptr fs:[0]
// 007c01ed  50                   push eax
// 007c01ee  51                   push ecx
// 007c01ef  53                   push ebx
// 007c01f0  56                   push esi
// 007c01f1  57                   push edi
// 007c01f2  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007c01f7  33c4                 xor eax, esp
// 007c01f9  50                   push eax
// 007c01fa  8d442414             lea eax, [esp + 0x14]
// 007c01fe  64a300000000         mov dword ptr fs:[0], eax
// 007c0204  8bf1                 mov esi, ecx
// 007c0206  8d4658               lea eax, [esi + 0x58]
// 007c0209  50                   push eax
// 007c020a  8d4c2414             lea ecx, [esp + 0x14]
// 007c020e  e85d030300           call 0x7f0570
// 007c0213  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 007c0216  33c0                 xor eax, eax
// 007c0218  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007c0220  85db                 test ebx, ebx
// 007c0222  7e25                 jle 0x7c0249
// 007c0224  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007c0228  8d4e30               lea ecx, [esi + 0x30]
// 007c022b  eb03                 jmp 0x7c0230
// 007c022d  8d4900               lea ecx, [ecx]
// 007c0230  85c0                 test eax, eax
// 007c0232  7c67                 jl 0x7c029b
// 007c0234  3b4108               cmp eax, dword ptr [ecx + 8]
// 007c0237  7d62                 jge 0x7c029b
// 007c0239  8b5104               mov edx, dword ptr [ecx + 4]
// 007c023c  393c82               cmp dword ptr [edx + eax*4], edi
// 007c023f  8d1482               lea edx, [edx + eax*4]
// 007c0242  742b                 je 0x7c026f
// 007c0244  40                   inc eax
// 007c0245  3bc3                 cmp eax, ebx
// 007c0247  7ce7                 jl 0x7c0230
// 007c0249  8d4c2410             lea ecx, [esp + 0x10]
// 007c024d  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007c0255  e836030300           call 0x7f0590
// 007c025a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007c025e  64890d00000000       mov dword ptr fs:[0], ecx
// 007c0265  59                   pop ecx
// 007c0266  5f                   pop edi
// 007c0267  5e                   pop esi
// 007c0268  5b                   pop ebx
// 007c0269  83c410               add esp, 0x10
// 007c026c  c20400               ret 4
// 007c026f  6a01                 push 1
// 007c0271  50                   push eax
// 007c0272  e8c987ffff           call 0x7b8a40
// 007c0277  8b464c               mov eax, dword ptr [esi + 0x4c]
// 007c027a  8d4e44               lea ecx, [esi + 0x44]
// 007c027d  57                   push edi
// 007c027e  50                   push eax
// 007c027f  e82c120200           call 0x7e14b0
// 007c0284  8b464c               mov eax, dword ptr [esi + 0x4c]
// 007c0287  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007c028a  0fafc8               imul ecx, eax
// 007c028d  3b4e2c               cmp ecx, dword ptr [esi + 0x2c]
// 007c0290  75b7                 jne 0x7c0249
// 007c0292  8bce                 mov ecx, esi
// 007c0294  e867fcffff           call 0x7bff00
// 007c0299  ebae                 jmp 0x7c0249
// 007c029b  e8ac79feff           call 0x7a7c4c
// copied from an identical function in another client (function ?Clear@CXTPImageManagerResource@@QAEXPAUXTP_IMAGERESOURCE_INFO@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp