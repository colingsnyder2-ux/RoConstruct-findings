// roc 2007-03 005dc260  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc260
//
// 005dc260  64a100000000         mov eax, dword ptr fs:[0]
// 005dc266  6aff                 push -1
// 005dc268  68eeb97500           push 0x75b9ee
// 005dc26d  50                   push eax
// 005dc26e  b801000000           mov eax, 1
// 005dc273  64892500000000       mov dword ptr fs:[0], esp
// 005dc27a  840538048c00         test byte ptr [0x8c0438], al
// 005dc280  7530                 jne 0x5dc2b2
// 005dc282  090538048c00         or dword ptr [0x8c0438], eax
// 005dc288  68409c8a00           push 0x8a9c40
// 005dc28d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005dc295  e8c6d8e3ff           call 0x419b60
// 005dc29a  50                   push eax
// 005dc29b  b9b0038c00           mov ecx, 0x8c03b0
// 005dc2a0  e83b4bf9ff           call 0x570de0
// 005dc2a5  68c0b87700           push 0x77b8c0
// 005dc2aa  e8042f0400           call 0x61f1b3
// 005dc2af  83c404               add esp, 4
// 005dc2b2  8b0c24               mov ecx, dword ptr [esp]
// 005dc2b5  b8b0038c00           mov eax, 0x8c03b0
// 005dc2ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc2c1  83c40c               add esp, 0xc
// 005dc2c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
