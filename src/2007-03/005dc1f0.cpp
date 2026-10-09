// roc 2007-03 005dc1f0  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc1f0
//
// 005dc1f0  64a100000000         mov eax, dword ptr fs:[0]
// 005dc1f6  6aff                 push -1
// 005dc1f8  68ceb97500           push 0x75b9ce
// 005dc1fd  50                   push eax
// 005dc1fe  b801000000           mov eax, 1
// 005dc203  64892500000000       mov dword ptr fs:[0], esp
// 005dc20a  8405a8038c00         test byte ptr [0x8c03a8], al
// 005dc210  7530                 jne 0x5dc242
// 005dc212  0905a8038c00         or dword ptr [0x8c03a8], eax
// 005dc218  68349c8a00           push 0x8a9c34
// 005dc21d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005dc225  e836d9e3ff           call 0x419b60
// 005dc22a  50                   push eax
// 005dc22b  b920038c00           mov ecx, 0x8c0320
// 005dc230  e8ab4bf9ff           call 0x570de0
// 005dc235  68d0b87700           push 0x77b8d0
// 005dc23a  e8742f0400           call 0x61f1b3
// 005dc23f  83c404               add esp, 4
// 005dc242  8b0c24               mov ecx, dword ptr [esp]
// 005dc245  b820038c00           mov eax, 0x8c0320
// 005dc24a  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc251  83c40c               add esp, 0xc
// 005dc254  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
