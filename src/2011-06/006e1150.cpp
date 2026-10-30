// roc 2011-06 006e1150  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1150
//
// 006e1150  6aff                 push -1
// 006e1152  681901a000           push 0xa00119
// 006e1157  64a100000000         mov eax, dword ptr fs:[0]
// 006e115d  50                   push eax
// 006e115e  64892500000000       mov dword ptr fs:[0], esp
// 006e1165  83ec08               sub esp, 8
// 006e1168  56                   push esi
// 006e1169  33f6                 xor esi, esi
// 006e116b  56                   push esi
// 006e116c  56                   push esi
// 006e116d  83ec1c               sub esp, 0x1c
// 006e1170  89742428             mov dword ptr [esp + 0x28], esi
// 006e1174  8bcc                 mov ecx, esp
// 006e1176  89642428             mov dword ptr [esp + 0x28], esp
// 006e117a  68cabea500           push 0xa5beca
// 006e117f  ff15c404a400         call dword ptr [0xa404c4]
// 006e1185  83ec1c               sub esp, 0x1c
// 006e1188  8bcc                 mov ecx, esp
// 006e118a  89642448             mov dword ptr [esp + 0x48], esp
// 006e118e  68cabea500           push 0xa5beca
// 006e1193  89742458             mov dword ptr [esp + 0x58], esi
// 006e1197  ff15c404a400         call dword ptr [0xa404c4]
// 006e119d  a1dc02ac00           mov eax, dword ptr [0xac02dc]
// 006e11a2  8b0dd802ac00         mov ecx, dword ptr [0xac02d8]
// 006e11a8  8b15d402ac00         mov edx, dword ptr [0xac02d4]
// 006e11ae  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 006e11b2  50                   push eax
// 006e11b3  6a08                 push 8
// 006e11b5  6a0f                 push 0xf
// 006e11b7  51                   push ecx
// 006e11b8  52                   push edx
// 006e11b9  8bce                 mov ecx, esi
// 006e11bb  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 006e11c3  e868fdffff           call 0x6e0f30
// 006e11c8  8b442420             mov eax, dword ptr [esp + 0x20]
// 006e11cc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e11d0  894608               mov dword ptr [esi + 8], eax
// 006e11d3  b001                 mov al, 1
// 006e11d5  884614               mov byte ptr [esi + 0x14], al
// 006e11d8  884615               mov byte ptr [esi + 0x15], al
// 006e11db  8bc6                 mov eax, esi
// 006e11dd  64890d00000000       mov dword ptr fs:[0], ecx
// 006e11e4  5e                   pop esi
// 006e11e5  83c414               add esp, 0x14
// 006e11e8  c3                   ret 
// copied from an identical function in another client (function ?make_params@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CA?AUgzip_params@23@H@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp