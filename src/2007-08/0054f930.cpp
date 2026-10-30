// roc 2007-08 0054f930  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f930
//
// 0054f930  56                   push esi
// 0054f931  8bf1                 mov esi, ecx
// 0054f933  f6464401             test byte ptr [esi + 0x44], 1
// 0054f937  57                   push edi
// 0054f938  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0054f93c  7531                 jne 0x54f96f
// 0054f93e  8b5640               mov edx, dword ptr [esi + 0x40]
// 0054f941  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0054f944  2bca                 sub ecx, edx
// 0054f946  837e2010             cmp dword ptr [esi + 0x20], 0x10
// 0054f94a  7205                 jb 0x54f951
// 0054f94c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0054f94f  eb03                 jmp 0x54f954
// 0054f951  8d460c               lea eax, [esi + 0xc]
// 0054f954  51                   push ecx
// 0054f955  03c2                 add eax, edx
// 0054f957  50                   push eax
// 0054f958  8bcf                 mov ecx, edi
// 0054f95a  ff1500e67700         call dword ptr [0x77e600]
// 0054f960  014640               add dword ptr [esi + 0x40], eax
// 0054f963  8b4640               mov eax, dword ptr [esi + 0x40]
// 0054f966  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 0054f969  751b                 jne 0x54f986
// 0054f96b  834e4401             or dword ptr [esi + 0x44], 1
// 0054f96f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054f973  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054f977  50                   push eax
// 0054f978  51                   push ecx
// 0054f979  57                   push edi
// 0054f97a  8bce                 mov ecx, esi
// 0054f97c  e82ffdffff           call 0x54f6b0
// 0054f981  5f                   pop edi
// 0054f982  5e                   pop esi
// 0054f983  c20c00               ret 0xc
// 0054f986  5f                   pop edi
// 0054f987  33c0                 xor eax, eax
// 0054f989  5e                   pop esi
// 0054f98a  c20c00               ret 0xc
// copied from an identical function in another client (function ??$write@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PBDH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp