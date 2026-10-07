// roc 2007-08 005cc940  unit: seg_005c0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc940
//
// 005cc940  56                   push esi
// 005cc941  57                   push edi
// 005cc942  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005cc946  57                   push edi
// 005cc947  8bf1                 mov esi, ecx
// 005cc949  e8626de4ff           call 0x4136b0
// 005cc94e  c706aca57b00         mov dword ptr [esi], 0x7ba5ac
// 005cc954  8b4728               mov eax, dword ptr [edi + 0x28]
// 005cc957  894628               mov dword ptr [esi + 0x28], eax
// 005cc95a  5f                   pop edi
// 005cc95b  8bc6                 mov eax, esi
// 005cc95d  5e                   pop esi
// 005cc95e  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
