// roc 2007-08 006257c0  unit: RBX::PartDragTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006257c0
//
// 006257c0  64a100000000         mov eax, dword ptr fs:[0]
// 006257c6  6aff                 push -1
// 006257c8  689ed17500           push 0x75d19e
// 006257cd  50                   push eax
// 006257ce  b801000000           mov eax, 1
// 006257d3  64892500000000       mov dword ptr fs:[0], esp
// 006257da  8405cc828c00         test byte ptr [0x8c82cc], al
// 006257e0  7530                 jne 0x625812
// 006257e2  0905cc828c00         or dword ptr [0x8c82cc], eax
// 006257e8  6aff                 push -1
// 006257ea  68dc4d8b00           push 0x8b4ddc
// 006257ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006257f7  e84471f0ff           call 0x52c940
// 006257fc  83c408               add esp, 8
// 006257ff  a3c8828c00           mov dword ptr [0x8c82c8], eax
// 00625804  8b0c24               mov ecx, dword ptr [esp]
// 00625807  64890d00000000       mov dword ptr fs:[0], ecx
// 0062580e  83c40c               add esp, 0xc
// 00625811  c3                   ret 
// 00625812  8b0c24               mov ecx, dword ptr [esp]
// 00625815  a1c8828c00           mov eax, dword ptr [0x8c82c8]
// 0062581a  64890d00000000       mov dword ptr fs:[0], ecx
// 00625821  83c40c               add esp, 0xc
// 00625824  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
