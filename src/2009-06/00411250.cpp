// roc 2009-06 00411250  unit: CRbxChildFrame  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00411250
//
// 00411250  56                   push esi
// 00411251  57                   push edi
// 00411252  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00411256  57                   push edi
// 00411257  8bf1                 mov esi, ecx
// 00411259  ff15b0e98900         call dword ptr [0x89e9b0]
// 0041125f  c70674f08a00         mov dword ptr [esi], 0x8af074
// 00411265  8b470c               mov eax, dword ptr [edi + 0xc]
// 00411268  89460c               mov dword ptr [esi + 0xc], eax
// 0041126b  5f                   pop edi
// 0041126c  c706c8f28a00         mov dword ptr [esi], 0x8af2c8
// 00411272  8bc6                 mov eax, esi
// 00411274  5e                   pop esi
// 00411275  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0lock_error@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
