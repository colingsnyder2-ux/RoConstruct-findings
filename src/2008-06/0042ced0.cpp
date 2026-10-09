// roc 2008-06 0042ced0  unit: CLuaHtmlView::Binder  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ced0
//
// 0042ced0  64a100000000         mov eax, dword ptr fs:[0]
// 0042ced6  6aff                 push -1
// 0042ced8  681ef87b00           push 0x7bf81e
// 0042cedd  50                   push eax
// 0042cede  b801000000           mov eax, 1
// 0042cee3  64892500000000       mov dword ptr fs:[0], esp
// 0042ceea  840520d19600         test byte ptr [0x96d120], al
// 0042cef0  7530                 jne 0x42cf22
// 0042cef2  090520d19600         or dword ptr [0x96d120], eax
// 0042cef8  6aff                 push -1
// 0042cefa  6840c49400           push 0x94c440
// 0042ceff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042cf07  e884701200           call 0x553f90
// 0042cf0c  83c408               add esp, 8
// 0042cf0f  a31cd19600           mov dword ptr [0x96d11c], eax
// 0042cf14  8b0c24               mov ecx, dword ptr [esp]
// 0042cf17  64890d00000000       mov dword ptr fs:[0], ecx
// 0042cf1e  83c40c               add esp, 0xc
// 0042cf21  c3                   ret 
// 0042cf22  8b0c24               mov ecx, dword ptr [esp]
// 0042cf25  a11cd19600           mov eax, dword ptr [0x96d11c]
// 0042cf2a  64890d00000000       mov dword ptr fs:[0], ecx
// 0042cf31  83c40c               add esp, 0xc
// 0042cf34  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
