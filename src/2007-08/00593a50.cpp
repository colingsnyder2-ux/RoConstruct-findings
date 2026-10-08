// roc 2007-08 00593a50  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593a50
//
// 00593a50  64a100000000         mov eax, dword ptr fs:[0]
// 00593a56  6aff                 push -1
// 00593a58  68ae717500           push 0x7571ae
// 00593a5d  50                   push eax
// 00593a5e  b801000000           mov eax, 1
// 00593a63  64892500000000       mov dword ptr fs:[0], esp
// 00593a6a  8405944d8c00         test byte ptr [0x8c4d94], al
// 00593a70  7530                 jne 0x593aa2
// 00593a72  0905944d8c00         or dword ptr [0x8c4d94], eax
// 00593a78  6aff                 push -1
// 00593a7a  6818428b00           push 0x8b4218
// 00593a7f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593a87  e8b48ef9ff           call 0x52c940
// 00593a8c  83c408               add esp, 8
// 00593a8f  a3904d8c00           mov dword ptr [0x8c4d90], eax
// 00593a94  8b0c24               mov ecx, dword ptr [esp]
// 00593a97  64890d00000000       mov dword ptr fs:[0], ecx
// 00593a9e  83c40c               add esp, 0xc
// 00593aa1  c3                   ret 
// 00593aa2  8b0c24               mov ecx, dword ptr [esp]
// 00593aa5  a1904d8c00           mov eax, dword ptr [0x8c4d90]
// 00593aaa  64890d00000000       mov dword ptr fs:[0], ecx
// 00593ab1  83c40c               add esp, 0xc
// 00593ab4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
