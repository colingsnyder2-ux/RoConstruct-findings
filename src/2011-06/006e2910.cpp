// roc 2011-06 006e2910  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e2910
//
// 006e2910  64a100000000         mov eax, dword ptr fs:[0]
// 006e2916  6aff                 push -1
// 006e2918  68221b9d00           push 0x9d1b22
// 006e291d  50                   push eax
// 006e291e  64892500000000       mov dword ptr fs:[0], esp
// 006e2925  83ec44               sub esp, 0x44
// 006e2928  56                   push esi
// 006e2929  8bf1                 mov esi, ecx
// 006e292b  f6465801             test byte ptr [esi + 0x58], 1
// 006e292f  7470                 je 0x6e29a1
// 006e2931  683083aa00           push 0xaa8330
// 006e2936  8d4c2408             lea ecx, [esp + 8]
// 006e293a  ff15c404a400         call dword ptr [0xa404c4]
// 006e2940  8d4c2420             lea ecx, [esp + 0x20]
// 006e2944  c744245000000000     mov dword ptr [esp + 0x50], 0
// 006e294c  ff15600aa400         call dword ptr [0xa40a60]
// 006e2952  8d442404             lea eax, [esp + 4]
// 006e2956  50                   push eax
// 006e2957  8d4c2430             lea ecx, [esp + 0x30]
// 006e295b  c644245401           mov byte ptr [esp + 0x54], 1
// 006e2960  c744242400bfa500     mov dword ptr [esp + 0x24], 0xa5bf00
// 006e2968  ff15c804a400         call dword ptr [0xa404c8]
// 006e296e  8d4c242c             lea ecx, [esp + 0x2c]
// 006e2972  c644245000           mov byte ptr [esp + 0x50], 0
// 006e2977  c744242000bfa500     mov dword ptr [esp + 0x20], 0xa5bf00
// 006e297f  ff15d004a400         call dword ptr [0xa404d0]
// 006e2985  8d4c2420             lea ecx, [esp + 0x20]
// 006e2989  ff15640aa400         call dword ptr [0xa40a64]
// 006e298f  8d4c2404             lea ecx, [esp + 4]
// 006e2993  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 006e299b  ff15d004a400         call dword ptr [0xa404d0]
// 006e29a1  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 006e29a5  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 006e29a9  8b442458             mov eax, dword ptr [esp + 0x58]
// 006e29ad  51                   push ecx
// 006e29ae  52                   push edx
// 006e29af  50                   push eax
// 006e29b0  8bce                 mov ecx, esi
// 006e29b2  e899f0ffff           call 0x6e1a50
// 006e29b7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006e29bb  5e                   pop esi
// 006e29bc  64890d00000000       mov dword ptr fs:[0], ecx
// 006e29c3  83c450               add esp, 0x50
// 006e29c6  c20c00               ret 0xc
// copied from an identical function in another client (function ?open_impl@?$stream_buffer@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@iostreams@boost@@AAEXABV?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@3@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp