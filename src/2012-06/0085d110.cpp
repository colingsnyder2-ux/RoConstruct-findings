// roc 2012-06 0085d110  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085d110
//
// 0085d110  56                   push esi
// 0085d111  8bf1                 mov esi, ecx
// 0085d113  f6464401             test byte ptr [esi + 0x44], 1
// 0085d117  57                   push edi
// 0085d118  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085d11c  7531                 jne 0x85d14f
// 0085d11e  8b5640               mov edx, dword ptr [esi + 0x40]
// 0085d121  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0085d124  2bca                 sub ecx, edx
// 0085d126  837e2010             cmp dword ptr [esi + 0x20], 0x10
// 0085d12a  7205                 jb 0x85d131
// 0085d12c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0085d12f  eb03                 jmp 0x85d134
// 0085d131  8d460c               lea eax, [esi + 0xc]
// 0085d134  51                   push ecx
// 0085d135  03c2                 add eax, edx
// 0085d137  50                   push eax
// 0085d138  8bcf                 mov ecx, edi
// 0085d13a  ff151426b200         call dword ptr [0xb22614]
// 0085d140  014640               add dword ptr [esi + 0x40], eax
// 0085d143  8b4640               mov eax, dword ptr [esi + 0x40]
// 0085d146  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 0085d149  751b                 jne 0x85d166
// 0085d14b  834e4401             or dword ptr [esi + 0x44], 1
// 0085d14f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085d153  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085d157  50                   push eax
// 0085d158  51                   push ecx
// 0085d159  57                   push edi
// 0085d15a  8bce                 mov ecx, esi
// 0085d15c  e8bffcffff           call 0x85ce20
// 0085d161  5f                   pop edi
// 0085d162  5e                   pop esi
// 0085d163  c20c00               ret 0xc
// 0085d166  5f                   pop edi
// 0085d167  33c0                 xor eax, eax
// 0085d169  5e                   pop esi
// 0085d16a  c20c00               ret 0xc
// copied from an identical function in another client (function ??$write@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp