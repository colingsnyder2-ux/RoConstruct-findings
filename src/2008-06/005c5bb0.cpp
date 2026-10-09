// roc 2008-06 005c5bb0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5bb0
//
// 005c5bb0  64a100000000         mov eax, dword ptr fs:[0]
// 005c5bb6  6aff                 push -1
// 005c5bb8  687e4c7d00           push 0x7d4c7e
// 005c5bbd  50                   push eax
// 005c5bbe  b801000000           mov eax, 1
// 005c5bc3  64892500000000       mov dword ptr fs:[0], esp
// 005c5bca  8405f4959700         test byte ptr [0x9795f4], al
// 005c5bd0  7530                 jne 0x5c5c02
// 005c5bd2  0905f4959700         or dword ptr [0x9795f4], eax
// 005c5bd8  6aff                 push -1
// 005c5bda  68141a9600           push 0x961a14
// 005c5bdf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5be7  e8a4e3f8ff           call 0x553f90
// 005c5bec  83c408               add esp, 8
// 005c5bef  a3f0959700           mov dword ptr [0x9795f0], eax
// 005c5bf4  8b0c24               mov ecx, dword ptr [esp]
// 005c5bf7  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5bfe  83c40c               add esp, 0xc
// 005c5c01  c3                   ret 
// 005c5c02  8b0c24               mov ecx, dword ptr [esp]
// 005c5c05  a1f0959700           mov eax, dword ptr [0x9795f0]
// 005c5c0a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5c11  83c40c               add esp, 0xc
// 005c5c14  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
