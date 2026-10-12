// roc 2008-06 005f9690  unit: UString_sink::?$stream_buffer  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f9690
//
// 005f9690  64a100000000         mov eax, dword ptr fs:[0]
// 005f9696  6aff                 push -1
// 005f9698  6842e87d00           push 0x7de842
// 005f969d  50                   push eax
// 005f969e  64892500000000       mov dword ptr fs:[0], esp
// 005f96a5  83ec44               sub esp, 0x44
// 005f96a8  56                   push esi
// 005f96a9  8bf1                 mov esi, ecx
// 005f96ab  f6465801             test byte ptr [esi + 0x58], 1
// 005f96af  7470                 je 0x5f9721
// 005f96b1  683c098400           push 0x84093c
// 005f96b6  8d4c2408             lea ecx, [esp + 8]
// 005f96ba  ff1558248000         call dword ptr [0x802458]
// 005f96c0  8d4c2420             lea ecx, [esp + 0x20]
// 005f96c4  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005f96cc  ff1598288000         call dword ptr [0x802898]
// 005f96d2  8d442404             lea eax, [esp + 4]
// 005f96d6  50                   push eax
// 005f96d7  8d4c2430             lea ecx, [esp + 0x30]
// 005f96db  c644245401           mov byte ptr [esp + 0x54], 1
// 005f96e0  c7442424f8b78000     mov dword ptr [esp + 0x24], 0x80b7f8
// 005f96e8  ff155c248000         call dword ptr [0x80245c]
// 005f96ee  8d4c242c             lea ecx, [esp + 0x2c]
// 005f96f2  c644245000           mov byte ptr [esp + 0x50], 0
// 005f96f7  c7442420f8b78000     mov dword ptr [esp + 0x20], 0x80b7f8
// 005f96ff  ff1568248000         call dword ptr [0x802468]
// 005f9705  8d4c2420             lea ecx, [esp + 0x20]
// 005f9709  ff159c288000         call dword ptr [0x80289c]
// 005f970f  8d4c2404             lea ecx, [esp + 4]
// 005f9713  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 005f971b  ff1568248000         call dword ptr [0x802468]
// 005f9721  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005f9725  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 005f9729  8b442458             mov eax, dword ptr [esp + 0x58]
// 005f972d  51                   push ecx
// 005f972e  52                   push edx
// 005f972f  50                   push eax
// 005f9730  8bce                 mov ecx, esi
// 005f9732  e8e995ffff           call 0x5f2d20
// 005f9737  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f973b  5e                   pop esi
// 005f973c  64890d00000000       mov dword ptr fs:[0], ecx
// 005f9743  83c450               add esp, 0x50
// 005f9746  c20c00               ret 0xc
// library templates-2008-06-dll/roc_ndebug_iostreams.cpp (function ?open_impl@?$stream_buffer@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@iostreams@boost@@AAEXABV?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_ndebug_iostreams.cpp
