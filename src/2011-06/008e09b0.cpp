// roc 2011-06 008e09b0  unit: CXTPPropertyGridInplaceEdit  size: 528 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e09b0
//
// 008e09b0  6aff                 push -1
// 008e09b2  689bd9a000           push 0xa0d99b
// 008e09b7  64a100000000         mov eax, dword ptr fs:[0]
// 008e09bd  50                   push eax
// 008e09be  83ec08               sub esp, 8
// 008e09c1  53                   push ebx
// 008e09c2  55                   push ebp
// 008e09c3  56                   push esi
// 008e09c4  57                   push edi
// 008e09c5  a12058c900           mov eax, dword ptr [0xc95820]
// 008e09ca  33c4                 xor eax, esp
// 008e09cc  50                   push eax
// 008e09cd  8d44241c             lea eax, [esp + 0x1c]
// 008e09d1  64a300000000         mov dword ptr fs:[0], eax
// 008e09d7  8be9                 mov ebp, ecx
// 008e09d9  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008e09dd  83fb09               cmp ebx, 9
// 008e09e0  0f84c4010000         je 0x8e0baa
// 008e09e6  83fb0d               cmp ebx, 0xd
// 008e09e9  7527                 jne 0x8e0a12
// 008e09eb  e828bc0e00           call 0x9cc618
// 008e09f0  a900100000           test eax, 0x1000
// 008e09f5  0f84a4010000         je 0x8e0b9f
// 008e09fb  8b442434             mov eax, dword ptr [esp + 0x34]
// 008e09ff  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008e0a03  50                   push eax
// 008e0a04  51                   push ecx
// 008e0a05  53                   push ebx
// 008e0a06  8bcd                 mov ecx, ebp
// 008e0a08  e8e3fcffff           call 0x8e06f0
// 008e0a0d  e998010000           jmp 0x8e0baa
// 008e0a12  83fb1b               cmp ebx, 0x1b
// 008e0a15  0f8484010000         je 0x8e0b9f
// 008e0a1b  8b8da0000000         mov ecx, dword ptr [ebp + 0xa0]
// 008e0a21  85c9                 test ecx, ecx
// 008e0a23  0f8449010000         je 0x8e0b72
// 008e0a29  8b11                 mov edx, dword ptr [ecx]
// 008e0a2b  8b4258               mov eax, dword ptr [edx + 0x58]
// 008e0a2e  ffd0                 call eax
// 008e0a30  85c0                 test eax, eax
// 008e0a32  0f853a010000         jne 0x8e0b72
// 008e0a38  8b85a0000000         mov eax, dword ptr [ebp + 0xa0]
// 008e0a3e  83787c00             cmp dword ptr [eax + 0x7c], 0
// 008e0a42  0f842a010000         je 0x8e0b72
// 008e0a48  8bb8c4000000         mov edi, dword ptr [eax + 0xc4]
// 008e0a4e  837f2800             cmp dword ptr [edi + 0x28], 0
// 008e0a52  0f841a010000         je 0x8e0b72
// 008e0a58  8d4c2430             lea ecx, [esp + 0x30]
// 008e0a5c  ff15b42da400         call dword ptr [0xa42db4]
// 008e0a62  8d4c2430             lea ecx, [esp + 0x30]
// 008e0a66  51                   push ecx
// 008e0a67  8bcd                 mov ecx, ebp
// 008e0a69  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008e0a71  e8d09bf2ff           call 0x80a646
// 008e0a76  8d4c2430             lea ecx, [esp + 0x30]
// 008e0a7a  ff15c82da400         call dword ptr [0xa42dc8]
// 008e0a80  50                   push eax
// 008e0a81  8bcf                 mov ecx, edi
// 008e0a83  e8889af9ff           call 0x87a510
// 008e0a88  8bf0                 mov esi, eax
// 008e0a8a  83feff               cmp esi, -1
// 008e0a8d  750a                 jne 0x8e0a99
// 008e0a8f  8b4728               mov eax, dword ptr [edi + 0x28]
// 008e0a92  48                   dec eax
// 008e0a93  89442414             mov dword ptr [esp + 0x14], eax
// 008e0a97  eb04                 jmp 0x8e0a9d
// 008e0a99  89742414             mov dword ptr [esp + 0x14], esi
// 008e0a9d  6a01                 push 1
// 008e0a9f  53                   push ebx
// 008e0aa0  8d4c2434             lea ecx, [esp + 0x34]
// 008e0aa4  ff152c2aa400         call dword ptr [0xa42a2c]
// 008e0aaa  c644242401           mov byte ptr [esp + 0x24], 1
// 008e0aaf  90                   nop 
// 008e0ab0  8b4728               mov eax, dword ptr [edi + 0x28]
// 008e0ab3  48                   dec eax
// 008e0ab4  3bf0                 cmp esi, eax
// 008e0ab6  7d03                 jge 0x8e0abb
// 008e0ab8  46                   inc esi
// 008e0ab9  eb02                 jmp 0x8e0abd
// 008e0abb  33f6                 xor esi, esi
// 008e0abd  56                   push esi
// 008e0abe  8d542438             lea edx, [esp + 0x38]
// 008e0ac2  52                   push edx
// 008e0ac3  8bcf                 mov ecx, edi
// 008e0ac5  e8a699f9ff           call 0x87a470
// 008e0aca  6a01                 push 1
// 008e0acc  8d44241c             lea eax, [esp + 0x1c]
// 008e0ad0  50                   push eax
// 008e0ad1  8d4c243c             lea ecx, [esp + 0x3c]
// 008e0ad5  c644242c02           mov byte ptr [esp + 0x2c], 2
// 008e0ada  ff15601fa400         call dword ptr [0xa41f60]
// 008e0ae0  8bc8                 mov ecx, eax
// 008e0ae2  ff15c82da400         call dword ptr [0xa42dc8]
// 008e0ae8  50                   push eax
// 008e0ae9  8d4c2430             lea ecx, [esp + 0x30]
// 008e0aed  ff150820a400         call dword ptr [0xa42008]
// 008e0af3  85c0                 test eax, eax
// 008e0af5  8d4c2418             lea ecx, [esp + 0x18]
// 008e0af9  0f94c3               sete bl
// 008e0afc  ff15082ea400         call dword ptr [0xa42e08]
// 008e0b02  8d4c2434             lea ecx, [esp + 0x34]
// 008e0b06  84db                 test bl, bl
// 008e0b08  7513                 jne 0x8e0b1d
// 008e0b0a  c644242401           mov byte ptr [esp + 0x24], 1
// 008e0b0f  ff15082ea400         call dword ptr [0xa42e08]
// 008e0b15  3b742414             cmp esi, dword ptr [esp + 0x14]
// 008e0b19  7595                 jne 0x8e0ab0
// 008e0b1b  eb3f                 jmp 0x8e0b5c
// 008e0b1d  ff15c82da400         call dword ptr [0xa42dc8]
// 008e0b23  50                   push eax
// 008e0b24  8bcd                 mov ecx, ebp
// 008e0b26  e8e798f2ff           call 0x80a412
// 008e0b2b  6aff                 push -1
// 008e0b2d  6a00                 push 0
// 008e0b2f  897734               mov dword ptr [edi + 0x34], esi
// 008e0b32  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 008e0b35  8b35c019a400         mov esi, dword ptr [0xa419c0]
// 008e0b3b  68b1000000           push 0xb1
// 008e0b40  51                   push ecx
// 008e0b41  ffd6                 call esi
// 008e0b43  8b5520               mov edx, dword ptr [ebp + 0x20]
// 008e0b46  6a00                 push 0
// 008e0b48  6a00                 push 0
// 008e0b4a  68b7000000           push 0xb7
// 008e0b4f  52                   push edx
// 008e0b50  ffd6                 call esi
// 008e0b52  8d4c2434             lea ecx, [esp + 0x34]
// 008e0b56  ff15082ea400         call dword ptr [0xa42e08]
// 008e0b5c  8d4c242c             lea ecx, [esp + 0x2c]
// 008e0b60  ff15082ea400         call dword ptr [0xa42e08]
// 008e0b66  8d4c2430             lea ecx, [esp + 0x30]
// 008e0b6a  ff15082ea400         call dword ptr [0xa42e08]
// 008e0b70  eb38                 jmp 0x8e0baa
// 008e0b72  83fb2e               cmp ebx, 0x2e
// 008e0b75  740c                 je 0x8e0b83
// 008e0b77  83fb08               cmp ebx, 8
// 008e0b7a  7407                 je 0x8e0b83
// 008e0b7c  b801000000           mov eax, 1
// 008e0b81  eb02                 jmp 0x8e0b85
// 008e0b83  33c0                 xor eax, eax
// 008e0b85  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008e0b89  8985b4000000         mov dword ptr [ebp + 0xb4], eax
// 008e0b8f  8b442434             mov eax, dword ptr [esp + 0x34]
// 008e0b93  50                   push eax
// 008e0b94  51                   push ecx
// 008e0b95  53                   push ebx
// 008e0b96  8bcd                 mov ecx, ebp
// 008e0b98  e853fbffff           call 0x8e06f0
// 008e0b9d  eb0b                 jmp 0x8e0baa
// 008e0b9f  8b8d9c000000         mov ecx, dword ptr [ebp + 0x9c]
// 008e0ba5  e85698f2ff           call 0x80a400
// 008e0baa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e0bae  64890d00000000       mov dword ptr fs:[0], ecx
// 008e0bb5  59                   pop ecx
// 008e0bb6  5f                   pop edi
// 008e0bb7  5e                   pop esi
// 008e0bb8  5d                   pop ebp
// 008e0bb9  5b                   pop ebx
// 008e0bba  83c414               add esp, 0x14
// 008e0bbd  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnChar@CXTPPropertyGridInplaceEdit@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridInplaceEdit.cpp