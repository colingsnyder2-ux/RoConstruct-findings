// roc 2007-08 00593970  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593970
//
// 00593970  64a100000000         mov eax, dword ptr fs:[0]
// 00593976  6aff                 push -1
// 00593978  686e717500           push 0x75716e
// 0059397d  50                   push eax
// 0059397e  b801000000           mov eax, 1
// 00593983  64892500000000       mov dword ptr fs:[0], esp
// 0059398a  8405844d8c00         test byte ptr [0x8c4d84], al
// 00593990  7530                 jne 0x5939c2
// 00593992  0905844d8c00         or dword ptr [0x8c4d84], eax
// 00593998  6aff                 push -1
// 0059399a  68b8418b00           push 0x8b41b8
// 0059399f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005939a7  e8948ff9ff           call 0x52c940
// 005939ac  83c408               add esp, 8
// 005939af  a3804d8c00           mov dword ptr [0x8c4d80], eax
// 005939b4  8b0c24               mov ecx, dword ptr [esp]
// 005939b7  64890d00000000       mov dword ptr fs:[0], ecx
// 005939be  83c40c               add esp, 0xc
// 005939c1  c3                   ret 
// 005939c2  8b0c24               mov ecx, dword ptr [esp]
// 005939c5  a1804d8c00           mov eax, dword ptr [0x8c4d80]
// 005939ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005939d1  83c40c               add esp, 0xc
// 005939d4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
