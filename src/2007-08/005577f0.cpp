// roc 2007-08 005577f0  unit: ChatEnter  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005577f0
//
// 005577f0  64a100000000         mov eax, dword ptr fs:[0]
// 005577f6  6aff                 push -1
// 005577f8  682e327500           push 0x75322e
// 005577fd  50                   push eax
// 005577fe  b801000000           mov eax, 1
// 00557803  64892500000000       mov dword ptr fs:[0], esp
// 0055780a  8405f81e8c00         test byte ptr [0x8c1ef8], al
// 00557810  7530                 jne 0x557842
// 00557812  0905f81e8c00         or dword ptr [0x8c1ef8], eax
// 00557818  6aff                 push -1
// 0055781a  6860ae7b00           push 0x7bae60
// 0055781f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00557827  e81451fdff           call 0x52c940
// 0055782c  83c408               add esp, 8
// 0055782f  a3f41e8c00           mov dword ptr [0x8c1ef4], eax
// 00557834  8b0c24               mov ecx, dword ptr [esp]
// 00557837  64890d00000000       mov dword ptr fs:[0], ecx
// 0055783e  83c40c               add esp, 0xc
// 00557841  c3                   ret 
// 00557842  8b0c24               mov ecx, dword ptr [esp]
// 00557845  a1f41e8c00           mov eax, dword ptr [0x8c1ef4]
// 0055784a  64890d00000000       mov dword ptr fs:[0], ecx
// 00557851  83c40c               add esp, 0xc
// 00557854  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
