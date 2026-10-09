// roc 2007-03 005552b0  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005552b0
//
// 005552b0  64a100000000         mov eax, dword ptr fs:[0]
// 005552b6  6aff                 push -1
// 005552b8  682e3f7500           push 0x753f2e
// 005552bd  50                   push eax
// 005552be  b801000000           mov eax, 1
// 005552c3  64892500000000       mov dword ptr fs:[0], esp
// 005552ca  8405fcc18b00         test byte ptr [0x8bc1fc], al
// 005552d0  7530                 jne 0x555302
// 005552d2  0905fcc18b00         or dword ptr [0x8bc1fc], eax
// 005552d8  6aff                 push -1
// 005552da  6810ac7b00           push 0x7bac10
// 005552df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005552e7  e8f485fdff           call 0x52d8e0
// 005552ec  83c408               add esp, 8
// 005552ef  a3f8c18b00           mov dword ptr [0x8bc1f8], eax
// 005552f4  8b0c24               mov ecx, dword ptr [esp]
// 005552f7  64890d00000000       mov dword ptr fs:[0], ecx
// 005552fe  83c40c               add esp, 0xc
// 00555301  c3                   ret 
// 00555302  8b0c24               mov ecx, dword ptr [esp]
// 00555305  a1f8c18b00           mov eax, dword ptr [0x8bc1f8]
// 0055530a  64890d00000000       mov dword ptr fs:[0], ecx
// 00555311  83c40c               add esp, 0xc
// 00555314  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
