// roc 2011-06 006e4b50  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4b50
//
// 006e4b50  53                   push ebx
// 006e4b51  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006e4b55  8b4314               mov eax, dword ptr [ebx + 0x14]
// 006e4b58  56                   push esi
// 006e4b59  8bf1                 mov esi, ecx
// 006e4b5b  2b4640               sub eax, dword ptr [esi + 0x40]
// 006e4b5e  57                   push edi
// 006e4b5f  39442414             cmp dword ptr [esp + 0x14], eax
// 006e4b63  89442418             mov dword ptr [esp + 0x18], eax
// 006e4b67  8d442414             lea eax, [esp + 0x14]
// 006e4b6b  7c04                 jl 0x6e4b71
// 006e4b6d  8d442418             lea eax, [esp + 0x18]
// 006e4b71  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 006e4b74  8b38                 mov edi, dword ptr [eax]
// 006e4b76  8d4304               lea eax, [ebx + 4]
// 006e4b79  83f910               cmp ecx, 0x10
// 006e4b7c  7204                 jb 0x6e4b82
// 006e4b7e  8b10                 mov edx, dword ptr [eax]
// 006e4b80  eb02                 jmp 0x6e4b84
// 006e4b82  8bd0                 mov edx, eax
// 006e4b84  83f910               cmp ecx, 0x10
// 006e4b87  7204                 jb 0x6e4b8d
// 006e4b89  8b08                 mov ecx, dword ptr [eax]
// 006e4b8b  eb02                 jmp 0x6e4b8f
// 006e4b8d  8bc8                 mov ecx, eax
// 006e4b8f  8b4640               mov eax, dword ptr [esi + 0x40]
// 006e4b92  03c8                 add ecx, eax
// 006e4b94  2bc1                 sub eax, ecx
// 006e4b96  03c2                 add eax, edx
// 006e4b98  03c7                 add eax, edi
// 006e4b9a  85c0                 test eax, eax
// 006e4b9c  7e11                 jle 0x6e4baf
// 006e4b9e  50                   push eax
// 006e4b9f  51                   push ecx
// 006e4ba0  50                   push eax
// 006e4ba1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006e4ba5  50                   push eax
// 006e4ba6  ff15fc09a400         call dword ptr [0xa409fc]
// 006e4bac  83c410               add esp, 0x10
// 006e4baf  017e40               add dword ptr [esi + 0x40], edi
// 006e4bb2  8b4644               mov eax, dword ptr [esi + 0x44]
// 006e4bb5  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 006e4bb8  a801                 test al, 1
// 006e4bba  750b                 jne 0x6e4bc7
// 006e4bbc  3b4b14               cmp ecx, dword ptr [ebx + 0x14]
// 006e4bbf  7506                 jne 0x6e4bc7
// 006e4bc1  83c801               or eax, 1
// 006e4bc4  894644               mov dword ptr [esi + 0x44], eax
// 006e4bc7  8bc7                 mov eax, edi
// 006e4bc9  5f                   pop edi
// 006e4bca  5e                   pop esi
// 006e4bcb  5b                   pop ebx
// 006e4bcc  c20c00               ret 0xc
// copied from an identical function in another client (function ?read_string@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@AAEHPADHAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp