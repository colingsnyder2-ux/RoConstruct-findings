// roc 2007-08 00593350  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593350
//
// 00593350  64a100000000         mov eax, dword ptr fs:[0]
// 00593356  6aff                 push -1
// 00593358  68ae6f7500           push 0x756fae
// 0059335d  50                   push eax
// 0059335e  b801000000           mov eax, 1
// 00593363  64892500000000       mov dword ptr fs:[0], esp
// 0059336a  8405144d8c00         test byte ptr [0x8c4d14], al
// 00593370  7530                 jne 0x5933a2
// 00593372  0905144d8c00         or dword ptr [0x8c4d14], eax
// 00593378  6aff                 push -1
// 0059337a  6818418b00           push 0x8b4118
// 0059337f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593387  e8b495f9ff           call 0x52c940
// 0059338c  83c408               add esp, 8
// 0059338f  a3104d8c00           mov dword ptr [0x8c4d10], eax
// 00593394  8b0c24               mov ecx, dword ptr [esp]
// 00593397  64890d00000000       mov dword ptr fs:[0], ecx
// 0059339e  83c40c               add esp, 0xc
// 005933a1  c3                   ret 
// 005933a2  8b0c24               mov ecx, dword ptr [esp]
// 005933a5  a1104d8c00           mov eax, dword ptr [0x8c4d10]
// 005933aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005933b1  83c40c               add esp, 0xc
// 005933b4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
