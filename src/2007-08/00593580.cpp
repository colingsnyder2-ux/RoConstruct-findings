// roc 2007-08 00593580  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593580
//
// 00593580  64a100000000         mov eax, dword ptr fs:[0]
// 00593586  6aff                 push -1
// 00593588  684e707500           push 0x75704e
// 0059358d  50                   push eax
// 0059358e  b801000000           mov eax, 1
// 00593593  64892500000000       mov dword ptr fs:[0], esp
// 0059359a  84053c4d8c00         test byte ptr [0x8c4d3c], al
// 005935a0  7530                 jne 0x5935d2
// 005935a2  09053c4d8c00         or dword ptr [0x8c4d3c], eax
// 005935a8  6aff                 push -1
// 005935aa  6844418b00           push 0x8b4144
// 005935af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005935b7  e88493f9ff           call 0x52c940
// 005935bc  83c408               add esp, 8
// 005935bf  a3384d8c00           mov dword ptr [0x8c4d38], eax
// 005935c4  8b0c24               mov ecx, dword ptr [esp]
// 005935c7  64890d00000000       mov dword ptr fs:[0], ecx
// 005935ce  83c40c               add esp, 0xc
// 005935d1  c3                   ret 
// 005935d2  8b0c24               mov ecx, dword ptr [esp]
// 005935d5  a1384d8c00           mov eax, dword ptr [0x8c4d38]
// 005935da  64890d00000000       mov dword ptr fs:[0], ecx
// 005935e1  83c40c               add esp, 0xc
// 005935e4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
