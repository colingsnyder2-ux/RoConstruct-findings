// roc 2007-03 00545010  unit: seg_00540000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00545010
//
// 00545010  8b442404             mov eax, dword ptr [esp + 4]
// 00545014  56                   push esi
// 00545015  50                   push eax
// 00545016  8bf1                 mov esi, ecx
// 00545018  e8f3eaebff           call 0x403b10
// 0054501d  c7062c6f7a00         mov dword ptr [esi], 0x7a6f2c
// 00545023  8bc6                 mov eax, esi
// 00545025  5e                   pop esi
// 00545026  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
