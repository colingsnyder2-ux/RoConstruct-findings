// roc 2008-06 005c3490  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3490
//
// 005c3490  64a100000000         mov eax, dword ptr fs:[0]
// 005c3496  6aff                 push -1
// 005c3498  68de467d00           push 0x7d46de
// 005c349d  50                   push eax
// 005c349e  b801000000           mov eax, 1
// 005c34a3  64892500000000       mov dword ptr fs:[0], esp
// 005c34aa  8405f88b9700         test byte ptr [0x978bf8], al
// 005c34b0  7530                 jne 0x5c34e2
// 005c34b2  0905f88b9700         or dword ptr [0x978bf8], eax
// 005c34b8  6848e08300           push 0x83e048
// 005c34bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c34c5  e806d4ffff           call 0x5c08d0
// 005c34ca  50                   push eax
// 005c34cb  b9388b9700           mov ecx, 0x978b38
// 005c34d0  e81bd4faff           call 0x5708f0
// 005c34d5  68d0e77f00           push 0x7fe7d0
// 005c34da  e8d0e20d00           call 0x6a17af
// 005c34df  83c404               add esp, 4
// 005c34e2  8b0c24               mov ecx, dword ptr [esp]
// 005c34e5  b8388b9700           mov eax, 0x978b38
// 005c34ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005c34f1  83c40c               add esp, 0xc
// 005c34f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
