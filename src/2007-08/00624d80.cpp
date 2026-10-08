// roc 2007-08 00624d80  unit: RBX::ArrowButton  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00624d80
//
// 00624d80  56                   push esi
// 00624d81  8bf1                 mov esi, ecx
// 00624d83  e808000000           call 0x624d90
// 00624d88  d94614               fld dword ptr [esi + 0x14]
// 00624d8b  5e                   pop esi
// 00624d8c  c3                   ret 
// library rbxgs/v8kernel\Cofm.cpp (function ?getMass@Cofm@RBX@@QBE?BMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Cofm.cpp
