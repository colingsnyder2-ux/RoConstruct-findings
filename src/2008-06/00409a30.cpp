// roc 2008-06 00409a30  unit: RBX::VSelection::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409a30
//
// 00409a30  64a100000000         mov eax, dword ptr fs:[0]
// 00409a36  6aff                 push -1
// 00409a38  683ed07b00           push 0x7bd03e
// 00409a3d  50                   push eax
// 00409a3e  b801000000           mov eax, 1
// 00409a43  64892500000000       mov dword ptr fs:[0], esp
// 00409a4a  840548c39600         test byte ptr [0x96c348], al
// 00409a50  7530                 jne 0x409a82
// 00409a52  090548c39600         or dword ptr [0x96c348], eax
// 00409a58  6aff                 push -1
// 00409a5a  6864009300           push 0x930064
// 00409a5f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00409a67  e824a51400           call 0x553f90
// 00409a6c  83c408               add esp, 8
// 00409a6f  a344c39600           mov dword ptr [0x96c344], eax
// 00409a74  8b0c24               mov ecx, dword ptr [esp]
// 00409a77  64890d00000000       mov dword ptr fs:[0], ecx
// 00409a7e  83c40c               add esp, 0xc
// 00409a81  c3                   ret 
// 00409a82  8b0c24               mov ecx, dword ptr [esp]
// 00409a85  a144c39600           mov eax, dword ptr [0x96c344]
// 00409a8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00409a91  83c40c               add esp, 0xc
// 00409a94  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
