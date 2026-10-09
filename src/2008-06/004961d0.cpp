// roc 2008-06 004961d0  unit: RBX::Network::Players  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004961d0
//
// 004961d0  64a100000000         mov eax, dword ptr fs:[0]
// 004961d6  6aff                 push -1
// 004961d8  68be6a7c00           push 0x7c6abe
// 004961dd  50                   push eax
// 004961de  b801000000           mov eax, 1
// 004961e3  64892500000000       mov dword ptr fs:[0], esp
// 004961ea  840560029700         test byte ptr [0x970260], al
// 004961f0  7530                 jne 0x496222
// 004961f2  090560029700         or dword ptr [0x970260], eax
// 004961f8  6aff                 push -1
// 004961fa  68888c9300           push 0x938c88
// 004961ff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00496207  e884dd0b00           call 0x553f90
// 0049620c  83c408               add esp, 8
// 0049620f  a35c029700           mov dword ptr [0x97025c], eax
// 00496214  8b0c24               mov ecx, dword ptr [esp]
// 00496217  64890d00000000       mov dword ptr fs:[0], ecx
// 0049621e  83c40c               add esp, 0xc
// 00496221  c3                   ret 
// 00496222  8b0c24               mov ecx, dword ptr [esp]
// 00496225  a15c029700           mov eax, dword ptr [0x97025c]
// 0049622a  64890d00000000       mov dword ptr fs:[0], ecx
// 00496231  83c40c               add esp, 0xc
// 00496234  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
