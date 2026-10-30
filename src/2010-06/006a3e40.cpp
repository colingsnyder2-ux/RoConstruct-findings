// roc 2010-06 006a3e40  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a3e40
//
// 006a3e40  53                   push ebx
// 006a3e41  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006a3e45  8b4314               mov eax, dword ptr [ebx + 0x14]
// 006a3e48  56                   push esi
// 006a3e49  8bf1                 mov esi, ecx
// 006a3e4b  2b4640               sub eax, dword ptr [esi + 0x40]
// 006a3e4e  57                   push edi
// 006a3e4f  39442414             cmp dword ptr [esp + 0x14], eax
// 006a3e53  89442418             mov dword ptr [esp + 0x18], eax
// 006a3e57  8d442414             lea eax, [esp + 0x14]
// 006a3e5b  7c04                 jl 0x6a3e61
// 006a3e5d  8d442418             lea eax, [esp + 0x18]
// 006a3e61  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 006a3e64  8b38                 mov edi, dword ptr [eax]
// 006a3e66  8d4304               lea eax, [ebx + 4]
// 006a3e69  83f910               cmp ecx, 0x10
// 006a3e6c  7204                 jb 0x6a3e72
// 006a3e6e  8b10                 mov edx, dword ptr [eax]
// 006a3e70  eb02                 jmp 0x6a3e74
// 006a3e72  8bd0                 mov edx, eax
// 006a3e74  83f910               cmp ecx, 0x10
// 006a3e77  7204                 jb 0x6a3e7d
// 006a3e79  8b08                 mov ecx, dword ptr [eax]
// 006a3e7b  eb02                 jmp 0x6a3e7f
// 006a3e7d  8bc8                 mov ecx, eax
// 006a3e7f  8b4640               mov eax, dword ptr [esi + 0x40]
// 006a3e82  03c8                 add ecx, eax
// 006a3e84  2bc1                 sub eax, ecx
// 006a3e86  03c2                 add eax, edx
// 006a3e88  03c7                 add eax, edi
// 006a3e8a  85c0                 test eax, eax
// 006a3e8c  7e11                 jle 0x6a3e9f
// 006a3e8e  50                   push eax
// 006a3e8f  51                   push ecx
// 006a3e90  50                   push eax
// 006a3e91  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a3e95  50                   push eax
// 006a3e96  ff1580a89e00         call dword ptr [0x9ea880]
// 006a3e9c  83c410               add esp, 0x10
// 006a3e9f  017e40               add dword ptr [esi + 0x40], edi
// 006a3ea2  8b4644               mov eax, dword ptr [esi + 0x44]
// 006a3ea5  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 006a3ea8  a801                 test al, 1
// 006a3eaa  750b                 jne 0x6a3eb7
// 006a3eac  3b4b14               cmp ecx, dword ptr [ebx + 0x14]
// 006a3eaf  7506                 jne 0x6a3eb7
// 006a3eb1  83c801               or eax, 1
// 006a3eb4  894644               mov dword ptr [esi + 0x44], eax
// 006a3eb7  8bc7                 mov eax, edi
// 006a3eb9  5f                   pop edi
// 006a3eba  5e                   pop esi
// 006a3ebb  5b                   pop ebx
// 006a3ebc  c20c00               ret 0xc
// copied from an identical function in another client (function ?read_string@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@AAEHPADHAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp