// roc 2008-06 005bfb10  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bfb10
//
// 005bfb10  64a100000000         mov eax, dword ptr fs:[0]
// 005bfb16  6aff                 push -1
// 005bfb18  686e417d00           push 0x7d416e
// 005bfb1d  50                   push eax
// 005bfb1e  b801000000           mov eax, 1
// 005bfb23  64892500000000       mov dword ptr fs:[0], esp
// 005bfb2a  8405a8779700         test byte ptr [0x9777a8], al
// 005bfb30  7530                 jne 0x5bfb62
// 005bfb32  0905a8779700         or dword ptr [0x9777a8], eax
// 005bfb38  6aff                 push -1
// 005bfb3a  6828c79500           push 0x95c728
// 005bfb3f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bfb47  e84444f9ff           call 0x553f90
// 005bfb4c  83c408               add esp, 8
// 005bfb4f  a3a4779700           mov dword ptr [0x9777a4], eax
// 005bfb54  8b0c24               mov ecx, dword ptr [esp]
// 005bfb57  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfb5e  83c40c               add esp, 0xc
// 005bfb61  c3                   ret 
// 005bfb62  8b0c24               mov ecx, dword ptr [esp]
// 005bfb65  a1a4779700           mov eax, dword ptr [0x9777a4]
// 005bfb6a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfb71  83c40c               add esp, 0xc
// 005bfb74  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
