// roc 2009-12 00724820  unit: boost::iostreams::Uinput::?$filtering_stream  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00724820
//
// 00724820  6aff                 push -1
// 00724822  68eba59400           push 0x94a5eb
// 00724827  64a100000000         mov eax, dword ptr fs:[0]
// 0072482d  50                   push eax
// 0072482e  64892500000000       mov dword ptr fs:[0], esp
// 00724835  51                   push ecx
// 00724836  53                   push ebx
// 00724837  56                   push esi
// 00724838  57                   push edi
// 00724839  6a28                 push 0x28
// 0072483b  8bf9                 mov edi, ecx
// 0072483d  e81ef00c00           call 0x7f3860
// 00724842  83c404               add esp, 4
// 00724845  8944240c             mov dword ptr [esp + 0xc], eax
// 00724849  33f6                 xor esi, esi
// 0072484b  89742418             mov dword ptr [esp + 0x18], esi
// 0072484f  3bc6                 cmp eax, esi
// 00724851  7413                 je 0x724866
// 00724853  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00724857  8b542420             mov edx, dword ptr [esp + 0x20]
// 0072485b  51                   push ecx
// 0072485c  52                   push edx
// 0072485d  8bc8                 mov ecx, eax
// 0072485f  e84ce6ffff           call 0x722eb0
// 00724864  8bf0                 mov esi, eax
// 00724866  8d5f04               lea ebx, [edi + 4]
// 00724869  56                   push esi
// 0072486a  8bcb                 mov ecx, ebx
// 0072486c  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00724874  8937                 mov dword ptr [edi], esi
// 00724876  e8a5f0ffff           call 0x723920
// 0072487b  56                   push esi
// 0072487c  56                   push esi
// 0072487d  53                   push ebx
// 0072487e  e80d021300           call 0x854a90
// 00724883  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00724887  83c40c               add esp, 0xc
// 0072488a  8bc7                 mov eax, edi
// 0072488c  5f                   pop edi
// 0072488d  5e                   pop esi
// 0072488e  5b                   pop ebx
// 0072488f  64890d00000000       mov dword ptr fs:[0], ecx
// 00724896  83c410               add esp, 0x10
// 00724899  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp