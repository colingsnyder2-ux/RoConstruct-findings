// roc 2007-08 005935f0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005935f0
//
// 005935f0  64a100000000         mov eax, dword ptr fs:[0]
// 005935f6  6aff                 push -1
// 005935f8  686e707500           push 0x75706e
// 005935fd  50                   push eax
// 005935fe  b801000000           mov eax, 1
// 00593603  64892500000000       mov dword ptr fs:[0], esp
// 0059360a  8405444d8c00         test byte ptr [0x8c4d44], al
// 00593610  7530                 jne 0x593642
// 00593612  0905444d8c00         or dword ptr [0x8c4d44], eax
// 00593618  6aff                 push -1
// 0059361a  6850418b00           push 0x8b4150
// 0059361f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593627  e81493f9ff           call 0x52c940
// 0059362c  83c408               add esp, 8
// 0059362f  a3404d8c00           mov dword ptr [0x8c4d40], eax
// 00593634  8b0c24               mov ecx, dword ptr [esp]
// 00593637  64890d00000000       mov dword ptr fs:[0], ecx
// 0059363e  83c40c               add esp, 0xc
// 00593641  c3                   ret 
// 00593642  8b0c24               mov ecx, dword ptr [esp]
// 00593645  a1404d8c00           mov eax, dword ptr [0x8c4d40]
// 0059364a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593651  83c40c               add esp, 0xc
// 00593654  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
