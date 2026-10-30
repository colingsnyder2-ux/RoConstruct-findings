// roc 2012-06 0085a310  unit: UString_sink::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085a310
//
// 0085a310  6aff                 push -1
// 0085a312  6818e1ac00           push 0xace118
// 0085a317  64a100000000         mov eax, dword ptr fs:[0]
// 0085a31d  50                   push eax
// 0085a31e  64892500000000       mov dword ptr fs:[0], esp
// 0085a325  51                   push ecx
// 0085a326  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085a32a  56                   push esi
// 0085a32b  57                   push edi
// 0085a32c  8bf1                 mov esi, ecx
// 0085a32e  50                   push eax
// 0085a32f  8974240c             mov dword ptr [esp + 0xc], esi
// 0085a333  e898f6ffff           call 0x8599d0
// 0085a338  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0085a33c  6a00                 push 0
// 0085a33e  57                   push edi
// 0085a33f  8d4c2428             lea ecx, [esp + 0x28]
// 0085a343  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0085a34b  ff158025b200         call dword ptr [0xb22580]
// 0085a351  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085a355  897e18               mov dword ptr [esi + 0x18], edi
// 0085a358  894614               mov dword ptr [esi + 0x14], eax
// 0085a35b  c7462400000000       mov dword ptr [esi + 0x24], 0
// 0085a362  5f                   pop edi
// 0085a363  8bc6                 mov eax, esi
// 0085a365  5e                   pop esi
// 0085a366  64890d00000000       mov dword ptr fs:[0], ecx
// 0085a36d  83c410               add esp, 0x10
// 0085a370  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@23@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp