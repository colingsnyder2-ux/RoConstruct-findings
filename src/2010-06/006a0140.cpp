// roc 2010-06 006a0140  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0140
//
// 006a0140  6aff                 push -1
// 006a0142  6869009a00           push 0x9a0069
// 006a0147  64a100000000         mov eax, dword ptr fs:[0]
// 006a014d  50                   push eax
// 006a014e  64892500000000       mov dword ptr fs:[0], esp
// 006a0155  83ec08               sub esp, 8
// 006a0158  56                   push esi
// 006a0159  33f6                 xor esi, esi
// 006a015b  56                   push esi
// 006a015c  56                   push esi
// 006a015d  83ec1c               sub esp, 0x1c
// 006a0160  89742428             mov dword ptr [esp + 0x28], esi
// 006a0164  8bcc                 mov ecx, esp
// 006a0166  89642428             mov dword ptr [esp + 0x28], esp
// 006a016a  68fe08a000           push 0xa008fe
// 006a016f  ff1510a49e00         call dword ptr [0x9ea410]
// 006a0175  83ec1c               sub esp, 0x1c
// 006a0178  8bcc                 mov ecx, esp
// 006a017a  89642448             mov dword ptr [esp + 0x48], esp
// 006a017e  68fe08a000           push 0xa008fe
// 006a0183  89742458             mov dword ptr [esp + 0x58], esi
// 006a0187  ff1510a49e00         call dword ptr [0x9ea410]
// 006a018d  a1243fa500           mov eax, dword ptr [0xa53f24]
// 006a0192  8b0d203fa500         mov ecx, dword ptr [0xa53f20]
// 006a0198  8b151c3fa500         mov edx, dword ptr [0xa53f1c]
// 006a019e  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 006a01a2  50                   push eax
// 006a01a3  6a08                 push 8
// 006a01a5  6a0f                 push 0xf
// 006a01a7  51                   push ecx
// 006a01a8  52                   push edx
// 006a01a9  8bce                 mov ecx, esi
// 006a01ab  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 006a01b3  e818fdffff           call 0x69fed0
// 006a01b8  8b442420             mov eax, dword ptr [esp + 0x20]
// 006a01bc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a01c0  894608               mov dword ptr [esi + 8], eax
// 006a01c3  b001                 mov al, 1
// 006a01c5  884614               mov byte ptr [esi + 0x14], al
// 006a01c8  884615               mov byte ptr [esi + 0x15], al
// 006a01cb  8bc6                 mov eax, esi
// 006a01cd  64890d00000000       mov dword ptr fs:[0], ecx
// 006a01d4  5e                   pop esi
// 006a01d5  83c414               add esp, 0x14
// 006a01d8  c3                   ret 
// copied from an identical function in another client (function ?make_params@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CA?AUgzip_params@23@H@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp