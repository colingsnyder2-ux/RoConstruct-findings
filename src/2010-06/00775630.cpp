// roc 2010-06 00775630  unit: RBX::EquationDisplay  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00775630
//
// 00775630  6890557700           push 0x775590
// 00775635  68bc32c200           push 0xc232bc
// 0077563a  e851c0c8ff           call 0x401690
// 0077563f  a1c432c200           mov eax, dword ptr [0xc232c4]
// 00775644  83c408               add esp, 8
// 00775647  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
