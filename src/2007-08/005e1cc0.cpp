// roc 2007-08 005e1cc0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e1cc0
//
// 005e1cc0  8bc1                 mov eax, ecx
// 005e1cc2  8b4808               mov ecx, dword ptr [eax + 8]
// 005e1cc5  85c9                 test ecx, ecx
// 005e1cc7  7405                 je 0x5e1cce
// 005e1cc9  e9f2ffffff           jmp 0x5e1cc0
// 005e1cce  c3                   ret 
// library rbxgs/v8kernel\Body.cpp (function ?calcRoot@Body@RBX@@AAEPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
