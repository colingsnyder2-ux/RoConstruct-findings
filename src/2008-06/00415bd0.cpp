// roc 2008-06 00415bd0  unit: CopyVerb  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415bd0
//
// 00415bd0  56                   push esi
// 00415bd1  8b742408             mov esi, dword ptr [esp + 8]
// 00415bd5  85f6                 test esi, esi
// 00415bd7  742c                 je 0x415c05
// 00415bd9  8b0e                 mov ecx, dword ptr [esi]
// 00415bdb  85c9                 test ecx, ecx
// 00415bdd  7409                 je 0x415be8
// 00415bdf  8b01                 mov eax, dword ptr [ecx]
// 00415be1  8b5004               mov edx, dword ptr [eax + 4]
// 00415be4  ffd2                 call edx
// 00415be6  eb05                 jmp 0x415bed
// 00415be8  b814969200           mov eax, 0x929614
// 00415bed  6844969200           push 0x929644
// 00415bf2  8bc8                 mov ecx, eax
// 00415bf4  ff1578288000         call dword ptr [0x802878]
// 00415bfa  84c0                 test al, al
// 00415bfc  7407                 je 0x415c05
// 00415bfe  8b06                 mov eax, dword ptr [esi]
// 00415c00  83c004               add eax, 4
// 00415c03  5e                   pop esi
// 00415c04  c3                   ret 
// 00415c05  33c0                 xor eax, eax
// 00415c07  5e                   pop esi
// 00415c08  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@_N@boost@@YAPA_NPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
