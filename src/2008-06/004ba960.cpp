// roc 2008-06 004ba960  unit: RBX::Network::IdSerializer  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ba960
//
// 004ba960  6aff                 push -1
// 004ba962  683bf47b00           push 0x7bf43b
// 004ba967  64a100000000         mov eax, dword ptr fs:[0]
// 004ba96d  50                   push eax
// 004ba96e  64892500000000       mov dword ptr fs:[0], esp
// 004ba975  51                   push ecx
// 004ba976  a114189700           mov eax, dword ptr [0x971814]
// 004ba97b  40                   inc eax
// 004ba97c  a314189700           mov dword ptr [0x971814], eax
// 004ba981  83f801               cmp eax, 1
// 004ba984  753b                 jne 0x4ba9c1
// 004ba986  6a18                 push 0x18
// 004ba988  e8935f1e00           call 0x6a0920
// 004ba98d  83c404               add esp, 4
// 004ba990  890424               mov dword ptr [esp], eax
// 004ba993  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004ba99b  85c0                 test eax, eax
// 004ba99d  741b                 je 0x4ba9ba
// 004ba99f  8bc8                 mov ecx, eax
// 004ba9a1  e89afeffff           call 0x4ba840
// 004ba9a6  a310189700           mov dword ptr [0x971810], eax
// 004ba9ab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ba9af  64890d00000000       mov dword ptr fs:[0], ecx
// 004ba9b6  83c410               add esp, 0x10
// 004ba9b9  c3                   ret 
// 004ba9ba  33c0                 xor eax, eax
// 004ba9bc  a310189700           mov dword ptr [0x971810], eax
// 004ba9c1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ba9c5  64890d00000000       mov dword ptr fs:[0], ecx
// 004ba9cc  83c410               add esp, 0x10
// 004ba9cf  c3                   ret 
// library rbxgs-raknet/StringCompressor.cpp (function ?AddReference@StringCompressor@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringCompressor.cpp
