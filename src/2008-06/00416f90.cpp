// roc 2008-06 00416f90  unit: DHTMLWindowService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416f90
//
// 00416f90  64a100000000         mov eax, dword ptr fs:[0]
// 00416f96  6aff                 push -1
// 00416f98  683edb7b00           push 0x7bdb3e
// 00416f9d  50                   push eax
// 00416f9e  b801000000           mov eax, 1
// 00416fa3  64892500000000       mov dword ptr fs:[0], esp
// 00416faa  8405f4ce9600         test byte ptr [0x96cef4], al
// 00416fb0  7530                 jne 0x416fe2
// 00416fb2  0905f4ce9600         or dword ptr [0x96cef4], eax
// 00416fb8  6aff                 push -1
// 00416fba  68f8c19200           push 0x92c1f8
// 00416fbf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00416fc7  e8c4cf1300           call 0x553f90
// 00416fcc  83c408               add esp, 8
// 00416fcf  a3f0ce9600           mov dword ptr [0x96cef0], eax
// 00416fd4  8b0c24               mov ecx, dword ptr [esp]
// 00416fd7  64890d00000000       mov dword ptr fs:[0], ecx
// 00416fde  83c40c               add esp, 0xc
// 00416fe1  c3                   ret 
// 00416fe2  8b0c24               mov ecx, dword ptr [esp]
// 00416fe5  a1f0ce9600           mov eax, dword ptr [0x96cef0]
// 00416fea  64890d00000000       mov dword ptr fs:[0], ecx
// 00416ff1  83c40c               add esp, 0xc
// 00416ff4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
