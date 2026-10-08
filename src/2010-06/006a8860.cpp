// from server: 100% by auto
// roc 2010-06 006a8860  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a8860
//
// 006a8860  56                   push esi
// 006a8861  57                   push edi
// 006a8862  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a8866  57                   push edi
// 006a8867  8bf1                 mov esi, ecx
// 006a8869  e8b20bd6ff           call 0x409420
// 006a886e  c70654a6a200         mov dword ptr [esi], 0xa2a654
// 006a8874  8b4728               mov eax, dword ptr [edi + 0x28]
// 006a8877  894628               mov dword ptr [esi + 0x28], eax
// 006a887a  5f                   pop edi
// 006a887b  8bc6                 mov eax, esi
// 006a887d  5e                   pop esi
// 006a887e  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
