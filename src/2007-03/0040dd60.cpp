// roc 2007-03 0040dd60  unit: seg_00400000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040dd60
//
// 0040dd60  8b442404             mov eax, dword ptr [esp + 4]
// 0040dd64  56                   push esi
// 0040dd65  50                   push eax
// 0040dd66  8bf1                 mov esi, ecx
// 0040dd68  ff156ce97700         call dword ptr [0x77e96c]
// 0040dd6e  c706b0547800         mov dword ptr [esi], 0x7854b0
// 0040dd74  8bc6                 mov eax, esi
// 0040dd76  5e                   pop esi
// 0040dd77  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
