// roc 2008-06 00415c90  unit: CopyVerb  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415c90
//
// 00415c90  56                   push esi
// 00415c91  8b742408             mov esi, dword ptr [esp + 8]
// 00415c95  85f6                 test esi, esi
// 00415c97  742c                 je 0x415cc5
// 00415c99  8b0e                 mov ecx, dword ptr [esi]
// 00415c9b  85c9                 test ecx, ecx
// 00415c9d  7409                 je 0x415ca8
// 00415c9f  8b01                 mov eax, dword ptr [ecx]
// 00415ca1  8b5004               mov edx, dword ptr [eax + 4]
// 00415ca4  ffd2                 call edx
// 00415ca6  eb05                 jmp 0x415cad
// 00415ca8  b814969200           mov eax, 0x929614
// 00415cad  68f8be9200           push 0x92bef8
// 00415cb2  8bc8                 mov ecx, eax
// 00415cb4  ff1578288000         call dword ptr [0x802878]
// 00415cba  84c0                 test al, al
// 00415cbc  7407                 je 0x415cc5
// 00415cbe  8b06                 mov eax, dword ptr [esi]
// 00415cc0  83c004               add eax, 4
// 00415cc3  5e                   pop esi
// 00415cc4  c3                   ret 
// 00415cc5  33c0                 xor eax, eax
// 00415cc7  5e                   pop esi
// 00415cc8  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
