// roc 2009-12 007276c0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007276c0
//
// 007276c0  6aff                 push -1
// 007276c2  6843f09400           push 0x94f043
// 007276c7  64a100000000         mov eax, dword ptr fs:[0]
// 007276cd  50                   push eax
// 007276ce  64892500000000       mov dword ptr fs:[0], esp
// 007276d5  83ec08               sub esp, 8
// 007276d8  56                   push esi
// 007276d9  8bf1                 mov esi, ecx
// 007276db  57                   push edi
// 007276dc  8974240c             mov dword ptr [esp + 0xc], esi
// 007276e0  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 007276e6  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007276ee  85c0                 test eax, eax
// 007276f0  7412                 je 0x727704
// 007276f2  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 007276f8  51                   push ecx
// 007276f9  50                   push eax
// 007276fa  8d4c2413             lea ecx, [esp + 0x13]
// 007276fe  ff15fcb59800         call dword ptr [0x98b5fc]
// 00727704  80be8800000000       cmp byte ptr [esi + 0x88], 0
// 0072770b  8d7e40               lea edi, [esi + 0x40]
// 0072770e  c644241800           mov byte ptr [esp + 0x18], 0
// 00727713  740b                 je 0x727720
// 00727715  8bcf                 mov ecx, edi
// 00727717  e874c4ffff           call 0x723b90
// 0072771c  c6474800             mov byte ptr [edi + 0x48], 0
// 00727720  8bce                 mov ecx, esi
// 00727722  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0072772a  ff1584b49800         call dword ptr [0x98b484]
// 00727730  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00727734  5f                   pop edi
// 00727735  5e                   pop esi
// 00727736  64890d00000000       mov dword ptr fs:[0], ecx
// 0072773d  83c414               add esp, 0x14
// 00727740  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp