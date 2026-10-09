// roc 2008-06 0041fa30  unit: CListCtrl  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041fa30
//
// 0041fa30  64a100000000         mov eax, dword ptr fs:[0]
// 0041fa36  6aff                 push -1
// 0041fa38  689ee67b00           push 0x7be69e
// 0041fa3d  50                   push eax
// 0041fa3e  b801000000           mov eax, 1
// 0041fa43  64892500000000       mov dword ptr fs:[0], esp
// 0041fa4a  8405e8d09600         test byte ptr [0x96d0e8], al
// 0041fa50  7530                 jne 0x41fa82
// 0041fa52  0905e8d09600         or dword ptr [0x96d0e8], eax
// 0041fa58  6aff                 push -1
// 0041fa5a  6858fd8200           push 0x82fd58
// 0041fa5f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041fa67  e824451300           call 0x553f90
// 0041fa6c  83c408               add esp, 8
// 0041fa6f  a3e4d09600           mov dword ptr [0x96d0e4], eax
// 0041fa74  8b0c24               mov ecx, dword ptr [esp]
// 0041fa77  64890d00000000       mov dword ptr fs:[0], ecx
// 0041fa7e  83c40c               add esp, 0xc
// 0041fa81  c3                   ret 
// 0041fa82  8b0c24               mov ecx, dword ptr [esp]
// 0041fa85  a1e4d09600           mov eax, dword ptr [0x96d0e4]
// 0041fa8a  64890d00000000       mov dword ptr fs:[0], ecx
// 0041fa91  83c40c               add esp, 0xc
// 0041fa94  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
