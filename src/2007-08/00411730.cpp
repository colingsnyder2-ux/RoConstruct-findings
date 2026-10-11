// roc 2007-08 00411730  unit: boost::bad_any_cast  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00411730
//
// 00411730  56                   push esi
// 00411731  8b742408             mov esi, dword ptr [esp + 8]
// 00411735  85f6                 test esi, esi
// 00411737  742c                 je 0x411765
// 00411739  8b0e                 mov ecx, dword ptr [esi]
// 0041173b  85c9                 test ecx, ecx
// 0041173d  7409                 je 0x411748
// 0041173f  8b01                 mov eax, dword ptr [ecx]
// 00411741  8b5004               mov edx, dword ptr [eax + 4]
// 00411744  ffd2                 call edx
// 00411746  eb05                 jmp 0x41174d
// 00411748  b8c8278800           mov eax, 0x8827c8
// 0041174d  68e0278800           push 0x8827e0
// 00411752  8bc8                 mov ecx, eax
// 00411754  ff1508e77700         call dword ptr [0x77e708]
// 0041175a  84c0                 test al, al
// 0041175c  7407                 je 0x411765
// 0041175e  8b06                 mov eax, dword ptr [esi]
// 00411760  83c004               add eax, 4
// 00411763  5e                   pop esi
// 00411764  c3                   ret 
// 00411765  33c0                 xor eax, eax
// 00411767  5e                   pop esi
// 00411768  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@_N@boost@@YAPA_NPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
