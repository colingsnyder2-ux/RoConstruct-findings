// roc 2007-03 00554ec0  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554ec0
//
// 00554ec0  64a100000000         mov eax, dword ptr fs:[0]
// 00554ec6  6aff                 push -1
// 00554ec8  680e3e7500           push 0x753e0e
// 00554ecd  50                   push eax
// 00554ece  b801000000           mov eax, 1
// 00554ed3  64892500000000       mov dword ptr fs:[0], esp
// 00554eda  8405b4c18b00         test byte ptr [0x8bc1b4], al
// 00554ee0  7530                 jne 0x554f12
// 00554ee2  0905b4c18b00         or dword ptr [0x8bc1b4], eax
// 00554ee8  6aff                 push -1
// 00554eea  6814858a00           push 0x8a8514
// 00554eef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554ef7  e8e489fdff           call 0x52d8e0
// 00554efc  83c408               add esp, 8
// 00554eff  a3b0c18b00           mov dword ptr [0x8bc1b0], eax
// 00554f04  8b0c24               mov ecx, dword ptr [esp]
// 00554f07  64890d00000000       mov dword ptr fs:[0], ecx
// 00554f0e  83c40c               add esp, 0xc
// 00554f11  c3                   ret 
// 00554f12  8b0c24               mov ecx, dword ptr [esp]
// 00554f15  a1b0c18b00           mov eax, dword ptr [0x8bc1b0]
// 00554f1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554f21  83c40c               add esp, 0xc
// 00554f24  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
