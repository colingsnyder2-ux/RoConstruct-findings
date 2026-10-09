// roc 2007-03 006034b0  unit: seg_00600000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006034b0
//
// 006034b0  64a100000000         mov eax, dword ptr fs:[0]
// 006034b6  6aff                 push -1
// 006034b8  683ec97500           push 0x75c93e
// 006034bd  50                   push eax
// 006034be  b801000000           mov eax, 1
// 006034c3  64892500000000       mov dword ptr fs:[0], esp
// 006034ca  8405b00f8c00         test byte ptr [0x8c0fb0], al
// 006034d0  7530                 jne 0x603502
// 006034d2  0905b00f8c00         or dword ptr [0x8c0fb0], eax
// 006034d8  6808e48a00           push 0x8ae408
// 006034dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006034e5  e87666e1ff           call 0x419b60
// 006034ea  50                   push eax
// 006034eb  b9280f8c00           mov ecx, 0x8c0f28
// 006034f0  e8ebd8f6ff           call 0x570de0
// 006034f5  68f0bd7700           push 0x77bdf0
// 006034fa  e8b4bc0100           call 0x61f1b3
// 006034ff  83c404               add esp, 4
// 00603502  8b0c24               mov ecx, dword ptr [esp]
// 00603505  b8280f8c00           mov eax, 0x8c0f28
// 0060350a  64890d00000000       mov dword ptr fs:[0], ecx
// 00603511  83c40c               add esp, 0xc
// 00603514  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
