// roc 2009-06 006e8560  unit: RBX::EquationDisplay  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e8560
//
// 006e8560  68c0846e00           push 0x6e84c0
// 006e8565  68f000a500           push 0xa500f0
// 006e856a  e8a191d1ff           call 0x401710
// 006e856f  a1f400a500           mov eax, dword ptr [0xa500f4]
// 006e8574  83c408               add esp, 8
// 006e8577  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
