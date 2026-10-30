// roc 2012-06 0085df90  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085df90
//
// 0085df90  56                   push esi
// 0085df91  57                   push edi
// 0085df92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085df96  57                   push edi
// 0085df97  8bf1                 mov esi, ecx
// 0085df99  e872e1baff           call 0x40c110
// 0085df9e  c7060c47bd00         mov dword ptr [esi], 0xbd470c
// 0085dfa4  8b4728               mov eax, dword ptr [edi + 0x28]
// 0085dfa7  894628               mov dword ptr [esi + 0x28], eax
// 0085dfaa  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0085dfad  5f                   pop edi
// 0085dfae  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0085dfb1  8bc6                 mov eax, esi
// 0085dfb3  5e                   pop esi
// 0085dfb4  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp