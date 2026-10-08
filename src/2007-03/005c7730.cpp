// roc 2007-03 005c7730  unit: seg_005c0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c7730
//
// 005c7730  56                   push esi
// 005c7731  57                   push edi
// 005c7732  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005c7736  57                   push edi
// 005c7737  8bf1                 mov esi, ecx
// 005c7739  e872cee4ff           call 0x4145b0
// 005c773e  c7064ca67b00         mov dword ptr [esi], 0x7ba64c
// 005c7744  8b4728               mov eax, dword ptr [edi + 0x28]
// 005c7747  894628               mov dword ptr [esi + 0x28], eax
// 005c774a  5f                   pop edi
// 005c774b  8bc6                 mov eax, esi
// 005c774d  5e                   pop esi
// 005c774e  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
