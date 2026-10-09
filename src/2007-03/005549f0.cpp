// roc 2007-03 005549f0  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005549f0
//
// 005549f0  64a100000000         mov eax, dword ptr fs:[0]
// 005549f6  6aff                 push -1
// 005549f8  68ae3c7500           push 0x753cae
// 005549fd  50                   push eax
// 005549fe  b801000000           mov eax, 1
// 00554a03  64892500000000       mov dword ptr fs:[0], esp
// 00554a0a  84055cc18b00         test byte ptr [0x8bc15c], al
// 00554a10  7530                 jne 0x554a42
// 00554a12  09055cc18b00         or dword ptr [0x8bc15c], eax
// 00554a18  6aff                 push -1
// 00554a1a  687c848a00           push 0x8a847c
// 00554a1f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554a27  e8b48efdff           call 0x52d8e0
// 00554a2c  83c408               add esp, 8
// 00554a2f  a358c18b00           mov dword ptr [0x8bc158], eax
// 00554a34  8b0c24               mov ecx, dword ptr [esp]
// 00554a37  64890d00000000       mov dword ptr fs:[0], ecx
// 00554a3e  83c40c               add esp, 0xc
// 00554a41  c3                   ret 
// 00554a42  8b0c24               mov ecx, dword ptr [esp]
// 00554a45  a158c18b00           mov eax, dword ptr [0x8bc158]
// 00554a4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554a51  83c40c               add esp, 0xc
// 00554a54  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
