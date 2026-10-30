// roc 2010-06 006a1ae0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a1ae0
//
// 006a1ae0  64a100000000         mov eax, dword ptr fs:[0]
// 006a1ae6  6aff                 push -1
// 006a1ae8  68e22f9a00           push 0x9a2fe2
// 006a1aed  50                   push eax
// 006a1aee  64892500000000       mov dword ptr fs:[0], esp
// 006a1af5  83ec44               sub esp, 0x44
// 006a1af8  56                   push esi
// 006a1af9  8bf1                 mov esi, ecx
// 006a1afb  f6465801             test byte ptr [esi + 0x58], 1
// 006a1aff  7470                 je 0x6a1b71
// 006a1b01  68e009a400           push 0xa409e0
// 006a1b06  8d4c2408             lea ecx, [esp + 8]
// 006a1b0a  ff1510a49e00         call dword ptr [0x9ea410]
// 006a1b10  8d4c2420             lea ecx, [esp + 0x20]
// 006a1b14  c744245000000000     mov dword ptr [esp + 0x50], 0
// 006a1b1c  ff1518a99e00         call dword ptr [0x9ea918]
// 006a1b22  8d442404             lea eax, [esp + 4]
// 006a1b26  50                   push eax
// 006a1b27  8d4c2430             lea ecx, [esp + 0x30]
// 006a1b2b  c644245401           mov byte ptr [esp + 0x54], 1
// 006a1b30  c74424243009a000     mov dword ptr [esp + 0x24], 0xa00930
// 006a1b38  ff150ca49e00         call dword ptr [0x9ea40c]
// 006a1b3e  8d4c242c             lea ecx, [esp + 0x2c]
// 006a1b42  c644245000           mov byte ptr [esp + 0x50], 0
// 006a1b47  c74424203009a000     mov dword ptr [esp + 0x20], 0xa00930
// 006a1b4f  ff1500a49e00         call dword ptr [0x9ea400]
// 006a1b55  8d4c2420             lea ecx, [esp + 0x20]
// 006a1b59  ff151ca99e00         call dword ptr [0x9ea91c]
// 006a1b5f  8d4c2404             lea ecx, [esp + 4]
// 006a1b63  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 006a1b6b  ff1500a49e00         call dword ptr [0x9ea400]
// 006a1b71  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 006a1b75  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 006a1b79  8b442458             mov eax, dword ptr [esp + 0x58]
// 006a1b7d  51                   push ecx
// 006a1b7e  52                   push edx
// 006a1b7f  50                   push eax
// 006a1b80  8bce                 mov ecx, esi
// 006a1b82  e809f1ffff           call 0x6a0c90
// 006a1b87  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006a1b8b  5e                   pop esi
// 006a1b8c  64890d00000000       mov dword ptr fs:[0], ecx
// 006a1b93  83c450               add esp, 0x50
// 006a1b96  c20c00               ret 0xc
// copied from an identical function in another client (function ?open_impl@?$stream_buffer@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@iostreams@boost@@AAEXABV?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@3@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp