// roc 2010-06 00786210  unit: RBX::HUMAN::GettingUp  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00786210
//
// 00786210  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00786213  39442404             cmp dword ptr [esp + 4], eax
// 00786217  7503                 jne 0x78621c
// 00786219  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0078621c  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?otherPrimitive@Edge@RBX@@QBEPAVPrimitive@2@PBV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
