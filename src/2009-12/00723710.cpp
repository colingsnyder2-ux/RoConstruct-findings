// roc 2009-12 00723710  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00723710
//
// 00723710  64a100000000         mov eax, dword ptr fs:[0]
// 00723716  6aff                 push -1
// 00723718  6812699500           push 0x956912
// 0072371d  50                   push eax
// 0072371e  64892500000000       mov dword ptr fs:[0], esp
// 00723725  83ec44               sub esp, 0x44
// 00723728  56                   push esi
// 00723729  8bf1                 mov esi, ecx
// 0072372b  f6465801             test byte ptr [esi + 0x58], 1
// 0072372f  7470                 je 0x7237a1
// 00723731  6804fe9d00           push 0x9dfe04
// 00723736  8d4c2408             lea ecx, [esp + 8]
// 0072373a  ff15f4b69800         call dword ptr [0x98b6f4]
// 00723740  8d4c2420             lea ecx, [esp + 0x20]
// 00723744  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0072374c  ff1554b79800         call dword ptr [0x98b754]
// 00723752  8d442404             lea eax, [esp + 4]
// 00723756  50                   push eax
// 00723757  8d4c2430             lea ecx, [esp + 0x30]
// 0072375b  c644245401           mov byte ptr [esp + 0x54], 1
// 00723760  c7442424a0fd9900     mov dword ptr [esp + 0x24], 0x99fda0
// 00723768  ff15f0b69800         call dword ptr [0x98b6f0]
// 0072376e  8d4c242c             lea ecx, [esp + 0x2c]
// 00723772  c644245000           mov byte ptr [esp + 0x50], 0
// 00723777  c7442420a0fd9900     mov dword ptr [esp + 0x20], 0x99fda0
// 0072377f  ff15e4b69800         call dword ptr [0x98b6e4]
// 00723785  8d4c2420             lea ecx, [esp + 0x20]
// 00723789  ff1550b79800         call dword ptr [0x98b750]
// 0072378f  8d4c2404             lea ecx, [esp + 4]
// 00723793  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0072379b  ff15e4b69800         call dword ptr [0x98b6e4]
// 007237a1  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007237a5  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007237a9  8b442458             mov eax, dword ptr [esp + 0x58]
// 007237ad  51                   push ecx
// 007237ae  52                   push edx
// 007237af  50                   push eax
// 007237b0  8bce                 mov ecx, esi
// 007237b2  e8e9eeffff           call 0x7226a0
// 007237b7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007237bb  5e                   pop esi
// 007237bc  64890d00000000       mov dword ptr fs:[0], ecx
// 007237c3  83c450               add esp, 0x50
// 007237c6  c20c00               ret 0xc
// copied from an identical function in another client (function ?open_impl@?$stream_buffer@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@iostreams@boost@@AAEXABV?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@3@HH@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp