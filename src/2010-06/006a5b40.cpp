// roc 2010-06 006a5b40  unit: boost::iostreams::Uinput::?$filtering_stream  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a5b40
//
// 006a5b40  6aff                 push -1
// 006a5b42  68f32b9a00           push 0x9a2bf3
// 006a5b47  64a100000000         mov eax, dword ptr fs:[0]
// 006a5b4d  50                   push eax
// 006a5b4e  64892500000000       mov dword ptr fs:[0], esp
// 006a5b55  83ec08               sub esp, 8
// 006a5b58  56                   push esi
// 006a5b59  8bf1                 mov esi, ecx
// 006a5b5b  57                   push edi
// 006a5b5c  8974240c             mov dword ptr [esp + 0xc], esi
// 006a5b60  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 006a5b66  c744241801000000     mov dword ptr [esp + 0x18], 1
// 006a5b6e  85c0                 test eax, eax
// 006a5b70  7412                 je 0x6a5b84
// 006a5b72  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 006a5b78  51                   push ecx
// 006a5b79  50                   push eax
// 006a5b7a  8d4c2413             lea ecx, [esp + 0x13]
// 006a5b7e  ff150ca59e00         call dword ptr [0x9ea50c]
// 006a5b84  80be8800000000       cmp byte ptr [esi + 0x88], 0
// 006a5b8b  8d7e40               lea edi, [esi + 0x40]
// 006a5b8e  c644241800           mov byte ptr [esp + 0x18], 0
// 006a5b93  740b                 je 0x6a5ba0
// 006a5b95  8bcf                 mov ecx, edi
// 006a5b97  e884c3ffff           call 0x6a1f20
// 006a5b9c  c6474800             mov byte ptr [edi + 0x48], 0
// 006a5ba0  8bce                 mov ecx, esi
// 006a5ba2  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 006a5baa  ff1528a69e00         call dword ptr [0x9ea628]
// 006a5bb0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a5bb4  5f                   pop edi
// 006a5bb5  5e                   pop esi
// 006a5bb6  64890d00000000       mov dword ptr fs:[0], ecx
// 006a5bbd  83c414               add esp, 0x14
// 006a5bc0  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp