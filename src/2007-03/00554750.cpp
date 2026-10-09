// roc 2007-03 00554750  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554750
//
// 00554750  64a100000000         mov eax, dword ptr fs:[0]
// 00554756  6aff                 push -1
// 00554758  68ee3b7500           push 0x753bee
// 0055475d  50                   push eax
// 0055475e  b801000000           mov eax, 1
// 00554763  64892500000000       mov dword ptr fs:[0], esp
// 0055476a  84052cc18b00         test byte ptr [0x8bc12c], al
// 00554770  7530                 jne 0x5547a2
// 00554772  09052cc18b00         or dword ptr [0x8bc12c], eax
// 00554778  6aff                 push -1
// 0055477a  6844848a00           push 0x8a8444
// 0055477f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554787  e85491fdff           call 0x52d8e0
// 0055478c  83c408               add esp, 8
// 0055478f  a328c18b00           mov dword ptr [0x8bc128], eax
// 00554794  8b0c24               mov ecx, dword ptr [esp]
// 00554797  64890d00000000       mov dword ptr fs:[0], ecx
// 0055479e  83c40c               add esp, 0xc
// 005547a1  c3                   ret 
// 005547a2  8b0c24               mov ecx, dword ptr [esp]
// 005547a5  a128c18b00           mov eax, dword ptr [0x8bc128]
// 005547aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005547b1  83c40c               add esp, 0xc
// 005547b4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
