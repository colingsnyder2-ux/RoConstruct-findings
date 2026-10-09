// roc 2007-03 005dc620  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc620
//
// 005dc620  64a100000000         mov eax, dword ptr fs:[0]
// 005dc626  6aff                 push -1
// 005dc628  688eba7500           push 0x75ba8e
// 005dc62d  50                   push eax
// 005dc62e  b801000000           mov eax, 1
// 005dc633  64892500000000       mov dword ptr fs:[0], esp
// 005dc63a  840558058c00         test byte ptr [0x8c0558], al
// 005dc640  7530                 jne 0x5dc672
// 005dc642  090558058c00         or dword ptr [0x8c0558], eax
// 005dc648  68189c8a00           push 0x8a9c18
// 005dc64d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005dc655  e806d5e3ff           call 0x419b60
// 005dc65a  50                   push eax
// 005dc65b  b9d0048c00           mov ecx, 0x8c04d0
// 005dc660  e87b47f9ff           call 0x570de0
// 005dc665  68a0b87700           push 0x77b8a0
// 005dc66a  e8442b0400           call 0x61f1b3
// 005dc66f  83c404               add esp, 4
// 005dc672  8b0c24               mov ecx, dword ptr [esp]
// 005dc675  b8d0048c00           mov eax, 0x8c04d0
// 005dc67a  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc681  83c40c               add esp, 0xc
// 005dc684  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
