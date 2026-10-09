// roc 2008-06 004099c0  unit: RBX::VSelection::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004099c0
//
// 004099c0  64a100000000         mov eax, dword ptr fs:[0]
// 004099c6  6aff                 push -1
// 004099c8  681ed07b00           push 0x7bd01e
// 004099cd  50                   push eax
// 004099ce  b801000000           mov eax, 1
// 004099d3  64892500000000       mov dword ptr fs:[0], esp
// 004099da  840540c39600         test byte ptr [0x96c340], al
// 004099e0  7530                 jne 0x409a12
// 004099e2  090540c39600         or dword ptr [0x96c340], eax
// 004099e8  6aff                 push -1
// 004099ea  6850009300           push 0x930050
// 004099ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004099f7  e894a51400           call 0x553f90
// 004099fc  83c408               add esp, 8
// 004099ff  a33cc39600           mov dword ptr [0x96c33c], eax
// 00409a04  8b0c24               mov ecx, dword ptr [esp]
// 00409a07  64890d00000000       mov dword ptr fs:[0], ecx
// 00409a0e  83c40c               add esp, 0xc
// 00409a11  c3                   ret 
// 00409a12  8b0c24               mov ecx, dword ptr [esp]
// 00409a15  a13cc39600           mov eax, dword ptr [0x96c33c]
// 00409a1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00409a21  83c40c               add esp, 0xc
// 00409a24  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
