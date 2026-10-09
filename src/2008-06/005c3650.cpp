// roc 2008-06 005c3650  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3650
//
// 005c3650  64a100000000         mov eax, dword ptr fs:[0]
// 005c3656  6aff                 push -1
// 005c3658  685e477d00           push 0x7d475e
// 005c365d  50                   push eax
// 005c365e  b801000000           mov eax, 1
// 005c3663  64892500000000       mov dword ptr fs:[0], esp
// 005c366a  8405188f9700         test byte ptr [0x978f18], al
// 005c3670  7530                 jne 0x5c36a2
// 005c3672  0905188f9700         or dword ptr [0x978f18], eax
// 005c3678  6868e08300           push 0x83e068
// 005c367d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c3685  e846d2ffff           call 0x5c08d0
// 005c368a  50                   push eax
// 005c368b  b9588e9700           mov ecx, 0x978e58
// 005c3690  e85bd2faff           call 0x5708f0
// 005c3695  6890e77f00           push 0x7fe790
// 005c369a  e810e10d00           call 0x6a17af
// 005c369f  83c404               add esp, 4
// 005c36a2  8b0c24               mov ecx, dword ptr [esp]
// 005c36a5  b8588e9700           mov eax, 0x978e58
// 005c36aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005c36b1  83c40c               add esp, 0xc
// 005c36b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
