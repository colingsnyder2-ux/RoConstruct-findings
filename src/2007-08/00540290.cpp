// roc 2007-08 00540290  unit: ChatEnter  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540290
//
// 00540290  8b442404             mov eax, dword ptr [esp + 4]
// 00540294  83c1bc               add ecx, -0x44
// 00540297  50                   push eax
// 00540298  51                   push ecx
// 00540299  e8c2feffff           call 0x540160
// 0054029e  c20400               ret 4
// library rbxgs/v8tree\Instance.cpp (function ?onAddListener@Instance@RBX@@MBEXPAV?$Listener@VInstance@RBX@@UDescendentAdded@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
