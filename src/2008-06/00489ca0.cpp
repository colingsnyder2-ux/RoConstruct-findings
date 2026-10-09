// roc 2008-06 00489ca0  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489ca0
//
// 00489ca0  64a100000000         mov eax, dword ptr fs:[0]
// 00489ca6  6aff                 push -1
// 00489ca8  680e5e7c00           push 0x7c5e0e
// 00489cad  50                   push eax
// 00489cae  b801000000           mov eax, 1
// 00489cb3  64892500000000       mov dword ptr fs:[0], esp
// 00489cba  8405fcfa9600         test byte ptr [0x96fafc], al
// 00489cc0  7530                 jne 0x489cf2
// 00489cc2  0905fcfa9600         or dword ptr [0x96fafc], eax
// 00489cc8  6aff                 push -1
// 00489cca  6840a78300           push 0x83a740
// 00489ccf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00489cd7  e8b4a20c00           call 0x553f90
// 00489cdc  83c408               add esp, 8
// 00489cdf  a3f8fa9600           mov dword ptr [0x96faf8], eax
// 00489ce4  8b0c24               mov ecx, dword ptr [esp]
// 00489ce7  64890d00000000       mov dword ptr fs:[0], ecx
// 00489cee  83c40c               add esp, 0xc
// 00489cf1  c3                   ret 
// 00489cf2  8b0c24               mov ecx, dword ptr [esp]
// 00489cf5  a1f8fa9600           mov eax, dword ptr [0x96faf8]
// 00489cfa  64890d00000000       mov dword ptr fs:[0], ecx
// 00489d01  83c40c               add esp, 0xc
// 00489d04  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
