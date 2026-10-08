// roc 2007-03 005abd30  unit: seg_005a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abd30
//
// 005abd30  8b442404             mov eax, dword ptr [esp + 4]
// 005abd34  894150               mov dword ptr [ecx + 0x50], eax
// 005abd37  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?setSleepCount@Assembly@RBX@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
