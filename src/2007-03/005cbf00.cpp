// roc 2007-03 005cbf00  unit: seg_005c0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cbf00
//
// 005cbf00  64a100000000         mov eax, dword ptr fs:[0]
// 005cbf06  6aff                 push -1
// 005cbf08  684ea97500           push 0x75a94e
// 005cbf0d  50                   push eax
// 005cbf0e  b801000000           mov eax, 1
// 005cbf13  64892500000000       mov dword ptr fs:[0], esp
// 005cbf1a  8405c4ff8b00         test byte ptr [0x8bffc4], al
// 005cbf20  7530                 jne 0x5cbf52
// 005cbf22  0905c4ff8b00         or dword ptr [0x8bffc4], eax
// 005cbf28  6aff                 push -1
// 005cbf2a  6808e48a00           push 0x8ae408
// 005cbf2f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cbf37  e8a419f6ff           call 0x52d8e0
// 005cbf3c  83c408               add esp, 8
// 005cbf3f  a3c0ff8b00           mov dword ptr [0x8bffc0], eax
// 005cbf44  8b0c24               mov ecx, dword ptr [esp]
// 005cbf47  64890d00000000       mov dword ptr fs:[0], ecx
// 005cbf4e  83c40c               add esp, 0xc
// 005cbf51  c3                   ret 
// 005cbf52  8b0c24               mov ecx, dword ptr [esp]
// 005cbf55  a1c0ff8b00           mov eax, dword ptr [0x8bffc0]
// 005cbf5a  64890d00000000       mov dword ptr fs:[0], ecx
// 005cbf61  83c40c               add esp, 0xc
// 005cbf64  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
