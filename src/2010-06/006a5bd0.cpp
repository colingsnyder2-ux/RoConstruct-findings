// roc 2010-06 006a5bd0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a5bd0
//
// 006a5bd0  6aff                 push -1
// 006a5bd2  68132c9a00           push 0x9a2c13
// 006a5bd7  64a100000000         mov eax, dword ptr fs:[0]
// 006a5bdd  50                   push eax
// 006a5bde  64892500000000       mov dword ptr fs:[0], esp
// 006a5be5  83ec08               sub esp, 8
// 006a5be8  56                   push esi
// 006a5be9  8bf1                 mov esi, ecx
// 006a5beb  57                   push edi
// 006a5bec  8974240c             mov dword ptr [esp + 0xc], esi
// 006a5bf0  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 006a5bf6  c744241801000000     mov dword ptr [esp + 0x18], 1
// 006a5bfe  85c0                 test eax, eax
// 006a5c00  7412                 je 0x6a5c14
// 006a5c02  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 006a5c08  51                   push ecx
// 006a5c09  50                   push eax
// 006a5c0a  8d4c2413             lea ecx, [esp + 0x13]
// 006a5c0e  ff150ca59e00         call dword ptr [0x9ea50c]
// 006a5c14  80be9800000000       cmp byte ptr [esi + 0x98], 0
// 006a5c1b  8d7e40               lea edi, [esi + 0x40]
// 006a5c1e  c644241800           mov byte ptr [esp + 0x18], 0
// 006a5c23  740b                 je 0x6a5c30
// 006a5c25  8bcf                 mov ecx, edi
// 006a5c27  e8f4c2ffff           call 0x6a1f20
// 006a5c2c  c6475800             mov byte ptr [edi + 0x58], 0
// 006a5c30  8bce                 mov ecx, esi
// 006a5c32  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 006a5c3a  ff1528a69e00         call dword ptr [0x9ea628]
// 006a5c40  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a5c44  5f                   pop edi
// 006a5c45  5e                   pop esi
// 006a5c46  64890d00000000       mov dword ptr fs:[0], ecx
// 006a5c4d  83c414               add esp, 0x14
// 006a5c50  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp