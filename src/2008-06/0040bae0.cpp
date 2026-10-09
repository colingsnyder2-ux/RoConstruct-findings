// roc 2008-06 0040bae0  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040bae0
//
// 0040bae0  64a100000000         mov eax, dword ptr fs:[0]
// 0040bae6  6aff                 push -1
// 0040bae8  680ed27b00           push 0x7bd20e
// 0040baed  50                   push eax
// 0040baee  b801000000           mov eax, 1
// 0040baf3  64892500000000       mov dword ptr fs:[0], esp
// 0040bafa  840560c89600         test byte ptr [0x96c860], al
// 0040bb00  7530                 jne 0x40bb32
// 0040bb02  090560c89600         or dword ptr [0x96c860], eax
// 0040bb08  6898009300           push 0x930098
// 0040bb0d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040bb15  e856ffffff           call 0x40ba70
// 0040bb1a  50                   push eax
// 0040bb1b  b9a0c79600           mov ecx, 0x96c7a0
// 0040bb20  e8cb4d1600           call 0x5708f0
// 0040bb25  6870a27f00           push 0x7fa270
// 0040bb2a  e8805c2900           call 0x6a17af
// 0040bb2f  83c404               add esp, 4
// 0040bb32  8b0c24               mov ecx, dword ptr [esp]
// 0040bb35  b8a0c79600           mov eax, 0x96c7a0
// 0040bb3a  64890d00000000       mov dword ptr fs:[0], ecx
// 0040bb41  83c40c               add esp, 0xc
// 0040bb44  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
