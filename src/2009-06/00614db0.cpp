// roc 2009-06 00614db0  unit: boost::iostreams::Uoutput::?$filtering_stream  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00614db0
//
// 00614db0  6aff                 push -1
// 00614db2  687b9c8600           push 0x869c7b
// 00614db7  64a100000000         mov eax, dword ptr fs:[0]
// 00614dbd  50                   push eax
// 00614dbe  64892500000000       mov dword ptr fs:[0], esp
// 00614dc5  51                   push ecx
// 00614dc6  53                   push ebx
// 00614dc7  56                   push esi
// 00614dc8  57                   push edi
// 00614dc9  6a28                 push 0x28
// 00614dcb  8bf9                 mov edi, ecx
// 00614dcd  e8663c1000           call 0x718a38
// 00614dd2  83c404               add esp, 4
// 00614dd5  8944240c             mov dword ptr [esp + 0xc], eax
// 00614dd9  33f6                 xor esi, esi
// 00614ddb  89742418             mov dword ptr [esp + 0x18], esi
// 00614ddf  3bc6                 cmp eax, esi
// 00614de1  7413                 je 0x614df6
// 00614de3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00614de7  8b542420             mov edx, dword ptr [esp + 0x20]
// 00614deb  51                   push ecx
// 00614dec  52                   push edx
// 00614ded  8bc8                 mov ecx, eax
// 00614def  e82cf2ffff           call 0x614020
// 00614df4  8bf0                 mov esi, eax
// 00614df6  8d5f04               lea ebx, [edi + 4]
// 00614df9  56                   push esi
// 00614dfa  8bcb                 mov ecx, ebx
// 00614dfc  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00614e04  8937                 mov dword ptr [edi], esi
// 00614e06  e8e5f7ffff           call 0x6145f0
// 00614e0b  56                   push esi
// 00614e0c  56                   push esi
// 00614e0d  53                   push ebx
// 00614e0e  e8cdfb0500           call 0x6749e0
// 00614e13  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00614e17  83c40c               add esp, 0xc
// 00614e1a  8bc7                 mov eax, edi
// 00614e1c  5f                   pop edi
// 00614e1d  5e                   pop esi
// 00614e1e  5b                   pop ebx
// 00614e1f  64890d00000000       mov dword ptr fs:[0], ecx
// 00614e26  83c410               add esp, 0x10
// 00614e29  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp