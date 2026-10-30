// roc 2012-06 0085bd50  unit: boost::iostreams::Uinput::?$filtering_stream  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085bd50
//
// 0085bd50  6aff                 push -1
// 0085bd52  68eb29ad00           push 0xad29eb
// 0085bd57  64a100000000         mov eax, dword ptr fs:[0]
// 0085bd5d  50                   push eax
// 0085bd5e  64892500000000       mov dword ptr fs:[0], esp
// 0085bd65  51                   push ecx
// 0085bd66  53                   push ebx
// 0085bd67  56                   push esi
// 0085bd68  57                   push edi
// 0085bd69  6a28                 push 0x28
// 0085bd6b  8bf9                 mov edi, ecx
// 0085bd6d  e8a8631200           call 0x98211a
// 0085bd72  83c404               add esp, 4
// 0085bd75  8944240c             mov dword ptr [esp + 0xc], eax
// 0085bd79  33f6                 xor esi, esi
// 0085bd7b  89742418             mov dword ptr [esp + 0x18], esi
// 0085bd7f  3bc6                 cmp eax, esi
// 0085bd81  7413                 je 0x85bd96
// 0085bd83  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0085bd87  8b542420             mov edx, dword ptr [esp + 0x20]
// 0085bd8b  51                   push ecx
// 0085bd8c  52                   push edx
// 0085bd8d  8bc8                 mov ecx, eax
// 0085bd8f  e87ce5ffff           call 0x85a310
// 0085bd94  8bf0                 mov esi, eax
// 0085bd96  8d5f04               lea ebx, [edi + 4]
// 0085bd99  56                   push esi
// 0085bd9a  8bcb                 mov ecx, ebx
// 0085bd9c  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0085bda4  8937                 mov dword ptr [edi], esi
// 0085bda6  e8f5eeffff           call 0x85aca0
// 0085bdab  56                   push esi
// 0085bdac  56                   push esi
// 0085bdad  53                   push ebx
// 0085bdae  e8dde9d3ff           call 0x59a790
// 0085bdb3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085bdb7  83c40c               add esp, 0xc
// 0085bdba  8bc7                 mov eax, edi
// 0085bdbc  5f                   pop edi
// 0085bdbd  5e                   pop esi
// 0085bdbe  5b                   pop ebx
// 0085bdbf  64890d00000000       mov dword ptr fs:[0], ecx
// 0085bdc6  83c410               add esp, 0x10
// 0085bdc9  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp