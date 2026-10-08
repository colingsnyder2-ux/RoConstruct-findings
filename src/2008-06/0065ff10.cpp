// roc 2008-06 0065ff10  unit: seg_00650000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065ff10
//
// 0065ff10  56                   push esi
// 0065ff11  8bf1                 mov esi, ecx
// 0065ff13  e808000000           call 0x65ff20
// 0065ff18  d94614               fld dword ptr [esi + 0x14]
// 0065ff1b  5e                   pop esi
// 0065ff1c  c3                   ret 
// library rbxgs/v8kernel\Cofm.cpp (function ?getMass@Cofm@RBX@@QBE?BMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Cofm.cpp
