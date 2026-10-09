// roc 2008-06 005788c0  unit: RBX::VTool::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005788c0
//
// 005788c0  64a100000000         mov eax, dword ptr fs:[0]
// 005788c6  6aff                 push -1
// 005788c8  682e087d00           push 0x7d082e
// 005788cd  50                   push eax
// 005788ce  b801000000           mov eax, 1
// 005788d3  64892500000000       mov dword ptr fs:[0], esp
// 005788da  8405f8529700         test byte ptr [0x9752f8], al
// 005788e0  7530                 jne 0x578912
// 005788e2  0905f8529700         or dword ptr [0x9752f8], eax
// 005788e8  6858fd8200           push 0x82fd58
// 005788ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005788f5  e8a660f2ff           call 0x49e9a0
// 005788fa  50                   push eax
// 005788fb  b938529700           mov ecx, 0x975238
// 00578900  e8eb7fffff           call 0x5708f0
// 00578905  68e0d37f00           push 0x7fd3e0
// 0057890a  e8a08e1200           call 0x6a17af
// 0057890f  83c404               add esp, 4
// 00578912  8b0c24               mov ecx, dword ptr [esp]
// 00578915  b838529700           mov eax, 0x975238
// 0057891a  64890d00000000       mov dword ptr fs:[0], ecx
// 00578921  83c40c               add esp, 0xc
// 00578924  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
