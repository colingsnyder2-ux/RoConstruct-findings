// roc 2007-03 005493f0  unit: seg_00540000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005493f0
//
// 005493f0  64a100000000         mov eax, dword ptr fs:[0]
// 005493f6  6aff                 push -1
// 005493f8  688e2e7500           push 0x752e8e
// 005493fd  50                   push eax
// 005493fe  b801000000           mov eax, 1
// 00549403  64892500000000       mov dword ptr fs:[0], esp
// 0054940a  840588bd8b00         test byte ptr [0x8bbd88], al
// 00549410  7530                 jne 0x549442
// 00549412  090588bd8b00         or dword ptr [0x8bbd88], eax
// 00549418  6aff                 push -1
// 0054941a  6878827a00           push 0x7a8278
// 0054941f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00549427  e8b444feff           call 0x52d8e0
// 0054942c  83c408               add esp, 8
// 0054942f  a384bd8b00           mov dword ptr [0x8bbd84], eax
// 00549434  8b0c24               mov ecx, dword ptr [esp]
// 00549437  64890d00000000       mov dword ptr fs:[0], ecx
// 0054943e  83c40c               add esp, 0xc
// 00549441  c3                   ret 
// 00549442  8b0c24               mov ecx, dword ptr [esp]
// 00549445  a184bd8b00           mov eax, dword ptr [0x8bbd84]
// 0054944a  64890d00000000       mov dword ptr fs:[0], ecx
// 00549451  83c40c               add esp, 0xc
// 00549454  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
