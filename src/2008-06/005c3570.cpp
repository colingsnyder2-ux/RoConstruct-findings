// roc 2008-06 005c3570  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3570
//
// 005c3570  64a100000000         mov eax, dword ptr fs:[0]
// 005c3576  6aff                 push -1
// 005c3578  681e477d00           push 0x7d471e
// 005c357d  50                   push eax
// 005c357e  b801000000           mov eax, 1
// 005c3583  64892500000000       mov dword ptr fs:[0], esp
// 005c358a  8405888d9700         test byte ptr [0x978d88], al
// 005c3590  7530                 jne 0x5c35c2
// 005c3592  0905888d9700         or dword ptr [0x978d88], eax
// 005c3598  6858e08300           push 0x83e058
// 005c359d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c35a5  e826d3ffff           call 0x5c08d0
// 005c35aa  50                   push eax
// 005c35ab  b9c88c9700           mov ecx, 0x978cc8
// 005c35b0  e83bd3faff           call 0x5708f0
// 005c35b5  68b0e77f00           push 0x7fe7b0
// 005c35ba  e8f0e10d00           call 0x6a17af
// 005c35bf  83c404               add esp, 4
// 005c35c2  8b0c24               mov ecx, dword ptr [esp]
// 005c35c5  b8c88c9700           mov eax, 0x978cc8
// 005c35ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005c35d1  83c40c               add esp, 0xc
// 005c35d4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
