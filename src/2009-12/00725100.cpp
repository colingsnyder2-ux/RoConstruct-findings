// roc 2009-12 00725100  unit: UString_sink::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00725100
//
// 00725100  64a100000000         mov eax, dword ptr fs:[0]
// 00725106  6aff                 push -1
// 00725108  68012b9300           push 0x932b01
// 0072510d  50                   push eax
// 0072510e  64892500000000       mov dword ptr fs:[0], esp
// 00725115  83ec08               sub esp, 8
// 00725118  56                   push esi
// 00725119  8bf1                 mov esi, ecx
// 0072511b  807e5800             cmp byte ptr [esi + 0x58], 0
// 0072511f  7409                 je 0x72512a
// 00725121  e86aeaffff           call 0x723b90
// 00725126  c6465800             mov byte ptr [esi + 0x58], 0
// 0072512a  89742404             mov dword ptr [esp + 4], esi
// 0072512e  89742408             mov dword ptr [esp + 8], esi
// 00725132  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00725136  50                   push eax
// 00725137  8bce                 mov ecx, esi
// 00725139  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00725141  e81af2ffff           call 0x724360
// 00725146  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072514a  c6465801             mov byte ptr [esi + 0x58], 1
// 0072514e  5e                   pop esi
// 0072514f  64890d00000000       mov dword ptr fs:[0], ecx
// 00725156  83c414               add esp, 0x14
// 00725159  c20400               ret 4
// copied from an identical function in another client (function ?reset@?$optional@V?$concept_adapter@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@QAEXABV?$concept_adapter@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@@234@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp