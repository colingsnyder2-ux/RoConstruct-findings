// roc 2011-06 00431830  unit: CPatchedControlComboBox  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00431830
//
// 00431830  6aff                 push -1
// 00431832  68aa639d00           push 0x9d63aa
// 00431837  64a100000000         mov eax, dword ptr fs:[0]
// 0043183d  50                   push eax
// 0043183e  64892500000000       mov dword ptr fs:[0], esp
// 00431845  51                   push ecx
// 00431846  6850010000           push 0x150
// 0043184b  e80e883d00           call 0x80a05e
// 00431850  83c404               add esp, 4
// 00431853  890424               mov dword ptr [esp], eax
// 00431856  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0043185e  85c0                 test eax, eax
// 00431860  7416                 je 0x431878
// 00431862  8bc8                 mov ecx, eax
// 00431864  e8f7eeffff           call 0x430760
// 00431869  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043186d  64890d00000000       mov dword ptr fs:[0], ecx
// 00431874  83c410               add esp, 0x10
// 00431877  c3                   ret 
// 00431878  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043187c  33c0                 xor eax, eax
// 0043187e  64890d00000000       mov dword ptr fs:[0], ecx
// 00431885  83c410               add esp, 0x10
// 00431888  c3                   ret 
// library rbx2016-raknet/RPC4Plugin.cpp (function ??$OP_NEW@VRPC4@RakNet@@@RakNet@@YAPAVRPC4@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
