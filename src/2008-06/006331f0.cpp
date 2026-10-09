// roc 2008-06 006331f0  unit: RBX::VExplosion::?$BoundPropGetSet  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006331f0
//
// 006331f0  64a100000000         mov eax, dword ptr fs:[0]
// 006331f6  6aff                 push -1
// 006331f8  682e9f7d00           push 0x7d9f2e
// 006331fd  50                   push eax
// 006331fe  b801000000           mov eax, 1
// 00633203  64892500000000       mov dword ptr fs:[0], esp
// 0063320a  84051ccb9700         test byte ptr [0x97cb1c], al
// 00633210  7530                 jne 0x633242
// 00633212  09051ccb9700         or dword ptr [0x97cb1c], eax
// 00633218  6aff                 push -1
// 0063321a  68f0d99500           push 0x95d9f0
// 0063321f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00633227  e8640df2ff           call 0x553f90
// 0063322c  83c408               add esp, 8
// 0063322f  a318cb9700           mov dword ptr [0x97cb18], eax
// 00633234  8b0c24               mov ecx, dword ptr [esp]
// 00633237  64890d00000000       mov dword ptr fs:[0], ecx
// 0063323e  83c40c               add esp, 0xc
// 00633241  c3                   ret 
// 00633242  8b0c24               mov ecx, dword ptr [esp]
// 00633245  a118cb9700           mov eax, dword ptr [0x97cb18]
// 0063324a  64890d00000000       mov dword ptr fs:[0], ecx
// 00633251  83c40c               add esp, 0xc
// 00633254  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
