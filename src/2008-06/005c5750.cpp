// roc 2008-06 005c5750  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5750
//
// 005c5750  64a100000000         mov eax, dword ptr fs:[0]
// 005c5756  6aff                 push -1
// 005c5758  683e4b7d00           push 0x7d4b3e
// 005c575d  50                   push eax
// 005c575e  b801000000           mov eax, 1
// 005c5763  64892500000000       mov dword ptr fs:[0], esp
// 005c576a  8405a4959700         test byte ptr [0x9795a4], al
// 005c5770  7530                 jne 0x5c57a2
// 005c5772  0905a4959700         or dword ptr [0x9795a4], eax
// 005c5778  6aff                 push -1
// 005c577a  6804af9500           push 0x95af04
// 005c577f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5787  e804e8f8ff           call 0x553f90
// 005c578c  83c408               add esp, 8
// 005c578f  a3a0959700           mov dword ptr [0x9795a0], eax
// 005c5794  8b0c24               mov ecx, dword ptr [esp]
// 005c5797  64890d00000000       mov dword ptr fs:[0], ecx
// 005c579e  83c40c               add esp, 0xc
// 005c57a1  c3                   ret 
// 005c57a2  8b0c24               mov ecx, dword ptr [esp]
// 005c57a5  a1a0959700           mov eax, dword ptr [0x9795a0]
// 005c57aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005c57b1  83c40c               add esp, 0xc
// 005c57b4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
