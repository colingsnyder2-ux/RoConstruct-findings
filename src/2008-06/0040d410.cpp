// roc 2008-06 0040d410  unit: RBX::Reflection::Metadata::Item  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d410
//
// 0040d410  6aff                 push -1
// 0040d412  683b467d00           push 0x7d463b
// 0040d417  64a100000000         mov eax, dword ptr fs:[0]
// 0040d41d  50                   push eax
// 0040d41e  64892500000000       mov dword ptr fs:[0], esp
// 0040d425  83ec08               sub esp, 8
// 0040d428  c7042400000000       mov dword ptr [esp], 0
// 0040d42f  6834010000           push 0x134
// 0040d434  c644240400           mov byte ptr [esp + 4], 0
// 0040d439  ff15b0288000         call dword ptr [0x8028b0]
// 0040d43f  83c404               add esp, 4
// 0040d442  89442404             mov dword ptr [esp + 4], eax
// 0040d446  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040d44e  85c0                 test eax, eax
// 0040d450  7409                 je 0x40d45b
// 0040d452  8bc8                 mov ecx, eax
// 0040d454  e8e7fcffff           call 0x40d140
// 0040d459  eb02                 jmp 0x40d45d
// 0040d45b  33c0                 xor eax, eax
// 0040d45d  8b0c24               mov ecx, dword ptr [esp]
// 0040d460  56                   push esi
// 0040d461  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0040d465  51                   push ecx
// 0040d466  50                   push eax
// 0040d467  8bce                 mov ecx, esi
// 0040d469  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0040d471  e83af2ffff           call 0x40c6b0
// 0040d476  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040d47a  8bc6                 mov eax, esi
// 0040d47c  5e                   pop esi
// 0040d47d  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d484  83c414               add esp, 0x14
// 0040d487  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VSkin@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VSkin@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
