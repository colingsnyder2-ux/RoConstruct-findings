// roc 2011-06 007e6570  unit: RBX::AdvRotateTool  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007e6570
//
// 007e6570  8b410c               mov eax, dword ptr [ecx + 0xc]
// 007e6573  39442404             cmp dword ptr [esp + 4], eax
// 007e6577  7503                 jne 0x7e657c
// 007e6579  8b4110               mov eax, dword ptr [ecx + 0x10]
// 007e657c  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?otherPrimitive@Edge@RBX@@QBEPAVPrimitive@2@PBV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
