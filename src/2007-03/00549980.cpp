// roc 2007-03 00549980  unit: seg_00540000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00549980
//
// 00549980  64a100000000         mov eax, dword ptr fs:[0]
// 00549986  6aff                 push -1
// 00549988  682e2f7500           push 0x752f2e
// 0054998d  50                   push eax
// 0054998e  b801000000           mov eax, 1
// 00549993  64892500000000       mov dword ptr fs:[0], esp
// 0054999a  840518be8b00         test byte ptr [0x8bbe18], al
// 005499a0  7530                 jne 0x5499d2
// 005499a2  090518be8b00         or dword ptr [0x8bbe18], eax
// 005499a8  6878827a00           push 0x7a8278
// 005499ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005499b5  e8a601edff           call 0x419b60
// 005499ba  50                   push eax
// 005499bb  b990bd8b00           mov ecx, 0x8bbd90
// 005499c0  e81b740200           call 0x570de0
// 005499c5  6860997700           push 0x779960
// 005499ca  e8e4570d00           call 0x61f1b3
// 005499cf  83c404               add esp, 4
// 005499d2  8b0c24               mov ecx, dword ptr [esp]
// 005499d5  b890bd8b00           mov eax, 0x8bbd90
// 005499da  64890d00000000       mov dword ptr fs:[0], ecx
// 005499e1  83c40c               add esp, 0xc
// 005499e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
