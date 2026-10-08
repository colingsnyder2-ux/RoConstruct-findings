// roc 2008-06 005ddb70  unit: RBX::Message  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ddb70
//
// 005ddb70  83ec48               sub esp, 0x48
// 005ddb73  56                   push esi
// 005ddb74  8b742458             mov esi, dword ptr [esp + 0x58]
// 005ddb78  57                   push edi
// 005ddb79  8d442408             lea eax, [esp + 8]
// 005ddb7d  50                   push eax
// 005ddb7e  8bce                 mov ecx, esi
// 005ddb80  e88b59f3ff           call 0x513510
// 005ddb85  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 005ddb89  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005ddb8d  50                   push eax
// 005ddb8e  57                   push edi
// 005ddb8f  51                   push ecx
// 005ddb90  8d542438             lea edx, [esp + 0x38]
// 005ddb94  52                   push edx
// 005ddb95  8bce                 mov ecx, esi
// 005ddb97  e8b457f3ff           call 0x513350
// 005ddb9c  8bc8                 mov ecx, eax
// 005ddb9e  e8ad57f3ff           call 0x513350
// 005ddba3  8bc7                 mov eax, edi
// 005ddba5  5f                   pop edi
// 005ddba6  5e                   pop esi
// 005ddba7  83c448               add esp, 0x48
// 005ddbaa  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToWorldSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
