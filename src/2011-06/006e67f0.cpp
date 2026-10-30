// roc 2011-06 006e67f0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e67f0
//
// 006e67f0  6aff                 push -1
// 006e67f2  6873429f00           push 0x9f4273
// 006e67f7  64a100000000         mov eax, dword ptr fs:[0]
// 006e67fd  50                   push eax
// 006e67fe  64892500000000       mov dword ptr fs:[0], esp
// 006e6805  83ec08               sub esp, 8
// 006e6808  56                   push esi
// 006e6809  8bf1                 mov esi, ecx
// 006e680b  57                   push edi
// 006e680c  8974240c             mov dword ptr [esp + 0xc], esi
// 006e6810  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 006e6816  c744241801000000     mov dword ptr [esp + 0x18], 1
// 006e681e  85c0                 test eax, eax
// 006e6820  7412                 je 0x6e6834
// 006e6822  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 006e6828  51                   push ecx
// 006e6829  50                   push eax
// 006e682a  8d4c2413             lea ecx, [esp + 0x13]
// 006e682e  ff152805a400         call dword ptr [0xa40528]
// 006e6834  80be8800000000       cmp byte ptr [esi + 0x88], 0
// 006e683b  8d7e40               lea edi, [esi + 0x40]
// 006e683e  c644241800           mov byte ptr [esp + 0x18], 0
// 006e6843  740b                 je 0x6e6850
// 006e6845  8bcf                 mov ecx, edi
// 006e6847  e8c4c5ffff           call 0x6e2e10
// 006e684c  c6474800             mov byte ptr [edi + 0x48], 0
// 006e6850  8bce                 mov ecx, esi
// 006e6852  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 006e685a  ff150806a400         call dword ptr [0xa40608]
// 006e6860  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e6864  5f                   pop edi
// 006e6865  5e                   pop esi
// 006e6866  64890d00000000       mov dword ptr fs:[0], ecx
// 006e686d  83c414               add esp, 0x14
// 006e6870  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp