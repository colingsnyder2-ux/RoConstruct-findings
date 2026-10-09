// roc 2008-06 005c3730  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3730
//
// 005c3730  64a100000000         mov eax, dword ptr fs:[0]
// 005c3736  6aff                 push -1
// 005c3738  689e477d00           push 0x7d479e
// 005c373d  50                   push eax
// 005c373e  b801000000           mov eax, 1
// 005c3743  64892500000000       mov dword ptr fs:[0], esp
// 005c374a  8405a8909700         test byte ptr [0x9790a8], al
// 005c3750  7530                 jne 0x5c3782
// 005c3752  0905a8909700         or dword ptr [0x9790a8], eax
// 005c3758  68a8298400           push 0x8429a8
// 005c375d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c3765  e8d6d1ffff           call 0x5c0940
// 005c376a  50                   push eax
// 005c376b  b9e88f9700           mov ecx, 0x978fe8
// 005c3770  e87bd1faff           call 0x5708f0
// 005c3775  6870e77f00           push 0x7fe770
// 005c377a  e830e00d00           call 0x6a17af
// 005c377f  83c404               add esp, 4
// 005c3782  8b0c24               mov ecx, dword ptr [esp]
// 005c3785  b8e88f9700           mov eax, 0x978fe8
// 005c378a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3791  83c40c               add esp, 0xc
// 005c3794  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
