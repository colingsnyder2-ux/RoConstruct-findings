// roc 2011-06 006e6880  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e6880
//
// 006e6880  6aff                 push -1
// 006e6882  6893429f00           push 0x9f4293
// 006e6887  64a100000000         mov eax, dword ptr fs:[0]
// 006e688d  50                   push eax
// 006e688e  64892500000000       mov dword ptr fs:[0], esp
// 006e6895  83ec08               sub esp, 8
// 006e6898  56                   push esi
// 006e6899  8bf1                 mov esi, ecx
// 006e689b  57                   push edi
// 006e689c  8974240c             mov dword ptr [esp + 0xc], esi
// 006e68a0  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 006e68a6  c744241801000000     mov dword ptr [esp + 0x18], 1
// 006e68ae  85c0                 test eax, eax
// 006e68b0  7412                 je 0x6e68c4
// 006e68b2  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 006e68b8  51                   push ecx
// 006e68b9  50                   push eax
// 006e68ba  8d4c2413             lea ecx, [esp + 0x13]
// 006e68be  ff152805a400         call dword ptr [0xa40528]
// 006e68c4  80be9800000000       cmp byte ptr [esi + 0x98], 0
// 006e68cb  8d7e40               lea edi, [esi + 0x40]
// 006e68ce  c644241800           mov byte ptr [esp + 0x18], 0
// 006e68d3  740b                 je 0x6e68e0
// 006e68d5  8bcf                 mov ecx, edi
// 006e68d7  e834c5ffff           call 0x6e2e10
// 006e68dc  c6475800             mov byte ptr [edi + 0x58], 0
// 006e68e0  8bce                 mov ecx, esi
// 006e68e2  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 006e68ea  ff150806a400         call dword ptr [0xa40608]
// 006e68f0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e68f4  5f                   pop edi
// 006e68f5  5e                   pop esi
// 006e68f6  64890d00000000       mov dword ptr fs:[0], ecx
// 006e68fd  83c414               add esp, 0x14
// 006e6900  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp