// roc 2007-03 00481630  unit: seg_00480000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00481630
//
// 00481630  8b442404             mov eax, dword ptr [esp + 4]
// 00481634  56                   push esi
// 00481635  50                   push eax
// 00481636  8bf1                 mov esi, ecx
// 00481638  ff157ce77700         call dword ptr [0x77e77c]
// 0048163e  8bc6                 mov eax, esi
// 00481640  5e                   pop esi
// 00481641  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
