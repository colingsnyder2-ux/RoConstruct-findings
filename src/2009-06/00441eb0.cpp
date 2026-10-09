// roc 2009-06 00441eb0  unit: RBX::CRenderSettings::W4MaterialQuality::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00441eb0
//
// 00441eb0  64a100000000         mov eax, dword ptr fs:[0]
// 00441eb6  6aff                 push -1
// 00441eb8  689e038500           push 0x85039e
// 00441ebd  50                   push eax
// 00441ebe  b801000000           mov eax, 1
// 00441ec3  64892500000000       mov dword ptr fs:[0], esp
// 00441eca  840598a5a300         test byte ptr [0xa3a598], al
// 00441ed0  7530                 jne 0x441f02
// 00441ed2  090598a5a300         or dword ptr [0xa3a598], eax
// 00441ed8  6868608b00           push 0x8b6068
// 00441edd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00441ee5  e80686fcff           call 0x40a4f0
// 00441eea  50                   push eax
// 00441eeb  b9d8a4a300           mov ecx, 0xa3a4d8
// 00441ef0  e8eb781b00           call 0x5f97e0
// 00441ef5  6820478900           push 0x894720
// 00441efa  e8fc7b2d00           call 0x719afb
// 00441eff  83c404               add esp, 4
// 00441f02  8b0c24               mov ecx, dword ptr [esp]
// 00441f05  b8d8a4a300           mov eax, 0xa3a4d8
// 00441f0a  64890d00000000       mov dword ptr fs:[0], ecx
// 00441f11  83c40c               add esp, 0xc
// 00441f14  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
