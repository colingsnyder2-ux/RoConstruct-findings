// roc 2007-08 0058dc20  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058dc20
//
// 0058dc20  64a100000000         mov eax, dword ptr fs:[0]
// 0058dc26  6aff                 push -1
// 0058dc28  681e677500           push 0x75671e
// 0058dc2d  50                   push eax
// 0058dc2e  b801000000           mov eax, 1
// 0058dc33  64892500000000       mov dword ptr fs:[0], esp
// 0058dc3a  8405a8378c00         test byte ptr [0x8c37a8], al
// 0058dc40  7530                 jne 0x58dc72
// 0058dc42  0905a8378c00         or dword ptr [0x8c37a8], eax
// 0058dc48  6aff                 push -1
// 0058dc4a  6800068b00           push 0x8b0600
// 0058dc4f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058dc57  e8e4ecf9ff           call 0x52c940
// 0058dc5c  83c408               add esp, 8
// 0058dc5f  a3a4378c00           mov dword ptr [0x8c37a4], eax
// 0058dc64  8b0c24               mov ecx, dword ptr [esp]
// 0058dc67  64890d00000000       mov dword ptr fs:[0], ecx
// 0058dc6e  83c40c               add esp, 0xc
// 0058dc71  c3                   ret 
// 0058dc72  8b0c24               mov ecx, dword ptr [esp]
// 0058dc75  a1a4378c00           mov eax, dword ptr [0x8c37a4]
// 0058dc7a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058dc81  83c40c               add esp, 0xc
// 0058dc84  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
