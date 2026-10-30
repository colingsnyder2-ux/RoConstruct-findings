// roc 2007-08 00552b10  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552b10
//
// 00552b10  6aff                 push -1
// 00552b12  681bb67500           push 0x75b61b
// 00552b17  64a100000000         mov eax, dword ptr fs:[0]
// 00552b1d  50                   push eax
// 00552b1e  64892500000000       mov dword ptr fs:[0], esp
// 00552b25  51                   push ecx
// 00552b26  53                   push ebx
// 00552b27  56                   push esi
// 00552b28  57                   push edi
// 00552b29  6a20                 push 0x20
// 00552b2b  8bd9                 mov ebx, ecx
// 00552b2d  e8c4d30d00           call 0x62fef6
// 00552b32  8bf0                 mov esi, eax
// 00552b34  83c404               add esp, 4
// 00552b37  8974240c             mov dword ptr [esp + 0xc], esi
// 00552b3b  33ff                 xor edi, edi
// 00552b3d  3bf7                 cmp esi, edi
// 00552b3f  897c2418             mov dword ptr [esp + 0x18], edi
// 00552b43  742b                 je 0x552b70
// 00552b45  8bce                 mov ecx, esi
// 00552b47  e8b4d50400           call 0x5a0100
// 00552b4c  894604               mov dword ptr [esi + 4], eax
// 00552b4f  b804000000           mov eax, 4
// 00552b54  897e08               mov dword ptr [esi + 8], edi
// 00552b57  897e0c               mov dword ptr [esi + 0xc], edi
// 00552b5a  c7461000100000       mov dword ptr [esi + 0x10], 0x1000
// 00552b61  c7461480000000       mov dword ptr [esi + 0x14], 0x80
// 00552b68  894618               mov dword ptr [esi + 0x18], eax
// 00552b6b  89461c               mov dword ptr [esi + 0x1c], eax
// 00552b6e  eb02                 jmp 0x552b72
// 00552b70  33f6                 xor esi, esi
// 00552b72  8d7b04               lea edi, [ebx + 4]
// 00552b75  56                   push esi
// 00552b76  8bcf                 mov ecx, edi
// 00552b78  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00552b80  8933                 mov dword ptr [ebx], esi
// 00552b82  e839fcffff           call 0x5527c0
// 00552b87  56                   push esi
// 00552b88  56                   push esi
// 00552b89  57                   push edi
// 00552b8a  e891a0ebff           call 0x40cc20
// 00552b8f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00552b93  83c40c               add esp, 0xc
// 00552b96  5f                   pop edi
// 00552b97  5e                   pop esi
// 00552b98  8bc3                 mov eax, ebx
// 00552b9a  5b                   pop ebx
// 00552b9b  64890d00000000       mov dword ptr fs:[0], ecx
// 00552ba2  83c410               add esp, 0x10
// 00552ba5  c3                   ret 
// copied from an identical function in another client (function ??0?$chain_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@IAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_8be15fbf9b64785c.cpp