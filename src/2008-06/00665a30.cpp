// roc 2008-06 00665a30  unit: RBX::PartDragTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00665a30
//
// 00665a30  64a100000000         mov eax, dword ptr fs:[0]
// 00665a36  6aff                 push -1
// 00665a38  686ec07d00           push 0x7dc06e
// 00665a3d  50                   push eax
// 00665a3e  b801000000           mov eax, 1
// 00665a43  64892500000000       mov dword ptr fs:[0], esp
// 00665a4a  840560d99700         test byte ptr [0x97d960], al
// 00665a50  7530                 jne 0x665a82
// 00665a52  090560d99700         or dword ptr [0x97d960], eax
// 00665a58  6aff                 push -1
// 00665a5a  685c269600           push 0x96265c
// 00665a5f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00665a67  e824e5eeff           call 0x553f90
// 00665a6c  83c408               add esp, 8
// 00665a6f  a35cd99700           mov dword ptr [0x97d95c], eax
// 00665a74  8b0c24               mov ecx, dword ptr [esp]
// 00665a77  64890d00000000       mov dword ptr fs:[0], ecx
// 00665a7e  83c40c               add esp, 0xc
// 00665a81  c3                   ret 
// 00665a82  8b0c24               mov ecx, dword ptr [esp]
// 00665a85  a15cd99700           mov eax, dword ptr [0x97d95c]
// 00665a8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00665a91  83c40c               add esp, 0xc
// 00665a94  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
