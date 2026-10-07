// roc 2008-06 0040abb0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040abb0
//
// 0040abb0  803900               cmp byte ptr [ecx], 0
// 0040abb3  7403                 je 0x40abb8
// 0040abb5  c60100               mov byte ptr [ecx], 0
// 0040abb8  c3                   ret 
// library rbxgs/humanoid\FallingDown.cpp (function ?destroy@?$optional_base@Uunusable@detail@signals@boost@@@optional_detail@boost@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
