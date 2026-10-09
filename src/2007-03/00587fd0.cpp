// roc 2007-03 00587fd0  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00587fd0
//
// 00587fd0  64a100000000         mov eax, dword ptr fs:[0]
// 00587fd6  6aff                 push -1
// 00587fd8  687e737500           push 0x75737e
// 00587fdd  50                   push eax
// 00587fde  b801000000           mov eax, 1
// 00587fe3  64892500000000       mov dword ptr fs:[0], esp
// 00587fea  840510d88b00         test byte ptr [0x8bd810], al
// 00587ff0  7530                 jne 0x588022
// 00587ff2  090510d88b00         or dword ptr [0x8bd810], eax
// 00587ff8  6aff                 push -1
// 00587ffa  68289c8a00           push 0x8a9c28
// 00587fff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00588007  e8d458faff           call 0x52d8e0
// 0058800c  83c408               add esp, 8
// 0058800f  a30cd88b00           mov dword ptr [0x8bd80c], eax
// 00588014  8b0c24               mov ecx, dword ptr [esp]
// 00588017  64890d00000000       mov dword ptr fs:[0], ecx
// 0058801e  83c40c               add esp, 0xc
// 00588021  c3                   ret 
// 00588022  8b0c24               mov ecx, dword ptr [esp]
// 00588025  a10cd88b00           mov eax, dword ptr [0x8bd80c]
// 0058802a  64890d00000000       mov dword ptr fs:[0], ecx
// 00588031  83c40c               add esp, 0xc
// 00588034  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
