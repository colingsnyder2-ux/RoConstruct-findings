// roc 2007-03 005e7080  unit: seg_005e0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e7080
//
// 005e7080  8b442408             mov eax, dword ptr [esp + 8]
// 005e7084  56                   push esi
// 005e7085  8bf1                 mov esi, ecx
// 005e7087  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e708b  50                   push eax
// 005e708c  51                   push ecx
// 005e708d  e81e81fcff           call 0x5af1b0
// 005e7092  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e7095  83c408               add esp, 8
// 005e7098  50                   push eax
// 005e7099  e8025cfcff           call 0x5acca0
// 005e709e  5e                   pop esi
// 005e709f  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?onReleasePair@ContactManager@RBX@@QAEXPAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
