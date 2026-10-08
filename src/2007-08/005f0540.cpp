// roc 2007-08 005f0540  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0540
//
// 005f0540  64a100000000         mov eax, dword ptr fs:[0]
// 005f0546  6aff                 push -1
// 005f0548  680eb47500           push 0x75b40e
// 005f054d  50                   push eax
// 005f054e  b801000000           mov eax, 1
// 005f0553  64892500000000       mov dword ptr fs:[0], esp
// 005f055a  8405ac778c00         test byte ptr [0x8c77ac], al
// 005f0560  7530                 jne 0x5f0592
// 005f0562  0905ac778c00         or dword ptr [0x8c77ac], eax
// 005f0568  6aff                 push -1
// 005f056a  6898058b00           push 0x8b0598
// 005f056f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f0577  e8c4c3f3ff           call 0x52c940
// 005f057c  83c408               add esp, 8
// 005f057f  a3a8778c00           mov dword ptr [0x8c77a8], eax
// 005f0584  8b0c24               mov ecx, dword ptr [esp]
// 005f0587  64890d00000000       mov dword ptr fs:[0], ecx
// 005f058e  83c40c               add esp, 0xc
// 005f0591  c3                   ret 
// 005f0592  8b0c24               mov ecx, dword ptr [esp]
// 005f0595  a1a8778c00           mov eax, dword ptr [0x8c77a8]
// 005f059a  64890d00000000       mov dword ptr fs:[0], ecx
// 005f05a1  83c40c               add esp, 0xc
// 005f05a4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
