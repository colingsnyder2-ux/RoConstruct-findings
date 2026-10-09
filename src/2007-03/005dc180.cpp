// roc 2007-03 005dc180  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc180
//
// 005dc180  64a100000000         mov eax, dword ptr fs:[0]
// 005dc186  6aff                 push -1
// 005dc188  68aeb97500           push 0x75b9ae
// 005dc18d  50                   push eax
// 005dc18e  b801000000           mov eax, 1
// 005dc193  64892500000000       mov dword ptr fs:[0], esp
// 005dc19a  840518038c00         test byte ptr [0x8c0318], al
// 005dc1a0  7530                 jne 0x5dc1d2
// 005dc1a2  090518038c00         or dword ptr [0x8c0318], eax
// 005dc1a8  68289c8a00           push 0x8a9c28
// 005dc1ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005dc1b5  e8a6d9e3ff           call 0x419b60
// 005dc1ba  50                   push eax
// 005dc1bb  b990028c00           mov ecx, 0x8c0290
// 005dc1c0  e81b4cf9ff           call 0x570de0
// 005dc1c5  68e0b87700           push 0x77b8e0
// 005dc1ca  e8e42f0400           call 0x61f1b3
// 005dc1cf  83c404               add esp, 4
// 005dc1d2  8b0c24               mov ecx, dword ptr [esp]
// 005dc1d5  b890028c00           mov eax, 0x8c0290
// 005dc1da  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc1e1  83c40c               add esp, 0xc
// 005dc1e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
