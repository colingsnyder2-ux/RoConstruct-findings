// roc 2007-08 0054aef0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054aef0
//
// 0054aef0  6aff                 push -1
// 0054aef2  6838247500           push 0x752438
// 0054aef7  64a100000000         mov eax, dword ptr fs:[0]
// 0054aefd  50                   push eax
// 0054aefe  64892500000000       mov dword ptr fs:[0], esp
// 0054af05  83ec08               sub esp, 8
// 0054af08  56                   push esi
// 0054af09  8bf1                 mov esi, ecx
// 0054af0b  89742408             mov dword ptr [esp + 8], esi
// 0054af0f  8b4614               mov eax, dword ptr [esi + 0x14]
// 0054af12  85c0                 test eax, eax
// 0054af14  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0054af1c  740f                 je 0x54af2d
// 0054af1e  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0054af21  51                   push ecx
// 0054af22  50                   push eax
// 0054af23  8d4c240f             lea ecx, [esp + 0xf]
// 0054af27  ff1510e67700         call dword ptr [0x77e610]
// 0054af2d  8bce                 mov ecx, esi
// 0054af2f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0054af37  e8a4fdffff           call 0x54ace0
// 0054af3c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054af40  5e                   pop esi
// 0054af41  64890d00000000       mov dword ptr fs:[0], ecx
// 0054af48  83c414               add esp, 0x14
// 0054af4b  c3                   ret 
// copied from an identical function in another client (function ??1impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp