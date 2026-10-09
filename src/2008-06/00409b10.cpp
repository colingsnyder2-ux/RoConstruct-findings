// roc 2008-06 00409b10  unit: RBX::VSelection::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409b10
//
// 00409b10  64a100000000         mov eax, dword ptr fs:[0]
// 00409b16  6aff                 push -1
// 00409b18  687ed07b00           push 0x7bd07e
// 00409b1d  50                   push eax
// 00409b1e  b801000000           mov eax, 1
// 00409b23  64892500000000       mov dword ptr fs:[0], esp
// 00409b2a  840558c39600         test byte ptr [0x96c358], al
// 00409b30  7530                 jne 0x409b62
// 00409b32  090558c39600         or dword ptr [0x96c358], eax
// 00409b38  6aff                 push -1
// 00409b3a  68b0009300           push 0x9300b0
// 00409b3f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00409b47  e844a41400           call 0x553f90
// 00409b4c  83c408               add esp, 8
// 00409b4f  a354c39600           mov dword ptr [0x96c354], eax
// 00409b54  8b0c24               mov ecx, dword ptr [esp]
// 00409b57  64890d00000000       mov dword ptr fs:[0], ecx
// 00409b5e  83c40c               add esp, 0xc
// 00409b61  c3                   ret 
// 00409b62  8b0c24               mov ecx, dword ptr [esp]
// 00409b65  a154c39600           mov eax, dword ptr [0x96c354]
// 00409b6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00409b71  83c40c               add esp, 0xc
// 00409b74  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
