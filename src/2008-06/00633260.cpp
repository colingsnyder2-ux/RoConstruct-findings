// roc 2008-06 00633260  unit: RBX::VExplosion::?$BoundPropGetSet  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633260
//
// 00633260  64a100000000         mov eax, dword ptr fs:[0]
// 00633266  6aff                 push -1
// 00633268  684e9f7d00           push 0x7d9f4e
// 0063326d  50                   push eax
// 0063326e  b801000000           mov eax, 1
// 00633273  64892500000000       mov dword ptr fs:[0], esp
// 0063327a  840524cb9700         test byte ptr [0x97cb24], al
// 00633280  7530                 jne 0x6332b2
// 00633282  090524cb9700         or dword ptr [0x97cb24], eax
// 00633288  6aff                 push -1
// 0063328a  68fcd99500           push 0x95d9fc
// 0063328f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00633297  e8f40cf2ff           call 0x553f90
// 0063329c  83c408               add esp, 8
// 0063329f  a320cb9700           mov dword ptr [0x97cb20], eax
// 006332a4  8b0c24               mov ecx, dword ptr [esp]
// 006332a7  64890d00000000       mov dword ptr fs:[0], ecx
// 006332ae  83c40c               add esp, 0xc
// 006332b1  c3                   ret 
// 006332b2  8b0c24               mov ecx, dword ptr [esp]
// 006332b5  a120cb9700           mov eax, dword ptr [0x97cb20]
// 006332ba  64890d00000000       mov dword ptr fs:[0], ecx
// 006332c1  83c40c               add esp, 0xc
// 006332c4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
