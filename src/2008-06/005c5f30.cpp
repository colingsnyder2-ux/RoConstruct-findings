// roc 2008-06 005c5f30  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5f30
//
// 005c5f30  64a100000000         mov eax, dword ptr fs:[0]
// 005c5f36  6aff                 push -1
// 005c5f38  687e4d7d00           push 0x7d4d7e
// 005c5f3d  50                   push eax
// 005c5f3e  b801000000           mov eax, 1
// 005c5f43  64892500000000       mov dword ptr fs:[0], esp
// 005c5f4a  840534969700         test byte ptr [0x979634], al
// 005c5f50  7530                 jne 0x5c5f82
// 005c5f52  090534969700         or dword ptr [0x979634], eax
// 005c5f58  6aff                 push -1
// 005c5f5a  68f01a9600           push 0x961af0
// 005c5f5f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5f67  e824e0f8ff           call 0x553f90
// 005c5f6c  83c408               add esp, 8
// 005c5f6f  a330969700           mov dword ptr [0x979630], eax
// 005c5f74  8b0c24               mov ecx, dword ptr [esp]
// 005c5f77  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5f7e  83c40c               add esp, 0xc
// 005c5f81  c3                   ret 
// 005c5f82  8b0c24               mov ecx, dword ptr [esp]
// 005c5f85  a130969700           mov eax, dword ptr [0x979630]
// 005c5f8a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5f91  83c40c               add esp, 0xc
// 005c5f94  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
