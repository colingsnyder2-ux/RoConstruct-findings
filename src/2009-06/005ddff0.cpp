// roc 2009-06 005ddff0  unit: RBX::VInstance::?$NonFactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ddff0
//
// 005ddff0  64a100000000         mov eax, dword ptr fs:[0]
// 005ddff6  6aff                 push -1
// 005ddff8  684e388600           push 0x86384e
// 005ddffd  50                   push eax
// 005ddffe  b801000000           mov eax, 1
// 005de003  64892500000000       mov dword ptr fs:[0], esp
// 005de00a  8405f045a400         test byte ptr [0xa445f0], al
// 005de010  7530                 jne 0x5de042
// 005de012  0905f045a400         or dword ptr [0xa445f0], eax
// 005de018  689004a000           push 0xa00490
// 005de01d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005de025  e8c6c4e2ff           call 0x40a4f0
// 005de02a  50                   push eax
// 005de02b  b93045a400           mov ecx, 0xa44530
// 005de030  e8abb70100           call 0x5f97e0
// 005de035  6870788900           push 0x897870
// 005de03a  e8bcba1300           call 0x719afb
// 005de03f  83c404               add esp, 4
// 005de042  8b0c24               mov ecx, dword ptr [esp]
// 005de045  b83045a400           mov eax, 0xa44530
// 005de04a  64890d00000000       mov dword ptr fs:[0], ecx
// 005de051  83c40c               add esp, 0xc
// 005de054  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
