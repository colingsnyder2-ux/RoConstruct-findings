// roc 2011-06 006e6dd0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e6dd0
//
// 006e6dd0  83ec30               sub esp, 0x30
// 006e6dd3  6a01                 push 1
// 006e6dd5  8d442438             lea eax, [esp + 0x38]
// 006e6dd9  50                   push eax
// 006e6dda  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006e6dde  8d4810               lea ecx, [eax + 0x10]
// 006e6de1  51                   push ecx
// 006e6de2  83c008               add eax, 8
// 006e6de5  50                   push eax
// 006e6de6  e835e8ffff           call 0x6e5620
// 006e6deb  83c410               add esp, 0x10
// 006e6dee  83f801               cmp eax, 1
// 006e6df1  750f                 jne 0x6e6e02
// 006e6df3  0fb6442434           movzx eax, byte ptr [esp + 0x34]
// 006e6df8  83f8ff               cmp eax, -1
// 006e6dfb  7405                 je 0x6e6e02
// 006e6dfd  83f8fe               cmp eax, -2
// 006e6e00  751d                 jne 0x6e6e1f
// 006e6e02  8b542438             mov edx, dword ptr [esp + 0x38]
// 006e6e06  52                   push edx
// 006e6e07  8d4c2404             lea ecx, [esp + 4]
// 006e6e0b  e8f0e4ffff           call 0x6e5300
// 006e6e10  68300abc00           push 0xbc0a30
// 006e6e15  8d442404             lea eax, [esp + 4]
// 006e6e19  50                   push eax
// 006e6e1a  e88d421200           call 0x80b0ac
// 006e6e1f  83c430               add esp, 0x30
// 006e6e22  c3                   ret 
// copied from an identical function in another client (function ??$read_uint8@V?$range_adapter@Uinput@iostreams@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@detail@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAEAAV?$range_adapter@Uinput@iostreams@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@detail@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp