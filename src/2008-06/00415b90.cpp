// roc 2008-06 00415b90  unit: CopyVerb  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415b90
//
// 00415b90  56                   push esi
// 00415b91  8b742408             mov esi, dword ptr [esp + 8]
// 00415b95  85f6                 test esi, esi
// 00415b97  742c                 je 0x415bc5
// 00415b99  8b0e                 mov ecx, dword ptr [esi]
// 00415b9b  85c9                 test ecx, ecx
// 00415b9d  7409                 je 0x415ba8
// 00415b9f  8b01                 mov eax, dword ptr [ecx]
// 00415ba1  8b5004               mov edx, dword ptr [eax + 4]
// 00415ba4  ffd2                 call edx
// 00415ba6  eb05                 jmp 0x415bad
// 00415ba8  b814969200           mov eax, 0x929614
// 00415bad  68d0be9200           push 0x92bed0
// 00415bb2  8bc8                 mov ecx, eax
// 00415bb4  ff1578288000         call dword ptr [0x802878]
// 00415bba  84c0                 test al, al
// 00415bbc  7407                 je 0x415bc5
// 00415bbe  8b06                 mov eax, dword ptr [esi]
// 00415bc0  83c004               add eax, 4
// 00415bc3  5e                   pop esi
// 00415bc4  c3                   ret 
// 00415bc5  33c0                 xor eax, eax
// 00415bc7  5e                   pop esi
// 00415bc8  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@H@boost@@YAPAHPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
