// roc 2008-06 005a1950  unit: RBX::ArrowTool  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1950
//
// 005a1950  56                   push esi
// 005a1951  8b742408             mov esi, dword ptr [esp + 8]
// 005a1955  6a00                 push 0
// 005a1957  6850dd9200           push 0x92dd50
// 005a195c  687c909200           push 0x92907c
// 005a1961  6a00                 push 0
// 005a1963  56                   push esi
// 005a1964  e85dfe0f00           call 0x6a17c6
// 005a1969  83c414               add esp, 0x14
// 005a196c  85c0                 test eax, eax
// 005a196e  7408                 je 0x5a1978
// 005a1970  8bc8                 mov ecx, eax
// 005a1972  5e                   pop esi
// 005a1973  e9f872ffff           jmp 0x598c70
// 005a1978  6850195a00           push 0x5a1950
// 005a197d  8bce                 mov ecx, esi
// 005a197f  e8ecaaebff           call 0x45c470
// 005a1984  5e                   pop esi
// 005a1985  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper@$00@RBX@@YAXPAVInstance@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
