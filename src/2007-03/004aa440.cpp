// roc 2007-03 004aa440  unit: seg_004a0000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004aa440
//
// 004aa440  6aff                 push -1
// 004aa442  686bc37500           push 0x75c36b
// 004aa447  64a100000000         mov eax, dword ptr fs:[0]
// 004aa44d  50                   push eax
// 004aa44e  64892500000000       mov dword ptr fs:[0], esp
// 004aa455  51                   push ecx
// 004aa456  a194918b00           mov eax, dword ptr [0x8b9194]
// 004aa45b  83c001               add eax, 1
// 004aa45e  83f801               cmp eax, 1
// 004aa461  a394918b00           mov dword ptr [0x8b9194], eax
// 004aa466  753b                 jne 0x4aa4a3
// 004aa468  6a18                 push 0x18
// 004aa46a  e8993c1700           call 0x61e108
// 004aa46f  83c404               add esp, 4
// 004aa472  890424               mov dword ptr [esp], eax
// 004aa475  85c0                 test eax, eax
// 004aa477  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004aa47f  741b                 je 0x4aa49c
// 004aa481  8bc8                 mov ecx, eax
// 004aa483  e898feffff           call 0x4aa320
// 004aa488  a390918b00           mov dword ptr [0x8b9190], eax
// 004aa48d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004aa491  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa498  83c410               add esp, 0x10
// 004aa49b  c3                   ret 
// 004aa49c  33c0                 xor eax, eax
// 004aa49e  a390918b00           mov dword ptr [0x8b9190], eax
// 004aa4a3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004aa4a7  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa4ae  83c410               add esp, 0x10
// 004aa4b1  c3                   ret 
// library rbxgs-raknet/StringCompressor.cpp (function ?AddReference@StringCompressor@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringCompressor.cpp
