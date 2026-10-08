// roc 2007-08 00579ee0  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579ee0
//
// 00579ee0  64a100000000         mov eax, dword ptr fs:[0]
// 00579ee6  6aff                 push -1
// 00579ee8  68de547500           push 0x7554de
// 00579eed  50                   push eax
// 00579eee  b801000000           mov eax, 1
// 00579ef3  64892500000000       mov dword ptr fs:[0], esp
// 00579efa  8405302e8c00         test byte ptr [0x8c2e30], al
// 00579f00  7530                 jne 0x579f32
// 00579f02  0905302e8c00         or dword ptr [0x8c2e30], eax
// 00579f08  6844118a00           push 0x8a1144
// 00579f0d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00579f15  e876e7e9ff           call 0x418690
// 00579f1a  50                   push eax
// 00579f1b  b9a82d8c00           mov ecx, 0x8c2da8
// 00579f20  e8db6cffff           call 0x570c00
// 00579f25  6860a47700           push 0x77a460
// 00579f2a  e8f46d0b00           call 0x630d23
// 00579f2f  83c404               add esp, 4
// 00579f32  8b0c24               mov ecx, dword ptr [esp]
// 00579f35  b8a82d8c00           mov eax, 0x8c2da8
// 00579f3a  64890d00000000       mov dword ptr fs:[0], ecx
// 00579f41  83c40c               add esp, 0xc
// 00579f44  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
