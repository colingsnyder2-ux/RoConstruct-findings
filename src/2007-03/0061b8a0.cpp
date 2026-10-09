// roc 2007-03 0061b8a0  unit: seg_00610000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061b8a0
//
// 0061b8a0  64a100000000         mov eax, dword ptr fs:[0]
// 0061b8a6  6aff                 push -1
// 0061b8a8  68dedc7500           push 0x75dcde
// 0061b8ad  50                   push eax
// 0061b8ae  b801000000           mov eax, 1
// 0061b8b3  64892500000000       mov dword ptr fs:[0], esp
// 0061b8ba  84052c138c00         test byte ptr [0x8c132c], al
// 0061b8c0  7530                 jne 0x61b8f2
// 0061b8c2  09052c138c00         or dword ptr [0x8c132c], eax
// 0061b8c8  6aff                 push -1
// 0061b8ca  68c8217c00           push 0x7c21c8
// 0061b8cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061b8d7  e80420f1ff           call 0x52d8e0
// 0061b8dc  83c408               add esp, 8
// 0061b8df  a328138c00           mov dword ptr [0x8c1328], eax
// 0061b8e4  8b0c24               mov ecx, dword ptr [esp]
// 0061b8e7  64890d00000000       mov dword ptr fs:[0], ecx
// 0061b8ee  83c40c               add esp, 0xc
// 0061b8f1  c3                   ret 
// 0061b8f2  8b0c24               mov ecx, dword ptr [esp]
// 0061b8f5  a128138c00           mov eax, dword ptr [0x8c1328]
// 0061b8fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0061b901  83c40c               add esp, 0xc
// 0061b904  c3                   ret 
// library openrbx-client/App\humanoid\Flying.cpp (function ??$doDeclare@$1?sFlying@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Flying.cpp
