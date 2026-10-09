// roc 2008-06 00636a10  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636a10
//
// 00636a10  64a100000000         mov eax, dword ptr fs:[0]
// 00636a16  6aff                 push -1
// 00636a18  68cea07d00           push 0x7da0ce
// 00636a1d  50                   push eax
// 00636a1e  b801000000           mov eax, 1
// 00636a23  64892500000000       mov dword ptr fs:[0], esp
// 00636a2a  840510cd9700         test byte ptr [0x97cd10], al
// 00636a30  7530                 jne 0x636a62
// 00636a32  090510cd9700         or dword ptr [0x97cd10], eax
// 00636a38  68e4d99500           push 0x95d9e4
// 00636a3d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00636a45  e83643ddff           call 0x40ad80
// 00636a4a  50                   push eax
// 00636a4b  b950cc9700           mov ecx, 0x97cc50
// 00636a50  e89b9ef3ff           call 0x5708f0
// 00636a55  68000c8000           push 0x800c00
// 00636a5a  e850ad0600           call 0x6a17af
// 00636a5f  83c404               add esp, 4
// 00636a62  8b0c24               mov ecx, dword ptr [esp]
// 00636a65  b850cc9700           mov eax, 0x97cc50
// 00636a6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00636a71  83c40c               add esp, 0xc
// 00636a74  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
