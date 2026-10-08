// roc 2007-08 00593430  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593430
//
// 00593430  64a100000000         mov eax, dword ptr fs:[0]
// 00593436  6aff                 push -1
// 00593438  68ee6f7500           push 0x756fee
// 0059343d  50                   push eax
// 0059343e  b801000000           mov eax, 1
// 00593443  64892500000000       mov dword ptr fs:[0], esp
// 0059344a  8405244d8c00         test byte ptr [0x8c4d24], al
// 00593450  7530                 jne 0x593482
// 00593452  0905244d8c00         or dword ptr [0x8c4d24], eax
// 00593458  6aff                 push -1
// 0059345a  6828418b00           push 0x8b4128
// 0059345f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593467  e8d494f9ff           call 0x52c940
// 0059346c  83c408               add esp, 8
// 0059346f  a3204d8c00           mov dword ptr [0x8c4d20], eax
// 00593474  8b0c24               mov ecx, dword ptr [esp]
// 00593477  64890d00000000       mov dword ptr fs:[0], ecx
// 0059347e  83c40c               add esp, 0xc
// 00593481  c3                   ret 
// 00593482  8b0c24               mov ecx, dword ptr [esp]
// 00593485  a1204d8c00           mov eax, dword ptr [0x8c4d20]
// 0059348a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593491  83c40c               add esp, 0xc
// 00593494  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
