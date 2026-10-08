// roc 2007-03 00412610  unit: seg_00410000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00412610
//
// 00412610  8b442404             mov eax, dword ptr [esp + 4]
// 00412614  56                   push esi
// 00412615  50                   push eax
// 00412616  8bf1                 mov esi, ecx
// 00412618  ff1588e97700         call dword ptr [0x77e988]
// 0041261e  c706a45e7800         mov dword ptr [esi], 0x785ea4
// 00412624  8bc6                 mov eax, esi
// 00412626  5e                   pop esi
// 00412627  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
