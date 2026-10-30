// roc 2012-06 0085cd00  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085cd00
//
// 0085cd00  53                   push ebx
// 0085cd01  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0085cd05  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0085cd08  56                   push esi
// 0085cd09  8bf1                 mov esi, ecx
// 0085cd0b  2b4640               sub eax, dword ptr [esi + 0x40]
// 0085cd0e  57                   push edi
// 0085cd0f  39442414             cmp dword ptr [esp + 0x14], eax
// 0085cd13  89442418             mov dword ptr [esp + 0x18], eax
// 0085cd17  8d442414             lea eax, [esp + 0x14]
// 0085cd1b  7c04                 jl 0x85cd21
// 0085cd1d  8d442418             lea eax, [esp + 0x18]
// 0085cd21  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 0085cd24  8b38                 mov edi, dword ptr [eax]
// 0085cd26  8d4304               lea eax, [ebx + 4]
// 0085cd29  83f910               cmp ecx, 0x10
// 0085cd2c  7204                 jb 0x85cd32
// 0085cd2e  8b10                 mov edx, dword ptr [eax]
// 0085cd30  eb02                 jmp 0x85cd34
// 0085cd32  8bd0                 mov edx, eax
// 0085cd34  83f910               cmp ecx, 0x10
// 0085cd37  7204                 jb 0x85cd3d
// 0085cd39  8b08                 mov ecx, dword ptr [eax]
// 0085cd3b  eb02                 jmp 0x85cd3f
// 0085cd3d  8bc8                 mov ecx, eax
// 0085cd3f  8b4640               mov eax, dword ptr [esi + 0x40]
// 0085cd42  03c8                 add ecx, eax
// 0085cd44  2bc1                 sub eax, ecx
// 0085cd46  03c2                 add eax, edx
// 0085cd48  03c7                 add eax, edi
// 0085cd4a  85c0                 test eax, eax
// 0085cd4c  7e11                 jle 0x85cd5f
// 0085cd4e  50                   push eax
// 0085cd4f  51                   push ecx
// 0085cd50  50                   push eax
// 0085cd51  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085cd55  50                   push eax
// 0085cd56  ff15c02ab200         call dword ptr [0xb22ac0]
// 0085cd5c  83c410               add esp, 0x10
// 0085cd5f  017e40               add dword ptr [esi + 0x40], edi
// 0085cd62  8b4644               mov eax, dword ptr [esi + 0x44]
// 0085cd65  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0085cd68  a801                 test al, 1
// 0085cd6a  750b                 jne 0x85cd77
// 0085cd6c  3b4b14               cmp ecx, dword ptr [ebx + 0x14]
// 0085cd6f  7506                 jne 0x85cd77
// 0085cd71  83c801               or eax, 1
// 0085cd74  894644               mov dword ptr [esi + 0x44], eax
// 0085cd77  8bc7                 mov eax, edi
// 0085cd79  5f                   pop edi
// 0085cd7a  5e                   pop esi
// 0085cd7b  5b                   pop ebx
// 0085cd7c  c20c00               ret 0xc
// copied from an identical function in another client (function ?read_string@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@AAEHPADHAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp