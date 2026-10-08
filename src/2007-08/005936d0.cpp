// roc 2007-08 005936d0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005936d0
//
// 005936d0  64a100000000         mov eax, dword ptr fs:[0]
// 005936d6  6aff                 push -1
// 005936d8  68ae707500           push 0x7570ae
// 005936dd  50                   push eax
// 005936de  b801000000           mov eax, 1
// 005936e3  64892500000000       mov dword ptr fs:[0], esp
// 005936ea  8405544d8c00         test byte ptr [0x8c4d54], al
// 005936f0  7530                 jne 0x593722
// 005936f2  0905544d8c00         or dword ptr [0x8c4d54], eax
// 005936f8  6aff                 push -1
// 005936fa  6874418b00           push 0x8b4174
// 005936ff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593707  e83492f9ff           call 0x52c940
// 0059370c  83c408               add esp, 8
// 0059370f  a3504d8c00           mov dword ptr [0x8c4d50], eax
// 00593714  8b0c24               mov ecx, dword ptr [esp]
// 00593717  64890d00000000       mov dword ptr fs:[0], ecx
// 0059371e  83c40c               add esp, 0xc
// 00593721  c3                   ret 
// 00593722  8b0c24               mov ecx, dword ptr [esp]
// 00593725  a1504d8c00           mov eax, dword ptr [0x8c4d50]
// 0059372a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593731  83c40c               add esp, 0xc
// 00593734  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
