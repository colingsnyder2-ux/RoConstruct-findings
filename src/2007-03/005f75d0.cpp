// roc 2007-03 005f75d0  unit: seg_005f0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f75d0
//
// 005f75d0  56                   push esi
// 005f75d1  8bf1                 mov esi, ecx
// 005f75d3  e808000000           call 0x5f75e0
// 005f75d8  d94614               fld dword ptr [esi + 0x14]
// 005f75db  5e                   pop esi
// 005f75dc  c3                   ret 
// library rbxgs/v8kernel\Cofm.cpp (function ?getMass@Cofm@RBX@@QBE?BMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Cofm.cpp
