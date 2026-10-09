// roc 2007-03 00554c20  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554c20
//
// 00554c20  64a100000000         mov eax, dword ptr fs:[0]
// 00554c26  6aff                 push -1
// 00554c28  684e3d7500           push 0x753d4e
// 00554c2d  50                   push eax
// 00554c2e  b801000000           mov eax, 1
// 00554c33  64892500000000       mov dword ptr fs:[0], esp
// 00554c3a  840584c18b00         test byte ptr [0x8bc184], al
// 00554c40  7530                 jne 0x554c72
// 00554c42  090584c18b00         or dword ptr [0x8bc184], eax
// 00554c48  6aff                 push -1
// 00554c4a  68bc848a00           push 0x8a84bc
// 00554c4f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554c57  e8848cfdff           call 0x52d8e0
// 00554c5c  83c408               add esp, 8
// 00554c5f  a380c18b00           mov dword ptr [0x8bc180], eax
// 00554c64  8b0c24               mov ecx, dword ptr [esp]
// 00554c67  64890d00000000       mov dword ptr fs:[0], ecx
// 00554c6e  83c40c               add esp, 0xc
// 00554c71  c3                   ret 
// 00554c72  8b0c24               mov ecx, dword ptr [esp]
// 00554c75  a180c18b00           mov eax, dword ptr [0x8bc180]
// 00554c7a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554c81  83c40c               add esp, 0xc
// 00554c84  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
