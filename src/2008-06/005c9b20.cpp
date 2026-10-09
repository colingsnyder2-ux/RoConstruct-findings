// roc 2008-06 005c9b20  unit: VProfilingItem::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9b20
//
// 005c9b20  64a100000000         mov eax, dword ptr fs:[0]
// 005c9b26  6aff                 push -1
// 005c9b28  68be517d00           push 0x7d51be
// 005c9b2d  50                   push eax
// 005c9b2e  b801000000           mov eax, 1
// 005c9b33  64892500000000       mov dword ptr fs:[0], esp
// 005c9b3a  8405d0979700         test byte ptr [0x9797d0], al
// 005c9b40  7530                 jne 0x5c9b72
// 005c9b42  0905d0979700         or dword ptr [0x9797d0], eax
// 005c9b48  6aff                 push -1
// 005c9b4a  68c89b8300           push 0x839bc8
// 005c9b4f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c9b57  e834a4f8ff           call 0x553f90
// 005c9b5c  83c408               add esp, 8
// 005c9b5f  a3cc979700           mov dword ptr [0x9797cc], eax
// 005c9b64  8b0c24               mov ecx, dword ptr [esp]
// 005c9b67  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9b6e  83c40c               add esp, 0xc
// 005c9b71  c3                   ret 
// 005c9b72  8b0c24               mov ecx, dword ptr [esp]
// 005c9b75  a1cc979700           mov eax, dword ptr [0x9797cc]
// 005c9b7a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9b81  83c40c               add esp, 0xc
// 005c9b84  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
