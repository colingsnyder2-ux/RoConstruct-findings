// roc 2008-06 005a1910  unit: RBX::ArrowTool  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1910
//
// 005a1910  56                   push esi
// 005a1911  8b742408             mov esi, dword ptr [esp + 8]
// 005a1915  6a00                 push 0
// 005a1917  6850dd9200           push 0x92dd50
// 005a191c  687c909200           push 0x92907c
// 005a1921  6a00                 push 0
// 005a1923  56                   push esi
// 005a1924  e89dfe0f00           call 0x6a17c6
// 005a1929  83c414               add esp, 0x14
// 005a192c  85c0                 test eax, eax
// 005a192e  7408                 je 0x5a1938
// 005a1930  8bc8                 mov ecx, eax
// 005a1932  5e                   pop esi
// 005a1933  e95873ffff           jmp 0x598c90
// 005a1938  6810195a00           push 0x5a1910
// 005a193d  8bce                 mov ecx, esi
// 005a193f  e82cabebff           call 0x45c470
// 005a1944  5e                   pop esi
// 005a1945  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper@$00@RBX@@YAXPAVInstance@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
