// roc 2009-12 00727750  unit: boost::iostreams::Uinput::?$filtering_stream  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00727750
//
// 00727750  6aff                 push -1
// 00727752  6863f09400           push 0x94f063
// 00727757  64a100000000         mov eax, dword ptr fs:[0]
// 0072775d  50                   push eax
// 0072775e  64892500000000       mov dword ptr fs:[0], esp
// 00727765  83ec08               sub esp, 8
// 00727768  56                   push esi
// 00727769  8bf1                 mov esi, ecx
// 0072776b  57                   push edi
// 0072776c  8974240c             mov dword ptr [esp + 0xc], esi
// 00727770  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00727776  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0072777e  85c0                 test eax, eax
// 00727780  7412                 je 0x727794
// 00727782  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00727788  51                   push ecx
// 00727789  50                   push eax
// 0072778a  8d4c2413             lea ecx, [esp + 0x13]
// 0072778e  ff15fcb59800         call dword ptr [0x98b5fc]
// 00727794  80be9800000000       cmp byte ptr [esi + 0x98], 0
// 0072779b  8d7e40               lea edi, [esi + 0x40]
// 0072779e  c644241800           mov byte ptr [esp + 0x18], 0
// 007277a3  740b                 je 0x7277b0
// 007277a5  8bcf                 mov ecx, edi
// 007277a7  e8e4c3ffff           call 0x723b90
// 007277ac  c6475800             mov byte ptr [edi + 0x58], 0
// 007277b0  8bce                 mov ecx, esi
// 007277b2  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 007277ba  ff1584b49800         call dword ptr [0x98b484]
// 007277c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007277c4  5f                   pop edi
// 007277c5  5e                   pop esi
// 007277c6  64890d00000000       mov dword ptr fs:[0], ecx
// 007277cd  83c414               add esp, 0x14
// 007277d0  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp