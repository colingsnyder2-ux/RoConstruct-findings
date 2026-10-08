// roc 2007-08 00593b30  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593b30
//
// 00593b30  64a100000000         mov eax, dword ptr fs:[0]
// 00593b36  6aff                 push -1
// 00593b38  68ee717500           push 0x7571ee
// 00593b3d  50                   push eax
// 00593b3e  b801000000           mov eax, 1
// 00593b43  64892500000000       mov dword ptr fs:[0], esp
// 00593b4a  8405a44d8c00         test byte ptr [0x8c4da4], al
// 00593b50  7530                 jne 0x593b82
// 00593b52  0905a44d8c00         or dword ptr [0x8c4da4], eax
// 00593b58  6aff                 push -1
// 00593b5a  6868428b00           push 0x8b4268
// 00593b5f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593b67  e8d48df9ff           call 0x52c940
// 00593b6c  83c408               add esp, 8
// 00593b6f  a3a04d8c00           mov dword ptr [0x8c4da0], eax
// 00593b74  8b0c24               mov ecx, dword ptr [esp]
// 00593b77  64890d00000000       mov dword ptr fs:[0], ecx
// 00593b7e  83c40c               add esp, 0xc
// 00593b81  c3                   ret 
// 00593b82  8b0c24               mov ecx, dword ptr [esp]
// 00593b85  a1a04d8c00           mov eax, dword ptr [0x8c4da0]
// 00593b8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593b91  83c40c               add esp, 0xc
// 00593b94  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
