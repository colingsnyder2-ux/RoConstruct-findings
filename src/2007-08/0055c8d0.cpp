// roc 2007-08 0055c8d0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055c8d0
//
// 0055c8d0  64a100000000         mov eax, dword ptr fs:[0]
// 0055c8d6  6aff                 push -1
// 0055c8d8  685e397500           push 0x75395e
// 0055c8dd  50                   push eax
// 0055c8de  b801000000           mov eax, 1
// 0055c8e3  64892500000000       mov dword ptr fs:[0], esp
// 0055c8ea  8405c01f8c00         test byte ptr [0x8c1fc0], al
// 0055c8f0  7530                 jne 0x55c922
// 0055c8f2  0905c01f8c00         or dword ptr [0x8c1fc0], eax
// 0055c8f8  6aff                 push -1
// 0055c8fa  6840887a00           push 0x7a8840
// 0055c8ff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055c907  e83400fdff           call 0x52c940
// 0055c90c  83c408               add esp, 8
// 0055c90f  a3bc1f8c00           mov dword ptr [0x8c1fbc], eax
// 0055c914  8b0c24               mov ecx, dword ptr [esp]
// 0055c917  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c91e  83c40c               add esp, 0xc
// 0055c921  c3                   ret 
// 0055c922  8b0c24               mov ecx, dword ptr [esp]
// 0055c925  a1bc1f8c00           mov eax, dword ptr [0x8c1fbc]
// 0055c92a  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c931  83c40c               add esp, 0xc
// 0055c934  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
