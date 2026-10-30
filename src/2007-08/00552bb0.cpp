// roc 2007-08 00552bb0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552bb0
//
// 00552bb0  6aff                 push -1
// 00552bb2  68812c7500           push 0x752c81
// 00552bb7  64a100000000         mov eax, dword ptr fs:[0]
// 00552bbd  50                   push eax
// 00552bbe  64892500000000       mov dword ptr fs:[0], esp
// 00552bc5  83ec08               sub esp, 8
// 00552bc8  56                   push esi
// 00552bc9  8bf1                 mov esi, ecx
// 00552bcb  33c9                 xor ecx, ecx
// 00552bcd  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 00552bd1  57                   push edi
// 00552bd2  8974240c             mov dword ptr [esp + 0xc], esi
// 00552bd6  894c2408             mov dword ptr [esp + 8], ecx
// 00552bda  b801000000           mov eax, 1
// 00552bdf  741d                 je 0x552bfe
// 00552be1  c74608047d7a00       mov dword ptr [esi + 8], 0x7a7d04
// 00552be8  8b15e0e47700         mov edx, dword ptr [0x77e4e0]
// 00552bee  895614               mov dword ptr [esi + 0x14], edx
// 00552bf1  8b15dce47700         mov edx, dword ptr [0x77e4dc]
// 00552bf7  895614               mov dword ptr [esi + 0x14], edx
// 00552bfa  89442408             mov dword ptr [esp + 8], eax
// 00552bfe  894e04               mov dword ptr [esi + 4], ecx
// 00552c01  c706b0787a00         mov dword ptr [esi], 0x7a78b0
// 00552c07  51                   push ecx
// 00552c08  51                   push ecx
// 00552c09  8d7e08               lea edi, [esi + 8]
// 00552c0c  51                   push ecx
// 00552c0d  8bcf                 mov ecx, edi
// 00552c0f  89442424             mov dword ptr [esp + 0x24], eax
// 00552c13  ff15cce47700         call dword ptr [0x77e4cc]
// 00552c19  8b07                 mov eax, dword ptr [edi]
// 00552c1b  c706e07c7a00         mov dword ptr [esi], 0x7a7ce0
// 00552c21  8b4804               mov ecx, dword ptr [eax + 4]
// 00552c24  c7443108d87c7a00     mov dword ptr [ecx + esi + 8], 0x7a7cd8
// 00552c2c  8d7e0c               lea edi, [esi + 0xc]
// 00552c2f  8bcf                 mov ecx, edi
// 00552c31  c644241802           mov byte ptr [esp + 0x18], 2
// 00552c36  e835feffff           call 0x552a70
// 00552c3b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00552c3f  897e04               mov dword ptr [esi + 4], edi
// 00552c42  8b17                 mov edx, dword ptr [edi]
// 00552c44  89720c               mov dword ptr [edx + 0xc], esi
// 00552c47  5f                   pop edi
// 00552c48  8bc6                 mov eax, esi
// 00552c4a  5e                   pop esi
// 00552c4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00552c52  83c414               add esp, 0x14
// 00552c55  c20400               ret 4
// copied from an identical function in another client (function ??0?$filtering_stream_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@Upublic_@23@@detail@iostreams@boost@@IAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_1a066d61bcfa73c0.cpp