// roc 2009-06 0066cbb0  unit: RBX::VHumanoid::?$EventDesc  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066cbb0
//
// 0066cbb0  83ec48               sub esp, 0x48
// 0066cbb3  56                   push esi
// 0066cbb4  8b742458             mov esi, dword ptr [esp + 0x58]
// 0066cbb8  57                   push edi
// 0066cbb9  8d442408             lea eax, [esp + 8]
// 0066cbbd  50                   push eax
// 0066cbbe  8bce                 mov ecx, esi
// 0066cbc0  e8bbb2f0ff           call 0x577e80
// 0066cbc5  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0066cbc9  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0066cbcd  50                   push eax
// 0066cbce  57                   push edi
// 0066cbcf  51                   push ecx
// 0066cbd0  8d542438             lea edx, [esp + 0x38]
// 0066cbd4  52                   push edx
// 0066cbd5  8bce                 mov ecx, esi
// 0066cbd7  e8e4b0f0ff           call 0x577cc0
// 0066cbdc  8bc8                 mov ecx, eax
// 0066cbde  e8ddb0f0ff           call 0x577cc0
// 0066cbe3  8bc7                 mov eax, edi
// 0066cbe5  5f                   pop edi
// 0066cbe6  5e                   pop esi
// 0066cbe7  83c448               add esp, 0x48
// 0066cbea  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToWorldSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
