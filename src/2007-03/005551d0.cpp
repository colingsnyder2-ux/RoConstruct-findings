// roc 2007-03 005551d0  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005551d0
//
// 005551d0  64a100000000         mov eax, dword ptr fs:[0]
// 005551d6  6aff                 push -1
// 005551d8  68ee3e7500           push 0x753eee
// 005551dd  50                   push eax
// 005551de  b801000000           mov eax, 1
// 005551e3  64892500000000       mov dword ptr fs:[0], esp
// 005551ea  8405ecc18b00         test byte ptr [0x8bc1ec], al
// 005551f0  7530                 jne 0x555222
// 005551f2  0905ecc18b00         or dword ptr [0x8bc1ec], eax
// 005551f8  6aff                 push -1
// 005551fa  6850888a00           push 0x8a8850
// 005551ff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00555207  e8d486fdff           call 0x52d8e0
// 0055520c  83c408               add esp, 8
// 0055520f  a3e8c18b00           mov dword ptr [0x8bc1e8], eax
// 00555214  8b0c24               mov ecx, dword ptr [esp]
// 00555217  64890d00000000       mov dword ptr fs:[0], ecx
// 0055521e  83c40c               add esp, 0xc
// 00555221  c3                   ret 
// 00555222  8b0c24               mov ecx, dword ptr [esp]
// 00555225  a1e8c18b00           mov eax, dword ptr [0x8bc1e8]
// 0055522a  64890d00000000       mov dword ptr fs:[0], ecx
// 00555231  83c40c               add esp, 0xc
// 00555234  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
