// roc 2007-03 00554a60  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554a60
//
// 00554a60  64a100000000         mov eax, dword ptr fs:[0]
// 00554a66  6aff                 push -1
// 00554a68  68ce3c7500           push 0x753cce
// 00554a6d  50                   push eax
// 00554a6e  b801000000           mov eax, 1
// 00554a73  64892500000000       mov dword ptr fs:[0], esp
// 00554a7a  840564c18b00         test byte ptr [0x8bc164], al
// 00554a80  7530                 jne 0x554ab2
// 00554a82  090564c18b00         or dword ptr [0x8bc164], eax
// 00554a88  6aff                 push -1
// 00554a8a  688c848a00           push 0x8a848c
// 00554a8f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554a97  e8448efdff           call 0x52d8e0
// 00554a9c  83c408               add esp, 8
// 00554a9f  a360c18b00           mov dword ptr [0x8bc160], eax
// 00554aa4  8b0c24               mov ecx, dword ptr [esp]
// 00554aa7  64890d00000000       mov dword ptr fs:[0], ecx
// 00554aae  83c40c               add esp, 0xc
// 00554ab1  c3                   ret 
// 00554ab2  8b0c24               mov ecx, dword ptr [esp]
// 00554ab5  a160c18b00           mov eax, dword ptr [0x8bc160]
// 00554aba  64890d00000000       mov dword ptr fs:[0], ecx
// 00554ac1  83c40c               add esp, 0xc
// 00554ac4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
