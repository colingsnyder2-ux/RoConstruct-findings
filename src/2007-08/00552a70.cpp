// roc 2007-08 00552a70  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552a70
//
// 00552a70  6aff                 push -1
// 00552a72  681bb67500           push 0x75b61b
// 00552a77  64a100000000         mov eax, dword ptr fs:[0]
// 00552a7d  50                   push eax
// 00552a7e  64892500000000       mov dword ptr fs:[0], esp
// 00552a85  51                   push ecx
// 00552a86  53                   push ebx
// 00552a87  56                   push esi
// 00552a88  57                   push edi
// 00552a89  6a20                 push 0x20
// 00552a8b  8bd9                 mov ebx, ecx
// 00552a8d  e864d40d00           call 0x62fef6
// 00552a92  8bf0                 mov esi, eax
// 00552a94  83c404               add esp, 4
// 00552a97  8974240c             mov dword ptr [esp + 0xc], esi
// 00552a9b  33ff                 xor edi, edi
// 00552a9d  3bf7                 cmp esi, edi
// 00552a9f  897c2418             mov dword ptr [esp + 0x18], edi
// 00552aa3  742b                 je 0x552ad0
// 00552aa5  8bce                 mov ecx, esi
// 00552aa7  e854d60400           call 0x5a0100
// 00552aac  894604               mov dword ptr [esi + 4], eax
// 00552aaf  b804000000           mov eax, 4
// 00552ab4  897e08               mov dword ptr [esi + 8], edi
// 00552ab7  897e0c               mov dword ptr [esi + 0xc], edi
// 00552aba  c7461000100000       mov dword ptr [esi + 0x10], 0x1000
// 00552ac1  c7461480000000       mov dword ptr [esi + 0x14], 0x80
// 00552ac8  894618               mov dword ptr [esi + 0x18], eax
// 00552acb  89461c               mov dword ptr [esi + 0x1c], eax
// 00552ace  eb02                 jmp 0x552ad2
// 00552ad0  33f6                 xor esi, esi
// 00552ad2  8d7b04               lea edi, [ebx + 4]
// 00552ad5  56                   push esi
// 00552ad6  8bcf                 mov ecx, edi
// 00552ad8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00552ae0  8933                 mov dword ptr [ebx], esi
// 00552ae2  e849fcffff           call 0x552730
// 00552ae7  56                   push esi
// 00552ae8  56                   push esi
// 00552ae9  57                   push edi
// 00552aea  e831a1ebff           call 0x40cc20
// 00552aef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00552af3  83c40c               add esp, 0xc
// 00552af6  5f                   pop edi
// 00552af7  5e                   pop esi
// 00552af8  8bc3                 mov eax, ebx
// 00552afa  5b                   pop ebx
// 00552afb  64890d00000000       mov dword ptr fs:[0], ecx
// 00552b02  83c410               add esp, 0x10
// 00552b05  c3                   ret 
// copied from an identical function in another client (function ??0?$chain_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@IAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_8be15fbf9b64785c.cpp