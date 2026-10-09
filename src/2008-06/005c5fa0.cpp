// roc 2008-06 005c5fa0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5fa0
//
// 005c5fa0  64a100000000         mov eax, dword ptr fs:[0]
// 005c5fa6  6aff                 push -1
// 005c5fa8  689e4d7d00           push 0x7d4d9e
// 005c5fad  50                   push eax
// 005c5fae  b801000000           mov eax, 1
// 005c5fb3  64892500000000       mov dword ptr fs:[0], esp
// 005c5fba  84053c969700         test byte ptr [0x97963c], al
// 005c5fc0  7530                 jne 0x5c5ff2
// 005c5fc2  09053c969700         or dword ptr [0x97963c], eax
// 005c5fc8  6aff                 push -1
// 005c5fca  68481b9600           push 0x961b48
// 005c5fcf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5fd7  e8b4dff8ff           call 0x553f90
// 005c5fdc  83c408               add esp, 8
// 005c5fdf  a338969700           mov dword ptr [0x979638], eax
// 005c5fe4  8b0c24               mov ecx, dword ptr [esp]
// 005c5fe7  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5fee  83c40c               add esp, 0xc
// 005c5ff1  c3                   ret 
// 005c5ff2  8b0c24               mov ecx, dword ptr [esp]
// 005c5ff5  a138969700           mov eax, dword ptr [0x979638]
// 005c5ffa  64890d00000000       mov dword ptr fs:[0], ecx
// 005c6001  83c40c               add esp, 0xc
// 005c6004  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
