// roc 2008-06 00437f20  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437f20
//
// 00437f20  64a100000000         mov eax, dword ptr fs:[0]
// 00437f26  6aff                 push -1
// 00437f28  681e037c00           push 0x7c031e
// 00437f2d  50                   push eax
// 00437f2e  b801000000           mov eax, 1
// 00437f33  64892500000000       mov dword ptr fs:[0], esp
// 00437f3a  8405a8d19600         test byte ptr [0x96d1a8], al
// 00437f40  7530                 jne 0x437f72
// 00437f42  0905a8d19600         or dword ptr [0x96d1a8], eax
// 00437f48  6aff                 push -1
// 00437f4a  68f4d29400           push 0x94d2f4
// 00437f4f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00437f57  e834c01100           call 0x553f90
// 00437f5c  83c408               add esp, 8
// 00437f5f  a3a4d19600           mov dword ptr [0x96d1a4], eax
// 00437f64  8b0c24               mov ecx, dword ptr [esp]
// 00437f67  64890d00000000       mov dword ptr fs:[0], ecx
// 00437f6e  83c40c               add esp, 0xc
// 00437f71  c3                   ret 
// 00437f72  8b0c24               mov ecx, dword ptr [esp]
// 00437f75  a1a4d19600           mov eax, dword ptr [0x96d1a4]
// 00437f7a  64890d00000000       mov dword ptr fs:[0], ecx
// 00437f81  83c40c               add esp, 0xc
// 00437f84  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
