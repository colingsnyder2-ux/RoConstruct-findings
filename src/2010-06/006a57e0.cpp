// roc 2010-06 006a57e0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a57e0
//
// 006a57e0  6aff                 push -1
// 006a57e2  68952b9a00           push 0x9a2b95
// 006a57e7  64a100000000         mov eax, dword ptr fs:[0]
// 006a57ed  50                   push eax
// 006a57ee  64892500000000       mov dword ptr fs:[0], esp
// 006a57f5  83ec5c               sub esp, 0x5c
// 006a57f8  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 006a57fc  56                   push esi
// 006a57fd  57                   push edi
// 006a57fe  8bf1                 mov esi, ecx
// 006a5800  50                   push eax
// 006a5801  8d4c2410             lea ecx, [esp + 0x10]
// 006a5805  51                   push ecx
// 006a5806  89742410             mov dword ptr [esp + 0x10], esi
// 006a580a  e831a9ffff           call 0x6a0140
// 006a580f  83c408               add esp, 8
// 006a5812  8b542478             mov edx, dword ptr [esp + 0x78]
// 006a5816  50                   push eax
// 006a5817  33ff                 xor edi, edi
// 006a5819  52                   push edx
// 006a581a  8bce                 mov ecx, esi
// 006a581c  897c2474             mov dword ptr [esp + 0x74], edi
// 006a5820  e80bd5ffff           call 0x6a2d30
// 006a5825  8d4c2440             lea ecx, [esp + 0x40]
// 006a5829  c644246c03           mov byte ptr [esp + 0x6c], 3
// 006a582e  ff1500a49e00         call dword ptr [0x9ea400]
// 006a5834  8d4c2424             lea ecx, [esp + 0x24]
// 006a5838  c644246c02           mov byte ptr [esp + 0x6c], 2
// 006a583d  ff1500a49e00         call dword ptr [0x9ea400]
// 006a5843  8d4e08               lea ecx, [esi + 8]
// 006a5846  ff1504a49e00         call dword ptr [0x9ea404]
// 006a584c  8d4e24               lea ecx, [esi + 0x24]
// 006a584f  c644246c04           mov byte ptr [esp + 0x6c], 4
// 006a5854  ff1504a49e00         call dword ptr [0x9ea404]
// 006a585a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 006a585e  897e48               mov dword ptr [esi + 0x48], edi
// 006a5861  897e4c               mov dword ptr [esi + 0x4c], edi
// 006a5864  897e50               mov dword ptr [esi + 0x50], edi
// 006a5867  c74640ff000000       mov dword ptr [esi + 0x40], 0xff
// 006a586e  5f                   pop edi
// 006a586f  8bc6                 mov eax, esi
// 006a5871  5e                   pop esi
// 006a5872  64890d00000000       mov dword ptr fs:[0], ecx
// 006a5879  83c468               add esp, 0x68
// 006a587c  c20800               ret 8
// copied from an identical function in another client (function ??0?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAE@HH@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp