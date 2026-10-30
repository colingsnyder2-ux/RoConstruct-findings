// roc 2012-06 008592b0  unit: boost::iostreams::Uoutput::V?$chain::?$chain_client  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008592b0
//
// 008592b0  6aff                 push -1
// 008592b2  68d9e0ac00           push 0xace0d9
// 008592b7  64a100000000         mov eax, dword ptr fs:[0]
// 008592bd  50                   push eax
// 008592be  64892500000000       mov dword ptr fs:[0], esp
// 008592c5  83ec08               sub esp, 8
// 008592c8  56                   push esi
// 008592c9  33f6                 xor esi, esi
// 008592cb  56                   push esi
// 008592cc  56                   push esi
// 008592cd  83ec1c               sub esp, 0x1c
// 008592d0  89742428             mov dword ptr [esp + 0x28], esi
// 008592d4  8bcc                 mov ecx, esp
// 008592d6  89642428             mov dword ptr [esp + 0x28], esp
// 008592da  68e83bb400           push 0xb43be8
// 008592df  ff154826b200         call dword ptr [0xb22648]
// 008592e5  83ec1c               sub esp, 0x1c
// 008592e8  8bcc                 mov ecx, esp
// 008592ea  89642448             mov dword ptr [esp + 0x48], esp
// 008592ee  68e83bb400           push 0xb43be8
// 008592f3  89742458             mov dword ptr [esp + 0x58], esi
// 008592f7  ff154826b200         call dword ptr [0xb22648]
// 008592fd  a1ecc5c000           mov eax, dword ptr [0xc0c5ec]
// 00859302  8b0de8c5c000         mov ecx, dword ptr [0xc0c5e8]
// 00859308  8b15e4c5c000         mov edx, dword ptr [0xc0c5e4]
// 0085930e  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00859312  50                   push eax
// 00859313  6a08                 push 8
// 00859315  6a0f                 push 0xf
// 00859317  51                   push ecx
// 00859318  52                   push edx
// 00859319  8bce                 mov ecx, esi
// 0085931b  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00859323  e838fdffff           call 0x859060
// 00859328  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085932c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00859330  894608               mov dword ptr [esi + 8], eax
// 00859333  b001                 mov al, 1
// 00859335  884614               mov byte ptr [esi + 0x14], al
// 00859338  884615               mov byte ptr [esi + 0x15], al
// 0085933b  8bc6                 mov eax, esi
// 0085933d  64890d00000000       mov dword ptr fs:[0], ecx
// 00859344  5e                   pop esi
// 00859345  83c414               add esp, 0x14
// 00859348  c3                   ret 
// copied from an identical function in another client (function ?make_params@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CA?AUgzip_params@23@H@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp