// roc 2007-03 00554b40  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554b40
//
// 00554b40  64a100000000         mov eax, dword ptr fs:[0]
// 00554b46  6aff                 push -1
// 00554b48  680e3d7500           push 0x753d0e
// 00554b4d  50                   push eax
// 00554b4e  b801000000           mov eax, 1
// 00554b53  64892500000000       mov dword ptr fs:[0], esp
// 00554b5a  840574c18b00         test byte ptr [0x8bc174], al
// 00554b60  7530                 jne 0x554b92
// 00554b62  090574c18b00         or dword ptr [0x8bc174], eax
// 00554b68  6aff                 push -1
// 00554b6a  68a8848a00           push 0x8a84a8
// 00554b6f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554b77  e8648dfdff           call 0x52d8e0
// 00554b7c  83c408               add esp, 8
// 00554b7f  a370c18b00           mov dword ptr [0x8bc170], eax
// 00554b84  8b0c24               mov ecx, dword ptr [esp]
// 00554b87  64890d00000000       mov dword ptr fs:[0], ecx
// 00554b8e  83c40c               add esp, 0xc
// 00554b91  c3                   ret 
// 00554b92  8b0c24               mov ecx, dword ptr [esp]
// 00554b95  a170c18b00           mov eax, dword ptr [0x8bc170]
// 00554b9a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554ba1  83c40c               add esp, 0xc
// 00554ba4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
