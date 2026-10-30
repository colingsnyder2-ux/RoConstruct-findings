// roc 2007-08 00550920  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00550920
//
// 00550920  83ec34               sub esp, 0x34
// 00550923  56                   push esi
// 00550924  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00550928  6a01                 push 1
// 0055092a  8d44240a             lea eax, [esp + 0xa]
// 0055092e  50                   push eax
// 0055092f  8bce                 mov ecx, esi
// 00550931  e87adcffff           call 0x54e5b0
// 00550936  83f801               cmp eax, 1
// 00550939  0f850b010000         jne 0x550a4a
// 0055093f  0fb6442406           movzx eax, byte ptr [esp + 6]
// 00550944  83f8ff               cmp eax, -1
// 00550947  0f84fd000000         je 0x550a4a
// 0055094d  83f8fe               cmp eax, -2
// 00550950  0f84f4000000         je 0x550a4a
// 00550956  6a01                 push 1
// 00550958  8d4c2409             lea ecx, [esp + 9]
// 0055095c  51                   push ecx
// 0055095d  8bce                 mov ecx, esi
// 0055095f  e84cdcffff           call 0x54e5b0
// 00550964  83f801               cmp eax, 1
// 00550967  0f85c0000000         jne 0x550a2d
// 0055096d  0fb6442405           movzx eax, byte ptr [esp + 5]
// 00550972  83f8ff               cmp eax, -1
// 00550975  0f84b2000000         je 0x550a2d
// 0055097b  83f8fe               cmp eax, -2
// 0055097e  0f84a9000000         je 0x550a2d
// 00550984  53                   push ebx
// 00550985  6a01                 push 1
// 00550987  8d54240f             lea edx, [esp + 0xf]
// 0055098b  52                   push edx
// 0055098c  8bce                 mov ecx, esi
// 0055098e  e81ddcffff           call 0x54e5b0
// 00550993  83f801               cmp eax, 1
// 00550996  7578                 jne 0x550a10
// 00550998  0fb65c240b           movzx ebx, byte ptr [esp + 0xb]
// 0055099d  83fbff               cmp ebx, -1
// 005509a0  746e                 je 0x550a10
// 005509a2  83fbfe               cmp ebx, -2
// 005509a5  7469                 je 0x550a10
// 005509a7  50                   push eax
// 005509a8  8d44240f             lea eax, [esp + 0xf]
// 005509ac  50                   push eax
// 005509ad  8bce                 mov ecx, esi
// 005509af  e8fcdbffff           call 0x54e5b0
// 005509b4  83f801               cmp eax, 1
// 005509b7  753a                 jne 0x5509f3
// 005509b9  0fb644240b           movzx eax, byte ptr [esp + 0xb]
// 005509be  83f8ff               cmp eax, -1
// 005509c1  7430                 je 0x5509f3
// 005509c3  83f8fe               cmp eax, -2
// 005509c6  742b                 je 0x5509f3
// 005509c8  0fb6c0               movzx eax, al
// 005509cb  c1e008               shl eax, 8
// 005509ce  0fb6cb               movzx ecx, bl
// 005509d1  03c1                 add eax, ecx
// 005509d3  0fb64c2409           movzx ecx, byte ptr [esp + 9]
// 005509d8  0fb6d1               movzx edx, cl
// 005509db  0fb64c240a           movzx ecx, byte ptr [esp + 0xa]
// 005509e0  c1e008               shl eax, 8
// 005509e3  03c2                 add eax, edx
// 005509e5  0fb6c9               movzx ecx, cl
// 005509e8  c1e008               shl eax, 8
// 005509eb  5b                   pop ebx
// 005509ec  03c1                 add eax, ecx
// 005509ee  5e                   pop esi
// 005509ef  83c434               add esp, 0x34
// 005509f2  c3                   ret 
// 005509f3  8b542444             mov edx, dword ptr [esp + 0x44]
// 005509f7  52                   push edx
// 005509f8  8d4c2410             lea ecx, [esp + 0x10]
// 005509fc  e88fd6ffff           call 0x54e090
// 00550a01  6814a48500           push 0x85a414
// 00550a06  8d442410             lea eax, [esp + 0x10]
// 00550a0a  50                   push eax
// 00550a0b  e88e010e00           call 0x630b9e
// 00550a10  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00550a14  51                   push ecx
// 00550a15  8d4c2410             lea ecx, [esp + 0x10]
// 00550a19  e872d6ffff           call 0x54e090
// 00550a1e  6814a48500           push 0x85a414
// 00550a23  8d542410             lea edx, [esp + 0x10]
// 00550a27  52                   push edx
// 00550a28  e871010e00           call 0x630b9e
// 00550a2d  8b442440             mov eax, dword ptr [esp + 0x40]
// 00550a31  50                   push eax
// 00550a32  8d4c240c             lea ecx, [esp + 0xc]
// 00550a36  e855d6ffff           call 0x54e090
// 00550a3b  6814a48500           push 0x85a414
// 00550a40  8d4c240c             lea ecx, [esp + 0xc]
// 00550a44  51                   push ecx
// 00550a45  e854010e00           call 0x630b9e
// 00550a4a  8b542440             mov edx, dword ptr [esp + 0x40]
// 00550a4e  52                   push edx
// 00550a4f  8d4c240c             lea ecx, [esp + 0xc]
// 00550a53  e838d6ffff           call 0x54e090
// 00550a58  6814a48500           push 0x85a414
// 00550a5d  8d44240c             lea eax, [esp + 0xc]
// 00550a61  50                   push eax
// 00550a62  e837010e00           call 0x630b9e
// copied from an identical function in another client (function ??$read_uint32@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAKAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@H@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp