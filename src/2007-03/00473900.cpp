// roc 2007-03 00473900  unit: seg_00470000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473900
//
// 00473900  8b8114010000         mov eax, dword ptr [ecx + 0x114]
// 00473906  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?getBackendAccoutrementState@Accoutrement@RBX@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
