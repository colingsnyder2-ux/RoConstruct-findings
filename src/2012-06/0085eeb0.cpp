// roc 2012-06 0085eeb0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085eeb0
//
// 0085eeb0  83ec34               sub esp, 0x34
// 0085eeb3  56                   push esi
// 0085eeb4  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0085eeb8  6a01                 push 1
// 0085eeba  8d44240a             lea eax, [esp + 0xa]
// 0085eebe  50                   push eax
// 0085eebf  8bce                 mov ecx, esi
// 0085eec1  e85aebffff           call 0x85da20
// 0085eec6  83f801               cmp eax, 1
// 0085eec9  0f8508010000         jne 0x85efd7
// 0085eecf  0fb6442406           movzx eax, byte ptr [esp + 6]
// 0085eed4  83f8ff               cmp eax, -1
// 0085eed7  0f84fa000000         je 0x85efd7
// 0085eedd  83f8fe               cmp eax, -2
// 0085eee0  0f84f1000000         je 0x85efd7
// 0085eee6  6a01                 push 1
// 0085eee8  8d4c2409             lea ecx, [esp + 9]
// 0085eeec  51                   push ecx
// 0085eeed  8bce                 mov ecx, esi
// 0085eeef  e82cebffff           call 0x85da20
// 0085eef4  83f801               cmp eax, 1
// 0085eef7  0f85bd000000         jne 0x85efba
// 0085eefd  0fb6442405           movzx eax, byte ptr [esp + 5]
// 0085ef02  83f8ff               cmp eax, -1
// 0085ef05  0f84af000000         je 0x85efba
// 0085ef0b  83f8fe               cmp eax, -2
// 0085ef0e  0f84a6000000         je 0x85efba
// 0085ef14  53                   push ebx
// 0085ef15  6a01                 push 1
// 0085ef17  8d54240f             lea edx, [esp + 0xf]
// 0085ef1b  52                   push edx
// 0085ef1c  8bce                 mov ecx, esi
// 0085ef1e  e8fdeaffff           call 0x85da20
// 0085ef23  83f801               cmp eax, 1
// 0085ef26  7575                 jne 0x85ef9d
// 0085ef28  0fb65c240b           movzx ebx, byte ptr [esp + 0xb]
// 0085ef2d  83fbff               cmp ebx, -1
// 0085ef30  746b                 je 0x85ef9d
// 0085ef32  83fbfe               cmp ebx, -2
// 0085ef35  7466                 je 0x85ef9d
// 0085ef37  50                   push eax
// 0085ef38  8d44240f             lea eax, [esp + 0xf]
// 0085ef3c  50                   push eax
// 0085ef3d  8bce                 mov ecx, esi
// 0085ef3f  e8dceaffff           call 0x85da20
// 0085ef44  83f801               cmp eax, 1
// 0085ef47  7537                 jne 0x85ef80
// 0085ef49  0fb644240b           movzx eax, byte ptr [esp + 0xb]
// 0085ef4e  83f8ff               cmp eax, -1
// 0085ef51  742d                 je 0x85ef80
// 0085ef53  83f8fe               cmp eax, -2
// 0085ef56  7428                 je 0x85ef80
// 0085ef58  0fb6c0               movzx eax, al
// 0085ef5b  c1e008               shl eax, 8
// 0085ef5e  0fb6cb               movzx ecx, bl
// 0085ef61  03c1                 add eax, ecx
// 0085ef63  0fb64c2409           movzx ecx, byte ptr [esp + 9]
// 0085ef68  0fb6d1               movzx edx, cl
// 0085ef6b  0fb64c240a           movzx ecx, byte ptr [esp + 0xa]
// 0085ef70  c1e008               shl eax, 8
// 0085ef73  03c2                 add eax, edx
// 0085ef75  c1e008               shl eax, 8
// 0085ef78  5b                   pop ebx
// 0085ef79  03c1                 add eax, ecx
// 0085ef7b  5e                   pop esi
// 0085ef7c  83c434               add esp, 0x34
// 0085ef7f  c3                   ret 
// 0085ef80  8b542444             mov edx, dword ptr [esp + 0x44]
// 0085ef84  52                   push edx
// 0085ef85  8d4c2410             lea ecx, [esp + 0x10]
// 0085ef89  e832e5ffff           call 0x85d4c0
// 0085ef8e  68182cd200           push 0xd22c18
// 0085ef93  8d442410             lea eax, [esp + 0x10]
// 0085ef97  50                   push eax
// 0085ef98  e8a7411200           call 0x983144
// 0085ef9d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0085efa1  51                   push ecx
// 0085efa2  8d4c2410             lea ecx, [esp + 0x10]
// 0085efa6  e815e5ffff           call 0x85d4c0
// 0085efab  68182cd200           push 0xd22c18
// 0085efb0  8d542410             lea edx, [esp + 0x10]
// 0085efb4  52                   push edx
// 0085efb5  e88a411200           call 0x983144
// 0085efba  8b442440             mov eax, dword ptr [esp + 0x40]
// 0085efbe  50                   push eax
// 0085efbf  8d4c240c             lea ecx, [esp + 0xc]
// 0085efc3  e8f8e4ffff           call 0x85d4c0
// 0085efc8  68182cd200           push 0xd22c18
// 0085efcd  8d4c240c             lea ecx, [esp + 0xc]
// 0085efd1  51                   push ecx
// 0085efd2  e86d411200           call 0x983144
// 0085efd7  8b542440             mov edx, dword ptr [esp + 0x40]
// 0085efdb  52                   push edx
// 0085efdc  8d4c240c             lea ecx, [esp + 0xc]
// 0085efe0  e8dbe4ffff           call 0x85d4c0
// 0085efe5  68182cd200           push 0xd22c18
// 0085efea  8d44240c             lea eax, [esp + 0xc]
// 0085efee  50                   push eax
// 0085efef  e850411200           call 0x983144
// copied from an identical function in another client (function ??$read_uint32@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAKAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp