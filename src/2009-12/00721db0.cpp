// roc 2009-12 00721db0  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00721db0
//
// 00721db0  6aff                 push -1
// 00721db2  68297b9300           push 0x937b29
// 00721db7  64a100000000         mov eax, dword ptr fs:[0]
// 00721dbd  50                   push eax
// 00721dbe  64892500000000       mov dword ptr fs:[0], esp
// 00721dc5  83ec08               sub esp, 8
// 00721dc8  56                   push esi
// 00721dc9  33f6                 xor esi, esi
// 00721dcb  56                   push esi
// 00721dcc  56                   push esi
// 00721dcd  83ec1c               sub esp, 0x1c
// 00721dd0  89742428             mov dword ptr [esp + 0x28], esi
// 00721dd4  8bcc                 mov ecx, esp
// 00721dd6  89642428             mov dword ptr [esp + 0x28], esp
// 00721dda  6856fd9900           push 0x99fd56
// 00721ddf  ff15f4b69800         call dword ptr [0x98b6f4]
// 00721de5  83ec1c               sub esp, 0x1c
// 00721de8  8bcc                 mov ecx, esp
// 00721dea  89642448             mov dword ptr [esp + 0x48], esp
// 00721dee  6856fd9900           push 0x99fd56
// 00721df3  89742458             mov dword ptr [esp + 0x58], esi
// 00721df7  ff15f4b69800         call dword ptr [0x98b6f4]
// 00721dfd  a144fc9e00           mov eax, dword ptr [0x9efc44]
// 00721e02  8b0d40fc9e00         mov ecx, dword ptr [0x9efc40]
// 00721e08  8b153cfc9e00         mov edx, dword ptr [0x9efc3c]
// 00721e0e  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00721e12  50                   push eax
// 00721e13  6a08                 push 8
// 00721e15  6a0f                 push 0xf
// 00721e17  51                   push ecx
// 00721e18  52                   push edx
// 00721e19  8bce                 mov ecx, esi
// 00721e1b  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00721e23  e818fdffff           call 0x721b40
// 00721e28  8b442420             mov eax, dword ptr [esp + 0x20]
// 00721e2c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00721e30  894608               mov dword ptr [esi + 8], eax
// 00721e33  b001                 mov al, 1
// 00721e35  884614               mov byte ptr [esi + 0x14], al
// 00721e38  884615               mov byte ptr [esi + 0x15], al
// 00721e3b  8bc6                 mov eax, esi
// 00721e3d  64890d00000000       mov dword ptr fs:[0], ecx
// 00721e44  5e                   pop esi
// 00721e45  83c414               add esp, 0x14
// 00721e48  c3                   ret 
// copied from an identical function in another client (function ?make_params@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CA?AUgzip_params@23@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp