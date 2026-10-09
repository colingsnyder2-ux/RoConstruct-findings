// roc 2008-06 005c5e50  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5e50
//
// 005c5e50  64a100000000         mov eax, dword ptr fs:[0]
// 005c5e56  6aff                 push -1
// 005c5e58  683e4d7d00           push 0x7d4d3e
// 005c5e5d  50                   push eax
// 005c5e5e  b801000000           mov eax, 1
// 005c5e63  64892500000000       mov dword ptr fs:[0], esp
// 005c5e6a  840524969700         test byte ptr [0x979624], al
// 005c5e70  7530                 jne 0x5c5ea2
// 005c5e72  090524969700         or dword ptr [0x979624], eax
// 005c5e78  6aff                 push -1
// 005c5e7a  68a01a9600           push 0x961aa0
// 005c5e7f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5e87  e804e1f8ff           call 0x553f90
// 005c5e8c  83c408               add esp, 8
// 005c5e8f  a320969700           mov dword ptr [0x979620], eax
// 005c5e94  8b0c24               mov ecx, dword ptr [esp]
// 005c5e97  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5e9e  83c40c               add esp, 0xc
// 005c5ea1  c3                   ret 
// 005c5ea2  8b0c24               mov ecx, dword ptr [esp]
// 005c5ea5  a120969700           mov eax, dword ptr [0x979620]
// 005c5eaa  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5eb1  83c40c               add esp, 0xc
// 005c5eb4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
