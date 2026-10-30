// roc 2009-06 006864a0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006864a0
//
// 006864a0  6aff                 push -1
// 006864a2  687b9c8600           push 0x869c7b
// 006864a7  64a100000000         mov eax, dword ptr fs:[0]
// 006864ad  50                   push eax
// 006864ae  64892500000000       mov dword ptr fs:[0], esp
// 006864b5  51                   push ecx
// 006864b6  53                   push ebx
// 006864b7  56                   push esi
// 006864b8  57                   push edi
// 006864b9  6a28                 push 0x28
// 006864bb  8bf9                 mov edi, ecx
// 006864bd  e876250900           call 0x718a38
// 006864c2  83c404               add esp, 4
// 006864c5  8944240c             mov dword ptr [esp + 0xc], eax
// 006864c9  33f6                 xor esi, esi
// 006864cb  89742418             mov dword ptr [esp + 0x18], esi
// 006864cf  3bc6                 cmp eax, esi
// 006864d1  7413                 je 0x6864e6
// 006864d3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006864d7  8b542420             mov edx, dword ptr [esp + 0x20]
// 006864db  51                   push ecx
// 006864dc  52                   push edx
// 006864dd  8bc8                 mov ecx, eax
// 006864df  e8bcf1ffff           call 0x6856a0
// 006864e4  8bf0                 mov esi, eax
// 006864e6  8d5f04               lea ebx, [edi + 4]
// 006864e9  56                   push esi
// 006864ea  8bcb                 mov ecx, ebx
// 006864ec  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006864f4  8937                 mov dword ptr [edi], esi
// 006864f6  e845f6ffff           call 0x685b40
// 006864fb  56                   push esi
// 006864fc  56                   push esi
// 006864fd  53                   push ebx
// 006864fe  e8dde4feff           call 0x6749e0
// 00686503  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00686507  83c40c               add esp, 0xc
// 0068650a  8bc7                 mov eax, edi
// 0068650c  5f                   pop edi
// 0068650d  5e                   pop esi
// 0068650e  5b                   pop ebx
// 0068650f  64890d00000000       mov dword ptr fs:[0], ecx
// 00686516  83c410               add esp, 0x10
// 00686519  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp