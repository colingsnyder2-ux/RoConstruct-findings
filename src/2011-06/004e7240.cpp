// roc 2011-06 004e7240  unit: RBX::VHint::?$FactoryProduct::Creator  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e7240
//
// 004e7240  64a100000000         mov eax, dword ptr fs:[0]
// 004e7246  6aff                 push -1
// 004e7248  68ceb59d00           push 0x9db5ce
// 004e724d  50                   push eax
// 004e724e  b801000000           mov eax, 1
// 004e7253  64892500000000       mov dword ptr fs:[0], esp
// 004e725a  8405f07fcb00         test byte ptr [0xcb7ff0], al
// 004e7260  7526                 jne 0x4e7288
// 004e7262  0905f07fcb00         or dword ptr [0xcb7ff0], eax
// 004e7268  c744240800000000     mov dword ptr [esp + 8], 0
// 004e7270  e8eb5a0000           call 0x4ecd60
// 004e7275  a2ec7fcb00           mov byte ptr [0xcb7fec], al
// 004e727a  8b0c24               mov ecx, dword ptr [esp]
// 004e727d  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7284  83c40c               add esp, 0xc
// 004e7287  c3                   ret 
// 004e7288  8b0c24               mov ecx, dword ptr [esp]
// 004e728b  a0ec7fcb00           mov al, byte ptr [0xcb7fec]
// 004e7290  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7297  83c40c               add esp, 0xc
// 004e729a  c3                   ret 
// library rbx2016-raknet/CloudClient.cpp (function ?IsNetworkOrder@BitStream@RakNet@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudClient.cpp
