// roc 2011-06 006e5d60  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e5d60
//
// 006e5d60  56                   push esi
// 006e5d61  57                   push edi
// 006e5d62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e5d66  57                   push edi
// 006e5d67  8bf1                 mov esi, ecx
// 006e5d69  e8724cd2ff           call 0x40a9e0
// 006e5d6e  c706fc84aa00         mov dword ptr [esi], 0xaa84fc
// 006e5d74  8b4728               mov eax, dword ptr [edi + 0x28]
// 006e5d77  894628               mov dword ptr [esi + 0x28], eax
// 006e5d7a  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 006e5d7d  5f                   pop edi
// 006e5d7e  894e2c               mov dword ptr [esi + 0x2c], ecx
// 006e5d81  8bc6                 mov eax, esi
// 006e5d83  5e                   pop esi
// 006e5d84  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp