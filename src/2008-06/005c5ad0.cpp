// roc 2008-06 005c5ad0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5ad0
//
// 005c5ad0  64a100000000         mov eax, dword ptr fs:[0]
// 005c5ad6  6aff                 push -1
// 005c5ad8  683e4c7d00           push 0x7d4c3e
// 005c5add  50                   push eax
// 005c5ade  b801000000           mov eax, 1
// 005c5ae3  64892500000000       mov dword ptr fs:[0], esp
// 005c5aea  8405e4959700         test byte ptr [0x9795e4], al
// 005c5af0  7530                 jne 0x5c5b22
// 005c5af2  0905e4959700         or dword ptr [0x9795e4], eax
// 005c5af8  6aff                 push -1
// 005c5afa  68001a9600           push 0x961a00
// 005c5aff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5b07  e884e4f8ff           call 0x553f90
// 005c5b0c  83c408               add esp, 8
// 005c5b0f  a3e0959700           mov dword ptr [0x9795e0], eax
// 005c5b14  8b0c24               mov ecx, dword ptr [esp]
// 005c5b17  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5b1e  83c40c               add esp, 0xc
// 005c5b21  c3                   ret 
// 005c5b22  8b0c24               mov ecx, dword ptr [esp]
// 005c5b25  a1e0959700           mov eax, dword ptr [0x9795e0]
// 005c5b2a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5b31  83c40c               add esp, 0xc
// 005c5b34  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
