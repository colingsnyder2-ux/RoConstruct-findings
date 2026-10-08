// roc 2007-08 005e0640  unit: RBX::VMotorFeature::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e0640
//
// 005e0640  51                   push ecx
// 005e0641  83ec08               sub esp, 8
// 005e0644  8bc4                 mov eax, esp
// 005e0646  89642408             mov dword ptr [esp + 8], esp
// 005e064a  50                   push eax
// 005e064b  e8a0c10100           call 0x5fc7f0
// 005e0650  e89b36f9ff           call 0x573cf0
// 005e0655  83c40c               add esp, 0xc
// 005e0658  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ?mousePartAlive@MegaDragger@RBX@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
