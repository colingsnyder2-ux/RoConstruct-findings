// roc 2007-03 00544d70  unit: seg_00540000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544d70
//
// 00544d70  8b442404             mov eax, dword ptr [esp + 4]
// 00544d74  56                   push esi
// 00544d75  50                   push eax
// 00544d76  8bf1                 mov esi, ecx
// 00544d78  e893edebff           call 0x403b10
// 00544d7d  c706f46e7a00         mov dword ptr [esi], 0x7a6ef4
// 00544d83  8bc6                 mov eax, esi
// 00544d85  5e                   pop esi
// 00544d86  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
