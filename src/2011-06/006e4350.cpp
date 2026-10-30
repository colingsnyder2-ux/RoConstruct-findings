// roc 2011-06 006e4350  unit: UString_sink::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4350
//
// 006e4350  64a100000000         mov eax, dword ptr fs:[0]
// 006e4356  6aff                 push -1
// 006e4358  6811409f00           push 0x9f4011
// 006e435d  50                   push eax
// 006e435e  64892500000000       mov dword ptr fs:[0], esp
// 006e4365  83ec08               sub esp, 8
// 006e4368  56                   push esi
// 006e4369  8bf1                 mov esi, ecx
// 006e436b  807e5800             cmp byte ptr [esi + 0x58], 0
// 006e436f  7409                 je 0x6e437a
// 006e4371  e89aeaffff           call 0x6e2e10
// 006e4376  c6465800             mov byte ptr [esi + 0x58], 0
// 006e437a  89742404             mov dword ptr [esp + 4], esi
// 006e437e  89742408             mov dword ptr [esp + 8], esi
// 006e4382  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006e4386  50                   push eax
// 006e4387  8bce                 mov ecx, esi
// 006e4389  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006e4391  e89af2ffff           call 0x6e3630
// 006e4396  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e439a  c6465801             mov byte ptr [esi + 0x58], 1
// 006e439e  5e                   pop esi
// 006e439f  64890d00000000       mov dword ptr fs:[0], ecx
// 006e43a6  83c414               add esp, 0x14
// 006e43a9  c20400               ret 4
// copied from an identical function in another client (function ?reset@?$optional@V?$concept_adapter@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@QAEXABV?$concept_adapter@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp