// roc 2008-06 004068c0  unit: VCApp::?$CComObject  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004068c0
//
// 004068c0  64a100000000         mov eax, dword ptr fs:[0]
// 004068c6  6aff                 push -1
// 004068c8  686ece7b00           push 0x7bce6e
// 004068cd  50                   push eax
// 004068ce  b801000000           mov eax, 1
// 004068d3  64892500000000       mov dword ptr fs:[0], esp
// 004068da  840500c39600         test byte ptr [0x96c300], al
// 004068e0  7530                 jne 0x406912
// 004068e2  090500c39600         or dword ptr [0x96c300], eax
// 004068e8  6aff                 push -1
// 004068ea  6858ec8200           push 0x82ec58
// 004068ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004068f7  e894d61400           call 0x553f90
// 004068fc  83c408               add esp, 8
// 004068ff  a3fcc29600           mov dword ptr [0x96c2fc], eax
// 00406904  8b0c24               mov ecx, dword ptr [esp]
// 00406907  64890d00000000       mov dword ptr fs:[0], ecx
// 0040690e  83c40c               add esp, 0xc
// 00406911  c3                   ret 
// 00406912  8b0c24               mov ecx, dword ptr [esp]
// 00406915  a1fcc29600           mov eax, dword ptr [0x96c2fc]
// 0040691a  64890d00000000       mov dword ptr fs:[0], ecx
// 00406921  83c40c               add esp, 0xc
// 00406924  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
