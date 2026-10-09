// roc 2008-06 00556430  unit: RBX::VRunService::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00556430
//
// 00556430  64a100000000         mov eax, dword ptr fs:[0]
// 00556436  6aff                 push -1
// 00556438  68fede7c00           push 0x7cdefe
// 0055643d  50                   push eax
// 0055643e  b801000000           mov eax, 1
// 00556443  64892500000000       mov dword ptr fs:[0], esp
// 0055644a  8405f03a9700         test byte ptr [0x973af0], al
// 00556450  7530                 jne 0x556482
// 00556452  0905f03a9700         or dword ptr [0x973af0], eax
// 00556458  6828d38200           push 0x82d328
// 0055645d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00556465  e81649ebff           call 0x40ad80
// 0055646a  50                   push eax
// 0055646b  b9303a9700           mov ecx, 0x973a30
// 00556470  e87ba40100           call 0x5708f0
// 00556475  6840c77f00           push 0x7fc740
// 0055647a  e830b31400           call 0x6a17af
// 0055647f  83c404               add esp, 4
// 00556482  8b0c24               mov ecx, dword ptr [esp]
// 00556485  b8303a9700           mov eax, 0x973a30
// 0055648a  64890d00000000       mov dword ptr fs:[0], ecx
// 00556491  83c40c               add esp, 0xc
// 00556494  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
