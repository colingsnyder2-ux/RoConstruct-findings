// roc 2008-06 004292b0  unit: MainLogManager  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004292b0
//
// 004292b0  56                   push esi
// 004292b1  57                   push edi
// 004292b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004292b6  57                   push edi
// 004292b7  8bf1                 mov esi, ecx
// 004292b9  ff1588288000         call dword ptr [0x802888]
// 004292bf  c7069cb48000         mov dword ptr [esi], 0x80b49c
// 004292c5  8b470c               mov eax, dword ptr [edi + 0xc]
// 004292c8  89460c               mov dword ptr [esi + 0xc], eax
// 004292cb  5f                   pop edi
// 004292cc  c706d4048100         mov dword ptr [esi], 0x8104d4
// 004292d2  8bc6                 mov eax, esi
// 004292d4  5e                   pop esi
// 004292d5  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0lock_error@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
