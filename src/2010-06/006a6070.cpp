// roc 2010-06 006a6070  unit: boost::iostreams::Uinput::?$filtering_stream  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a6070
//
// 006a6070  83ec34               sub esp, 0x34
// 006a6073  56                   push esi
// 006a6074  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 006a6078  6a01                 push 1
// 006a607a  8d44240a             lea eax, [esp + 0xa]
// 006a607e  50                   push eax
// 006a607f  8bce                 mov ecx, esi
// 006a6081  e8bae9ffff           call 0x6a4a40
// 006a6086  83f801               cmp eax, 1
// 006a6089  0f8508010000         jne 0x6a6197
// 006a608f  0fb6442406           movzx eax, byte ptr [esp + 6]
// 006a6094  83f8ff               cmp eax, -1
// 006a6097  0f84fa000000         je 0x6a6197
// 006a609d  83f8fe               cmp eax, -2
// 006a60a0  0f84f1000000         je 0x6a6197
// 006a60a6  6a01                 push 1
// 006a60a8  8d4c2409             lea ecx, [esp + 9]
// 006a60ac  51                   push ecx
// 006a60ad  8bce                 mov ecx, esi
// 006a60af  e88ce9ffff           call 0x6a4a40
// 006a60b4  83f801               cmp eax, 1
// 006a60b7  0f85bd000000         jne 0x6a617a
// 006a60bd  0fb6442405           movzx eax, byte ptr [esp + 5]
// 006a60c2  83f8ff               cmp eax, -1
// 006a60c5  0f84af000000         je 0x6a617a
// 006a60cb  83f8fe               cmp eax, -2
// 006a60ce  0f84a6000000         je 0x6a617a
// 006a60d4  53                   push ebx
// 006a60d5  6a01                 push 1
// 006a60d7  8d54240f             lea edx, [esp + 0xf]
// 006a60db  52                   push edx
// 006a60dc  8bce                 mov ecx, esi
// 006a60de  e85de9ffff           call 0x6a4a40
// 006a60e3  83f801               cmp eax, 1
// 006a60e6  7575                 jne 0x6a615d
// 006a60e8  0fb65c240b           movzx ebx, byte ptr [esp + 0xb]
// 006a60ed  83fbff               cmp ebx, -1
// 006a60f0  746b                 je 0x6a615d
// 006a60f2  83fbfe               cmp ebx, -2
// 006a60f5  7466                 je 0x6a615d
// 006a60f7  50                   push eax
// 006a60f8  8d44240f             lea eax, [esp + 0xf]
// 006a60fc  50                   push eax
// 006a60fd  8bce                 mov ecx, esi
// 006a60ff  e83ce9ffff           call 0x6a4a40
// 006a6104  83f801               cmp eax, 1
// 006a6107  7537                 jne 0x6a6140
// 006a6109  0fb644240b           movzx eax, byte ptr [esp + 0xb]
// 006a610e  83f8ff               cmp eax, -1
// 006a6111  742d                 je 0x6a6140
// 006a6113  83f8fe               cmp eax, -2
// 006a6116  7428                 je 0x6a6140
// 006a6118  0fb6c0               movzx eax, al
// 006a611b  c1e008               shl eax, 8
// 006a611e  0fb6cb               movzx ecx, bl
// 006a6121  03c1                 add eax, ecx
// 006a6123  0fb64c2409           movzx ecx, byte ptr [esp + 9]
// 006a6128  0fb6d1               movzx edx, cl
// 006a612b  0fb64c240a           movzx ecx, byte ptr [esp + 0xa]
// 006a6130  c1e008               shl eax, 8
// 006a6133  03c2                 add eax, edx
// 006a6135  c1e008               shl eax, 8
// 006a6138  5b                   pop ebx
// 006a6139  03c1                 add eax, ecx
// 006a613b  5e                   pop esi
// 006a613c  83c434               add esp, 0x34
// 006a613f  c3                   ret 
// 006a6140  8b542444             mov edx, dword ptr [esp + 0x44]
// 006a6144  52                   push edx
// 006a6145  8d4c2410             lea ecx, [esp + 0x10]
// 006a6149  e812e4ffff           call 0x6a4560
// 006a614e  685872b300           push 0xb37258
// 006a6153  8d442410             lea eax, [esp + 0x10]
// 006a6157  50                   push eax
// 006a6158  e855281000           call 0x7a89b2
// 006a615d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006a6161  51                   push ecx
// 006a6162  8d4c2410             lea ecx, [esp + 0x10]
// 006a6166  e8f5e3ffff           call 0x6a4560
// 006a616b  685872b300           push 0xb37258
// 006a6170  8d542410             lea edx, [esp + 0x10]
// 006a6174  52                   push edx
// 006a6175  e838281000           call 0x7a89b2
// 006a617a  8b442440             mov eax, dword ptr [esp + 0x40]
// 006a617e  50                   push eax
// 006a617f  8d4c240c             lea ecx, [esp + 0xc]
// 006a6183  e8d8e3ffff           call 0x6a4560
// 006a6188  685872b300           push 0xb37258
// 006a618d  8d4c240c             lea ecx, [esp + 0xc]
// 006a6191  51                   push ecx
// 006a6192  e81b281000           call 0x7a89b2
// 006a6197  8b542440             mov edx, dword ptr [esp + 0x40]
// 006a619b  52                   push edx
// 006a619c  8d4c240c             lea ecx, [esp + 0xc]
// 006a61a0  e8bbe3ffff           call 0x6a4560
// 006a61a5  685872b300           push 0xb37258
// 006a61aa  8d44240c             lea eax, [esp + 0xc]
// 006a61ae  50                   push eax
// 006a61af  e8fe271000           call 0x7a89b2
// copied from an identical function in another client (function ??$read_uint32@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAKAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp