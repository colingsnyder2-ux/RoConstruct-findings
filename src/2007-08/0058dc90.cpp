// roc 2007-08 0058dc90  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058dc90
//
// 0058dc90  64a100000000         mov eax, dword ptr fs:[0]
// 0058dc96  6aff                 push -1
// 0058dc98  683e677500           push 0x75673e
// 0058dc9d  50                   push eax
// 0058dc9e  b801000000           mov eax, 1
// 0058dca3  64892500000000       mov dword ptr fs:[0], esp
// 0058dcaa  8405b0378c00         test byte ptr [0x8c37b0], al
// 0058dcb0  7530                 jne 0x58dce2
// 0058dcb2  0905b0378c00         or dword ptr [0x8c37b0], eax
// 0058dcb8  6aff                 push -1
// 0058dcba  68e03a8b00           push 0x8b3ae0
// 0058dcbf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058dcc7  e874ecf9ff           call 0x52c940
// 0058dccc  83c408               add esp, 8
// 0058dccf  a3ac378c00           mov dword ptr [0x8c37ac], eax
// 0058dcd4  8b0c24               mov ecx, dword ptr [esp]
// 0058dcd7  64890d00000000       mov dword ptr fs:[0], ecx
// 0058dcde  83c40c               add esp, 0xc
// 0058dce1  c3                   ret 
// 0058dce2  8b0c24               mov ecx, dword ptr [esp]
// 0058dce5  a1ac378c00           mov eax, dword ptr [0x8c37ac]
// 0058dcea  64890d00000000       mov dword ptr fs:[0], ecx
// 0058dcf1  83c40c               add esp, 0xc
// 0058dcf4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
