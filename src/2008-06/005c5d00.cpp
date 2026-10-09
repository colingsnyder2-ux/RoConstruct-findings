// roc 2008-06 005c5d00  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5d00
//
// 005c5d00  64a100000000         mov eax, dword ptr fs:[0]
// 005c5d06  6aff                 push -1
// 005c5d08  68de4c7d00           push 0x7d4cde
// 005c5d0d  50                   push eax
// 005c5d0e  b801000000           mov eax, 1
// 005c5d13  64892500000000       mov dword ptr fs:[0], esp
// 005c5d1a  84050c969700         test byte ptr [0x97960c], al
// 005c5d20  7530                 jne 0x5c5d52
// 005c5d22  09050c969700         or dword ptr [0x97960c], eax
// 005c5d28  6aff                 push -1
// 005c5d2a  68381a9600           push 0x961a38
// 005c5d2f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5d37  e854e2f8ff           call 0x553f90
// 005c5d3c  83c408               add esp, 8
// 005c5d3f  a308969700           mov dword ptr [0x979608], eax
// 005c5d44  8b0c24               mov ecx, dword ptr [esp]
// 005c5d47  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5d4e  83c40c               add esp, 0xc
// 005c5d51  c3                   ret 
// 005c5d52  8b0c24               mov ecx, dword ptr [esp]
// 005c5d55  a108969700           mov eax, dword ptr [0x979608]
// 005c5d5a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5d61  83c40c               add esp, 0xc
// 005c5d64  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
