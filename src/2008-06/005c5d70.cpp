// roc 2008-06 005c5d70  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5d70
//
// 005c5d70  64a100000000         mov eax, dword ptr fs:[0]
// 005c5d76  6aff                 push -1
// 005c5d78  68fe4c7d00           push 0x7d4cfe
// 005c5d7d  50                   push eax
// 005c5d7e  b801000000           mov eax, 1
// 005c5d83  64892500000000       mov dword ptr fs:[0], esp
// 005c5d8a  840514969700         test byte ptr [0x979614], al
// 005c5d90  7530                 jne 0x5c5dc2
// 005c5d92  090514969700         or dword ptr [0x979614], eax
// 005c5d98  6aff                 push -1
// 005c5d9a  68441a9600           push 0x961a44
// 005c5d9f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5da7  e8e4e1f8ff           call 0x553f90
// 005c5dac  83c408               add esp, 8
// 005c5daf  a310969700           mov dword ptr [0x979610], eax
// 005c5db4  8b0c24               mov ecx, dword ptr [esp]
// 005c5db7  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5dbe  83c40c               add esp, 0xc
// 005c5dc1  c3                   ret 
// 005c5dc2  8b0c24               mov ecx, dword ptr [esp]
// 005c5dc5  a110969700           mov eax, dword ptr [0x979610]
// 005c5dca  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5dd1  83c40c               add esp, 0xc
// 005c5dd4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
