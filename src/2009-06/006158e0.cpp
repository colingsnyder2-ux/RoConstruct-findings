// roc 2009-06 006158e0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006158e0
//
// 006158e0  53                   push ebx
// 006158e1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006158e5  8b4314               mov eax, dword ptr [ebx + 0x14]
// 006158e8  56                   push esi
// 006158e9  8bf1                 mov esi, ecx
// 006158eb  2b4640               sub eax, dword ptr [esi + 0x40]
// 006158ee  57                   push edi
// 006158ef  39442414             cmp dword ptr [esp + 0x14], eax
// 006158f3  89442418             mov dword ptr [esp + 0x18], eax
// 006158f7  8d442414             lea eax, [esp + 0x14]
// 006158fb  7c04                 jl 0x615901
// 006158fd  8d442418             lea eax, [esp + 0x18]
// 00615901  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 00615904  8b38                 mov edi, dword ptr [eax]
// 00615906  8d4304               lea eax, [ebx + 4]
// 00615909  83f910               cmp ecx, 0x10
// 0061590c  7204                 jb 0x615912
// 0061590e  8b10                 mov edx, dword ptr [eax]
// 00615910  eb02                 jmp 0x615914
// 00615912  8bd0                 mov edx, eax
// 00615914  83f910               cmp ecx, 0x10
// 00615917  7204                 jb 0x61591d
// 00615919  8b08                 mov ecx, dword ptr [eax]
// 0061591b  eb02                 jmp 0x61591f
// 0061591d  8bc8                 mov ecx, eax
// 0061591f  8b4640               mov eax, dword ptr [esi + 0x40]
// 00615922  03c8                 add ecx, eax
// 00615924  2bc1                 sub eax, ecx
// 00615926  03c2                 add eax, edx
// 00615928  03c7                 add eax, edi
// 0061592a  85c0                 test eax, eax
// 0061592c  7e11                 jle 0x61593f
// 0061592e  50                   push eax
// 0061592f  51                   push ecx
// 00615930  50                   push eax
// 00615931  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00615935  50                   push eax
// 00615936  ff155ce98900         call dword ptr [0x89e95c]
// 0061593c  83c410               add esp, 0x10
// 0061593f  017e40               add dword ptr [esi + 0x40], edi
// 00615942  8b4644               mov eax, dword ptr [esi + 0x44]
// 00615945  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00615948  a801                 test al, 1
// 0061594a  750b                 jne 0x615957
// 0061594c  3b4b14               cmp ecx, dword ptr [ebx + 0x14]
// 0061594f  7506                 jne 0x615957
// 00615951  83c801               or eax, 1
// 00615954  894644               mov dword ptr [esi + 0x44], eax
// 00615957  8bc7                 mov eax, edi
// 00615959  5f                   pop edi
// 0061595a  5e                   pop esi
// 0061595b  5b                   pop ebx
// 0061595c  c20c00               ret 0xc
// copied from an identical function in another client (function ?read_string@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@AAEHPADHAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp