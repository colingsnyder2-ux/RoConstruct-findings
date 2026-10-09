// roc 2008-06 005c5c90  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5c90
//
// 005c5c90  64a100000000         mov eax, dword ptr fs:[0]
// 005c5c96  6aff                 push -1
// 005c5c98  68be4c7d00           push 0x7d4cbe
// 005c5c9d  50                   push eax
// 005c5c9e  b801000000           mov eax, 1
// 005c5ca3  64892500000000       mov dword ptr fs:[0], esp
// 005c5caa  840504969700         test byte ptr [0x979604], al
// 005c5cb0  7530                 jne 0x5c5ce2
// 005c5cb2  090504969700         or dword ptr [0x979604], eax
// 005c5cb8  6aff                 push -1
// 005c5cba  682c1a9600           push 0x961a2c
// 005c5cbf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5cc7  e8c4e2f8ff           call 0x553f90
// 005c5ccc  83c408               add esp, 8
// 005c5ccf  a300969700           mov dword ptr [0x979600], eax
// 005c5cd4  8b0c24               mov ecx, dword ptr [esp]
// 005c5cd7  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5cde  83c40c               add esp, 0xc
// 005c5ce1  c3                   ret 
// 005c5ce2  8b0c24               mov ecx, dword ptr [esp]
// 005c5ce5  a100969700           mov eax, dword ptr [0x979600]
// 005c5cea  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5cf1  83c40c               add esp, 0xc
// 005c5cf4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
