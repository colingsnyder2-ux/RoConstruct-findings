// roc 2008-06 00568df0  unit: RBX::ServiceProvider  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568df0
//
// 00568df0  64a100000000         mov eax, dword ptr fs:[0]
// 00568df6  6aff                 push -1
// 00568df8  68cef77c00           push 0x7cf7ce
// 00568dfd  50                   push eax
// 00568dfe  b801000000           mov eax, 1
// 00568e03  64892500000000       mov dword ptr fs:[0], esp
// 00568e0a  8405884a9700         test byte ptr [0x974a88], al
// 00568e10  7530                 jne 0x568e42
// 00568e12  0905884a9700         or dword ptr [0x974a88], eax
// 00568e18  6aff                 push -1
// 00568e1a  6838ef8200           push 0x82ef38
// 00568e1f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00568e27  e864b1feff           call 0x553f90
// 00568e2c  83c408               add esp, 8
// 00568e2f  a3844a9700           mov dword ptr [0x974a84], eax
// 00568e34  8b0c24               mov ecx, dword ptr [esp]
// 00568e37  64890d00000000       mov dword ptr fs:[0], ecx
// 00568e3e  83c40c               add esp, 0xc
// 00568e41  c3                   ret 
// 00568e42  8b0c24               mov ecx, dword ptr [esp]
// 00568e45  a1844a9700           mov eax, dword ptr [0x974a84]
// 00568e4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00568e51  83c40c               add esp, 0xc
// 00568e54  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
