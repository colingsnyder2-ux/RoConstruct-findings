// roc 2009-12 00725940  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00725940
//
// 00725940  53                   push ebx
// 00725941  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00725945  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00725948  56                   push esi
// 00725949  8bf1                 mov esi, ecx
// 0072594b  2b4640               sub eax, dword ptr [esi + 0x40]
// 0072594e  57                   push edi
// 0072594f  39442414             cmp dword ptr [esp + 0x14], eax
// 00725953  89442418             mov dword ptr [esp + 0x18], eax
// 00725957  8d442414             lea eax, [esp + 0x14]
// 0072595b  7c04                 jl 0x725961
// 0072595d  8d442418             lea eax, [esp + 0x18]
// 00725961  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 00725964  8b38                 mov edi, dword ptr [eax]
// 00725966  8d4304               lea eax, [ebx + 4]
// 00725969  83f910               cmp ecx, 0x10
// 0072596c  7204                 jb 0x725972
// 0072596e  8b10                 mov edx, dword ptr [eax]
// 00725970  eb02                 jmp 0x725974
// 00725972  8bd0                 mov edx, eax
// 00725974  83f910               cmp ecx, 0x10
// 00725977  7204                 jb 0x72597d
// 00725979  8b08                 mov ecx, dword ptr [eax]
// 0072597b  eb02                 jmp 0x72597f
// 0072597d  8bc8                 mov ecx, eax
// 0072597f  8b4640               mov eax, dword ptr [esi + 0x40]
// 00725982  03c8                 add ecx, eax
// 00725984  2bc1                 sub eax, ecx
// 00725986  03c2                 add eax, edx
// 00725988  03c7                 add eax, edi
// 0072598a  85c0                 test eax, eax
// 0072598c  7e11                 jle 0x72599f
// 0072598e  50                   push eax
// 0072598f  51                   push ecx
// 00725990  50                   push eax
// 00725991  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00725995  50                   push eax
// 00725996  ff15c0b79800         call dword ptr [0x98b7c0]
// 0072599c  83c410               add esp, 0x10
// 0072599f  017e40               add dword ptr [esi + 0x40], edi
// 007259a2  8b4644               mov eax, dword ptr [esi + 0x44]
// 007259a5  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 007259a8  a801                 test al, 1
// 007259aa  750b                 jne 0x7259b7
// 007259ac  3b4b14               cmp ecx, dword ptr [ebx + 0x14]
// 007259af  7506                 jne 0x7259b7
// 007259b1  83c801               or eax, 1
// 007259b4  894644               mov dword ptr [esi + 0x44], eax
// 007259b7  8bc7                 mov eax, edi
// 007259b9  5f                   pop edi
// 007259ba  5e                   pop esi
// 007259bb  5b                   pop ebx
// 007259bc  c20c00               ret 0xc
// copied from an identical function in another client (function ?read_string@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@AAEHPADHAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp