// roc 2007-03 005a1f50  unit: seg_005a0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a1f50
//
// 005a1f50  64a100000000         mov eax, dword ptr fs:[0]
// 005a1f56  6aff                 push -1
// 005a1f58  687e8f7500           push 0x758f7e
// 005a1f5d  50                   push eax
// 005a1f5e  b801000000           mov eax, 1
// 005a1f63  64892500000000       mov dword ptr fs:[0], esp
// 005a1f6a  8405c8ee8b00         test byte ptr [0x8beec8], al
// 005a1f70  7530                 jne 0x5a1fa2
// 005a1f72  0905c8ee8b00         or dword ptr [0x8beec8], eax
// 005a1f78  6820457b00           push 0x7b4520
// 005a1f7d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a1f85  e8d67be7ff           call 0x419b60
// 005a1f8a  50                   push eax
// 005a1f8b  b940ee8b00           mov ecx, 0x8bee40
// 005a1f90  e84beefcff           call 0x570de0
// 005a1f95  6840ad7700           push 0x77ad40
// 005a1f9a  e814d20700           call 0x61f1b3
// 005a1f9f  83c404               add esp, 4
// 005a1fa2  8b0c24               mov ecx, dword ptr [esp]
// 005a1fa5  b840ee8b00           mov eax, 0x8bee40
// 005a1faa  64890d00000000       mov dword ptr fs:[0], ecx
// 005a1fb1  83c40c               add esp, 0xc
// 005a1fb4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
