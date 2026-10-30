// roc 2011-06 00865b50  unit: CXTPTabClientWnd  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00865b50
//
// 00865b50  83ec1c               sub esp, 0x1c
// 00865b53  53                   push ebx
// 00865b54  56                   push esi
// 00865b55  57                   push edi
// 00865b56  8b3d3c1ba400         mov edi, dword ptr [0xa41b3c]
// 00865b5c  6a00                 push 0
// 00865b5e  6a0f                 push 0xf
// 00865b60  6a0f                 push 0xf
// 00865b62  6a00                 push 0
// 00865b64  8d44241c             lea eax, [esp + 0x1c]
// 00865b68  50                   push eax
// 00865b69  8bf1                 mov esi, ecx
// 00865b6b  ffd7                 call edi
// 00865b6d  85c0                 test eax, eax
// 00865b6f  7439                 je 0x865baa
// 00865b71  8b1d0c1aa400         mov ebx, dword ptr [0xa41a0c]
// 00865b77  6a0f                 push 0xf
// 00865b79  6a0f                 push 0xf
// 00865b7b  6a00                 push 0
// 00865b7d  8d4c2418             lea ecx, [esp + 0x18]
// 00865b81  51                   push ecx
// 00865b82  ff15281ca400         call dword ptr [0xa41c28]
// 00865b88  85c0                 test eax, eax
// 00865b8a  0f8493000000         je 0x865c23
// 00865b90  8d54240c             lea edx, [esp + 0xc]
// 00865b94  52                   push edx
// 00865b95  ffd3                 call ebx
// 00865b97  6a00                 push 0
// 00865b99  6a0f                 push 0xf
// 00865b9b  6a0f                 push 0xf
// 00865b9d  6a00                 push 0
// 00865b9f  8d44241c             lea eax, [esp + 0x1c]
// 00865ba3  50                   push eax
// 00865ba4  ffd7                 call edi
// 00865ba6  85c0                 test eax, eax
// 00865ba8  75cd                 jne 0x865b77
// 00865baa  8b3dac19a400         mov edi, dword ptr [0xa419ac]
// 00865bb0  8d8ef8000000         lea ecx, [esi + 0xf8]
// 00865bb6  51                   push ecx
// 00865bb7  ffd7                 call edi
// 00865bb9  8d96dc000000         lea edx, [esi + 0xdc]
// 00865bbf  52                   push edx
// 00865bc0  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 00865bca  c7860801000000000000 mov dword ptr [esi + 0x108], 0
// 00865bd4  ffd7                 call edi
// 00865bd6  c786f000000000000000 mov dword ptr [esi + 0xf0], 0
// 00865be0  ff15e819a400         call dword ptr [0xa419e8]
// 00865be6  50                   push eax
// 00865be7  e83c47faff           call 0x80a328
// 00865bec  8bf8                 mov edi, eax
// 00865bee  8b4720               mov eax, dword ptr [edi + 0x20]
// 00865bf1  50                   push eax
// 00865bf2  ff15241ba400         call dword ptr [0xa41b24]
// 00865bf8  85c0                 test eax, eax
// 00865bfa  740d                 je 0x865c09
// 00865bfc  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00865bff  6803040000           push 0x403
// 00865c04  6a00                 push 0
// 00865c06  51                   push ecx
// 00865c07  eb08                 jmp 0x865c11
// 00865c09  8b5720               mov edx, dword ptr [edi + 0x20]
// 00865c0c  6a03                 push 3
// 00865c0e  6a00                 push 0
// 00865c10  52                   push edx
// 00865c11  ff15281ba400         call dword ptr [0xa41b28]
// 00865c17  50                   push eax
// 00865c18  e89b691600           call 0x9cc5b8
// 00865c1d  898610010000         mov dword ptr [esi + 0x110], eax
// 00865c23  5f                   pop edi
// 00865c24  5e                   pop esi
// 00865c25  5b                   pop ebx
// 00865c26  83c41c               add esp, 0x1c
// 00865c29  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?InitLoop@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
