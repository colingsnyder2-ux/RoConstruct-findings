// roc 2010-06 006a3560  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a3560
//
// 006a3560  64a100000000         mov eax, dword ptr fs:[0]
// 006a3566  6aff                 push -1
// 006a3568  6891299a00           push 0x9a2991
// 006a356d  50                   push eax
// 006a356e  64892500000000       mov dword ptr fs:[0], esp
// 006a3575  83ec08               sub esp, 8
// 006a3578  56                   push esi
// 006a3579  8bf1                 mov esi, ecx
// 006a357b  807e4800             cmp byte ptr [esi + 0x48], 0
// 006a357f  7409                 je 0x6a358a
// 006a3581  e89ae9ffff           call 0x6a1f20
// 006a3586  c6464800             mov byte ptr [esi + 0x48], 0
// 006a358a  89742404             mov dword ptr [esp + 4], esi
// 006a358e  89742408             mov dword ptr [esp + 8], esi
// 006a3592  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a3596  50                   push eax
// 006a3597  8bce                 mov ecx, esi
// 006a3599  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a35a1  e83af2ffff           call 0x6a27e0
// 006a35a6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a35aa  c6464801             mov byte ptr [esi + 0x48], 1
// 006a35ae  5e                   pop esi
// 006a35af  64890d00000000       mov dword ptr fs:[0], ecx
// 006a35b6  83c414               add esp, 0x14
// 006a35b9  c20400               ret 4
// copied from an identical function in another client (function ?reset@?$optional@V?$concept_adapter@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@QAEXABV?$concept_adapter@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp