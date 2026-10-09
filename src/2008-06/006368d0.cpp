// roc 2008-06 006368d0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006368d0
//
// 006368d0  64a100000000         mov eax, dword ptr fs:[0]
// 006368d6  6aff                 push -1
// 006368d8  68aea07d00           push 0x7da0ae
// 006368dd  50                   push eax
// 006368de  b801000000           mov eax, 1
// 006368e3  64892500000000       mov dword ptr fs:[0], esp
// 006368ea  840548cc9700         test byte ptr [0x97cc48], al
// 006368f0  7530                 jne 0x636922
// 006368f2  090548cc9700         or dword ptr [0x97cc48], eax
// 006368f8  68d8d99500           push 0x95d9d8
// 006368fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00636905  e87644ddff           call 0x40ad80
// 0063690a  50                   push eax
// 0063690b  b988cb9700           mov ecx, 0x97cb88
// 00636910  e8db9ff3ff           call 0x5708f0
// 00636915  68100c8000           push 0x800c10
// 0063691a  e890ae0600           call 0x6a17af
// 0063691f  83c404               add esp, 4
// 00636922  8b0c24               mov ecx, dword ptr [esp]
// 00636925  b888cb9700           mov eax, 0x97cb88
// 0063692a  64890d00000000       mov dword ptr fs:[0], ecx
// 00636931  83c40c               add esp, 0xc
// 00636934  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
