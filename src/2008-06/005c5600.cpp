// roc 2008-06 005c5600  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5600
//
// 005c5600  64a100000000         mov eax, dword ptr fs:[0]
// 005c5606  6aff                 push -1
// 005c5608  68de4a7d00           push 0x7d4ade
// 005c560d  50                   push eax
// 005c560e  b801000000           mov eax, 1
// 005c5613  64892500000000       mov dword ptr fs:[0], esp
// 005c561a  84058c959700         test byte ptr [0x97958c], al
// 005c5620  7530                 jne 0x5c5652
// 005c5622  09058c959700         or dword ptr [0x97958c], eax
// 005c5628  6aff                 push -1
// 005c562a  685cd29400           push 0x94d25c
// 005c562f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5637  e854e9f8ff           call 0x553f90
// 005c563c  83c408               add esp, 8
// 005c563f  a388959700           mov dword ptr [0x979588], eax
// 005c5644  8b0c24               mov ecx, dword ptr [esp]
// 005c5647  64890d00000000       mov dword ptr fs:[0], ecx
// 005c564e  83c40c               add esp, 0xc
// 005c5651  c3                   ret 
// 005c5652  8b0c24               mov ecx, dword ptr [esp]
// 005c5655  a188959700           mov eax, dword ptr [0x979588]
// 005c565a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5661  83c40c               add esp, 0xc
// 005c5664  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
