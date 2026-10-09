// roc 2007-03 00554bb0  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554bb0
//
// 00554bb0  64a100000000         mov eax, dword ptr fs:[0]
// 00554bb6  6aff                 push -1
// 00554bb8  682e3d7500           push 0x753d2e
// 00554bbd  50                   push eax
// 00554bbe  b801000000           mov eax, 1
// 00554bc3  64892500000000       mov dword ptr fs:[0], esp
// 00554bca  84057cc18b00         test byte ptr [0x8bc17c], al
// 00554bd0  7530                 jne 0x554c02
// 00554bd2  09057cc18b00         or dword ptr [0x8bc17c], eax
// 00554bd8  6aff                 push -1
// 00554bda  68b0848a00           push 0x8a84b0
// 00554bdf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554be7  e8f48cfdff           call 0x52d8e0
// 00554bec  83c408               add esp, 8
// 00554bef  a378c18b00           mov dword ptr [0x8bc178], eax
// 00554bf4  8b0c24               mov ecx, dword ptr [esp]
// 00554bf7  64890d00000000       mov dword ptr fs:[0], ecx
// 00554bfe  83c40c               add esp, 0xc
// 00554c01  c3                   ret 
// 00554c02  8b0c24               mov ecx, dword ptr [esp]
// 00554c05  a178c18b00           mov eax, dword ptr [0x8bc178]
// 00554c0a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554c11  83c40c               add esp, 0xc
// 00554c14  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
