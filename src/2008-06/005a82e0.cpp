// roc 2008-06 005a82e0  unit: RBX::Log  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a82e0
//
// 005a82e0  686c6b9700           push 0x976b6c
// 005a82e5  6860825a00           push 0x5a8260
// 005a82ea  e841f0faff           call 0x557330
// 005a82ef  a1646b9700           mov eax, dword ptr [0x976b64]
// 005a82f4  83c408               add esp, 8
// 005a82f7  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
