// roc 2008-06 0049e510  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049e510
//
// 0049e510  64a100000000         mov eax, dword ptr fs:[0]
// 0049e516  6aff                 push -1
// 0049e518  68be757c00           push 0x7c75be
// 0049e51d  50                   push eax
// 0049e51e  b801000000           mov eax, 1
// 0049e523  64892500000000       mov dword ptr fs:[0], esp
// 0049e52a  8405c8069700         test byte ptr [0x9706c8], al
// 0049e530  7530                 jne 0x49e562
// 0049e532  0905c8069700         or dword ptr [0x9706c8], eax
// 0049e538  6aff                 push -1
// 0049e53a  68c03e8200           push 0x823ec0
// 0049e53f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049e547  e8445a0b00           call 0x553f90
// 0049e54c  83c408               add esp, 8
// 0049e54f  a3c4069700           mov dword ptr [0x9706c4], eax
// 0049e554  8b0c24               mov ecx, dword ptr [esp]
// 0049e557  64890d00000000       mov dword ptr fs:[0], ecx
// 0049e55e  83c40c               add esp, 0xc
// 0049e561  c3                   ret 
// 0049e562  8b0c24               mov ecx, dword ptr [esp]
// 0049e565  a1c4069700           mov eax, dword ptr [0x9706c4]
// 0049e56a  64890d00000000       mov dword ptr fs:[0], ecx
// 0049e571  83c40c               add esp, 0xc
// 0049e574  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
