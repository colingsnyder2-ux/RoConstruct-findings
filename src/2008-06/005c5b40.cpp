// roc 2008-06 005c5b40  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5b40
//
// 005c5b40  64a100000000         mov eax, dword ptr fs:[0]
// 005c5b46  6aff                 push -1
// 005c5b48  685e4c7d00           push 0x7d4c5e
// 005c5b4d  50                   push eax
// 005c5b4e  b801000000           mov eax, 1
// 005c5b53  64892500000000       mov dword ptr fs:[0], esp
// 005c5b5a  8405ec959700         test byte ptr [0x9795ec], al
// 005c5b60  7530                 jne 0x5c5b92
// 005c5b62  0905ec959700         or dword ptr [0x9795ec], eax
// 005c5b68  6aff                 push -1
// 005c5b6a  68081a9600           push 0x961a08
// 005c5b6f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5b77  e814e4f8ff           call 0x553f90
// 005c5b7c  83c408               add esp, 8
// 005c5b7f  a3e8959700           mov dword ptr [0x9795e8], eax
// 005c5b84  8b0c24               mov ecx, dword ptr [esp]
// 005c5b87  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5b8e  83c40c               add esp, 0xc
// 005c5b91  c3                   ret 
// 005c5b92  8b0c24               mov ecx, dword ptr [esp]
// 005c5b95  a1e8959700           mov eax, dword ptr [0x9795e8]
// 005c5b9a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5ba1  83c40c               add esp, 0xc
// 005c5ba4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
