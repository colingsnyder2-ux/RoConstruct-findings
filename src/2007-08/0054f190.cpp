// roc 2007-08 0054f190  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f190
//
// 0054f190  6aff                 push -1
// 0054f192  6883287500           push 0x752883
// 0054f197  64a100000000         mov eax, dword ptr fs:[0]
// 0054f19d  50                   push eax
// 0054f19e  64892500000000       mov dword ptr fs:[0], esp
// 0054f1a5  83ec08               sub esp, 8
// 0054f1a8  56                   push esi
// 0054f1a9  8bf1                 mov esi, ecx
// 0054f1ab  57                   push edi
// 0054f1ac  8974240c             mov dword ptr [esp + 0xc], esi
// 0054f1b0  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 0054f1b6  85c0                 test eax, eax
// 0054f1b8  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0054f1c0  7412                 je 0x54f1d4
// 0054f1c2  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 0054f1c8  51                   push ecx
// 0054f1c9  50                   push eax
// 0054f1ca  8d4c2413             lea ecx, [esp + 0x13]
// 0054f1ce  ff1510e67700         call dword ptr [0x77e610]
// 0054f1d4  80be9800000000       cmp byte ptr [esi + 0x98], 0
// 0054f1db  8d7e40               lea edi, [esi + 0x40]
// 0054f1de  c644241800           mov byte ptr [esp + 0x18], 0
// 0054f1e3  740b                 je 0x54f1f0
// 0054f1e5  8bcf                 mov ecx, edi
// 0054f1e7  e874c7ffff           call 0x54b960
// 0054f1ec  c6475800             mov byte ptr [edi + 0x58], 0
// 0054f1f0  8bce                 mov ecx, esi
// 0054f1f2  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0054f1fa  ff151ce57700         call dword ptr [0x77e51c]
// 0054f200  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054f204  5f                   pop edi
// 0054f205  5e                   pop esi
// 0054f206  64890d00000000       mov dword ptr fs:[0], ecx
// 0054f20d  83c414               add esp, 0x14
// 0054f210  c3                   ret 
// copied from an identical function in another client (function ??1?$indirect_streambuf@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@UAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp