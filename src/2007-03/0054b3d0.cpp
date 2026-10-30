// roc 2007-03 0054b3d0  unit: seg_00540000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054b3d0
//
// 0054b3d0  64a100000000         mov eax, dword ptr fs:[0]
// 0054b3d6  6aff                 push -1
// 0054b3d8  68926f7500           push 0x756f92
// 0054b3dd  50                   push eax
// 0054b3de  64892500000000       mov dword ptr fs:[0], esp
// 0054b3e5  83ec44               sub esp, 0x44
// 0054b3e8  56                   push esi
// 0054b3e9  8bf1                 mov esi, ecx
// 0054b3eb  f6465801             test byte ptr [esi + 0x58], 1
// 0054b3ef  7470                 je 0x54b461
// 0054b3f1  68ec797a00           push 0x7a79ec
// 0054b3f6  8d4c2408             lea ecx, [esp + 8]
// 0054b3fa  ff1578e77700         call dword ptr [0x77e778]
// 0054b400  8d4c2420             lea ecx, [esp + 0x20]
// 0054b404  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0054b40c  ff1560e97700         call dword ptr [0x77e960]
// 0054b412  8d442404             lea eax, [esp + 4]
// 0054b416  50                   push eax
// 0054b417  8d4c2430             lea ecx, [esp + 0x30]
// 0054b41b  c644245401           mov byte ptr [esp + 0x54], 1
// 0054b420  c7442424c8607800     mov dword ptr [esp + 0x24], 0x7860c8
// 0054b428  ff157ce77700         call dword ptr [0x77e77c]
// 0054b42e  8d4c242c             lea ecx, [esp + 0x2c]
// 0054b432  c644245000           mov byte ptr [esp + 0x50], 0
// 0054b437  c7442420c8607800     mov dword ptr [esp + 0x20], 0x7860c8
// 0054b43f  ff158ce77700         call dword ptr [0x77e78c]
// 0054b445  8d4c2420             lea ecx, [esp + 0x20]
// 0054b449  ff155ce97700         call dword ptr [0x77e95c]
// 0054b44f  8d4c2404             lea ecx, [esp + 4]
// 0054b453  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0054b45b  ff158ce77700         call dword ptr [0x77e78c]
// 0054b461  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0054b465  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0054b469  8b442458             mov eax, dword ptr [esp + 0x58]
// 0054b46d  51                   push ecx
// 0054b46e  52                   push edx
// 0054b46f  50                   push eax
// 0054b470  8bce                 mov ecx, esi
// 0054b472  e859f8ffff           call 0x54acd0
// 0054b477  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0054b47b  5e                   pop esi
// 0054b47c  64890d00000000       mov dword ptr fs:[0], ecx
// 0054b483  83c450               add esp, 0x50
// 0054b486  c20c00               ret 0xc
// copied from an identical function in another client (function ?open_impl@?$stream_buffer@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@iostreams@boost@@AAEXABV?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@3@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp