// roc 2008-06 005c37a0  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c37a0
//
// 005c37a0  64a100000000         mov eax, dword ptr fs:[0]
// 005c37a6  6aff                 push -1
// 005c37a8  68be477d00           push 0x7d47be
// 005c37ad  50                   push eax
// 005c37ae  b801000000           mov eax, 1
// 005c37b3  64892500000000       mov dword ptr fs:[0], esp
// 005c37ba  840570919700         test byte ptr [0x979170], al
// 005c37c0  7530                 jne 0x5c37f2
// 005c37c2  090570919700         or dword ptr [0x979170], eax
// 005c37c8  68a0298400           push 0x8429a0
// 005c37cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c37d5  e866d1ffff           call 0x5c0940
// 005c37da  50                   push eax
// 005c37db  b9b0909700           mov ecx, 0x9790b0
// 005c37e0  e80bd1faff           call 0x5708f0
// 005c37e5  6860e77f00           push 0x7fe760
// 005c37ea  e8c0df0d00           call 0x6a17af
// 005c37ef  83c404               add esp, 4
// 005c37f2  8b0c24               mov ecx, dword ptr [esp]
// 005c37f5  b8b0909700           mov eax, 0x9790b0
// 005c37fa  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3801  83c40c               add esp, 0xc
// 005c3804  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
