// roc 2007-08 00550610  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00550610
//
// 00550610  6aff                 push -1
// 00550612  68f3297500           push 0x7529f3
// 00550617  64a100000000         mov eax, dword ptr fs:[0]
// 0055061d  50                   push eax
// 0055061e  64892500000000       mov dword ptr fs:[0], esp
// 00550625  83ec08               sub esp, 8
// 00550628  56                   push esi
// 00550629  8bf1                 mov esi, ecx
// 0055062b  57                   push edi
// 0055062c  8974240c             mov dword ptr [esp + 0xc], esi
// 00550630  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00550636  85c0                 test eax, eax
// 00550638  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00550640  7412                 je 0x550654
// 00550642  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00550648  51                   push ecx
// 00550649  50                   push eax
// 0055064a  8d4c2413             lea ecx, [esp + 0x13]
// 0055064e  ff1510e67700         call dword ptr [0x77e610]
// 00550654  80be8800000000       cmp byte ptr [esi + 0x88], 0
// 0055065b  8d7e40               lea edi, [esi + 0x40]
// 0055065e  c644241800           mov byte ptr [esp + 0x18], 0
// 00550663  740b                 je 0x550670
// 00550665  8bcf                 mov ecx, edi
// 00550667  e8f4b2ffff           call 0x54b960
// 0055066c  c6474800             mov byte ptr [edi + 0x48], 0
// 00550670  8bce                 mov ecx, esi
// 00550672  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0055067a  ff151ce57700         call dword ptr [0x77e51c]
// 00550680  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00550684  5f                   pop edi
// 00550685  5e                   pop esi
// 00550686  64890d00000000       mov dword ptr fs:[0], ecx
// 0055068d  83c414               add esp, 0x14
// 00550690  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@UAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp