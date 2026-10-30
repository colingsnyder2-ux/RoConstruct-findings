// roc 2009-06 00685080  unit: RBX::Sky  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00685080
//
// 00685080  6aff                 push -1
// 00685082  68d9de8600           push 0x86ded9
// 00685087  64a100000000         mov eax, dword ptr fs:[0]
// 0068508d  50                   push eax
// 0068508e  64892500000000       mov dword ptr fs:[0], esp
// 00685095  83ec08               sub esp, 8
// 00685098  56                   push esi
// 00685099  33f6                 xor esi, esi
// 0068509b  56                   push esi
// 0068509c  56                   push esi
// 0068509d  83ec1c               sub esp, 0x1c
// 006850a0  89742428             mov dword ptr [esp + 0x28], esi
// 006850a4  8bcc                 mov ecx, esp
// 006850a6  89642428             mov dword ptr [esp + 0x28], esp
// 006850aa  6816d28a00           push 0x8ad216
// 006850af  ff15b4e48900         call dword ptr [0x89e4b4]
// 006850b5  83ec1c               sub esp, 0x1c
// 006850b8  8bcc                 mov ecx, esp
// 006850ba  89642448             mov dword ptr [esp + 0x48], esp
// 006850be  6816d28a00           push 0x8ad216
// 006850c3  89742458             mov dword ptr [esp + 0x58], esi
// 006850c7  ff15b4e48900         call dword ptr [0x89e4b4]
// 006850cd  a184fe8e00           mov eax, dword ptr [0x8efe84]
// 006850d2  8b0d80fe8e00         mov ecx, dword ptr [0x8efe80]
// 006850d8  8b157cfe8e00         mov edx, dword ptr [0x8efe7c]
// 006850de  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 006850e2  50                   push eax
// 006850e3  6a08                 push 8
// 006850e5  6a0f                 push 0xf
// 006850e7  51                   push ecx
// 006850e8  52                   push edx
// 006850e9  8bce                 mov ecx, esi
// 006850eb  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 006850f3  e888dff8ff           call 0x613080
// 006850f8  8b442420             mov eax, dword ptr [esp + 0x20]
// 006850fc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00685100  894608               mov dword ptr [esi + 8], eax
// 00685103  b001                 mov al, 1
// 00685105  884614               mov byte ptr [esi + 0x14], al
// 00685108  884615               mov byte ptr [esi + 0x15], al
// 0068510b  8bc6                 mov eax, esi
// 0068510d  64890d00000000       mov dword ptr fs:[0], ecx
// 00685114  5e                   pop esi
// 00685115  83c414               add esp, 0x14
// 00685118  c3                   ret 
// copied from an identical function in another client (function ?make_params@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CA?AUgzip_params@23@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp