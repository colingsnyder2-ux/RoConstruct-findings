// roc 2010-06 0074e720  unit: RBX::HUMAN::HumanoidState  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0074e720
//
// 0074e720  d905bca1a200         fld dword ptr [0xa2a1bc]
// 0074e726  c3                   ret 
// library rbxgs/v8kernel\Connector.cpp (function ?infinity@?$numeric_limits@M@std@@SAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Connector.cpp
