// roc 2011-06 006e8150  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e8150
//
// 006e8150  55                   push ebp
// 006e8151  8bec                 mov ebp, esp
// 006e8153  6aff                 push -1
// 006e8155  6840449f00           push 0x9f4440
// 006e815a  64a100000000         mov eax, dword ptr fs:[0]
// 006e8160  50                   push eax
// 006e8161  64892500000000       mov dword ptr fs:[0], esp
// 006e8168  83ec38               sub esp, 0x38
// 006e816b  53                   push ebx
// 006e816c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 006e816f  56                   push esi
// 006e8170  8bf1                 mov esi, ecx
// 006e8172  f6465001             test byte ptr [esi + 0x50], 1
// 006e8176  57                   push edi
// 006e8177  8965f0               mov dword ptr [ebp - 0x10], esp
// 006e817a  7510                 jne 0x6e818c
// 006e817c  8d4508               lea eax, [ebp + 8]
// 006e817f  50                   push eax
// 006e8180  895d08               mov dword ptr [ebp + 8], ebx
// 006e8183  e8e8f2ffff           call 0x6e7470
// 006e8188  834e5001             or dword ptr [esi + 0x50], 1
// 006e818c  f6465002             test byte ptr [esi + 0x50], 2
// 006e8190  7416                 je 0x6e81a8
// 006e8192  83c8ff               or eax, 0xffffffff
// 006e8195  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006e8198  64890d00000000       mov dword ptr fs:[0], ecx
// 006e819f  5f                   pop edi
// 006e81a0  5e                   pop esi
// 006e81a1  5b                   pop ebx
// 006e81a2  8be5                 mov esp, ebp
// 006e81a4  5d                   pop ebp
// 006e81a5  c20c00               ret 0xc
// 006e81a8  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 006e81ab  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006e81ae  57                   push edi
// 006e81af  51                   push ecx
// 006e81b0  33c0                 xor eax, eax
// 006e81b2  53                   push ebx
// 006e81b3  8bce                 mov ecx, esi
// 006e81b5  8945fc               mov dword ptr [ebp - 4], eax
// 006e81b8  894508               mov dword ptr [ebp + 8], eax
// 006e81bb  e860ddffff           call 0x6e5f20
// 006e81c0  83f8ff               cmp eax, -1
// 006e81c3  7436                 je 0x6e81fb
// 006e81c5  3bc7                 cmp eax, edi
// 006e81c7  894508               mov dword ptr [ebp + 8], eax
// 006e81ca  7d41                 jge 0x6e820d
// 006e81cc  8b550c               mov edx, dword ptr [ebp + 0xc]
// 006e81cf  2bf8                 sub edi, eax
// 006e81d1  57                   push edi
// 006e81d2  03c2                 add eax, edx
// 006e81d4  50                   push eax
// 006e81d5  53                   push ebx
// 006e81d6  8bce                 mov ecx, esi
// 006e81d8  e843ddffff           call 0x6e5f20
// 006e81dd  83f8ff               cmp eax, -1
// 006e81e0  7419                 je 0x6e81fb
// 006e81e2  014508               add dword ptr [ebp + 8], eax
// 006e81e5  8b4508               mov eax, dword ptr [ebp + 8]
// 006e81e8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006e81eb  64890d00000000       mov dword ptr fs:[0], ecx
// 006e81f2  5f                   pop edi
// 006e81f3  5e                   pop esi
// 006e81f4  5b                   pop ebx
// 006e81f5  8be5                 mov esp, ebp
// 006e81f7  5d                   pop ebp
// 006e81f8  c20c00               ret 0xc
// 006e81fb  8d450c               lea eax, [ebp + 0xc]
// 006e81fe  50                   push eax
// 006e81ff  8bce                 mov ecx, esi
// 006e8201  895d0c               mov dword ptr [ebp + 0xc], ebx
// 006e8204  e8c7faffff           call 0x6e7cd0
// 006e8209  834e5002             or dword ptr [esi + 0x50], 2
// 006e820d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006e8210  8b4508               mov eax, dword ptr [ebp + 8]
// 006e8213  5f                   pop edi
// 006e8214  5e                   pop esi
// 006e8215  64890d00000000       mov dword ptr fs:[0], ecx
// 006e821c  5b                   pop ebx
// 006e821d  8be5                 mov esp, ebp
// 006e821f  5d                   pop ebp
// 006e8220  c20c00               ret 0xc
// 006e8223  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 006e8226  51                   push ecx
// 006e8227  8d4dbc               lea ecx, [ebp - 0x44]
// 006e822a  e861d1ffff           call 0x6e5390
// 006e822f  68300abc00           push 0xbc0a30
// 006e8234  8d55bc               lea edx, [ebp - 0x44]
// 006e8237  52                   push edx
// 006e8238  e86f2e1200           call 0x80b0ac
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp