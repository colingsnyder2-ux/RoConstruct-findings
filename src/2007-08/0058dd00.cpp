// roc 2007-08 0058dd00  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058dd00
//
// 0058dd00  64a100000000         mov eax, dword ptr fs:[0]
// 0058dd06  6aff                 push -1
// 0058dd08  685e677500           push 0x75675e
// 0058dd0d  50                   push eax
// 0058dd0e  b801000000           mov eax, 1
// 0058dd13  64892500000000       mov dword ptr fs:[0], esp
// 0058dd1a  8405b8378c00         test byte ptr [0x8c37b8], al
// 0058dd20  7530                 jne 0x58dd52
// 0058dd22  0905b8378c00         or dword ptr [0x8c37b8], eax
// 0058dd28  6aff                 push -1
// 0058dd2a  68883e8b00           push 0x8b3e88
// 0058dd2f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058dd37  e804ecf9ff           call 0x52c940
// 0058dd3c  83c408               add esp, 8
// 0058dd3f  a3b4378c00           mov dword ptr [0x8c37b4], eax
// 0058dd44  8b0c24               mov ecx, dword ptr [esp]
// 0058dd47  64890d00000000       mov dword ptr fs:[0], ecx
// 0058dd4e  83c40c               add esp, 0xc
// 0058dd51  c3                   ret 
// 0058dd52  8b0c24               mov ecx, dword ptr [esp]
// 0058dd55  a1b4378c00           mov eax, dword ptr [0x8c37b4]
// 0058dd5a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058dd61  83c40c               add esp, 0xc
// 0058dd64  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
