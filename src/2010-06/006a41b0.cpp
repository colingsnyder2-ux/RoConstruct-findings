// roc 2010-06 006a41b0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a41b0
//
// 006a41b0  56                   push esi
// 006a41b1  8bf1                 mov esi, ecx
// 006a41b3  f6464401             test byte ptr [esi + 0x44], 1
// 006a41b7  57                   push edi
// 006a41b8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a41bc  7531                 jne 0x6a41ef
// 006a41be  8b5640               mov edx, dword ptr [esi + 0x40]
// 006a41c1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006a41c4  2bca                 sub ecx, edx
// 006a41c6  837e2010             cmp dword ptr [esi + 0x20], 0x10
// 006a41ca  7205                 jb 0x6a41d1
// 006a41cc  8b460c               mov eax, dword ptr [esi + 0xc]
// 006a41cf  eb03                 jmp 0x6a41d4
// 006a41d1  8d460c               lea eax, [esi + 0xc]
// 006a41d4  51                   push ecx
// 006a41d5  03c2                 add eax, edx
// 006a41d7  50                   push eax
// 006a41d8  8bcf                 mov ecx, edi
// 006a41da  ff15cca49e00         call dword ptr [0x9ea4cc]
// 006a41e0  014640               add dword ptr [esi + 0x40], eax
// 006a41e3  8b4640               mov eax, dword ptr [esi + 0x40]
// 006a41e6  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 006a41e9  751b                 jne 0x6a4206
// 006a41eb  834e4401             or dword ptr [esi + 0x44], 1
// 006a41ef  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a41f3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a41f7  50                   push eax
// 006a41f8  51                   push ecx
// 006a41f9  57                   push edi
// 006a41fa  8bce                 mov ecx, esi
// 006a41fc  e8bffcffff           call 0x6a3ec0
// 006a4201  5f                   pop edi
// 006a4202  5e                   pop esi
// 006a4203  c20c00               ret 0xc
// 006a4206  5f                   pop edi
// 006a4207  33c0                 xor eax, eax
// 006a4209  5e                   pop esi
// 006a420a  c20c00               ret 0xc
// copied from an identical function in another client (function ??$write@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp