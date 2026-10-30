// roc 2009-12 00727d40  unit: boost::iostreams::Uinput::?$filtering_stream  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00727d40
//
// 00727d40  83ec30               sub esp, 0x30
// 00727d43  6a01                 push 1
// 00727d45  8d442438             lea eax, [esp + 0x38]
// 00727d49  50                   push eax
// 00727d4a  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00727d4e  8d4810               lea ecx, [eax + 0x10]
// 00727d51  51                   push ecx
// 00727d52  83c008               add eax, 8
// 00727d55  50                   push eax
// 00727d56  e845e6ffff           call 0x7263a0
// 00727d5b  83c410               add esp, 0x10
// 00727d5e  83f801               cmp eax, 1
// 00727d61  750f                 jne 0x727d72
// 00727d63  0fb6442434           movzx eax, byte ptr [esp + 0x34]
// 00727d68  83f8ff               cmp eax, -1
// 00727d6b  7405                 je 0x727d72
// 00727d6d  83f8fe               cmp eax, -2
// 00727d70  751d                 jne 0x727d8f
// 00727d72  8b542438             mov edx, dword ptr [esp + 0x38]
// 00727d76  52                   push edx
// 00727d77  8d4c2404             lea ecx, [esp + 4]
// 00727d7b  e8d0e2ffff           call 0x726050
// 00727d80  68188aac00           push 0xac8a18
// 00727d85  8d442404             lea eax, [esp + 4]
// 00727d89  50                   push eax
// 00727d8a  e8e9ca0c00           call 0x7f4878
// 00727d8f  83c430               add esp, 0x30
// 00727d92  c3                   ret 
// copied from an identical function in another client (function ??$read_uint8@V?$range_adapter@Uinput@iostreams@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@detail@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAEAAV?$range_adapter@Uinput@iostreams@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@detail@12@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp