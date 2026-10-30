// roc 2011-06 006e4f50  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4f50
//
// 006e4f50  56                   push esi
// 006e4f51  8bf1                 mov esi, ecx
// 006e4f53  f6464401             test byte ptr [esi + 0x44], 1
// 006e4f57  57                   push edi
// 006e4f58  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e4f5c  7531                 jne 0x6e4f8f
// 006e4f5e  8b5640               mov edx, dword ptr [esi + 0x40]
// 006e4f61  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006e4f64  2bca                 sub ecx, edx
// 006e4f66  837e2010             cmp dword ptr [esi + 0x20], 0x10
// 006e4f6a  7205                 jb 0x6e4f71
// 006e4f6c  8b460c               mov eax, dword ptr [esi + 0xc]
// 006e4f6f  eb03                 jmp 0x6e4f74
// 006e4f71  8d460c               lea eax, [esi + 0xc]
// 006e4f74  51                   push ecx
// 006e4f75  03c2                 add eax, edx
// 006e4f77  50                   push eax
// 006e4f78  8bcf                 mov ecx, edi
// 006e4f7a  ff150004a400         call dword ptr [0xa40400]
// 006e4f80  014640               add dword ptr [esi + 0x40], eax
// 006e4f83  8b4640               mov eax, dword ptr [esi + 0x40]
// 006e4f86  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 006e4f89  751b                 jne 0x6e4fa6
// 006e4f8b  834e4401             or dword ptr [esi + 0x44], 1
// 006e4f8f  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e4f93  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e4f97  50                   push eax
// 006e4f98  51                   push ecx
// 006e4f99  57                   push edi
// 006e4f9a  8bce                 mov ecx, esi
// 006e4f9c  e8cffcffff           call 0x6e4c70
// 006e4fa1  5f                   pop edi
// 006e4fa2  5e                   pop esi
// 006e4fa3  c20c00               ret 0xc
// 006e4fa6  5f                   pop edi
// 006e4fa7  33c0                 xor eax, eax
// 006e4fa9  5e                   pop esi
// 006e4faa  c20c00               ret 0xc
// copied from an identical function in another client (function ??$write@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp