// roc 2007-03 00555240  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00555240
//
// 00555240  64a100000000         mov eax, dword ptr fs:[0]
// 00555246  6aff                 push -1
// 00555248  680e3f7500           push 0x753f0e
// 0055524d  50                   push eax
// 0055524e  b801000000           mov eax, 1
// 00555253  64892500000000       mov dword ptr fs:[0], esp
// 0055525a  8405f4c18b00         test byte ptr [0x8bc1f4], al
// 00555260  7530                 jne 0x555292
// 00555262  0905f4c18b00         or dword ptr [0x8bc1f4], eax
// 00555268  6aff                 push -1
// 0055526a  68a8888a00           push 0x8a88a8
// 0055526f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00555277  e86486fdff           call 0x52d8e0
// 0055527c  83c408               add esp, 8
// 0055527f  a3f0c18b00           mov dword ptr [0x8bc1f0], eax
// 00555284  8b0c24               mov ecx, dword ptr [esp]
// 00555287  64890d00000000       mov dword ptr fs:[0], ecx
// 0055528e  83c40c               add esp, 0xc
// 00555291  c3                   ret 
// 00555292  8b0c24               mov ecx, dword ptr [esp]
// 00555295  a1f0c18b00           mov eax, dword ptr [0x8bc1f0]
// 0055529a  64890d00000000       mov dword ptr fs:[0], ecx
// 005552a1  83c40c               add esp, 0xc
// 005552a4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
