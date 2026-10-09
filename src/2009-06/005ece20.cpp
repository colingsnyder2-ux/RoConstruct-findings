// roc 2009-06 005ece20  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ece20
//
// 005ece20  64a100000000         mov eax, dword ptr fs:[0]
// 005ece26  6aff                 push -1
// 005ece28  68be568600           push 0x8656be
// 005ece2d  50                   push eax
// 005ece2e  b801000000           mov eax, 1
// 005ece33  64892500000000       mov dword ptr fs:[0], esp
// 005ece3a  8405f88da400         test byte ptr [0xa48df8], al
// 005ece40  7530                 jne 0x5ece72
// 005ece42  0905f88da400         or dword ptr [0xa48df8], eax
// 005ece48  6894afa100           push 0xa1af94
// 005ece4d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ece55  e896d6e1ff           call 0x40a4f0
// 005ece5a  50                   push eax
// 005ece5b  b9388da400           mov ecx, 0xa48d38
// 005ece60  e87bc90000           call 0x5f97e0
// 005ece65  6880848900           push 0x898480
// 005ece6a  e88ccc1200           call 0x719afb
// 005ece6f  83c404               add esp, 4
// 005ece72  8b0c24               mov ecx, dword ptr [esp]
// 005ece75  b8388da400           mov eax, 0xa48d38
// 005ece7a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ece81  83c40c               add esp, 0xc
// 005ece84  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
