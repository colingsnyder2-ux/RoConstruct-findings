// roc 2007-03 00554d70  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554d70
//
// 00554d70  64a100000000         mov eax, dword ptr fs:[0]
// 00554d76  6aff                 push -1
// 00554d78  68ae3d7500           push 0x753dae
// 00554d7d  50                   push eax
// 00554d7e  b801000000           mov eax, 1
// 00554d83  64892500000000       mov dword ptr fs:[0], esp
// 00554d8a  84059cc18b00         test byte ptr [0x8bc19c], al
// 00554d90  7530                 jne 0x554dc2
// 00554d92  09059cc18b00         or dword ptr [0x8bc19c], eax
// 00554d98  6aff                 push -1
// 00554d9a  68e8848a00           push 0x8a84e8
// 00554d9f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554da7  e8348bfdff           call 0x52d8e0
// 00554dac  83c408               add esp, 8
// 00554daf  a398c18b00           mov dword ptr [0x8bc198], eax
// 00554db4  8b0c24               mov ecx, dword ptr [esp]
// 00554db7  64890d00000000       mov dword ptr fs:[0], ecx
// 00554dbe  83c40c               add esp, 0xc
// 00554dc1  c3                   ret 
// 00554dc2  8b0c24               mov ecx, dword ptr [esp]
// 00554dc5  a198c18b00           mov eax, dword ptr [0x8bc198]
// 00554dca  64890d00000000       mov dword ptr fs:[0], ecx
// 00554dd1  83c40c               add esp, 0xc
// 00554dd4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
