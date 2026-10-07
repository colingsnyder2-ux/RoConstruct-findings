// roc 2008-06 005a7570  unit: RBX::Log  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a7570
//
// 005a7570  64a100000000         mov eax, dword ptr fs:[0]
// 005a7576  6aff                 push -1
// 005a7578  68b0b77d00           push 0x7db7b0
// 005a757d  50                   push eax
// 005a757e  64892500000000       mov dword ptr fs:[0], esp
// 005a7585  a130c49400           mov eax, dword ptr [0x94c430]
// 005a758a  56                   push esi
// 005a758b  50                   push eax
// 005a758c  8bf1                 mov esi, ecx
// 005a758e  ff15ac228000         call dword ptr [0x8022ac]
// 005a7594  85c0                 test eax, eax
// 005a7596  7512                 jne 0x5a75aa
// 005a7598  33c0                 xor eax, eax
// 005a759a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a759e  64890d00000000       mov dword ptr fs:[0], ecx
// 005a75a5  5e                   pop esi
// 005a75a6  83c40c               add esp, 0xc
// 005a75a9  c3                   ret 
// 005a75aa  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005a75ad  8b4010               mov eax, dword ptr [eax + 0x10]
// 005a75b0  8b16                 mov edx, dword ptr [esi]
// 005a75b2  2bc1                 sub eax, ecx
// 005a75b4  c1f802               sar eax, 2
// 005a75b7  3bd0                 cmp edx, eax
// 005a75b9  73dd                 jae 0x5a7598
// 005a75bb  8b0491               mov eax, dword ptr [ecx + edx*4]
// 005a75be  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a75c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005a75c9  5e                   pop esi
// 005a75ca  83c40c               add esp, 0xc
// 005a75cd  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss.cpp (function ?get@tss@detail@boost@@QBEPAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss.cpp
