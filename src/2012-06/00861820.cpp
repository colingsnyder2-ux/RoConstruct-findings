// roc 2012-06 00861820  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00861820
//
// 00861820  56                   push esi
// 00861821  57                   push edi
// 00861822  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00861826  57                   push edi
// 00861827  8bf1                 mov esi, ecx
// 00861829  e8e2a8baff           call 0x40c110
// 0086182e  c7060c63b900         mov dword ptr [esi], 0xb9630c
// 00861834  8b4728               mov eax, dword ptr [edi + 0x28]
// 00861837  894628               mov dword ptr [esi + 0x28], eax
// 0086183a  5f                   pop edi
// 0086183b  8bc6                 mov eax, esi
// 0086183d  5e                   pop esi
// 0086183e  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
