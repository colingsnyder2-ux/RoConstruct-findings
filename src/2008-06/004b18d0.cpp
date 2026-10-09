// roc 2008-06 004b18d0  unit: RBX::PAVMotor::?$sp_counted_impl_pd  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b18d0
//
// 004b18d0  64a100000000         mov eax, dword ptr fs:[0]
// 004b18d6  6aff                 push -1
// 004b18d8  680e877c00           push 0x7c870e
// 004b18dd  50                   push eax
// 004b18de  b801000000           mov eax, 1
// 004b18e3  64892500000000       mov dword ptr fs:[0], esp
// 004b18ea  840558159700         test byte ptr [0x971558], al
// 004b18f0  7530                 jne 0x4b1922
// 004b18f2  090558159700         or dword ptr [0x971558], eax
// 004b18f8  68f8448200           push 0x8244f8
// 004b18fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004b1905  e81694f5ff           call 0x40ad20
// 004b190a  50                   push eax
// 004b190b  b998149700           mov ecx, 0x971498
// 004b1910  e8dbef0b00           call 0x5708f0
// 004b1915  68c0bf7f00           push 0x7fbfc0
// 004b191a  e890fe1e00           call 0x6a17af
// 004b191f  83c404               add esp, 4
// 004b1922  8b0c24               mov ecx, dword ptr [esp]
// 004b1925  b898149700           mov eax, 0x971498
// 004b192a  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1931  83c40c               add esp, 0xc
// 004b1934  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
