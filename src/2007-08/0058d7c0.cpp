// roc 2007-08 0058d7c0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058d7c0
//
// 0058d7c0  64a100000000         mov eax, dword ptr fs:[0]
// 0058d7c6  6aff                 push -1
// 0058d7c8  68de657500           push 0x7565de
// 0058d7cd  50                   push eax
// 0058d7ce  b801000000           mov eax, 1
// 0058d7d3  64892500000000       mov dword ptr fs:[0], esp
// 0058d7da  840558378c00         test byte ptr [0x8c3758], al
// 0058d7e0  7530                 jne 0x58d812
// 0058d7e2  090558378c00         or dword ptr [0x8c3758], eax
// 0058d7e8  6aff                 push -1
// 0058d7ea  6894ee8a00           push 0x8aee94
// 0058d7ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058d7f7  e844f1f9ff           call 0x52c940
// 0058d7fc  83c408               add esp, 8
// 0058d7ff  a354378c00           mov dword ptr [0x8c3754], eax
// 0058d804  8b0c24               mov ecx, dword ptr [esp]
// 0058d807  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d80e  83c40c               add esp, 0xc
// 0058d811  c3                   ret 
// 0058d812  8b0c24               mov ecx, dword ptr [esp]
// 0058d815  a154378c00           mov eax, dword ptr [0x8c3754]
// 0058d81a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058d821  83c40c               add esp, 0xc
// 0058d824  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
