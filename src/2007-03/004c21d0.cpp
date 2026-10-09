// roc 2007-03 004c21d0  unit: seg_004c0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c21d0
//
// 004c21d0  64a100000000         mov eax, dword ptr fs:[0]
// 004c21d6  6aff                 push -1
// 004c21d8  684ece7400           push 0x74ce4e
// 004c21dd  50                   push eax
// 004c21de  b801000000           mov eax, 1
// 004c21e3  64892500000000       mov dword ptr fs:[0], esp
// 004c21ea  84059c9e8b00         test byte ptr [0x8b9e9c], al
// 004c21f0  7530                 jne 0x4c2222
// 004c21f2  09059c9e8b00         or dword ptr [0x8b9e9c], eax
// 004c21f8  6aff                 push -1
// 004c21fa  68bc698a00           push 0x8a69bc
// 004c21ff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c2207  e8d4b60600           call 0x52d8e0
// 004c220c  83c408               add esp, 8
// 004c220f  a3989e8b00           mov dword ptr [0x8b9e98], eax
// 004c2214  8b0c24               mov ecx, dword ptr [esp]
// 004c2217  64890d00000000       mov dword ptr fs:[0], ecx
// 004c221e  83c40c               add esp, 0xc
// 004c2221  c3                   ret 
// 004c2222  8b0c24               mov ecx, dword ptr [esp]
// 004c2225  a1989e8b00           mov eax, dword ptr [0x8b9e98]
// 004c222a  64890d00000000       mov dword ptr fs:[0], ecx
// 004c2231  83c40c               add esp, 0xc
// 004c2234  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
