// roc 2009-12 007237d0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007237d0
//
// 007237d0  64a100000000         mov eax, dword ptr fs:[0]
// 007237d6  6aff                 push -1
// 007237d8  6812699500           push 0x956912
// 007237dd  50                   push eax
// 007237de  64892500000000       mov dword ptr fs:[0], esp
// 007237e5  83ec44               sub esp, 0x44
// 007237e8  56                   push esi
// 007237e9  8bf1                 mov esi, ecx
// 007237eb  f6465801             test byte ptr [esi + 0x58], 1
// 007237ef  7470                 je 0x723861
// 007237f1  6804fe9d00           push 0x9dfe04
// 007237f6  8d4c2408             lea ecx, [esp + 8]
// 007237fa  ff15f4b69800         call dword ptr [0x98b6f4]
// 00723800  8d4c2420             lea ecx, [esp + 0x20]
// 00723804  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0072380c  ff1554b79800         call dword ptr [0x98b754]
// 00723812  8d442404             lea eax, [esp + 4]
// 00723816  50                   push eax
// 00723817  8d4c2430             lea ecx, [esp + 0x30]
// 0072381b  c644245401           mov byte ptr [esp + 0x54], 1
// 00723820  c7442424a0fd9900     mov dword ptr [esp + 0x24], 0x99fda0
// 00723828  ff15f0b69800         call dword ptr [0x98b6f0]
// 0072382e  8d4c242c             lea ecx, [esp + 0x2c]
// 00723832  c644245000           mov byte ptr [esp + 0x50], 0
// 00723837  c7442420a0fd9900     mov dword ptr [esp + 0x20], 0x99fda0
// 0072383f  ff15e4b69800         call dword ptr [0x98b6e4]
// 00723845  8d4c2420             lea ecx, [esp + 0x20]
// 00723849  ff1550b79800         call dword ptr [0x98b750]
// 0072384f  8d4c2404             lea ecx, [esp + 4]
// 00723853  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0072385b  ff15e4b69800         call dword ptr [0x98b6e4]
// 00723861  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00723865  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00723869  8b442458             mov eax, dword ptr [esp + 0x58]
// 0072386d  51                   push ecx
// 0072386e  52                   push edx
// 0072386f  50                   push eax
// 00723870  8bce                 mov ecx, esi
// 00723872  e869f1ffff           call 0x7229e0
// 00723877  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072387b  5e                   pop esi
// 0072387c  64890d00000000       mov dword ptr fs:[0], ecx
// 00723883  83c450               add esp, 0x50
// 00723886  c20c00               ret 0xc
// copied from an identical function in another client (function ?open_impl@?$stream_buffer@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@iostreams@boost@@AAEXABV?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@3@HH@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp