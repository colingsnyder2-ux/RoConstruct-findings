// roc 2009-12 00725ca0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00725ca0
//
// 00725ca0  56                   push esi
// 00725ca1  8bf1                 mov esi, ecx
// 00725ca3  f6464401             test byte ptr [esi + 0x44], 1
// 00725ca7  57                   push edi
// 00725ca8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00725cac  7531                 jne 0x725cdf
// 00725cae  8b5640               mov edx, dword ptr [esi + 0x40]
// 00725cb1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00725cb4  2bca                 sub ecx, edx
// 00725cb6  837e2010             cmp dword ptr [esi + 0x20], 0x10
// 00725cba  7205                 jb 0x725cc1
// 00725cbc  8b460c               mov eax, dword ptr [esi + 0xc]
// 00725cbf  eb03                 jmp 0x725cc4
// 00725cc1  8d460c               lea eax, [esi + 0xc]
// 00725cc4  51                   push ecx
// 00725cc5  03c2                 add eax, edx
// 00725cc7  50                   push eax
// 00725cc8  8bcf                 mov ecx, edi
// 00725cca  ff153cb69800         call dword ptr [0x98b63c]
// 00725cd0  014640               add dword ptr [esi + 0x40], eax
// 00725cd3  8b4640               mov eax, dword ptr [esi + 0x40]
// 00725cd6  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 00725cd9  751b                 jne 0x725cf6
// 00725cdb  834e4401             or dword ptr [esi + 0x44], 1
// 00725cdf  8b442414             mov eax, dword ptr [esp + 0x14]
// 00725ce3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00725ce7  50                   push eax
// 00725ce8  51                   push ecx
// 00725ce9  57                   push edi
// 00725cea  8bce                 mov ecx, esi
// 00725cec  e8cffcffff           call 0x7259c0
// 00725cf1  5f                   pop edi
// 00725cf2  5e                   pop esi
// 00725cf3  c20c00               ret 0xc
// 00725cf6  5f                   pop edi
// 00725cf7  33c0                 xor eax, eax
// 00725cf9  5e                   pop esi
// 00725cfa  c20c00               ret 0xc
// copied from an identical function in another client (function ??$write@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PBDH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp