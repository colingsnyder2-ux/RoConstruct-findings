// roc 2007-03 005deb00  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005deb00
//
// 005deb00  64a100000000         mov eax, dword ptr fs:[0]
// 005deb06  6aff                 push -1
// 005deb08  684ebb7500           push 0x75bb4e
// 005deb0d  50                   push eax
// 005deb0e  b801000000           mov eax, 1
// 005deb13  64892500000000       mov dword ptr fs:[0], esp
// 005deb1a  840574078c00         test byte ptr [0x8c0774], al
// 005deb20  7530                 jne 0x5deb52
// 005deb22  090574078c00         or dword ptr [0x8c0774], eax
// 005deb28  6aff                 push -1
// 005deb2a  6850aa8a00           push 0x8aaa50
// 005deb2f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005deb37  e8a4edf4ff           call 0x52d8e0
// 005deb3c  83c408               add esp, 8
// 005deb3f  a370078c00           mov dword ptr [0x8c0770], eax
// 005deb44  8b0c24               mov ecx, dword ptr [esp]
// 005deb47  64890d00000000       mov dword ptr fs:[0], ecx
// 005deb4e  83c40c               add esp, 0xc
// 005deb51  c3                   ret 
// 005deb52  8b0c24               mov ecx, dword ptr [esp]
// 005deb55  a170078c00           mov eax, dword ptr [0x8c0770]
// 005deb5a  64890d00000000       mov dword ptr fs:[0], ecx
// 005deb61  83c40c               add esp, 0xc
// 005deb64  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
