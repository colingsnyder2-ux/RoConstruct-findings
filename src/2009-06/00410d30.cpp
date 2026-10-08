// roc 2009-06 00410d30  unit: CChatPrompt  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00410d30
//
// 00410d30  56                   push esi
// 00410d31  57                   push edi
// 00410d32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00410d36  57                   push edi
// 00410d37  8bf1                 mov esi, ecx
// 00410d39  ff15b0e98900         call dword ptr [0x89e9b0]
// 00410d3f  c70674f08a00         mov dword ptr [esi], 0x8af074
// 00410d45  8b470c               mov eax, dword ptr [edi + 0xc]
// 00410d48  89460c               mov dword ptr [esi + 0xc], eax
// 00410d4b  5f                   pop edi
// 00410d4c  8bc6                 mov eax, esi
// 00410d4e  5e                   pop esi
// 00410d4f  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0thread_exception@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
