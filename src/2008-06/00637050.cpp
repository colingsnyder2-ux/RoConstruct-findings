// roc 2008-06 00637050  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637050
//
// 00637050  64a100000000         mov eax, dword ptr fs:[0]
// 00637056  6aff                 push -1
// 00637058  688ea17d00           push 0x7da18e
// 0063705d  50                   push eax
// 0063705e  b801000000           mov eax, 1
// 00637063  64892500000000       mov dword ptr fs:[0], esp
// 0063706a  8405f8d09700         test byte ptr [0x97d0f8], al
// 00637070  7530                 jne 0x6370a2
// 00637072  0905f8d09700         or dword ptr [0x97d0f8], eax
// 00637078  6824da9500           push 0x95da24
// 0063707d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00637085  e8f63cddff           call 0x40ad80
// 0063708a  50                   push eax
// 0063708b  b938d09700           mov ecx, 0x97d038
// 00637090  e85b98f3ff           call 0x5708f0
// 00637095  68b00b8000           push 0x800bb0
// 0063709a  e810a70600           call 0x6a17af
// 0063709f  83c404               add esp, 4
// 006370a2  8b0c24               mov ecx, dword ptr [esp]
// 006370a5  b838d09700           mov eax, 0x97d038
// 006370aa  64890d00000000       mov dword ptr fs:[0], ecx
// 006370b1  83c40c               add esp, 0xc
// 006370b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
