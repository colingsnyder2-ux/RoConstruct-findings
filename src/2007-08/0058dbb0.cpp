// roc 2007-08 0058dbb0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058dbb0
//
// 0058dbb0  64a100000000         mov eax, dword ptr fs:[0]
// 0058dbb6  6aff                 push -1
// 0058dbb8  68fe667500           push 0x7566fe
// 0058dbbd  50                   push eax
// 0058dbbe  b801000000           mov eax, 1
// 0058dbc3  64892500000000       mov dword ptr fs:[0], esp
// 0058dbca  8405a0378c00         test byte ptr [0x8c37a0], al
// 0058dbd0  7530                 jne 0x58dc02
// 0058dbd2  0905a0378c00         or dword ptr [0x8c37a0], eax
// 0058dbd8  6aff                 push -1
// 0058dbda  6820048b00           push 0x8b0420
// 0058dbdf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058dbe7  e854edf9ff           call 0x52c940
// 0058dbec  83c408               add esp, 8
// 0058dbef  a39c378c00           mov dword ptr [0x8c379c], eax
// 0058dbf4  8b0c24               mov ecx, dword ptr [esp]
// 0058dbf7  64890d00000000       mov dword ptr fs:[0], ecx
// 0058dbfe  83c40c               add esp, 0xc
// 0058dc01  c3                   ret 
// 0058dc02  8b0c24               mov ecx, dword ptr [esp]
// 0058dc05  a19c378c00           mov eax, dword ptr [0x8c379c]
// 0058dc0a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058dc11  83c40c               add esp, 0xc
// 0058dc14  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
