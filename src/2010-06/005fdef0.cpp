// roc 2010-06 005fdef0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fdef0
//
// 005fdef0  8b442404             mov eax, dword ptr [esp + 4]
// 005fdef4  56                   push esi
// 005fdef5  8bf1                 mov esi, ecx
// 005fdef7  50                   push eax
// 005fdef8  8d4c240c             lea ecx, [esp + 0xc]
// 005fdefc  e8dffcffff           call 0x5fdbe0
// 005fdf01  3bc6                 cmp eax, esi
// 005fdf03  7408                 je 0x5fdf0d
// 005fdf05  8b16                 mov edx, dword ptr [esi]
// 005fdf07  8b08                 mov ecx, dword ptr [eax]
// 005fdf09  8910                 mov dword ptr [eax], edx
// 005fdf0b  890e                 mov dword ptr [esi], ecx
// 005fdf0d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fdf11  85c9                 test ecx, ecx
// 005fdf13  7408                 je 0x5fdf1d
// 005fdf15  8b01                 mov eax, dword ptr [ecx]
// 005fdf17  8b10                 mov edx, dword ptr [eax]
// 005fdf19  6a01                 push 1
// 005fdf1b  ffd2                 call edx
// 005fdf1d  8bc6                 mov eax, esi
// 005fdf1f  5e                   pop esi
// 005fdf20  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
