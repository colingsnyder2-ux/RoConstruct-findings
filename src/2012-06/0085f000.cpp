// roc 2012-06 0085f000  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085f000
//
// 0085f000  83ec30               sub esp, 0x30
// 0085f003  6a01                 push 1
// 0085f005  8d442438             lea eax, [esp + 0x38]
// 0085f009  50                   push eax
// 0085f00a  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0085f00e  8d4810               lea ecx, [eax + 0x10]
// 0085f011  51                   push ecx
// 0085f012  83c008               add eax, 8
// 0085f015  50                   push eax
// 0085f016  e835e8ffff           call 0x85d850
// 0085f01b  83c410               add esp, 0x10
// 0085f01e  83f801               cmp eax, 1
// 0085f021  750f                 jne 0x85f032
// 0085f023  0fb6442434           movzx eax, byte ptr [esp + 0x34]
// 0085f028  83f8ff               cmp eax, -1
// 0085f02b  7405                 je 0x85f032
// 0085f02d  83f8fe               cmp eax, -2
// 0085f030  751d                 jne 0x85f04f
// 0085f032  8b542438             mov edx, dword ptr [esp + 0x38]
// 0085f036  52                   push edx
// 0085f037  8d4c2404             lea ecx, [esp + 4]
// 0085f03b  e880e4ffff           call 0x85d4c0
// 0085f040  68182cd200           push 0xd22c18
// 0085f045  8d442404             lea eax, [esp + 4]
// 0085f049  50                   push eax
// 0085f04a  e8f5401200           call 0x983144
// 0085f04f  83c430               add esp, 0x30
// 0085f052  c3                   ret 
// copied from an identical function in another client (function ??$read_uint8@V?$range_adapter@Uinput@iostreams@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@detail@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAEAAV?$range_adapter@Uinput@iostreams@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@detail@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp