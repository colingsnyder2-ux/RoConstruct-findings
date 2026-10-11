// roc 2008-06 00415c10  unit: CopyVerb  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415c10
//
// 00415c10  56                   push esi
// 00415c11  8b742408             mov esi, dword ptr [esp + 8]
// 00415c15  85f6                 test esi, esi
// 00415c17  742c                 je 0x415c45
// 00415c19  8b0e                 mov ecx, dword ptr [esi]
// 00415c1b  85c9                 test ecx, ecx
// 00415c1d  7409                 je 0x415c28
// 00415c1f  8b01                 mov eax, dword ptr [ecx]
// 00415c21  8b5004               mov edx, dword ptr [eax + 4]
// 00415c24  ffd2                 call edx
// 00415c26  eb05                 jmp 0x415c2d
// 00415c28  b814969200           mov eax, 0x929614
// 00415c2d  68dcbe9200           push 0x92bedc
// 00415c32  8bc8                 mov ecx, eax
// 00415c34  ff1578288000         call dword ptr [0x802878]
// 00415c3a  84c0                 test al, al
// 00415c3c  7407                 je 0x415c45
// 00415c3e  8b06                 mov eax, dword ptr [esi]
// 00415c40  83c004               add eax, 4
// 00415c43  5e                   pop esi
// 00415c44  c3                   ret 
// 00415c45  33c0                 xor eax, eax
// 00415c47  5e                   pop esi
// 00415c48  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@M@boost@@YAPAMPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaSignalBridge.cpp
