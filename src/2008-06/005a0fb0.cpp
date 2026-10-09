// roc 2008-06 005a0fb0  unit: RBX::PartTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0fb0
//
// 005a0fb0  64a100000000         mov eax, dword ptr fs:[0]
// 005a0fb6  6aff                 push -1
// 005a0fb8  688e297d00           push 0x7d298e
// 005a0fbd  50                   push eax
// 005a0fbe  b801000000           mov eax, 1
// 005a0fc3  64892500000000       mov dword ptr fs:[0], esp
// 005a0fca  8405706a9700         test byte ptr [0x976a70], al
// 005a0fd0  7530                 jne 0x5a1002
// 005a0fd2  0905706a9700         or dword ptr [0x976a70], eax
// 005a0fd8  6aff                 push -1
// 005a0fda  685caf9500           push 0x95af5c
// 005a0fdf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a0fe7  e8a42ffbff           call 0x553f90
// 005a0fec  83c408               add esp, 8
// 005a0fef  a36c6a9700           mov dword ptr [0x976a6c], eax
// 005a0ff4  8b0c24               mov ecx, dword ptr [esp]
// 005a0ff7  64890d00000000       mov dword ptr fs:[0], ecx
// 005a0ffe  83c40c               add esp, 0xc
// 005a1001  c3                   ret 
// 005a1002  8b0c24               mov ecx, dword ptr [esp]
// 005a1005  a16c6a9700           mov eax, dword ptr [0x976a6c]
// 005a100a  64890d00000000       mov dword ptr fs:[0], ecx
// 005a1011  83c40c               add esp, 0xc
// 005a1014  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
