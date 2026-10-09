// roc 2008-06 0060b700  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060b700
//
// 0060b700  64a100000000         mov eax, dword ptr fs:[0]
// 0060b706  6aff                 push -1
// 0060b708  682e8a7d00           push 0x7d8a2e
// 0060b70d  50                   push eax
// 0060b70e  b801000000           mov eax, 1
// 0060b713  64892500000000       mov dword ptr fs:[0], esp
// 0060b71a  8405d0ba9700         test byte ptr [0x97bad0], al
// 0060b720  7530                 jne 0x60b752
// 0060b722  0905d0ba9700         or dword ptr [0x97bad0], eax
// 0060b728  68b8298400           push 0x8429b8
// 0060b72d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0060b735  e89651fbff           call 0x5c08d0
// 0060b73a  50                   push eax
// 0060b73b  b910ba9700           mov ecx, 0x97ba10
// 0060b740  e8ab51f6ff           call 0x5708f0
// 0060b745  68d0028000           push 0x8002d0
// 0060b74a  e860600900           call 0x6a17af
// 0060b74f  83c404               add esp, 4
// 0060b752  8b0c24               mov ecx, dword ptr [esp]
// 0060b755  b810ba9700           mov eax, 0x97ba10
// 0060b75a  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b761  83c40c               add esp, 0xc
// 0060b764  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
