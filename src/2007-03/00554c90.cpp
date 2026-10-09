// roc 2007-03 00554c90  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554c90
//
// 00554c90  64a100000000         mov eax, dword ptr fs:[0]
// 00554c96  6aff                 push -1
// 00554c98  686e3d7500           push 0x753d6e
// 00554c9d  50                   push eax
// 00554c9e  b801000000           mov eax, 1
// 00554ca3  64892500000000       mov dword ptr fs:[0], esp
// 00554caa  84058cc18b00         test byte ptr [0x8bc18c], al
// 00554cb0  7530                 jne 0x554ce2
// 00554cb2  09058cc18b00         or dword ptr [0x8bc18c], eax
// 00554cb8  6aff                 push -1
// 00554cba  68c8848a00           push 0x8a84c8
// 00554cbf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554cc7  e8148cfdff           call 0x52d8e0
// 00554ccc  83c408               add esp, 8
// 00554ccf  a388c18b00           mov dword ptr [0x8bc188], eax
// 00554cd4  8b0c24               mov ecx, dword ptr [esp]
// 00554cd7  64890d00000000       mov dword ptr fs:[0], ecx
// 00554cde  83c40c               add esp, 0xc
// 00554ce1  c3                   ret 
// 00554ce2  8b0c24               mov ecx, dword ptr [esp]
// 00554ce5  a188c18b00           mov eax, dword ptr [0x8bc188]
// 00554cea  64890d00000000       mov dword ptr fs:[0], ecx
// 00554cf1  83c40c               add esp, 0xc
// 00554cf4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
