// roc 2007-03 00588980  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588980
//
// 00588980  64a100000000         mov eax, dword ptr fs:[0]
// 00588986  6aff                 push -1
// 00588988  681e767500           push 0x75761e
// 0058898d  50                   push eax
// 0058898e  b801000000           mov eax, 1
// 00588993  64892500000000       mov dword ptr fs:[0], esp
// 0058899a  840548e08b00         test byte ptr [0x8be048], al
// 005889a0  7530                 jne 0x5889d2
// 005889a2  090548e08b00         or dword ptr [0x8be048], eax
// 005889a8  68f85c7b00           push 0x7b5cf8
// 005889ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005889b5  e8a611e9ff           call 0x419b60
// 005889ba  50                   push eax
// 005889bb  b9c0df8b00           mov ecx, 0x8bdfc0
// 005889c0  e81b84feff           call 0x570de0
// 005889c5  6830a67700           push 0x77a630
// 005889ca  e8e4670900           call 0x61f1b3
// 005889cf  83c404               add esp, 4
// 005889d2  8b0c24               mov ecx, dword ptr [esp]
// 005889d5  b8c0df8b00           mov eax, 0x8bdfc0
// 005889da  64890d00000000       mov dword ptr fs:[0], ecx
// 005889e1  83c40c               add esp, 0xc
// 005889e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
