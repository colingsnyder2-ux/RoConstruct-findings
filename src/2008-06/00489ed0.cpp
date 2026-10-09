// roc 2008-06 00489ed0  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489ed0
//
// 00489ed0  64a100000000         mov eax, dword ptr fs:[0]
// 00489ed6  6aff                 push -1
// 00489ed8  68ae5e7c00           push 0x7c5eae
// 00489edd  50                   push eax
// 00489ede  b801000000           mov eax, 1
// 00489ee3  64892500000000       mov dword ptr fs:[0], esp
// 00489eea  840524fb9600         test byte ptr [0x96fb24], al
// 00489ef0  7530                 jne 0x489f22
// 00489ef2  090524fb9600         or dword ptr [0x96fb24], eax
// 00489ef8  6aff                 push -1
// 00489efa  6838ba8300           push 0x83ba38
// 00489eff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00489f07  e884a00c00           call 0x553f90
// 00489f0c  83c408               add esp, 8
// 00489f0f  a320fb9600           mov dword ptr [0x96fb20], eax
// 00489f14  8b0c24               mov ecx, dword ptr [esp]
// 00489f17  64890d00000000       mov dword ptr fs:[0], ecx
// 00489f1e  83c40c               add esp, 0xc
// 00489f21  c3                   ret 
// 00489f22  8b0c24               mov ecx, dword ptr [esp]
// 00489f25  a120fb9600           mov eax, dword ptr [0x96fb20]
// 00489f2a  64890d00000000       mov dword ptr fs:[0], ecx
// 00489f31  83c40c               add esp, 0xc
// 00489f34  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
