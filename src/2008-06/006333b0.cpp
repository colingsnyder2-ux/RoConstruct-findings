// roc 2008-06 006333b0  unit: RBX::VExplosion::?$BoundPropGetSet  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006333b0
//
// 006333b0  64a100000000         mov eax, dword ptr fs:[0]
// 006333b6  6aff                 push -1
// 006333b8  68ae9f7d00           push 0x7d9fae
// 006333bd  50                   push eax
// 006333be  b801000000           mov eax, 1
// 006333c3  64892500000000       mov dword ptr fs:[0], esp
// 006333ca  84053ccb9700         test byte ptr [0x97cb3c], al
// 006333d0  7530                 jne 0x633402
// 006333d2  09053ccb9700         or dword ptr [0x97cb3c], eax
// 006333d8  6aff                 push -1
// 006333da  6824da9500           push 0x95da24
// 006333df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006333e7  e8a40bf2ff           call 0x553f90
// 006333ec  83c408               add esp, 8
// 006333ef  a338cb9700           mov dword ptr [0x97cb38], eax
// 006333f4  8b0c24               mov ecx, dword ptr [esp]
// 006333f7  64890d00000000       mov dword ptr fs:[0], ecx
// 006333fe  83c40c               add esp, 0xc
// 00633401  c3                   ret 
// 00633402  8b0c24               mov ecx, dword ptr [esp]
// 00633405  a138cb9700           mov eax, dword ptr [0x97cb38]
// 0063340a  64890d00000000       mov dword ptr fs:[0], ecx
// 00633411  83c40c               add esp, 0xc
// 00633414  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
