// roc 2007-03 005788f0  unit: seg_00570000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005788f0
//
// 005788f0  64a100000000         mov eax, dword ptr fs:[0]
// 005788f6  6aff                 push -1
// 005788f8  688e667500           push 0x75668e
// 005788fd  50                   push eax
// 005788fe  b801000000           mov eax, 1
// 00578903  64892500000000       mov dword ptr fs:[0], esp
// 0057890a  8405d8d08b00         test byte ptr [0x8bd0d8], al
// 00578910  7530                 jne 0x578942
// 00578912  0905d8d08b00         or dword ptr [0x8bd0d8], eax
// 00578918  682cf98900           push 0x89f92c
// 0057891d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00578925  e83612eaff           call 0x419b60
// 0057892a  50                   push eax
// 0057892b  b950d08b00           mov ecx, 0x8bd050
// 00578930  e8ab84ffff           call 0x570de0
// 00578935  68d0a17700           push 0x77a1d0
// 0057893a  e874680a00           call 0x61f1b3
// 0057893f  83c404               add esp, 4
// 00578942  8b0c24               mov ecx, dword ptr [esp]
// 00578945  b850d08b00           mov eax, 0x8bd050
// 0057894a  64890d00000000       mov dword ptr fs:[0], ecx
// 00578951  83c40c               add esp, 0xc
// 00578954  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
