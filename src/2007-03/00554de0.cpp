// roc 2007-03 00554de0  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554de0
//
// 00554de0  64a100000000         mov eax, dword ptr fs:[0]
// 00554de6  6aff                 push -1
// 00554de8  68ce3d7500           push 0x753dce
// 00554ded  50                   push eax
// 00554dee  b801000000           mov eax, 1
// 00554df3  64892500000000       mov dword ptr fs:[0], esp
// 00554dfa  8405a4c18b00         test byte ptr [0x8bc1a4], al
// 00554e00  7530                 jne 0x554e32
// 00554e02  0905a4c18b00         or dword ptr [0x8bc1a4], eax
// 00554e08  6aff                 push -1
// 00554e0a  68fc848a00           push 0x8a84fc
// 00554e0f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554e17  e8c48afdff           call 0x52d8e0
// 00554e1c  83c408               add esp, 8
// 00554e1f  a3a0c18b00           mov dword ptr [0x8bc1a0], eax
// 00554e24  8b0c24               mov ecx, dword ptr [esp]
// 00554e27  64890d00000000       mov dword ptr fs:[0], ecx
// 00554e2e  83c40c               add esp, 0xc
// 00554e31  c3                   ret 
// 00554e32  8b0c24               mov ecx, dword ptr [esp]
// 00554e35  a1a0c18b00           mov eax, dword ptr [0x8bc1a0]
// 00554e3a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554e41  83c40c               add esp, 0xc
// 00554e44  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
