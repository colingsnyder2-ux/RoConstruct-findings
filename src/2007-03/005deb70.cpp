// roc 2007-03 005deb70  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005deb70
//
// 005deb70  64a100000000         mov eax, dword ptr fs:[0]
// 005deb76  6aff                 push -1
// 005deb78  686ebb7500           push 0x75bb6e
// 005deb7d  50                   push eax
// 005deb7e  b801000000           mov eax, 1
// 005deb83  64892500000000       mov dword ptr fs:[0], esp
// 005deb8a  84057c078c00         test byte ptr [0x8c077c], al
// 005deb90  7530                 jne 0x5debc2
// 005deb92  09057c078c00         or dword ptr [0x8c077c], eax
// 005deb98  6aff                 push -1
// 005deb9a  685caa8a00           push 0x8aaa5c
// 005deb9f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005deba7  e834edf4ff           call 0x52d8e0
// 005debac  83c408               add esp, 8
// 005debaf  a378078c00           mov dword ptr [0x8c0778], eax
// 005debb4  8b0c24               mov ecx, dword ptr [esp]
// 005debb7  64890d00000000       mov dword ptr fs:[0], ecx
// 005debbe  83c40c               add esp, 0xc
// 005debc1  c3                   ret 
// 005debc2  8b0c24               mov ecx, dword ptr [esp]
// 005debc5  a178078c00           mov eax, dword ptr [0x8c0778]
// 005debca  64890d00000000       mov dword ptr fs:[0], ecx
// 005debd1  83c40c               add esp, 0xc
// 005debd4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
