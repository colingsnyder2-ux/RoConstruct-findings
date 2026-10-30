// roc 2011-06 006e42f0  unit: UString_sink::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e42f0
//
// 006e42f0  64a100000000         mov eax, dword ptr fs:[0]
// 006e42f6  6aff                 push -1
// 006e42f8  6811409f00           push 0x9f4011
// 006e42fd  50                   push eax
// 006e42fe  64892500000000       mov dword ptr fs:[0], esp
// 006e4305  83ec08               sub esp, 8
// 006e4308  56                   push esi
// 006e4309  8bf1                 mov esi, ecx
// 006e430b  807e4800             cmp byte ptr [esi + 0x48], 0
// 006e430f  7409                 je 0x6e431a
// 006e4311  e8faeaffff           call 0x6e2e10
// 006e4316  c6464800             mov byte ptr [esi + 0x48], 0
// 006e431a  89742404             mov dword ptr [esp + 4], esi
// 006e431e  89742408             mov dword ptr [esp + 8], esi
// 006e4322  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006e4326  50                   push eax
// 006e4327  8bce                 mov ecx, esi
// 006e4329  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006e4331  e86af2ffff           call 0x6e35a0
// 006e4336  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e433a  c6464801             mov byte ptr [esi + 0x48], 1
// 006e433e  5e                   pop esi
// 006e433f  64890d00000000       mov dword ptr fs:[0], ecx
// 006e4346  83c414               add esp, 0x14
// 006e4349  c20400               ret 4
// copied from an identical function in another client (function ?reset@?$optional@V?$concept_adapter@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@QAEXABV?$concept_adapter@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp