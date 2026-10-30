// roc 2010-06 006a4250  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a4250
//
// 006a4250  56                   push esi
// 006a4251  8b742408             mov esi, dword ptr [esp + 8]
// 006a4255  57                   push edi
// 006a4256  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006a425a  56                   push esi
// 006a425b  57                   push edi
// 006a425c  e83ffbffff           call 0x6a3da0
// 006a4261  8bc6                 mov eax, esi
// 006a4263  c1f808               sar eax, 8
// 006a4266  50                   push eax
// 006a4267  57                   push edi
// 006a4268  e833fbffff           call 0x6a3da0
// 006a426d  8bce                 mov ecx, esi
// 006a426f  c1f910               sar ecx, 0x10
// 006a4272  51                   push ecx
// 006a4273  57                   push edi
// 006a4274  e827fbffff           call 0x6a3da0
// 006a4279  c1fe18               sar esi, 0x18
// 006a427c  56                   push esi
// 006a427d  57                   push edi
// 006a427e  e81dfbffff           call 0x6a3da0
// 006a4283  83c420               add esp, 0x20
// 006a4286  5f                   pop edi
// 006a4287  5e                   pop esi
// 006a4288  c3                   ret 
// copied from an identical function in another client (function ??$write_long@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@CAXJAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp