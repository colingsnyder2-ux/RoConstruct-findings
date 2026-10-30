// roc 2007-03 0054cff0  unit: seg_00540000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054cff0
//
// 0054cff0  6aff                 push -1
// 0054cff2  686bc37500           push 0x75c36b
// 0054cff7  64a100000000         mov eax, dword ptr fs:[0]
// 0054cffd  50                   push eax
// 0054cffe  64892500000000       mov dword ptr fs:[0], esp
// 0054d005  51                   push ecx
// 0054d006  53                   push ebx
// 0054d007  56                   push esi
// 0054d008  57                   push edi
// 0054d009  6a28                 push 0x28
// 0054d00b  8bf9                 mov edi, ecx
// 0054d00d  e8f6100d00           call 0x61e108
// 0054d012  83c404               add esp, 4
// 0054d015  8944240c             mov dword ptr [esp + 0xc], eax
// 0054d019  33f6                 xor esi, esi
// 0054d01b  3bc6                 cmp eax, esi
// 0054d01d  89742418             mov dword ptr [esp + 0x18], esi
// 0054d021  7413                 je 0x54d036
// 0054d023  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054d027  8b542420             mov edx, dword ptr [esp + 0x20]
// 0054d02b  51                   push ecx
// 0054d02c  52                   push edx
// 0054d02d  8bc8                 mov ecx, eax
// 0054d02f  e87cdeffff           call 0x54aeb0
// 0054d034  8bf0                 mov esi, eax
// 0054d036  8d5f04               lea ebx, [edi + 4]
// 0054d039  56                   push esi
// 0054d03a  8bcb                 mov ecx, ebx
// 0054d03c  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0054d044  8937                 mov dword ptr [edi], esi
// 0054d046  e885e8ffff           call 0x54b8d0
// 0054d04b  56                   push esi
// 0054d04c  56                   push esi
// 0054d04d  53                   push ebx
// 0054d04e  e86dad1400           call 0x697dc0
// 0054d053  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054d057  83c40c               add esp, 0xc
// 0054d05a  8bc7                 mov eax, edi
// 0054d05c  5f                   pop edi
// 0054d05d  5e                   pop esi
// 0054d05e  5b                   pop ebx
// 0054d05f  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d066  83c410               add esp, 0x10
// 0054d069  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp