// roc 2010-06 006a35c0  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a35c0
//
// 006a35c0  64a100000000         mov eax, dword ptr fs:[0]
// 006a35c6  6aff                 push -1
// 006a35c8  6891299a00           push 0x9a2991
// 006a35cd  50                   push eax
// 006a35ce  64892500000000       mov dword ptr fs:[0], esp
// 006a35d5  83ec08               sub esp, 8
// 006a35d8  56                   push esi
// 006a35d9  8bf1                 mov esi, ecx
// 006a35db  807e5800             cmp byte ptr [esi + 0x58], 0
// 006a35df  7409                 je 0x6a35ea
// 006a35e1  e83ae9ffff           call 0x6a1f20
// 006a35e6  c6465800             mov byte ptr [esi + 0x58], 0
// 006a35ea  89742404             mov dword ptr [esp + 4], esi
// 006a35ee  89742408             mov dword ptr [esp + 8], esi
// 006a35f2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a35f6  50                   push eax
// 006a35f7  8bce                 mov ecx, esi
// 006a35f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a3601  e86af2ffff           call 0x6a2870
// 006a3606  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a360a  c6465801             mov byte ptr [esi + 0x58], 1
// 006a360e  5e                   pop esi
// 006a360f  64890d00000000       mov dword ptr fs:[0], ecx
// 006a3616  83c414               add esp, 0x14
// 006a3619  c20400               ret 4
// copied from an identical function in another client (function ?reset@?$optional@V?$concept_adapter@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@QAEXABV?$concept_adapter@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp