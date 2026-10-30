// roc 2009-12 007250a0  unit: UString_sink::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007250a0
//
// 007250a0  64a100000000         mov eax, dword ptr fs:[0]
// 007250a6  6aff                 push -1
// 007250a8  68012b9300           push 0x932b01
// 007250ad  50                   push eax
// 007250ae  64892500000000       mov dword ptr fs:[0], esp
// 007250b5  83ec08               sub esp, 8
// 007250b8  56                   push esi
// 007250b9  8bf1                 mov esi, ecx
// 007250bb  807e4800             cmp byte ptr [esi + 0x48], 0
// 007250bf  7409                 je 0x7250ca
// 007250c1  e8caeaffff           call 0x723b90
// 007250c6  c6464800             mov byte ptr [esi + 0x48], 0
// 007250ca  89742404             mov dword ptr [esp + 4], esi
// 007250ce  89742408             mov dword ptr [esp + 8], esi
// 007250d2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007250d6  50                   push eax
// 007250d7  8bce                 mov ecx, esi
// 007250d9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007250e1  e8eaf1ffff           call 0x7242d0
// 007250e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007250ea  c6464801             mov byte ptr [esi + 0x48], 1
// 007250ee  5e                   pop esi
// 007250ef  64890d00000000       mov dword ptr fs:[0], ecx
// 007250f6  83c414               add esp, 0x14
// 007250f9  c20400               ret 4
// copied from an identical function in another client (function ?reset@?$optional@V?$concept_adapter@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@QAEXABV?$concept_adapter@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@@234@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp