// roc 2007-03 00502e90  unit: seg_00500000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00502e90
//
// 00502e90  8b442404             mov eax, dword ptr [esp + 4]
// 00502e94  56                   push esi
// 00502e95  50                   push eax
// 00502e96  8bf1                 mov esi, ecx
// 00502e98  e873ffffff           call 0x502e10
// 00502e9d  c70684057a00         mov dword ptr [esi], 0x7a0584
// 00502ea3  8bc6                 mov eax, esi
// 00502ea5  5e                   pop esi
// 00502ea6  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
