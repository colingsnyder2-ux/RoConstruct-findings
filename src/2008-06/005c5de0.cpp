// roc 2008-06 005c5de0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5de0
//
// 005c5de0  64a100000000         mov eax, dword ptr fs:[0]
// 005c5de6  6aff                 push -1
// 005c5de8  681e4d7d00           push 0x7d4d1e
// 005c5ded  50                   push eax
// 005c5dee  b801000000           mov eax, 1
// 005c5df3  64892500000000       mov dword ptr fs:[0], esp
// 005c5dfa  84051c969700         test byte ptr [0x97961c], al
// 005c5e00  7530                 jne 0x5c5e32
// 005c5e02  09051c969700         or dword ptr [0x97961c], eax
// 005c5e08  6aff                 push -1
// 005c5e0a  68501a9600           push 0x961a50
// 005c5e0f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5e17  e874e1f8ff           call 0x553f90
// 005c5e1c  83c408               add esp, 8
// 005c5e1f  a318969700           mov dword ptr [0x979618], eax
// 005c5e24  8b0c24               mov ecx, dword ptr [esp]
// 005c5e27  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5e2e  83c40c               add esp, 0xc
// 005c5e31  c3                   ret 
// 005c5e32  8b0c24               mov ecx, dword ptr [esp]
// 005c5e35  a118969700           mov eax, dword ptr [0x979618]
// 005c5e3a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5e41  83c40c               add esp, 0xc
// 005c5e44  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
