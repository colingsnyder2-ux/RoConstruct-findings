// roc 2008-06 0058a2a0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058a2a0
//
// 0058a2a0  64a100000000         mov eax, dword ptr fs:[0]
// 0058a2a6  6aff                 push -1
// 0058a2a8  68ee157d00           push 0x7d15ee
// 0058a2ad  50                   push eax
// 0058a2ae  b801000000           mov eax, 1
// 0058a2b3  64892500000000       mov dword ptr fs:[0], esp
// 0058a2ba  8405e8599700         test byte ptr [0x9759e8], al
// 0058a2c0  7530                 jne 0x58a2f2
// 0058a2c2  0905e8599700         or dword ptr [0x9759e8], eax
// 0058a2c8  68f88d9400           push 0x948df8
// 0058a2cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058a2d5  e8a60ae8ff           call 0x40ad80
// 0058a2da  50                   push eax
// 0058a2db  b928599700           mov ecx, 0x975928
// 0058a2e0  e80b66feff           call 0x5708f0
// 0058a2e5  6830d97f00           push 0x7fd930
// 0058a2ea  e8c0741100           call 0x6a17af
// 0058a2ef  83c404               add esp, 4
// 0058a2f2  8b0c24               mov ecx, dword ptr [esp]
// 0058a2f5  b828599700           mov eax, 0x975928
// 0058a2fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a301  83c40c               add esp, 0xc
// 0058a304  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
