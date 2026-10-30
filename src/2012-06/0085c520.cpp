// roc 2012-06 0085c520  unit: UString_sink::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085c520
//
// 0085c520  64a100000000         mov eax, dword ptr fs:[0]
// 0085c526  6aff                 push -1
// 0085c528  6871e0ab00           push 0xabe071
// 0085c52d  50                   push eax
// 0085c52e  64892500000000       mov dword ptr fs:[0], esp
// 0085c535  83ec08               sub esp, 8
// 0085c538  56                   push esi
// 0085c539  8bf1                 mov esi, ecx
// 0085c53b  807e5800             cmp byte ptr [esi + 0x58], 0
// 0085c53f  7409                 je 0x85c54a
// 0085c541  e8daeaffff           call 0x85b020
// 0085c546  c6465800             mov byte ptr [esi + 0x58], 0
// 0085c54a  89742404             mov dword ptr [esp + 4], esi
// 0085c54e  89742408             mov dword ptr [esp + 8], esi
// 0085c552  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085c556  50                   push eax
// 0085c557  8bce                 mov ecx, esi
// 0085c559  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0085c561  e82af3ffff           call 0x85b890
// 0085c566  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085c56a  c6465801             mov byte ptr [esi + 0x58], 1
// 0085c56e  5e                   pop esi
// 0085c56f  64890d00000000       mov dword ptr fs:[0], ecx
// 0085c576  83c414               add esp, 0x14
// 0085c579  c20400               ret 4
// copied from an identical function in another client (function ?reset@?$optional@V?$concept_adapter@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@QAEXABV?$concept_adapter@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp