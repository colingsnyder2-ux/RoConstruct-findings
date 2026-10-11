// roc 2007-08 00411770  unit: boost::bad_any_cast  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00411770
//
// 00411770  56                   push esi
// 00411771  8b742408             mov esi, dword ptr [esp + 8]
// 00411775  85f6                 test esi, esi
// 00411777  742c                 je 0x4117a5
// 00411779  8b0e                 mov ecx, dword ptr [esi]
// 0041177b  85c9                 test ecx, ecx
// 0041177d  7409                 je 0x411788
// 0041177f  8b01                 mov eax, dword ptr [ecx]
// 00411781  8b5004               mov edx, dword ptr [eax + 4]
// 00411784  ffd2                 call edx
// 00411786  eb05                 jmp 0x41178d
// 00411788  b8c8278800           mov eax, 0x8827c8
// 0041178d  68f8278800           push 0x8827f8
// 00411792  8bc8                 mov ecx, eax
// 00411794  ff1508e77700         call dword ptr [0x77e708]
// 0041179a  84c0                 test al, al
// 0041179c  7407                 je 0x4117a5
// 0041179e  8b06                 mov eax, dword ptr [esi]
// 004117a0  83c004               add eax, 4
// 004117a3  5e                   pop esi
// 004117a4  c3                   ret 
// 004117a5  33c0                 xor eax, eax
// 004117a7  5e                   pop esi
// 004117a8  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
