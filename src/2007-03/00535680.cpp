// roc 2007-03 00535680  unit: seg_00530000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00535680
//
// 00535680  64a100000000         mov eax, dword ptr fs:[0]
// 00535686  6aff                 push -1
// 00535688  68be187500           push 0x7518be
// 0053568d  50                   push eax
// 0053568e  b801000000           mov eax, 1
// 00535693  64892500000000       mov dword ptr fs:[0], esp
// 0053569a  840580b58b00         test byte ptr [0x8bb580], al
// 005356a0  7530                 jne 0x5356d2
// 005356a2  090580b58b00         or dword ptr [0x8bb580], eax
// 005356a8  68588d7b00           push 0x7b8d58
// 005356ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005356b5  e8a644eeff           call 0x419b60
// 005356ba  50                   push eax
// 005356bb  b9f8b48b00           mov ecx, 0x8bb4f8
// 005356c0  e81bb70300           call 0x570de0
// 005356c5  6880947700           push 0x779480
// 005356ca  e8e49a0e00           call 0x61f1b3
// 005356cf  83c404               add esp, 4
// 005356d2  8b0c24               mov ecx, dword ptr [esp]
// 005356d5  b8f8b48b00           mov eax, 0x8bb4f8
// 005356da  64890d00000000       mov dword ptr fs:[0], ecx
// 005356e1  83c40c               add esp, 0xc
// 005356e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
