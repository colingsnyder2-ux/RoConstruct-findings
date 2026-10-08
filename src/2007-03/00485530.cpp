// roc 2007-03 00485530  unit: seg_00480000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00485530
//
// 00485530  8b442404             mov eax, dword ptr [esp + 4]
// 00485534  8b08                 mov ecx, dword ptr [eax]
// 00485536  8b542408             mov edx, dword ptr [esp + 8]
// 0048553a  51                   push ecx
// 0048553b  8b0a                 mov ecx, dword ptr [edx]
// 0048553d  e8aec70b00           call 0x541cf0
// 00485542  c3                   ret 
// library rbxgs-net/Player.cpp (function ?addChild@@YAXABV?$shared_ptr@VModelInstance@RBX@@@boost@@ABV?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
