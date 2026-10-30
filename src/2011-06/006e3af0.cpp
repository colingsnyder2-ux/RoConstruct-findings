// roc 2011-06 006e3af0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e3af0
//
// 006e3af0  6aff                 push -1
// 006e3af2  683b939f00           push 0x9f933b
// 006e3af7  64a100000000         mov eax, dword ptr fs:[0]
// 006e3afd  50                   push eax
// 006e3afe  64892500000000       mov dword ptr fs:[0], esp
// 006e3b05  51                   push ecx
// 006e3b06  53                   push ebx
// 006e3b07  56                   push esi
// 006e3b08  57                   push edi
// 006e3b09  6a28                 push 0x28
// 006e3b0b  8bf9                 mov edi, ecx
// 006e3b0d  e84c651200           call 0x80a05e
// 006e3b12  83c404               add esp, 4
// 006e3b15  8944240c             mov dword ptr [esp + 0xc], eax
// 006e3b19  33f6                 xor esi, esi
// 006e3b1b  89742418             mov dword ptr [esp + 0x18], esi
// 006e3b1f  3bc6                 cmp eax, esi
// 006e3b21  7413                 je 0x6e3b36
// 006e3b23  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e3b27  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e3b2b  51                   push ecx
// 006e3b2c  52                   push edx
// 006e3b2d  8bc8                 mov ecx, eax
// 006e3b2f  e80ce6ffff           call 0x6e2140
// 006e3b34  8bf0                 mov esi, eax
// 006e3b36  8d5f04               lea ebx, [edi + 4]
// 006e3b39  56                   push esi
// 006e3b3a  8bcb                 mov ecx, ebx
// 006e3b3c  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006e3b44  8937                 mov dword ptr [edi], esi
// 006e3b46  e845efffff           call 0x6e2a90
// 006e3b4b  56                   push esi
// 006e3b4c  56                   push esi
// 006e3b4d  53                   push ebx
// 006e3b4e  e8ed7a1800           call 0x86b640
// 006e3b53  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e3b57  83c40c               add esp, 0xc
// 006e3b5a  8bc7                 mov eax, edi
// 006e3b5c  5f                   pop edi
// 006e3b5d  5e                   pop esi
// 006e3b5e  5b                   pop ebx
// 006e3b5f  64890d00000000       mov dword ptr fs:[0], ecx
// 006e3b66  83c410               add esp, 0x10
// 006e3b69  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp