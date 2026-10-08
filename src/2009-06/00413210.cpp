// roc 2009-06 00413210  unit: boost::gregorian::Ubad_month::U?$error_info_injector::?$clone_impl  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00413210
//
// 00413210  56                   push esi
// 00413211  57                   push edi
// 00413212  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00413216  57                   push edi
// 00413217  8bf1                 mov esi, ecx
// 00413219  ff15b0e98900         call dword ptr [0x89e9b0]
// 0041321f  c70674f08a00         mov dword ptr [esi], 0x8af074
// 00413225  8b470c               mov eax, dword ptr [edi + 0xc]
// 00413228  89460c               mov dword ptr [esi + 0xc], eax
// 0041322b  5f                   pop edi
// 0041322c  c706e4f58a00         mov dword ptr [esi], 0x8af5e4
// 00413232  8bc6                 mov eax, esi
// 00413234  5e                   pop esi
// 00413235  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0lock_error@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
