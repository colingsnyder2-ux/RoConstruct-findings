// roc 2007-03 005e1d00  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1d00
//
// 005e1d00  64a100000000         mov eax, dword ptr fs:[0]
// 005e1d06  6aff                 push -1
// 005e1d08  68bebd7500           push 0x75bdbe
// 005e1d0d  50                   push eax
// 005e1d0e  b801000000           mov eax, 1
// 005e1d13  64892500000000       mov dword ptr fs:[0], esp
// 005e1d1a  8405980a8c00         test byte ptr [0x8c0a98], al
// 005e1d20  7530                 jne 0x5e1d52
// 005e1d22  0905980a8c00         or dword ptr [0x8c0a98], eax
// 005e1d28  6880aa8a00           push 0x8aaa80
// 005e1d2d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e1d35  e8267ee3ff           call 0x419b60
// 005e1d3a  50                   push eax
// 005e1d3b  b9100a8c00           mov ecx, 0x8c0a10
// 005e1d40  e89bf0f8ff           call 0x570de0
// 005e1d45  68a0ba7700           push 0x77baa0
// 005e1d4a  e864d40300           call 0x61f1b3
// 005e1d4f  83c404               add esp, 4
// 005e1d52  8b0c24               mov ecx, dword ptr [esp]
// 005e1d55  b8100a8c00           mov eax, 0x8c0a10
// 005e1d5a  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1d61  83c40c               add esp, 0xc
// 005e1d64  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
