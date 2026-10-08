// roc 2011-06 004506e0  unit: RBXImage  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004506e0
//
// 004506e0  8bc1                 mov eax, ecx
// 004506e2  33c9                 xor ecx, ecx
// 004506e4  894808               mov dword ptr [eax + 8], ecx
// 004506e7  89480c               mov dword ptr [eax + 0xc], ecx
// 004506ea  894810               mov dword ptr [eax + 0x10], ecx
// 004506ed  c3                   ret 
// library rbxgs/v8datamodel\RootInstance.cpp (function ??0ICameraOwner@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
