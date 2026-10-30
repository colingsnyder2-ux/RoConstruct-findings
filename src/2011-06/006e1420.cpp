// roc 2011-06 006e1420  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1420
//
// 006e1420  6aff                 push -1
// 006e1422  68883d9f00           push 0x9f3d88
// 006e1427  64a100000000         mov eax, dword ptr fs:[0]
// 006e142d  50                   push eax
// 006e142e  64892500000000       mov dword ptr fs:[0], esp
// 006e1435  83ec08               sub esp, 8
// 006e1438  56                   push esi
// 006e1439  8bf1                 mov esi, ecx
// 006e143b  89742408             mov dword ptr [esp + 8], esi
// 006e143f  8b4614               mov eax, dword ptr [esi + 0x14]
// 006e1442  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006e144a  85c0                 test eax, eax
// 006e144c  740f                 je 0x6e145d
// 006e144e  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006e1451  51                   push ecx
// 006e1452  50                   push eax
// 006e1453  8d4c240f             lea ecx, [esp + 0xf]
// 006e1457  ff152805a400         call dword ptr [0xa40528]
// 006e145d  8bce                 mov ecx, esi
// 006e145f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006e1467  e874feffff           call 0x6e12e0
// 006e146c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e1470  5e                   pop esi
// 006e1471  64890d00000000       mov dword ptr fs:[0], ecx
// 006e1478  83c414               add esp, 0x14
// 006e147b  c3                   ret 
// copied from an identical function in another client (function ??1impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp