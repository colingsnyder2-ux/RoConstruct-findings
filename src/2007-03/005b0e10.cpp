// roc 2007-03 005b0e10  unit: seg_005b0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b0e10
//
// 005b0e10  64a100000000         mov eax, dword ptr fs:[0]
// 005b0e16  6aff                 push -1
// 005b0e18  68de9b7500           push 0x759bde
// 005b0e1d  50                   push eax
// 005b0e1e  b801000000           mov eax, 1
// 005b0e23  64892500000000       mov dword ptr fs:[0], esp
// 005b0e2a  840548f68b00         test byte ptr [0x8bf648], al
// 005b0e30  7530                 jne 0x5b0e62
// 005b0e32  090548f68b00         or dword ptr [0x8bf648], eax
// 005b0e38  68bc698a00           push 0x8a69bc
// 005b0e3d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b0e45  e8168de6ff           call 0x419b60
// 005b0e4a  50                   push eax
// 005b0e4b  b9c0f58b00           mov ecx, 0x8bf5c0
// 005b0e50  e88bfffbff           call 0x570de0
// 005b0e55  6810b17700           push 0x77b110
// 005b0e5a  e854e30600           call 0x61f1b3
// 005b0e5f  83c404               add esp, 4
// 005b0e62  8b0c24               mov ecx, dword ptr [esp]
// 005b0e65  b8c0f58b00           mov eax, 0x8bf5c0
// 005b0e6a  64890d00000000       mov dword ptr fs:[0], ecx
// 005b0e71  83c40c               add esp, 0xc
// 005b0e74  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
