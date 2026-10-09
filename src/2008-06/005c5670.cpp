// roc 2008-06 005c5670  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5670
//
// 005c5670  64a100000000         mov eax, dword ptr fs:[0]
// 005c5676  6aff                 push -1
// 005c5678  68fe4a7d00           push 0x7d4afe
// 005c567d  50                   push eax
// 005c567e  b801000000           mov eax, 1
// 005c5683  64892500000000       mov dword ptr fs:[0], esp
// 005c568a  840594959700         test byte ptr [0x979594], al
// 005c5690  7530                 jne 0x5c56c2
// 005c5692  090594959700         or dword ptr [0x979594], eax
// 005c5698  6aff                 push -1
// 005c569a  68f4ae9500           push 0x95aef4
// 005c569f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c56a7  e8e4e8f8ff           call 0x553f90
// 005c56ac  83c408               add esp, 8
// 005c56af  a390959700           mov dword ptr [0x979590], eax
// 005c56b4  8b0c24               mov ecx, dword ptr [esp]
// 005c56b7  64890d00000000       mov dword ptr fs:[0], ecx
// 005c56be  83c40c               add esp, 0xc
// 005c56c1  c3                   ret 
// 005c56c2  8b0c24               mov ecx, dword ptr [esp]
// 005c56c5  a190959700           mov eax, dword ptr [0x979590]
// 005c56ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005c56d1  83c40c               add esp, 0xc
// 005c56d4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
