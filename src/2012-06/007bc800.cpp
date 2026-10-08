// roc 2012-06 007bc800  unit: RBX::Geometry  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007bc800
//
// 007bc800  83ec48               sub esp, 0x48
// 007bc803  56                   push esi
// 007bc804  8b742458             mov esi, dword ptr [esp + 0x58]
// 007bc808  57                   push edi
// 007bc809  8d442408             lea eax, [esp + 8]
// 007bc80d  50                   push eax
// 007bc80e  8bce                 mov ecx, esi
// 007bc810  e8ebfee6ff           call 0x62c700
// 007bc815  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 007bc819  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007bc81d  50                   push eax
// 007bc81e  57                   push edi
// 007bc81f  51                   push ecx
// 007bc820  8d542438             lea edx, [esp + 0x38]
// 007bc824  52                   push edx
// 007bc825  8bce                 mov ecx, esi
// 007bc827  e8e4fbe6ff           call 0x62c410
// 007bc82c  8bc8                 mov ecx, eax
// 007bc82e  e8ddfbe6ff           call 0x62c410
// 007bc833  8bc7                 mov eax, edi
// 007bc835  5f                   pop edi
// 007bc836  5e                   pop esi
// 007bc837  83c448               add esp, 0x48
// 007bc83a  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToWorldSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
