// roc 2007-03 0057a110  unit: seg_00570000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057a110
//
// 0057a110  64a100000000         mov eax, dword ptr fs:[0]
// 0057a116  6aff                 push -1
// 0057a118  68de677500           push 0x7567de
// 0057a11d  50                   push eax
// 0057a11e  b801000000           mov eax, 1
// 0057a123  64892500000000       mov dword ptr fs:[0], esp
// 0057a12a  8405e0d18b00         test byte ptr [0x8bd1e0], al
// 0057a130  7530                 jne 0x57a162
// 0057a132  0905e0d18b00         or dword ptr [0x8bd1e0], eax
// 0057a138  68b4ff8900           push 0x89ffb4
// 0057a13d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057a145  e8a6b5fbff           call 0x5356f0
// 0057a14a  50                   push eax
// 0057a14b  b958d18b00           mov ecx, 0x8bd158
// 0057a150  e88b6cffff           call 0x570de0
// 0057a155  68f0a17700           push 0x77a1f0
// 0057a15a  e854500a00           call 0x61f1b3
// 0057a15f  83c404               add esp, 4
// 0057a162  8b0c24               mov ecx, dword ptr [esp]
// 0057a165  b858d18b00           mov eax, 0x8bd158
// 0057a16a  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a171  83c40c               add esp, 0xc
// 0057a174  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
