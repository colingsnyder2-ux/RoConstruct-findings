// roc 2007-03 005546e0  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005546e0
//
// 005546e0  64a100000000         mov eax, dword ptr fs:[0]
// 005546e6  6aff                 push -1
// 005546e8  68ce3b7500           push 0x753bce
// 005546ed  50                   push eax
// 005546ee  b801000000           mov eax, 1
// 005546f3  64892500000000       mov dword ptr fs:[0], esp
// 005546fa  840524c18b00         test byte ptr [0x8bc124], al
// 00554700  7530                 jne 0x554732
// 00554702  090524c18b00         or dword ptr [0x8bc124], eax
// 00554708  6aff                 push -1
// 0055470a  683c848a00           push 0x8a843c
// 0055470f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554717  e8c491fdff           call 0x52d8e0
// 0055471c  83c408               add esp, 8
// 0055471f  a320c18b00           mov dword ptr [0x8bc120], eax
// 00554724  8b0c24               mov ecx, dword ptr [esp]
// 00554727  64890d00000000       mov dword ptr fs:[0], ecx
// 0055472e  83c40c               add esp, 0xc
// 00554731  c3                   ret 
// 00554732  8b0c24               mov ecx, dword ptr [esp]
// 00554735  a120c18b00           mov eax, dword ptr [0x8bc120]
// 0055473a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554741  83c40c               add esp, 0xc
// 00554744  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
