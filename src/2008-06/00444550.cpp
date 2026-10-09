// roc 2008-06 00444550  unit: RBX::MergeBinder  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00444550
//
// 00444550  64a100000000         mov eax, dword ptr fs:[0]
// 00444556  6aff                 push -1
// 00444558  685e0d7c00           push 0x7c0d5e
// 0044455d  50                   push eax
// 0044455e  b801000000           mov eax, 1
// 00444563  64892500000000       mov dword ptr fs:[0], esp
// 0044456a  840598d29600         test byte ptr [0x96d298], al
// 00444570  7530                 jne 0x4445a2
// 00444572  090598d29600         or dword ptr [0x96d298], eax
// 00444578  6850009300           push 0x930050
// 0044457d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00444585  e8f667fcff           call 0x40ad80
// 0044458a  50                   push eax
// 0044458b  b9d8d19600           mov ecx, 0x96d1d8
// 00444590  e85bc31200           call 0x5708f0
// 00444595  6880ab7f00           push 0x7fab80
// 0044459a  e810d22500           call 0x6a17af
// 0044459f  83c404               add esp, 4
// 004445a2  8b0c24               mov ecx, dword ptr [esp]
// 004445a5  b8d8d19600           mov eax, 0x96d1d8
// 004445aa  64890d00000000       mov dword ptr fs:[0], ecx
// 004445b1  83c40c               add esp, 0xc
// 004445b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
