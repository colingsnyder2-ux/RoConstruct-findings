// roc 2012-06 0085ea20  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085ea20
//
// 0085ea20  6aff                 push -1
// 0085ea22  6833e6ac00           push 0xace633
// 0085ea27  64a100000000         mov eax, dword ptr fs:[0]
// 0085ea2d  50                   push eax
// 0085ea2e  64892500000000       mov dword ptr fs:[0], esp
// 0085ea35  83ec08               sub esp, 8
// 0085ea38  56                   push esi
// 0085ea39  8bf1                 mov esi, ecx
// 0085ea3b  57                   push edi
// 0085ea3c  8974240c             mov dword ptr [esp + 0xc], esi
// 0085ea40  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0085ea46  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0085ea4e  85c0                 test eax, eax
// 0085ea50  7412                 je 0x85ea64
// 0085ea52  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0085ea58  51                   push ecx
// 0085ea59  50                   push eax
// 0085ea5a  8d4c2413             lea ecx, [esp + 0x13]
// 0085ea5e  ff15f825b200         call dword ptr [0xb225f8]
// 0085ea64  80be8800000000       cmp byte ptr [esi + 0x88], 0
// 0085ea6b  8d7e40               lea edi, [esi + 0x40]
// 0085ea6e  c644241800           mov byte ptr [esp + 0x18], 0
// 0085ea73  740b                 je 0x85ea80
// 0085ea75  8bcf                 mov ecx, edi
// 0085ea77  e8a4c5ffff           call 0x85b020
// 0085ea7c  c6474800             mov byte ptr [edi + 0x48], 0
// 0085ea80  8bce                 mov ecx, esi
// 0085ea82  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0085ea8a  ff15b424b200         call dword ptr [0xb224b4]
// 0085ea90  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085ea94  5f                   pop edi
// 0085ea95  5e                   pop esi
// 0085ea96  64890d00000000       mov dword ptr fs:[0], ecx
// 0085ea9d  83c414               add esp, 0x14
// 0085eaa0  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp