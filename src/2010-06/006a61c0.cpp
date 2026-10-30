// roc 2010-06 006a61c0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a61c0
//
// 006a61c0  83ec30               sub esp, 0x30
// 006a61c3  6a01                 push 1
// 006a61c5  8d442438             lea eax, [esp + 0x38]
// 006a61c9  50                   push eax
// 006a61ca  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006a61ce  8d4810               lea ecx, [eax + 0x10]
// 006a61d1  51                   push ecx
// 006a61d2  83c008               add eax, 8
// 006a61d5  50                   push eax
// 006a61d6  e875e6ffff           call 0x6a4850
// 006a61db  83c410               add esp, 0x10
// 006a61de  83f801               cmp eax, 1
// 006a61e1  750f                 jne 0x6a61f2
// 006a61e3  0fb6442434           movzx eax, byte ptr [esp + 0x34]
// 006a61e8  83f8ff               cmp eax, -1
// 006a61eb  7405                 je 0x6a61f2
// 006a61ed  83f8fe               cmp eax, -2
// 006a61f0  751d                 jne 0x6a620f
// 006a61f2  8b542438             mov edx, dword ptr [esp + 0x38]
// 006a61f6  52                   push edx
// 006a61f7  8d4c2404             lea ecx, [esp + 4]
// 006a61fb  e860e3ffff           call 0x6a4560
// 006a6200  685872b300           push 0xb37258
// 006a6205  8d442404             lea eax, [esp + 4]
// 006a6209  50                   push eax
// 006a620a  e8a3271000           call 0x7a89b2
// 006a620f  83c430               add esp, 0x30
// 006a6212  c3                   ret 
// copied from an identical function in another client (function ??$read_uint8@V?$range_adapter@Uinput@iostreams@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@detail@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAEAAV?$range_adapter@Uinput@iostreams@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@detail@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp