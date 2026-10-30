// roc 2010-06 006a2d30  unit: boost::iostreams::Uinput::?$filtering_stream  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a2d30
//
// 006a2d30  6aff                 push -1
// 006a2d32  684b1d9a00           push 0x9a1d4b
// 006a2d37  64a100000000         mov eax, dword ptr fs:[0]
// 006a2d3d  50                   push eax
// 006a2d3e  64892500000000       mov dword ptr fs:[0], esp
// 006a2d45  51                   push ecx
// 006a2d46  53                   push ebx
// 006a2d47  56                   push esi
// 006a2d48  57                   push edi
// 006a2d49  6a28                 push 0x28
// 006a2d4b  8bf9                 mov edi, ecx
// 006a2d4d  e84e4c1000           call 0x7a79a0
// 006a2d52  83c404               add esp, 4
// 006a2d55  8944240c             mov dword ptr [esp + 0xc], eax
// 006a2d59  33f6                 xor esi, esi
// 006a2d5b  89742418             mov dword ptr [esp + 0x18], esi
// 006a2d5f  3bc6                 cmp eax, esi
// 006a2d61  7413                 je 0x6a2d76
// 006a2d63  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006a2d67  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a2d6b  51                   push ecx
// 006a2d6c  52                   push edx
// 006a2d6d  8bc8                 mov ecx, eax
// 006a2d6f  e86ce3ffff           call 0x6a10e0
// 006a2d74  8bf0                 mov esi, eax
// 006a2d76  8d5f04               lea ebx, [edi + 4]
// 006a2d79  56                   push esi
// 006a2d7a  8bcb                 mov ecx, ebx
// 006a2d7c  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006a2d84  8937                 mov dword ptr [edi], esi
// 006a2d86  e8a5eeffff           call 0x6a1c30
// 006a2d8b  56                   push esi
// 006a2d8c  56                   push esi
// 006a2d8d  53                   push ebx
// 006a2d8e  e81d18dbff           call 0x4545b0
// 006a2d93  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a2d97  83c40c               add esp, 0xc
// 006a2d9a  8bc7                 mov eax, edi
// 006a2d9c  5f                   pop edi
// 006a2d9d  5e                   pop esi
// 006a2d9e  5b                   pop ebx
// 006a2d9f  64890d00000000       mov dword ptr fs:[0], ecx
// 006a2da6  83c410               add esp, 0x10
// 006a2da9  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp