// roc 2011-06 006e93f0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e93f0
//
// 006e93f0  56                   push esi
// 006e93f1  57                   push edi
// 006e93f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e93f6  57                   push edi
// 006e93f7  8bf1                 mov esi, ecx
// 006e93f9  e8e215d2ff           call 0x40a9e0
// 006e93fe  c70648dea800         mov dword ptr [esi], 0xa8de48
// 006e9404  8b4728               mov eax, dword ptr [edi + 0x28]
// 006e9407  894628               mov dword ptr [esi + 0x28], eax
// 006e940a  5f                   pop edi
// 006e940b  8bc6                 mov eax, esi
// 006e940d  5e                   pop esi
// 006e940e  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
