// roc 2008-06 004d72b0  unit: RBX::ViewNew::ViewRbxGfx  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d72b0
//
// 004d72b0  64a100000000         mov eax, dword ptr fs:[0]
// 004d72b6  6aff                 push -1
// 004d72b8  684e9c7c00           push 0x7c9c4e
// 004d72bd  50                   push eax
// 004d72be  b801000000           mov eax, 1
// 004d72c3  64892500000000       mov dword ptr fs:[0], esp
// 004d72ca  840510279700         test byte ptr [0x972710], al
// 004d72d0  7530                 jne 0x4d7302
// 004d72d2  090510279700         or dword ptr [0x972710], eax
// 004d72d8  6aff                 push -1
// 004d72da  68d45b9500           push 0x955bd4
// 004d72df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004d72e7  e8a4cc0700           call 0x553f90
// 004d72ec  83c408               add esp, 8
// 004d72ef  a30c279700           mov dword ptr [0x97270c], eax
// 004d72f4  8b0c24               mov ecx, dword ptr [esp]
// 004d72f7  64890d00000000       mov dword ptr fs:[0], ecx
// 004d72fe  83c40c               add esp, 0xc
// 004d7301  c3                   ret 
// 004d7302  8b0c24               mov ecx, dword ptr [esp]
// 004d7305  a10c279700           mov eax, dword ptr [0x97270c]
// 004d730a  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7311  83c40c               add esp, 0xc
// 004d7314  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
