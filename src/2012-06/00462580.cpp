// roc 2012-06 00462580  unit: RBXImage  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00462580
//
// 00462580  8bc1                 mov eax, ecx
// 00462582  33c9                 xor ecx, ecx
// 00462584  894808               mov dword ptr [eax + 8], ecx
// 00462587  89480c               mov dword ptr [eax + 0xc], ecx
// 0046258a  894810               mov dword ptr [eax + 0x10], ecx
// 0046258d  c3                   ret 
// library rbxgs/v8datamodel\RootInstance.cpp (function ??0ICameraOwner@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
