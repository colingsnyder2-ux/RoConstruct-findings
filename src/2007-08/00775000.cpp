// roc 2007-08 00775000  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775000
//
// 00775000  56                   push esi
// 00775001  6a05                 push 5
// 00775003  33c9                 xor ecx, ecx
// 00775005  51                   push ecx
// 00775006  b830d15d00           mov eax, 0x5dd130
// 0077500b  50                   push eax
// 0077500c  33f6                 xor esi, esi
// 0077500e  56                   push esi
// 0077500f  ba50fa6f00           mov edx, 0x6ffa50
// 00775014  52                   push edx
// 00775015  6898b67900           push 0x79b698
// 0077501a  68acc47b00           push 0x7bc4ac
// 0077501f  b9286d8c00           mov ecx, 0x8c6d28
// 00775024  e80771e6ff           call 0x5dc130
// 00775029  6840be7700           push 0x77be40
// 0077502e  e8f0bcebff           call 0x630d23
// 00775033  83c404               add esp, 4
// 00775036  5e                   pop esi
// 00775037  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_TopBottom@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
