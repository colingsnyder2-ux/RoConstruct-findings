// roc 2007-08 005f0700  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0700
//
// 005f0700  64a100000000         mov eax, dword ptr fs:[0]
// 005f0706  6aff                 push -1
// 005f0708  688eb47500           push 0x75b48e
// 005f070d  50                   push eax
// 005f070e  b801000000           mov eax, 1
// 005f0713  64892500000000       mov dword ptr fs:[0], esp
// 005f071a  8405cc778c00         test byte ptr [0x8c77cc], al
// 005f0720  7530                 jne 0x5f0752
// 005f0722  0905cc778c00         or dword ptr [0x8c77cc], eax
// 005f0728  6aff                 push -1
// 005f072a  68c8058b00           push 0x8b05c8
// 005f072f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f0737  e804c2f3ff           call 0x52c940
// 005f073c  83c408               add esp, 8
// 005f073f  a3c8778c00           mov dword ptr [0x8c77c8], eax
// 005f0744  8b0c24               mov ecx, dword ptr [esp]
// 005f0747  64890d00000000       mov dword ptr fs:[0], ecx
// 005f074e  83c40c               add esp, 0xc
// 005f0751  c3                   ret 
// 005f0752  8b0c24               mov ecx, dword ptr [esp]
// 005f0755  a1c8778c00           mov eax, dword ptr [0x8c77c8]
// 005f075a  64890d00000000       mov dword ptr fs:[0], ecx
// 005f0761  83c40c               add esp, 0xc
// 005f0764  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
