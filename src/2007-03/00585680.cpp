// roc 2007-03 00585680  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00585680
//
// 00585680  64a100000000         mov eax, dword ptr fs:[0]
// 00585686  6aff                 push -1
// 00585688  686e707500           push 0x75706e
// 0058568d  50                   push eax
// 0058568e  b801000000           mov eax, 1
// 00585693  64892500000000       mov dword ptr fs:[0], esp
// 0058569a  840570d78b00         test byte ptr [0x8bd770], al
// 005856a0  7530                 jne 0x5856d2
// 005856a2  090570d78b00         or dword ptr [0x8bd770], eax
// 005856a8  68f0098a00           push 0x8a09f0
// 005856ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005856b5  e8a644e9ff           call 0x419b60
// 005856ba  50                   push eax
// 005856bb  b9e8d68b00           mov ecx, 0x8bd6e8
// 005856c0  e81bb7feff           call 0x570de0
// 005856c5  6890a47700           push 0x77a490
// 005856ca  e8e49a0900           call 0x61f1b3
// 005856cf  83c404               add esp, 4
// 005856d2  8b0c24               mov ecx, dword ptr [esp]
// 005856d5  b8e8d68b00           mov eax, 0x8bd6e8
// 005856da  64890d00000000       mov dword ptr fs:[0], ecx
// 005856e1  83c40c               add esp, 0xc
// 005856e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
