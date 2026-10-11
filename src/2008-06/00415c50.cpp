// roc 2008-06 00415c50  unit: CopyVerb  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415c50
//
// 00415c50  56                   push esi
// 00415c51  8b742408             mov esi, dword ptr [esp + 8]
// 00415c55  85f6                 test esi, esi
// 00415c57  742c                 je 0x415c85
// 00415c59  8b0e                 mov ecx, dword ptr [esi]
// 00415c5b  85c9                 test ecx, ecx
// 00415c5d  7409                 je 0x415c68
// 00415c5f  8b01                 mov eax, dword ptr [ecx]
// 00415c61  8b5004               mov edx, dword ptr [eax + 4]
// 00415c64  ffd2                 call edx
// 00415c66  eb05                 jmp 0x415c6d
// 00415c68  b814969200           mov eax, 0x929614
// 00415c6d  68e8be9200           push 0x92bee8
// 00415c72  8bc8                 mov ecx, eax
// 00415c74  ff1578288000         call dword ptr [0x802878]
// 00415c7a  84c0                 test al, al
// 00415c7c  7407                 je 0x415c85
// 00415c7e  8b06                 mov eax, dword ptr [esi]
// 00415c80  83c008               add eax, 8
// 00415c83  5e                   pop esi
// 00415c84  c3                   ret 
// 00415c85  33c0                 xor eax, eax
// 00415c87  5e                   pop esi
// 00415c88  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@N@boost@@YAPANPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
