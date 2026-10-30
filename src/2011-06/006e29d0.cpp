// roc 2011-06 006e29d0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e29d0
//
// 006e29d0  64a100000000         mov eax, dword ptr fs:[0]
// 006e29d6  6aff                 push -1
// 006e29d8  68221b9d00           push 0x9d1b22
// 006e29dd  50                   push eax
// 006e29de  64892500000000       mov dword ptr fs:[0], esp
// 006e29e5  83ec44               sub esp, 0x44
// 006e29e8  56                   push esi
// 006e29e9  8bf1                 mov esi, ecx
// 006e29eb  f6465801             test byte ptr [esi + 0x58], 1
// 006e29ef  7470                 je 0x6e2a61
// 006e29f1  683083aa00           push 0xaa8330
// 006e29f6  8d4c2408             lea ecx, [esp + 8]
// 006e29fa  ff15c404a400         call dword ptr [0xa404c4]
// 006e2a00  8d4c2420             lea ecx, [esp + 0x20]
// 006e2a04  c744245000000000     mov dword ptr [esp + 0x50], 0
// 006e2a0c  ff15600aa400         call dword ptr [0xa40a60]
// 006e2a12  8d442404             lea eax, [esp + 4]
// 006e2a16  50                   push eax
// 006e2a17  8d4c2430             lea ecx, [esp + 0x30]
// 006e2a1b  c644245401           mov byte ptr [esp + 0x54], 1
// 006e2a20  c744242400bfa500     mov dword ptr [esp + 0x24], 0xa5bf00
// 006e2a28  ff15c804a400         call dword ptr [0xa404c8]
// 006e2a2e  8d4c242c             lea ecx, [esp + 0x2c]
// 006e2a32  c644245000           mov byte ptr [esp + 0x50], 0
// 006e2a37  c744242000bfa500     mov dword ptr [esp + 0x20], 0xa5bf00
// 006e2a3f  ff15d004a400         call dword ptr [0xa404d0]
// 006e2a45  8d4c2420             lea ecx, [esp + 0x20]
// 006e2a49  ff15640aa400         call dword ptr [0xa40a64]
// 006e2a4f  8d4c2404             lea ecx, [esp + 4]
// 006e2a53  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 006e2a5b  ff15d004a400         call dword ptr [0xa404d0]
// 006e2a61  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 006e2a65  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 006e2a69  8b442458             mov eax, dword ptr [esp + 0x58]
// 006e2a6d  51                   push ecx
// 006e2a6e  52                   push edx
// 006e2a6f  50                   push eax
// 006e2a70  8bce                 mov ecx, esi
// 006e2a72  e8e9f2ffff           call 0x6e1d60
// 006e2a77  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006e2a7b  5e                   pop esi
// 006e2a7c  64890d00000000       mov dword ptr fs:[0], ecx
// 006e2a83  83c450               add esp, 0x50
// 006e2a86  c20c00               ret 0xc
// copied from an identical function in another client (function ?open_impl@?$stream_buffer@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@iostreams@boost@@AAEXABV?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@3@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp