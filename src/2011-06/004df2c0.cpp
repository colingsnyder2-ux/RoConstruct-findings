// roc 2011-06 004df2c0  unit: XVCrashReporter::XV?$mf0::V?$bind_t::?$thread_data  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004df2c0
//
// 004df2c0  8b11                 mov edx, dword ptr [ecx]
// 004df2c2  8b442404             mov eax, dword ptr [esp + 4]
// 004df2c6  3b10                 cmp edx, dword ptr [eax]
// 004df2c8  750f                 jne 0x4df2d9
// 004df2ca  668b4904             mov cx, word ptr [ecx + 4]
// 004df2ce  663b4804             cmp cx, word ptr [eax + 4]
// 004df2d2  7505                 jne 0x4df2d9
// 004df2d4  33c0                 xor eax, eax
// 004df2d6  c20400               ret 4
// 004df2d9  b801000000           mov eax, 1
// 004df2de  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ??9SystemAddress@@QBE_NABU0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
