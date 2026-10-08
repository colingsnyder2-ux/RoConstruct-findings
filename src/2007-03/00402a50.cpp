// roc 2007-03 00402a50  unit: seg_00400000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00402a50
//
// 00402a50  8b442404             mov eax, dword ptr [esp + 4]
// 00402a54  56                   push esi
// 00402a55  50                   push eax
// 00402a56  8bf1                 mov esi, ecx
// 00402a58  ff156ce97700         call dword ptr [0x77e96c]
// 00402a5e  c7062c3e7800         mov dword ptr [esi], 0x783e2c
// 00402a64  8bc6                 mov eax, esi
// 00402a66  5e                   pop esi
// 00402a67  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
