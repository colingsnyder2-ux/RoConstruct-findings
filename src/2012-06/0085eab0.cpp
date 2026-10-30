// roc 2012-06 0085eab0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085eab0
//
// 0085eab0  6aff                 push -1
// 0085eab2  6853e6ac00           push 0xace653
// 0085eab7  64a100000000         mov eax, dword ptr fs:[0]
// 0085eabd  50                   push eax
// 0085eabe  64892500000000       mov dword ptr fs:[0], esp
// 0085eac5  83ec08               sub esp, 8
// 0085eac8  56                   push esi
// 0085eac9  8bf1                 mov esi, ecx
// 0085eacb  57                   push edi
// 0085eacc  8974240c             mov dword ptr [esp + 0xc], esi
// 0085ead0  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 0085ead6  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0085eade  85c0                 test eax, eax
// 0085eae0  7412                 je 0x85eaf4
// 0085eae2  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 0085eae8  51                   push ecx
// 0085eae9  50                   push eax
// 0085eaea  8d4c2413             lea ecx, [esp + 0x13]
// 0085eaee  ff15f825b200         call dword ptr [0xb225f8]
// 0085eaf4  80be9800000000       cmp byte ptr [esi + 0x98], 0
// 0085eafb  8d7e40               lea edi, [esi + 0x40]
// 0085eafe  c644241800           mov byte ptr [esp + 0x18], 0
// 0085eb03  740b                 je 0x85eb10
// 0085eb05  8bcf                 mov ecx, edi
// 0085eb07  e814c5ffff           call 0x85b020
// 0085eb0c  c6475800             mov byte ptr [edi + 0x58], 0
// 0085eb10  8bce                 mov ecx, esi
// 0085eb12  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0085eb1a  ff15b424b200         call dword ptr [0xb224b4]
// 0085eb20  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085eb24  5f                   pop edi
// 0085eb25  5e                   pop esi
// 0085eb26  64890d00000000       mov dword ptr fs:[0], ecx
// 0085eb2d  83c414               add esp, 0x14
// 0085eb30  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp