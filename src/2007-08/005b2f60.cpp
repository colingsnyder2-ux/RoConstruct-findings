// roc 2007-08 005b2f60  unit: RBX::Assembly  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b2f60
//
// 005b2f60  56                   push esi
// 005b2f61  57                   push edi
// 005b2f62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005b2f66  57                   push edi
// 005b2f67  8bf1                 mov esi, ecx
// 005b2f69  e8c2610500           call 0x609130
// 005b2f6e  8b4e08               mov ecx, dword ptr [esi + 8]
// 005b2f71  57                   push edi
// 005b2f72  e8998b0500           call 0x60bb10
// 005b2f77  5f                   pop edi
// 005b2f78  5e                   pop esi
// 005b2f79  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?putInKernel@Assembly@RBX@@UAEXPAVKernel@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
