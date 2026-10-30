// roc 2009-12 007247a0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007247a0
//
// 007247a0  6aff                 push -1
// 007247a2  68eba59400           push 0x94a5eb
// 007247a7  64a100000000         mov eax, dword ptr fs:[0]
// 007247ad  50                   push eax
// 007247ae  64892500000000       mov dword ptr fs:[0], esp
// 007247b5  51                   push ecx
// 007247b6  53                   push ebx
// 007247b7  56                   push esi
// 007247b8  57                   push edi
// 007247b9  6a28                 push 0x28
// 007247bb  8bf9                 mov edi, ecx
// 007247bd  e89ef00c00           call 0x7f3860
// 007247c2  83c404               add esp, 4
// 007247c5  8944240c             mov dword ptr [esp + 0xc], eax
// 007247c9  33f6                 xor esi, esi
// 007247cb  89742418             mov dword ptr [esp + 0x18], esi
// 007247cf  3bc6                 cmp eax, esi
// 007247d1  7413                 je 0x7247e6
// 007247d3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007247d7  8b542420             mov edx, dword ptr [esp + 0x20]
// 007247db  51                   push ecx
// 007247dc  52                   push edx
// 007247dd  8bc8                 mov ecx, eax
// 007247df  e85ce6ffff           call 0x722e40
// 007247e4  8bf0                 mov esi, eax
// 007247e6  8d5f04               lea ebx, [edi + 4]
// 007247e9  56                   push esi
// 007247ea  8bcb                 mov ecx, ebx
// 007247ec  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007247f4  8937                 mov dword ptr [edi], esi
// 007247f6  e895f0ffff           call 0x723890
// 007247fb  56                   push esi
// 007247fc  56                   push esi
// 007247fd  53                   push ebx
// 007247fe  e88d021300           call 0x854a90
// 00724803  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00724807  83c40c               add esp, 0xc
// 0072480a  8bc7                 mov eax, edi
// 0072480c  5f                   pop edi
// 0072480d  5e                   pop esi
// 0072480e  5b                   pop ebx
// 0072480f  64890d00000000       mov dword ptr fs:[0], ecx
// 00724816  83c410               add esp, 0x10
// 00724819  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp