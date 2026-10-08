// roc 2007-08 00593740  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593740
//
// 00593740  64a100000000         mov eax, dword ptr fs:[0]
// 00593746  6aff                 push -1
// 00593748  68ce707500           push 0x7570ce
// 0059374d  50                   push eax
// 0059374e  b801000000           mov eax, 1
// 00593753  64892500000000       mov dword ptr fs:[0], esp
// 0059375a  84055c4d8c00         test byte ptr [0x8c4d5c], al
// 00593760  7530                 jne 0x593792
// 00593762  09055c4d8c00         or dword ptr [0x8c4d5c], eax
// 00593768  6aff                 push -1
// 0059376a  687c418b00           push 0x8b417c
// 0059376f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593777  e8c491f9ff           call 0x52c940
// 0059377c  83c408               add esp, 8
// 0059377f  a3584d8c00           mov dword ptr [0x8c4d58], eax
// 00593784  8b0c24               mov ecx, dword ptr [esp]
// 00593787  64890d00000000       mov dword ptr fs:[0], ecx
// 0059378e  83c40c               add esp, 0xc
// 00593791  c3                   ret 
// 00593792  8b0c24               mov ecx, dword ptr [esp]
// 00593795  a1584d8c00           mov eax, dword ptr [0x8c4d58]
// 0059379a  64890d00000000       mov dword ptr fs:[0], ecx
// 005937a1  83c40c               add esp, 0xc
// 005937a4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
