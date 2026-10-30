// roc 2011-06 006e3b70  unit: boost::iostreams::Uinput::?$filtering_stream  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e3b70
//
// 006e3b70  6aff                 push -1
// 006e3b72  683b939f00           push 0x9f933b
// 006e3b77  64a100000000         mov eax, dword ptr fs:[0]
// 006e3b7d  50                   push eax
// 006e3b7e  64892500000000       mov dword ptr fs:[0], esp
// 006e3b85  51                   push ecx
// 006e3b86  53                   push ebx
// 006e3b87  56                   push esi
// 006e3b88  57                   push edi
// 006e3b89  6a28                 push 0x28
// 006e3b8b  8bf9                 mov edi, ecx
// 006e3b8d  e8cc641200           call 0x80a05e
// 006e3b92  83c404               add esp, 4
// 006e3b95  8944240c             mov dword ptr [esp + 0xc], eax
// 006e3b99  33f6                 xor esi, esi
// 006e3b9b  89742418             mov dword ptr [esp + 0x18], esi
// 006e3b9f  3bc6                 cmp eax, esi
// 006e3ba1  7413                 je 0x6e3bb6
// 006e3ba3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e3ba7  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e3bab  51                   push ecx
// 006e3bac  52                   push edx
// 006e3bad  8bc8                 mov ecx, eax
// 006e3baf  e8fce5ffff           call 0x6e21b0
// 006e3bb4  8bf0                 mov esi, eax
// 006e3bb6  8d5f04               lea ebx, [edi + 4]
// 006e3bb9  56                   push esi
// 006e3bba  8bcb                 mov ecx, ebx
// 006e3bbc  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006e3bc4  8937                 mov dword ptr [edi], esi
// 006e3bc6  e855efffff           call 0x6e2b20
// 006e3bcb  56                   push esi
// 006e3bcc  56                   push esi
// 006e3bcd  53                   push ebx
// 006e3bce  e86d7a1800           call 0x86b640
// 006e3bd3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e3bd7  83c40c               add esp, 0xc
// 006e3bda  8bc7                 mov eax, edi
// 006e3bdc  5f                   pop edi
// 006e3bdd  5e                   pop esi
// 006e3bde  5b                   pop ebx
// 006e3bdf  64890d00000000       mov dword ptr fs:[0], ecx
// 006e3be6  83c410               add esp, 0x10
// 006e3be9  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp