// roc 2008-06 005c95e0  unit: RBX::LaserTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c95e0
//
// 005c95e0  64a100000000         mov eax, dword ptr fs:[0]
// 005c95e6  6aff                 push -1
// 005c95e8  689e517d00           push 0x7d519e
// 005c95ed  50                   push eax
// 005c95ee  b801000000           mov eax, 1
// 005c95f3  64892500000000       mov dword ptr fs:[0], esp
// 005c95fa  8405c8979700         test byte ptr [0x9797c8], al
// 005c9600  7530                 jne 0x5c9632
// 005c9602  0905c8979700         or dword ptr [0x9797c8], eax
// 005c9608  68c89b8300           push 0x839bc8
// 005c960d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c9615  e85646e9ff           call 0x45dc70
// 005c961a  50                   push eax
// 005c961b  b908979700           mov ecx, 0x979708
// 005c9620  e8cb72faff           call 0x5708f0
// 005c9625  6890ed7f00           push 0x7fed90
// 005c962a  e880810d00           call 0x6a17af
// 005c962f  83c404               add esp, 4
// 005c9632  8b0c24               mov ecx, dword ptr [esp]
// 005c9635  b808979700           mov eax, 0x979708
// 005c963a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9641  83c40c               add esp, 0xc
// 005c9644  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
