// roc 2008-06 00489e60  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489e60
//
// 00489e60  64a100000000         mov eax, dword ptr fs:[0]
// 00489e66  6aff                 push -1
// 00489e68  688e5e7c00           push 0x7c5e8e
// 00489e6d  50                   push eax
// 00489e6e  b801000000           mov eax, 1
// 00489e73  64892500000000       mov dword ptr fs:[0], esp
// 00489e7a  84051cfb9600         test byte ptr [0x96fb1c], al
// 00489e80  7530                 jne 0x489eb2
// 00489e82  09051cfb9600         or dword ptr [0x96fb1c], eax
// 00489e88  6aff                 push -1
// 00489e8a  68cc259500           push 0x9525cc
// 00489e8f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00489e97  e8f4a00c00           call 0x553f90
// 00489e9c  83c408               add esp, 8
// 00489e9f  a318fb9600           mov dword ptr [0x96fb18], eax
// 00489ea4  8b0c24               mov ecx, dword ptr [esp]
// 00489ea7  64890d00000000       mov dword ptr fs:[0], ecx
// 00489eae  83c40c               add esp, 0xc
// 00489eb1  c3                   ret 
// 00489eb2  8b0c24               mov ecx, dword ptr [esp]
// 00489eb5  a118fb9600           mov eax, dword ptr [0x96fb18]
// 00489eba  64890d00000000       mov dword ptr fs:[0], ecx
// 00489ec1  83c40c               add esp, 0xc
// 00489ec4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
