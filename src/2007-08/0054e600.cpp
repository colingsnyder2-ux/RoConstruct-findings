// roc 2007-08 0054e600  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e600
//
// 0054e600  64a100000000         mov eax, dword ptr fs:[0]
// 0054e606  6aff                 push -1
// 0054e608  68a8277500           push 0x7527a8
// 0054e60d  50                   push eax
// 0054e60e  64892500000000       mov dword ptr fs:[0], esp
// 0054e615  83ec58               sub esp, 0x58
// 0054e618  56                   push esi
// 0054e619  8bf1                 mov esi, ecx
// 0054e61b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0054e61f  83f9ff               cmp ecx, -1
// 0054e622  57                   push edi
// 0054e623  7505                 jne 0x54e62a
// 0054e625  b980000000           mov ecx, 0x80
// 0054e62a  8b442478             mov eax, dword ptr [esp + 0x78]
// 0054e62e  83f8ff               cmp eax, -1
// 0054e631  7509                 jne 0x54e63c
// 0054e633  b804000000           mov eax, 4
// 0054e638  89442478             mov dword ptr [esp + 0x78], eax
// 0054e63c  83f802               cmp eax, 2
// 0054e63f  c744247402000000     mov dword ptr [esp + 0x74], 2
// 0054e647  8d442478             lea eax, [esp + 0x78]
// 0054e64b  7f04                 jg 0x54e651
// 0054e64d  8d442474             lea eax, [esp + 0x74]
// 0054e651  85c9                 test ecx, ecx
// 0054e653  8b00                 mov eax, dword ptr [eax]
// 0054e655  8986ac000000         mov dword ptr [esi + 0xac], eax
// 0054e65b  7505                 jne 0x54e662
// 0054e65d  b901000000           mov ecx, 1
// 0054e662  8d3c08               lea edi, [eax + ecx]
// 0054e665  39bea8000000         cmp dword ptr [esi + 0xa8], edi
// 0054e66b  743b                 je 0x54e6a8
// 0054e66d  6a00                 push 0
// 0054e66f  57                   push edi
// 0054e670  8d8c2480000000       lea ecx, [esp + 0x80]
// 0054e677  ff1518e67700         call dword ptr [0x77e618]
// 0054e67d  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 0054e683  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 0054e689  8b8ea4000000         mov ecx, dword ptr [esi + 0xa4]
// 0054e68f  85c9                 test ecx, ecx
// 0054e691  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 0054e697  740f                 je 0x54e6a8
// 0054e699  52                   push edx
// 0054e69a  51                   push ecx
// 0054e69b  8d8c2480000000       lea ecx, [esp + 0x80]
// 0054e6a2  ff1510e67700         call dword ptr [0x77e610]
// 0054e6a8  8b06                 mov eax, dword ptr [esi]
// 0054e6aa  8b5054               mov edx, dword ptr [eax + 0x54]
// 0054e6ad  8bce                 mov ecx, esi
// 0054e6af  ffd2                 call edx
// 0054e6b1  8b442470             mov eax, dword ptr [esp + 0x70]
// 0054e6b5  50                   push eax
// 0054e6b6  8d4c240c             lea ecx, [esp + 0xc]
// 0054e6ba  e821ddffff           call 0x54c3e0
// 0054e6bf  8d4c2408             lea ecx, [esp + 8]
// 0054e6c3  51                   push ecx
// 0054e6c4  8d4e40               lea ecx, [esi + 0x40]
// 0054e6c7  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 0054e6cf  e8dcecffff           call 0x54d3b0
// 0054e6d4  8d4c2408             lea ecx, [esp + 8]
// 0054e6d8  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 0054e6e0  e87bd2ffff           call 0x54b960
// 0054e6e5  838eb000000001       or dword ptr [esi + 0xb0], 1
// 0054e6ec  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0054e6f0  c6463c00             mov byte ptr [esi + 0x3c], 0
// 0054e6f4  5f                   pop edi
// 0054e6f5  5e                   pop esi
// 0054e6f6  64890d00000000       mov dword ptr fs:[0], ecx
// 0054e6fd  83c464               add esp, 0x64
// 0054e700  c20c00               ret 0xc
// copied from an identical function in another client (function ?open@?$indirect_streambuf@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@QAEXABV?$basic_gzip_decompressor@V?$allocator@D@std@@@34@HH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp