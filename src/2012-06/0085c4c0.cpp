// roc 2012-06 0085c4c0  unit: UString_sink::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085c4c0
//
// 0085c4c0  64a100000000         mov eax, dword ptr fs:[0]
// 0085c4c6  6aff                 push -1
// 0085c4c8  6871e0ab00           push 0xabe071
// 0085c4cd  50                   push eax
// 0085c4ce  64892500000000       mov dword ptr fs:[0], esp
// 0085c4d5  83ec08               sub esp, 8
// 0085c4d8  56                   push esi
// 0085c4d9  8bf1                 mov esi, ecx
// 0085c4db  807e4800             cmp byte ptr [esi + 0x48], 0
// 0085c4df  7409                 je 0x85c4ea
// 0085c4e1  e83aebffff           call 0x85b020
// 0085c4e6  c6464800             mov byte ptr [esi + 0x48], 0
// 0085c4ea  89742404             mov dword ptr [esp + 4], esi
// 0085c4ee  89742408             mov dword ptr [esp + 8], esi
// 0085c4f2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085c4f6  50                   push eax
// 0085c4f7  8bce                 mov ecx, esi
// 0085c4f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0085c501  e8faf2ffff           call 0x85b800
// 0085c506  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085c50a  c6464801             mov byte ptr [esi + 0x48], 1
// 0085c50e  5e                   pop esi
// 0085c50f  64890d00000000       mov dword ptr fs:[0], ecx
// 0085c516  83c414               add esp, 0x14
// 0085c519  c20400               ret 4
// copied from an identical function in another client (function ?reset@?$optional@V?$concept_adapter@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@QAEXABV?$concept_adapter@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp