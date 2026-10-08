// roc 2007-08 00593820  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593820
//
// 00593820  64a100000000         mov eax, dword ptr fs:[0]
// 00593826  6aff                 push -1
// 00593828  680e717500           push 0x75710e
// 0059382d  50                   push eax
// 0059382e  b801000000           mov eax, 1
// 00593833  64892500000000       mov dword ptr fs:[0], esp
// 0059383a  84056c4d8c00         test byte ptr [0x8c4d6c], al
// 00593840  7530                 jne 0x593872
// 00593842  09056c4d8c00         or dword ptr [0x8c4d6c], eax
// 00593848  6aff                 push -1
// 0059384a  6894418b00           push 0x8b4194
// 0059384f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593857  e8e490f9ff           call 0x52c940
// 0059385c  83c408               add esp, 8
// 0059385f  a3684d8c00           mov dword ptr [0x8c4d68], eax
// 00593864  8b0c24               mov ecx, dword ptr [esp]
// 00593867  64890d00000000       mov dword ptr fs:[0], ecx
// 0059386e  83c40c               add esp, 0xc
// 00593871  c3                   ret 
// 00593872  8b0c24               mov ecx, dword ptr [esp]
// 00593875  a1684d8c00           mov eax, dword ptr [0x8c4d68]
// 0059387a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593881  83c40c               add esp, 0xc
// 00593884  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
