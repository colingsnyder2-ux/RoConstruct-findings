// roc 2008-06 00401a00  unit: VCWorkspace::?$CComObject  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00401a00
//
// 00401a00  64a100000000         mov eax, dword ptr fs:[0]
// 00401a06  6aff                 push -1
// 00401a08  685ecb7b00           push 0x7bcb5e
// 00401a0d  50                   push eax
// 00401a0e  b801000000           mov eax, 1
// 00401a13  64892500000000       mov dword ptr fs:[0], esp
// 00401a1a  840580c29600         test byte ptr [0x96c280], al
// 00401a20  7530                 jne 0x401a52
// 00401a22  090580c29600         or dword ptr [0x96c280], eax
// 00401a28  6aff                 push -1
// 00401a2a  6828d38200           push 0x82d328
// 00401a2f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00401a37  e854251500           call 0x553f90
// 00401a3c  83c408               add esp, 8
// 00401a3f  a37cc29600           mov dword ptr [0x96c27c], eax
// 00401a44  8b0c24               mov ecx, dword ptr [esp]
// 00401a47  64890d00000000       mov dword ptr fs:[0], ecx
// 00401a4e  83c40c               add esp, 0xc
// 00401a51  c3                   ret 
// 00401a52  8b0c24               mov ecx, dword ptr [esp]
// 00401a55  a17cc29600           mov eax, dword ptr [0x96c27c]
// 00401a5a  64890d00000000       mov dword ptr fs:[0], ecx
// 00401a61  83c40c               add esp, 0xc
// 00401a64  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
