// roc 2007-08 0054f630  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f630
//
// 0054f630  53                   push ebx
// 0054f631  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0054f635  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0054f638  56                   push esi
// 0054f639  8bf1                 mov esi, ecx
// 0054f63b  2b4640               sub eax, dword ptr [esi + 0x40]
// 0054f63e  57                   push edi
// 0054f63f  39442414             cmp dword ptr [esp + 0x14], eax
// 0054f643  89442418             mov dword ptr [esp + 0x18], eax
// 0054f647  8d442414             lea eax, [esp + 0x14]
// 0054f64b  7c04                 jl 0x54f651
// 0054f64d  8d442418             lea eax, [esp + 0x18]
// 0054f651  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 0054f654  83f910               cmp ecx, 0x10
// 0054f657  8b38                 mov edi, dword ptr [eax]
// 0054f659  8d4304               lea eax, [ebx + 4]
// 0054f65c  7204                 jb 0x54f662
// 0054f65e  8b10                 mov edx, dword ptr [eax]
// 0054f660  eb02                 jmp 0x54f664
// 0054f662  8bd0                 mov edx, eax
// 0054f664  83f910               cmp ecx, 0x10
// 0054f667  7204                 jb 0x54f66d
// 0054f669  8b08                 mov ecx, dword ptr [eax]
// 0054f66b  eb02                 jmp 0x54f66f
// 0054f66d  8bc8                 mov ecx, eax
// 0054f66f  8b4640               mov eax, dword ptr [esi + 0x40]
// 0054f672  03c8                 add ecx, eax
// 0054f674  2bc1                 sub eax, ecx
// 0054f676  03c2                 add eax, edx
// 0054f678  03c7                 add eax, edi
// 0054f67a  85c0                 test eax, eax
// 0054f67c  7e11                 jle 0x54f68f
// 0054f67e  50                   push eax
// 0054f67f  51                   push ecx
// 0054f680  50                   push eax
// 0054f681  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054f685  50                   push eax
// 0054f686  ff1548e77700         call dword ptr [0x77e748]
// 0054f68c  83c410               add esp, 0x10
// 0054f68f  017e40               add dword ptr [esi + 0x40], edi
// 0054f692  8b4644               mov eax, dword ptr [esi + 0x44]
// 0054f695  a801                 test al, 1
// 0054f697  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0054f69a  750b                 jne 0x54f6a7
// 0054f69c  3b4b14               cmp ecx, dword ptr [ebx + 0x14]
// 0054f69f  7506                 jne 0x54f6a7
// 0054f6a1  83c801               or eax, 1
// 0054f6a4  894644               mov dword ptr [esi + 0x44], eax
// 0054f6a7  8bc7                 mov eax, edi
// 0054f6a9  5f                   pop edi
// 0054f6aa  5e                   pop esi
// 0054f6ab  5b                   pop ebx
// 0054f6ac  c20c00               ret 0xc
// copied from an identical function in another client (function ?read_string@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@AAEHPADHAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp