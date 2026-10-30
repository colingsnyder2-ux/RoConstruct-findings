// roc 2012-06 009864e0  unit: IIHH::?$CMap  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009864e0
//
// 009864e0  56                   push esi
// 009864e1  8b742408             mov esi, dword ptr [esp + 8]
// 009864e5  57                   push edi
// 009864e6  8bf9                 mov edi, ecx
// 009864e8  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 009864eb  33c0                 xor eax, eax
// 009864ed  85c9                 test ecx, ecx
// 009864ef  7e19                 jle 0x98650a
// 009864f1  85c0                 test eax, eax
// 009864f3  0f8c83000000         jl 0x98657c
// 009864f9  3bc1                 cmp eax, ecx
// 009864fb  7d7f                 jge 0x98657c
// 009864fd  8b5760               mov edx, dword ptr [edi + 0x60]
// 00986500  393482               cmp dword ptr [edx + eax*4], esi
// 00986503  7472                 je 0x986577
// 00986505  40                   inc eax
// 00986506  3bc1                 cmp eax, ecx
// 00986508  7ce7                 jl 0x9864f1
// 0098650a  8b4764               mov eax, dword ptr [edi + 0x64]
// 0098650d  8d4f5c               lea ecx, [edi + 0x5c]
// 00986510  56                   push esi
// 00986511  50                   push eax
// 00986512  e8b9b90e00           call 0xa71ed0
// 00986517  83c8ff               or eax, 0xffffffff
// 0098651a  89869c000000         mov dword ptr [esi + 0x9c], eax
// 00986520  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 00986526  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00986529  898e84000000         mov dword ptr [esi + 0x84], ecx
// 0098652f  8d8ed8000000         lea ecx, [esi + 0xd8]
// 00986535  ff150448b200         call dword ptr [0xb24804]
// 0098653b  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00986541  ff150448b200         call dword ptr [0xb24804]
// 00986547  8d8eec000000         lea ecx, [esi + 0xec]
// 0098654d  ff150448b200         call dword ptr [0xb24804]
// 00986553  8d8e08010000         lea ecx, [esi + 0x108]
// 00986559  ff150448b200         call dword ptr [0xb24804]
// 0098655f  8d8ee0000000         lea ecx, [esi + 0xe0]
// 00986565  ff150448b200         call dword ptr [0xb24804]
// 0098656b  8d8ef4000000         lea ecx, [esi + 0xf4]
// 00986571  ff150448b200         call dword ptr [0xb24804]
// 00986577  5f                   pop edi
// 00986578  5e                   pop esi
// 00986579  c20400               ret 4
// 0098657c  e83fbeffff           call 0x9823c0
// copied from an identical function in another client (function ?AddControl@CXTPControlAction@@IAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp