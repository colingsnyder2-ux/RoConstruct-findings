// roc 2008-06 005f8860  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f8860
//
// 005f8860  6aff                 push -1
// 005f8862  68e1797d00           push 0x7d79e1
// 005f8867  64a100000000         mov eax, dword ptr fs:[0]
// 005f886d  50                   push eax
// 005f886e  64892500000000       mov dword ptr fs:[0], esp
// 005f8875  83ec08               sub esp, 8
// 005f8878  56                   push esi
// 005f8879  8bf1                 mov esi, ecx
// 005f887b  33c9                 xor ecx, ecx
// 005f887d  57                   push edi
// 005f887e  8974240c             mov dword ptr [esp + 0xc], esi
// 005f8882  894c2408             mov dword ptr [esp + 8], ecx
// 005f8886  8d4101               lea eax, [ecx + 1]
// 005f8889  394c2420             cmp dword ptr [esp + 0x20], ecx
// 005f888d  741d                 je 0x5f88ac
// 005f888f  c74608f40b8400       mov dword ptr [esi + 8], 0x840bf4
// 005f8896  8b1580258000         mov edx, dword ptr [0x802580]
// 005f889c  895614               mov dword ptr [esi + 0x14], edx
// 005f889f  8b1584258000         mov edx, dword ptr [0x802584]
// 005f88a5  895614               mov dword ptr [esi + 0x14], edx
// 005f88a8  89442408             mov dword ptr [esp + 8], eax
// 005f88ac  894e04               mov dword ptr [esi + 4], ecx
// 005f88af  c706c8088400         mov dword ptr [esi], 0x8408c8
// 005f88b5  51                   push ecx
// 005f88b6  51                   push ecx
// 005f88b7  8d7e08               lea edi, [esi + 8]
// 005f88ba  51                   push ecx
// 005f88bb  8bcf                 mov ecx, edi
// 005f88bd  89442424             mov dword ptr [esp + 0x24], eax
// 005f88c1  ff1594258000         call dword ptr [0x802594]
// 005f88c7  8b07                 mov eax, dword ptr [edi]
// 005f88c9  c706ec0b8400         mov dword ptr [esi], 0x840bec
// 005f88cf  8b4804               mov ecx, dword ptr [eax + 4]
// 005f88d2  c7443108e40b8400     mov dword ptr [ecx + esi + 8], 0x840be4
// 005f88da  8d7e0c               lea edi, [esi + 0xc]
// 005f88dd  8bcf                 mov ecx, edi
// 005f88df  c644241802           mov byte ptr [esp + 0x18], 2
// 005f88e4  e867fdffff           call 0x5f8650
// 005f88e9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f88ed  897e04               mov dword ptr [esi + 4], edi
// 005f88f0  8b17                 mov edx, dword ptr [edi]
// 005f88f2  89721c               mov dword ptr [edx + 0x1c], esi
// 005f88f5  5f                   pop edi
// 005f88f6  8bc6                 mov eax, esi
// 005f88f8  5e                   pop esi
// 005f88f9  64890d00000000       mov dword ptr fs:[0], ecx
// 005f8900  83c414               add esp, 0x14
// 005f8903  c20400               ret 4
// library templates-2008-06-dll/roc_ndebug_iostreams.cpp (function ??0?$filtering_stream_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@Upublic_@23@@detail@iostreams@boost@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_ndebug_iostreams.cpp
