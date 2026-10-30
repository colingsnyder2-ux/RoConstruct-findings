// roc 2010-06 006a4fb0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a4fb0
//
// 006a4fb0  56                   push esi
// 006a4fb1  57                   push edi
// 006a4fb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a4fb6  57                   push edi
// 006a4fb7  8bf1                 mov esi, ecx
// 006a4fb9  e86244d6ff           call 0x409420
// 006a4fbe  c706ac0ba400         mov dword ptr [esi], 0xa40bac
// 006a4fc4  8b4728               mov eax, dword ptr [edi + 0x28]
// 006a4fc7  894628               mov dword ptr [esi + 0x28], eax
// 006a4fca  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 006a4fcd  5f                   pop edi
// 006a4fce  894e2c               mov dword ptr [esi + 0x2c], ecx
// 006a4fd1  8bc6                 mov eax, esi
// 006a4fd3  5e                   pop esi
// 006a4fd4  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp