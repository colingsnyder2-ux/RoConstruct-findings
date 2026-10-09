// roc 2008-06 00411420  unit: CChatPrompt  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411420
//
// 00411420  64a100000000         mov eax, dword ptr fs:[0]
// 00411426  6aff                 push -1
// 00411428  68aed67b00           push 0x7bd6ae
// 0041142d  50                   push eax
// 0041142e  b801000000           mov eax, 1
// 00411433  64892500000000       mov dword ptr fs:[0], esp
// 0041143a  8405d8cb9600         test byte ptr [0x96cbd8], al
// 00411440  7530                 jne 0x411472
// 00411442  0905d8cb9600         or dword ptr [0x96cbd8], eax
// 00411448  6aff                 push -1
// 0041144a  684c789300           push 0x93784c
// 0041144f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00411457  e8342b1400           call 0x553f90
// 0041145c  83c408               add esp, 8
// 0041145f  a3d4cb9600           mov dword ptr [0x96cbd4], eax
// 00411464  8b0c24               mov ecx, dword ptr [esp]
// 00411467  64890d00000000       mov dword ptr fs:[0], ecx
// 0041146e  83c40c               add esp, 0xc
// 00411471  c3                   ret 
// 00411472  8b0c24               mov ecx, dword ptr [esp]
// 00411475  a1d4cb9600           mov eax, dword ptr [0x96cbd4]
// 0041147a  64890d00000000       mov dword ptr fs:[0], ecx
// 00411481  83c40c               add esp, 0xc
// 00411484  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
