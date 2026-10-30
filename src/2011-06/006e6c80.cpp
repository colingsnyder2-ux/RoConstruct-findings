// roc 2011-06 006e6c80  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e6c80
//
// 006e6c80  83ec34               sub esp, 0x34
// 006e6c83  56                   push esi
// 006e6c84  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 006e6c88  6a01                 push 1
// 006e6c8a  8d44240a             lea eax, [esp + 0xa]
// 006e6c8e  50                   push eax
// 006e6c8f  8bce                 mov ecx, esi
// 006e6c91  e85aebffff           call 0x6e57f0
// 006e6c96  83f801               cmp eax, 1
// 006e6c99  0f8508010000         jne 0x6e6da7
// 006e6c9f  0fb6442406           movzx eax, byte ptr [esp + 6]
// 006e6ca4  83f8ff               cmp eax, -1
// 006e6ca7  0f84fa000000         je 0x6e6da7
// 006e6cad  83f8fe               cmp eax, -2
// 006e6cb0  0f84f1000000         je 0x6e6da7
// 006e6cb6  6a01                 push 1
// 006e6cb8  8d4c2409             lea ecx, [esp + 9]
// 006e6cbc  51                   push ecx
// 006e6cbd  8bce                 mov ecx, esi
// 006e6cbf  e82cebffff           call 0x6e57f0
// 006e6cc4  83f801               cmp eax, 1
// 006e6cc7  0f85bd000000         jne 0x6e6d8a
// 006e6ccd  0fb6442405           movzx eax, byte ptr [esp + 5]
// 006e6cd2  83f8ff               cmp eax, -1
// 006e6cd5  0f84af000000         je 0x6e6d8a
// 006e6cdb  83f8fe               cmp eax, -2
// 006e6cde  0f84a6000000         je 0x6e6d8a
// 006e6ce4  53                   push ebx
// 006e6ce5  6a01                 push 1
// 006e6ce7  8d54240f             lea edx, [esp + 0xf]
// 006e6ceb  52                   push edx
// 006e6cec  8bce                 mov ecx, esi
// 006e6cee  e8fdeaffff           call 0x6e57f0
// 006e6cf3  83f801               cmp eax, 1
// 006e6cf6  7575                 jne 0x6e6d6d
// 006e6cf8  0fb65c240b           movzx ebx, byte ptr [esp + 0xb]
// 006e6cfd  83fbff               cmp ebx, -1
// 006e6d00  746b                 je 0x6e6d6d
// 006e6d02  83fbfe               cmp ebx, -2
// 006e6d05  7466                 je 0x6e6d6d
// 006e6d07  50                   push eax
// 006e6d08  8d44240f             lea eax, [esp + 0xf]
// 006e6d0c  50                   push eax
// 006e6d0d  8bce                 mov ecx, esi
// 006e6d0f  e8dceaffff           call 0x6e57f0
// 006e6d14  83f801               cmp eax, 1
// 006e6d17  7537                 jne 0x6e6d50
// 006e6d19  0fb644240b           movzx eax, byte ptr [esp + 0xb]
// 006e6d1e  83f8ff               cmp eax, -1
// 006e6d21  742d                 je 0x6e6d50
// 006e6d23  83f8fe               cmp eax, -2
// 006e6d26  7428                 je 0x6e6d50
// 006e6d28  0fb6c0               movzx eax, al
// 006e6d2b  c1e008               shl eax, 8
// 006e6d2e  0fb6cb               movzx ecx, bl
// 006e6d31  03c1                 add eax, ecx
// 006e6d33  0fb64c2409           movzx ecx, byte ptr [esp + 9]
// 006e6d38  0fb6d1               movzx edx, cl
// 006e6d3b  0fb64c240a           movzx ecx, byte ptr [esp + 0xa]
// 006e6d40  c1e008               shl eax, 8
// 006e6d43  03c2                 add eax, edx
// 006e6d45  c1e008               shl eax, 8
// 006e6d48  5b                   pop ebx
// 006e6d49  03c1                 add eax, ecx
// 006e6d4b  5e                   pop esi
// 006e6d4c  83c434               add esp, 0x34
// 006e6d4f  c3                   ret 
// 006e6d50  8b542444             mov edx, dword ptr [esp + 0x44]
// 006e6d54  52                   push edx
// 006e6d55  8d4c2410             lea ecx, [esp + 0x10]
// 006e6d59  e8a2e5ffff           call 0x6e5300
// 006e6d5e  68300abc00           push 0xbc0a30
// 006e6d63  8d442410             lea eax, [esp + 0x10]
// 006e6d67  50                   push eax
// 006e6d68  e83f431200           call 0x80b0ac
// 006e6d6d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006e6d71  51                   push ecx
// 006e6d72  8d4c2410             lea ecx, [esp + 0x10]
// 006e6d76  e885e5ffff           call 0x6e5300
// 006e6d7b  68300abc00           push 0xbc0a30
// 006e6d80  8d542410             lea edx, [esp + 0x10]
// 006e6d84  52                   push edx
// 006e6d85  e822431200           call 0x80b0ac
// 006e6d8a  8b442440             mov eax, dword ptr [esp + 0x40]
// 006e6d8e  50                   push eax
// 006e6d8f  8d4c240c             lea ecx, [esp + 0xc]
// 006e6d93  e868e5ffff           call 0x6e5300
// 006e6d98  68300abc00           push 0xbc0a30
// 006e6d9d  8d4c240c             lea ecx, [esp + 0xc]
// 006e6da1  51                   push ecx
// 006e6da2  e805431200           call 0x80b0ac
// 006e6da7  8b542440             mov edx, dword ptr [esp + 0x40]
// 006e6dab  52                   push edx
// 006e6dac  8d4c240c             lea ecx, [esp + 0xc]
// 006e6db0  e84be5ffff           call 0x6e5300
// 006e6db5  68300abc00           push 0xbc0a30
// 006e6dba  8d44240c             lea eax, [esp + 0xc]
// 006e6dbe  50                   push eax
// 006e6dbf  e8e8421200           call 0x80b0ac
// copied from an identical function in another client (function ??$read_uint32@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAKAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp