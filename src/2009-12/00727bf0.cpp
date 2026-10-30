// roc 2009-12 00727bf0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00727bf0
//
// 00727bf0  83ec34               sub esp, 0x34
// 00727bf3  56                   push esi
// 00727bf4  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00727bf8  6a01                 push 1
// 00727bfa  8d44240a             lea eax, [esp + 0xa]
// 00727bfe  50                   push eax
// 00727bff  8bce                 mov ecx, esi
// 00727c01  e8bae9ffff           call 0x7265c0
// 00727c06  83f801               cmp eax, 1
// 00727c09  0f8508010000         jne 0x727d17
// 00727c0f  0fb6442406           movzx eax, byte ptr [esp + 6]
// 00727c14  83f8ff               cmp eax, -1
// 00727c17  0f84fa000000         je 0x727d17
// 00727c1d  83f8fe               cmp eax, -2
// 00727c20  0f84f1000000         je 0x727d17
// 00727c26  6a01                 push 1
// 00727c28  8d4c2409             lea ecx, [esp + 9]
// 00727c2c  51                   push ecx
// 00727c2d  8bce                 mov ecx, esi
// 00727c2f  e88ce9ffff           call 0x7265c0
// 00727c34  83f801               cmp eax, 1
// 00727c37  0f85bd000000         jne 0x727cfa
// 00727c3d  0fb6442405           movzx eax, byte ptr [esp + 5]
// 00727c42  83f8ff               cmp eax, -1
// 00727c45  0f84af000000         je 0x727cfa
// 00727c4b  83f8fe               cmp eax, -2
// 00727c4e  0f84a6000000         je 0x727cfa
// 00727c54  53                   push ebx
// 00727c55  6a01                 push 1
// 00727c57  8d54240f             lea edx, [esp + 0xf]
// 00727c5b  52                   push edx
// 00727c5c  8bce                 mov ecx, esi
// 00727c5e  e85de9ffff           call 0x7265c0
// 00727c63  83f801               cmp eax, 1
// 00727c66  7575                 jne 0x727cdd
// 00727c68  0fb65c240b           movzx ebx, byte ptr [esp + 0xb]
// 00727c6d  83fbff               cmp ebx, -1
// 00727c70  746b                 je 0x727cdd
// 00727c72  83fbfe               cmp ebx, -2
// 00727c75  7466                 je 0x727cdd
// 00727c77  50                   push eax
// 00727c78  8d44240f             lea eax, [esp + 0xf]
// 00727c7c  50                   push eax
// 00727c7d  8bce                 mov ecx, esi
// 00727c7f  e83ce9ffff           call 0x7265c0
// 00727c84  83f801               cmp eax, 1
// 00727c87  7537                 jne 0x727cc0
// 00727c89  0fb644240b           movzx eax, byte ptr [esp + 0xb]
// 00727c8e  83f8ff               cmp eax, -1
// 00727c91  742d                 je 0x727cc0
// 00727c93  83f8fe               cmp eax, -2
// 00727c96  7428                 je 0x727cc0
// 00727c98  0fb6c0               movzx eax, al
// 00727c9b  c1e008               shl eax, 8
// 00727c9e  0fb6cb               movzx ecx, bl
// 00727ca1  03c1                 add eax, ecx
// 00727ca3  0fb64c2409           movzx ecx, byte ptr [esp + 9]
// 00727ca8  0fb6d1               movzx edx, cl
// 00727cab  0fb64c240a           movzx ecx, byte ptr [esp + 0xa]
// 00727cb0  c1e008               shl eax, 8
// 00727cb3  03c2                 add eax, edx
// 00727cb5  c1e008               shl eax, 8
// 00727cb8  5b                   pop ebx
// 00727cb9  03c1                 add eax, ecx
// 00727cbb  5e                   pop esi
// 00727cbc  83c434               add esp, 0x34
// 00727cbf  c3                   ret 
// 00727cc0  8b542444             mov edx, dword ptr [esp + 0x44]
// 00727cc4  52                   push edx
// 00727cc5  8d4c2410             lea ecx, [esp + 0x10]
// 00727cc9  e882e3ffff           call 0x726050
// 00727cce  68188aac00           push 0xac8a18
// 00727cd3  8d442410             lea eax, [esp + 0x10]
// 00727cd7  50                   push eax
// 00727cd8  e89bcb0c00           call 0x7f4878
// 00727cdd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00727ce1  51                   push ecx
// 00727ce2  8d4c2410             lea ecx, [esp + 0x10]
// 00727ce6  e865e3ffff           call 0x726050
// 00727ceb  68188aac00           push 0xac8a18
// 00727cf0  8d542410             lea edx, [esp + 0x10]
// 00727cf4  52                   push edx
// 00727cf5  e87ecb0c00           call 0x7f4878
// 00727cfa  8b442440             mov eax, dword ptr [esp + 0x40]
// 00727cfe  50                   push eax
// 00727cff  8d4c240c             lea ecx, [esp + 0xc]
// 00727d03  e848e3ffff           call 0x726050
// 00727d08  68188aac00           push 0xac8a18
// 00727d0d  8d4c240c             lea ecx, [esp + 0xc]
// 00727d11  51                   push ecx
// 00727d12  e861cb0c00           call 0x7f4878
// 00727d17  8b542440             mov edx, dword ptr [esp + 0x40]
// 00727d1b  52                   push edx
// 00727d1c  8d4c240c             lea ecx, [esp + 0xc]
// 00727d20  e82be3ffff           call 0x726050
// 00727d25  68188aac00           push 0xac8a18
// 00727d2a  8d44240c             lea eax, [esp + 0xc]
// 00727d2e  50                   push eax
// 00727d2f  e844cb0c00           call 0x7f4878
// copied from an identical function in another client (function ??$read_uint32@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAKAAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp