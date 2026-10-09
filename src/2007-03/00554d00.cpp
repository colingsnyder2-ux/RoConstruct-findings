// roc 2007-03 00554d00  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554d00
//
// 00554d00  64a100000000         mov eax, dword ptr fs:[0]
// 00554d06  6aff                 push -1
// 00554d08  688e3d7500           push 0x753d8e
// 00554d0d  50                   push eax
// 00554d0e  b801000000           mov eax, 1
// 00554d13  64892500000000       mov dword ptr fs:[0], esp
// 00554d1a  840594c18b00         test byte ptr [0x8bc194], al
// 00554d20  7530                 jne 0x554d52
// 00554d22  090594c18b00         or dword ptr [0x8bc194], eax
// 00554d28  6aff                 push -1
// 00554d2a  68d8848a00           push 0x8a84d8
// 00554d2f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554d37  e8a48bfdff           call 0x52d8e0
// 00554d3c  83c408               add esp, 8
// 00554d3f  a390c18b00           mov dword ptr [0x8bc190], eax
// 00554d44  8b0c24               mov ecx, dword ptr [esp]
// 00554d47  64890d00000000       mov dword ptr fs:[0], ecx
// 00554d4e  83c40c               add esp, 0xc
// 00554d51  c3                   ret 
// 00554d52  8b0c24               mov ecx, dword ptr [esp]
// 00554d55  a190c18b00           mov eax, dword ptr [0x8bc190]
// 00554d5a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554d61  83c40c               add esp, 0xc
// 00554d64  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
