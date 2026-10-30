// roc 2007-08 0054ec90  unit: boost::iostreams::Uinput::?$filtering_stream  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ec90
//
// 0054ec90  6aff                 push -1
// 0054ec92  681bb67500           push 0x75b61b
// 0054ec97  64a100000000         mov eax, dword ptr fs:[0]
// 0054ec9d  50                   push eax
// 0054ec9e  64892500000000       mov dword ptr fs:[0], esp
// 0054eca5  51                   push ecx
// 0054eca6  53                   push ebx
// 0054eca7  56                   push esi
// 0054eca8  57                   push edi
// 0054eca9  6a28                 push 0x28
// 0054ecab  8bf9                 mov edi, ecx
// 0054ecad  e844120e00           call 0x62fef6
// 0054ecb2  83c404               add esp, 4
// 0054ecb5  8944240c             mov dword ptr [esp + 0xc], eax
// 0054ecb9  33f6                 xor esi, esi
// 0054ecbb  3bc6                 cmp eax, esi
// 0054ecbd  89742418             mov dword ptr [esp + 0x18], esi
// 0054ecc1  7413                 je 0x54ecd6
// 0054ecc3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054ecc7  8b542420             mov edx, dword ptr [esp + 0x20]
// 0054eccb  51                   push ecx
// 0054eccc  52                   push edx
// 0054eccd  8bc8                 mov ecx, eax
// 0054eccf  e81ccdffff           call 0x54b9f0
// 0054ecd4  8bf0                 mov esi, eax
// 0054ecd6  8d5f04               lea ebx, [edi + 4]
// 0054ecd9  56                   push esi
// 0054ecda  8bcb                 mov ecx, ebx
// 0054ecdc  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0054ece4  8937                 mov dword ptr [edi], esi
// 0054ece6  e8b5dbffff           call 0x54c8a0
// 0054eceb  56                   push esi
// 0054ecec  56                   push esi
// 0054eced  53                   push ebx
// 0054ecee  e82ddfebff           call 0x40cc20
// 0054ecf3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054ecf7  83c40c               add esp, 0xc
// 0054ecfa  8bc7                 mov eax, edi
// 0054ecfc  5f                   pop edi
// 0054ecfd  5e                   pop esi
// 0054ecfe  5b                   pop ebx
// 0054ecff  64890d00000000       mov dword ptr fs:[0], ecx
// 0054ed06  83c410               add esp, 0x10
// 0054ed09  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp