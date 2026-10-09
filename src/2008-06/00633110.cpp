// roc 2008-06 00633110  unit: RBX::VExplosion::?$BoundPropGetSet  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633110
//
// 00633110  64a100000000         mov eax, dword ptr fs:[0]
// 00633116  6aff                 push -1
// 00633118  68ee9e7d00           push 0x7d9eee
// 0063311d  50                   push eax
// 0063311e  b801000000           mov eax, 1
// 00633123  64892500000000       mov dword ptr fs:[0], esp
// 0063312a  84050ccb9700         test byte ptr [0x97cb0c], al
// 00633130  7530                 jne 0x633162
// 00633132  09050ccb9700         or dword ptr [0x97cb0c], eax
// 00633138  6aff                 push -1
// 0063313a  68d8d99500           push 0x95d9d8
// 0063313f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00633147  e8440ef2ff           call 0x553f90
// 0063314c  83c408               add esp, 8
// 0063314f  a308cb9700           mov dword ptr [0x97cb08], eax
// 00633154  8b0c24               mov ecx, dword ptr [esp]
// 00633157  64890d00000000       mov dword ptr fs:[0], ecx
// 0063315e  83c40c               add esp, 0xc
// 00633161  c3                   ret 
// 00633162  8b0c24               mov ecx, dword ptr [esp]
// 00633165  a108cb9700           mov eax, dword ptr [0x97cb08]
// 0063316a  64890d00000000       mov dword ptr fs:[0], ecx
// 00633171  83c40c               add esp, 0xc
// 00633174  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
