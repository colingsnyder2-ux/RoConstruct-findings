// roc 2007-03 005e9930  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e9930
//
// 005e9930  64a100000000         mov eax, dword ptr fs:[0]
// 005e9936  6aff                 push -1
// 005e9938  684ec37500           push 0x75c34e
// 005e993d  50                   push eax
// 005e993e  b801000000           mov eax, 1
// 005e9943  64892500000000       mov dword ptr fs:[0], esp
// 005e994a  8405000f8c00         test byte ptr [0x8c0f00], al
// 005e9950  7530                 jne 0x5e9982
// 005e9952  0905000f8c00         or dword ptr [0x8c0f00], eax
// 005e9958  6aff                 push -1
// 005e995a  68b0fb7b00           push 0x7bfbb0
// 005e995f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e9967  e8743ff4ff           call 0x52d8e0
// 005e996c  83c408               add esp, 8
// 005e996f  a3fc0e8c00           mov dword ptr [0x8c0efc], eax
// 005e9974  8b0c24               mov ecx, dword ptr [esp]
// 005e9977  64890d00000000       mov dword ptr fs:[0], ecx
// 005e997e  83c40c               add esp, 0xc
// 005e9981  c3                   ret 
// 005e9982  8b0c24               mov ecx, dword ptr [esp]
// 005e9985  a1fc0e8c00           mov eax, dword ptr [0x8c0efc]
// 005e998a  64890d00000000       mov dword ptr fs:[0], ecx
// 005e9991  83c40c               add esp, 0xc
// 005e9994  c3                   ret 
// library openrbx-client/App\humanoid\Running.cpp (function ??$doDeclare@$1?sRunning@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Running.cpp
