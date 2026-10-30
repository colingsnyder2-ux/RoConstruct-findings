// roc 2010-06 006a2cb0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a2cb0
//
// 006a2cb0  6aff                 push -1
// 006a2cb2  684b1d9a00           push 0x9a1d4b
// 006a2cb7  64a100000000         mov eax, dword ptr fs:[0]
// 006a2cbd  50                   push eax
// 006a2cbe  64892500000000       mov dword ptr fs:[0], esp
// 006a2cc5  51                   push ecx
// 006a2cc6  53                   push ebx
// 006a2cc7  56                   push esi
// 006a2cc8  57                   push edi
// 006a2cc9  6a28                 push 0x28
// 006a2ccb  8bf9                 mov edi, ecx
// 006a2ccd  e8ce4c1000           call 0x7a79a0
// 006a2cd2  83c404               add esp, 4
// 006a2cd5  8944240c             mov dword ptr [esp + 0xc], eax
// 006a2cd9  33f6                 xor esi, esi
// 006a2cdb  89742418             mov dword ptr [esp + 0x18], esi
// 006a2cdf  3bc6                 cmp eax, esi
// 006a2ce1  7413                 je 0x6a2cf6
// 006a2ce3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006a2ce7  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a2ceb  51                   push ecx
// 006a2cec  52                   push edx
// 006a2ced  8bc8                 mov ecx, eax
// 006a2cef  e87ce3ffff           call 0x6a1070
// 006a2cf4  8bf0                 mov esi, eax
// 006a2cf6  8d5f04               lea ebx, [edi + 4]
// 006a2cf9  56                   push esi
// 006a2cfa  8bcb                 mov ecx, ebx
// 006a2cfc  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006a2d04  8937                 mov dword ptr [edi], esi
// 006a2d06  e895eeffff           call 0x6a1ba0
// 006a2d0b  56                   push esi
// 006a2d0c  56                   push esi
// 006a2d0d  53                   push ebx
// 006a2d0e  e89d18dbff           call 0x4545b0
// 006a2d13  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a2d17  83c40c               add esp, 0xc
// 006a2d1a  8bc7                 mov eax, edi
// 006a2d1c  5f                   pop edi
// 006a2d1d  5e                   pop esi
// 006a2d1e  5b                   pop ebx
// 006a2d1f  64890d00000000       mov dword ptr fs:[0], ecx
// 006a2d26  83c410               add esp, 0x10
// 006a2d29  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp