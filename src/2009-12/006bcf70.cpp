// roc 2009-12 006bcf70  unit: CPropGrid::UpdateItemsJob  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bcf70
//
// 006bcf70  56                   push esi
// 006bcf71  57                   push edi
// 006bcf72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006bcf76  57                   push edi
// 006bcf77  8bf1                 mov esi, ecx
// 006bcf79  e8a2c4d4ff           call 0x409420
// 006bcf7e  c7062cc79c00         mov dword ptr [esi], 0x9cc72c
// 006bcf84  8b4728               mov eax, dword ptr [edi + 0x28]
// 006bcf87  894628               mov dword ptr [esi + 0x28], eax
// 006bcf8a  5f                   pop edi
// 006bcf8b  8bc6                 mov eax, esi
// 006bcf8d  5e                   pop esi
// 006bcf8e  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
