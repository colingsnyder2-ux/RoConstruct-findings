// roc 2007-08 005912a0  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005912a0
//
// 005912a0  64a100000000         mov eax, dword ptr fs:[0]
// 005912a6  6aff                 push -1
// 005912a8  683e6d7500           push 0x756d3e
// 005912ad  50                   push eax
// 005912ae  b801000000           mov eax, 1
// 005912b3  64892500000000       mov dword ptr fs:[0], esp
// 005912ba  8405a04b8c00         test byte ptr [0x8c4ba0], al
// 005912c0  7530                 jne 0x5912f2
// 005912c2  0905a04b8c00         or dword ptr [0x8c4ba0], eax
// 005912c8  6894ee8a00           push 0x8aee94
// 005912cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005912d5  e8265efeff           call 0x577100
// 005912da  50                   push eax
// 005912db  b9184b8c00           mov ecx, 0x8c4b18
// 005912e0  e81bf9fdff           call 0x570c00
// 005912e5  6890a97700           push 0x77a990
// 005912ea  e834fa0900           call 0x630d23
// 005912ef  83c404               add esp, 4
// 005912f2  8b0c24               mov ecx, dword ptr [esp]
// 005912f5  b8184b8c00           mov eax, 0x8c4b18
// 005912fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00591301  83c40c               add esp, 0xc
// 00591304  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
