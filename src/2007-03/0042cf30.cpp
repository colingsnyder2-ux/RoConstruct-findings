// roc 2007-03 0042cf30  unit: seg_00420000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042cf30
//
// 0042cf30  803900               cmp byte ptr [ecx], 0
// 0042cf33  7403                 je 0x42cf38
// 0042cf35  c60100               mov byte ptr [ecx], 0
// 0042cf38  c3                   ret 
// library rbxgs/humanoid\FallingDown.cpp (function ?destroy@?$optional_base@Uunusable@detail@signals@boost@@@optional_detail@boost@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
