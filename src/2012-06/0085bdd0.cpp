// roc 2012-06 0085bdd0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085bdd0
//
// 0085bdd0  6aff                 push -1
// 0085bdd2  68eb29ad00           push 0xad29eb
// 0085bdd7  64a100000000         mov eax, dword ptr fs:[0]
// 0085bddd  50                   push eax
// 0085bdde  64892500000000       mov dword ptr fs:[0], esp
// 0085bde5  51                   push ecx
// 0085bde6  53                   push ebx
// 0085bde7  56                   push esi
// 0085bde8  57                   push edi
// 0085bde9  6a28                 push 0x28
// 0085bdeb  8bf9                 mov edi, ecx
// 0085bded  e828631200           call 0x98211a
// 0085bdf2  83c404               add esp, 4
// 0085bdf5  8944240c             mov dword ptr [esp + 0xc], eax
// 0085bdf9  33f6                 xor esi, esi
// 0085bdfb  89742418             mov dword ptr [esp + 0x18], esi
// 0085bdff  3bc6                 cmp eax, esi
// 0085be01  7413                 je 0x85be16
// 0085be03  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0085be07  8b542420             mov edx, dword ptr [esp + 0x20]
// 0085be0b  51                   push ecx
// 0085be0c  52                   push edx
// 0085be0d  8bc8                 mov ecx, eax
// 0085be0f  e86ce5ffff           call 0x85a380
// 0085be14  8bf0                 mov esi, eax
// 0085be16  8d5f04               lea ebx, [edi + 4]
// 0085be19  56                   push esi
// 0085be1a  8bcb                 mov ecx, ebx
// 0085be1c  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0085be24  8937                 mov dword ptr [edi], esi
// 0085be26  e805efffff           call 0x85ad30
// 0085be2b  56                   push esi
// 0085be2c  56                   push esi
// 0085be2d  53                   push ebx
// 0085be2e  e85de9d3ff           call 0x59a790
// 0085be33  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085be37  83c40c               add esp, 0xc
// 0085be3a  8bc7                 mov eax, edi
// 0085be3c  5f                   pop edi
// 0085be3d  5e                   pop esi
// 0085be3e  5b                   pop ebx
// 0085be3f  64890d00000000       mov dword ptr fs:[0], ecx
// 0085be46  83c410               add esp, 0x10
// 0085be49  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp