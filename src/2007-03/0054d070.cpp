// roc 2007-03 0054d070  unit: seg_00540000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054d070
//
// 0054d070  6aff                 push -1
// 0054d072  686bc37500           push 0x75c36b
// 0054d077  64a100000000         mov eax, dword ptr fs:[0]
// 0054d07d  50                   push eax
// 0054d07e  64892500000000       mov dword ptr fs:[0], esp
// 0054d085  51                   push ecx
// 0054d086  53                   push ebx
// 0054d087  56                   push esi
// 0054d088  57                   push edi
// 0054d089  6a28                 push 0x28
// 0054d08b  8bf9                 mov edi, ecx
// 0054d08d  e876100d00           call 0x61e108
// 0054d092  83c404               add esp, 4
// 0054d095  8944240c             mov dword ptr [esp + 0xc], eax
// 0054d099  33f6                 xor esi, esi
// 0054d09b  3bc6                 cmp eax, esi
// 0054d09d  89742418             mov dword ptr [esp + 0x18], esi
// 0054d0a1  7413                 je 0x54d0b6
// 0054d0a3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054d0a7  8b542420             mov edx, dword ptr [esp + 0x20]
// 0054d0ab  51                   push ecx
// 0054d0ac  52                   push edx
// 0054d0ad  8bc8                 mov ecx, eax
// 0054d0af  e86cdeffff           call 0x54af20
// 0054d0b4  8bf0                 mov esi, eax
// 0054d0b6  8d5f04               lea ebx, [edi + 4]
// 0054d0b9  56                   push esi
// 0054d0ba  8bcb                 mov ecx, ebx
// 0054d0bc  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0054d0c4  8937                 mov dword ptr [edi], esi
// 0054d0c6  e895e8ffff           call 0x54b960
// 0054d0cb  56                   push esi
// 0054d0cc  56                   push esi
// 0054d0cd  53                   push ebx
// 0054d0ce  e8edac1400           call 0x697dc0
// 0054d0d3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054d0d7  83c40c               add esp, 0xc
// 0054d0da  8bc7                 mov eax, edi
// 0054d0dc  5f                   pop edi
// 0054d0dd  5e                   pop esi
// 0054d0de  5b                   pop ebx
// 0054d0df  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d0e6  83c410               add esp, 0x10
// 0054d0e9  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp