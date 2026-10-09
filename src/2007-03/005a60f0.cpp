// roc 2007-03 005a60f0  unit: seg_005a0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a60f0
//
// 005a60f0  64a100000000         mov eax, dword ptr fs:[0]
// 005a60f6  6aff                 push -1
// 005a60f8  681e947500           push 0x75941e
// 005a60fd  50                   push eax
// 005a60fe  b801000000           mov eax, 1
// 005a6103  64892500000000       mov dword ptr fs:[0], esp
// 005a610a  8405d0f28b00         test byte ptr [0x8bf2d0], al
// 005a6110  7530                 jne 0x5a6142
// 005a6112  0905d0f28b00         or dword ptr [0x8bf2d0], eax
// 005a6118  6858597b00           push 0x7b5958
// 005a611d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a6125  e8363ae7ff           call 0x419b60
// 005a612a  50                   push eax
// 005a612b  b948f28b00           mov ecx, 0x8bf248
// 005a6130  e8abacfcff           call 0x570de0
// 005a6135  6810af7700           push 0x77af10
// 005a613a  e874900700           call 0x61f1b3
// 005a613f  83c404               add esp, 4
// 005a6142  8b0c24               mov ecx, dword ptr [esp]
// 005a6145  b848f28b00           mov eax, 0x8bf248
// 005a614a  64890d00000000       mov dword ptr fs:[0], ecx
// 005a6151  83c40c               add esp, 0xc
// 005a6154  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
