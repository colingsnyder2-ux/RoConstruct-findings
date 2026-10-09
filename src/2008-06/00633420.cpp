// roc 2008-06 00633420  unit: RBX::VExplosion::?$BoundPropGetSet  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633420
//
// 00633420  64a100000000         mov eax, dword ptr fs:[0]
// 00633426  6aff                 push -1
// 00633428  68ce9f7d00           push 0x7d9fce
// 0063342d  50                   push eax
// 0063342e  b801000000           mov eax, 1
// 00633433  64892500000000       mov dword ptr fs:[0], esp
// 0063343a  840544cb9700         test byte ptr [0x97cb44], al
// 00633440  7530                 jne 0x633472
// 00633442  090544cb9700         or dword ptr [0x97cb44], eax
// 00633448  6aff                 push -1
// 0063344a  6830da9500           push 0x95da30
// 0063344f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00633457  e8340bf2ff           call 0x553f90
// 0063345c  83c408               add esp, 8
// 0063345f  a340cb9700           mov dword ptr [0x97cb40], eax
// 00633464  8b0c24               mov ecx, dword ptr [esp]
// 00633467  64890d00000000       mov dword ptr fs:[0], ecx
// 0063346e  83c40c               add esp, 0xc
// 00633471  c3                   ret 
// 00633472  8b0c24               mov ecx, dword ptr [esp]
// 00633475  a140cb9700           mov eax, dword ptr [0x97cb40]
// 0063347a  64890d00000000       mov dword ptr fs:[0], ecx
// 00633481  83c40c               add esp, 0xc
// 00633484  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
