// roc 2011-06 008b8be0  unit: CXTRegistryManager  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8be0
//
// 008b8be0  55                   push ebp
// 008b8be1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 008b8be5  56                   push esi
// 008b8be6  8bf1                 mov esi, ecx
// 008b8be8  85ed                 test ebp, ebp
// 008b8bea  7507                 jne 0x8b8bf3
// 008b8bec  5e                   pop esi
// 008b8bed  33c0                 xor eax, eax
// 008b8bef  5d                   pop ebp
// 008b8bf0  c20c00               ret 0xc
// 008b8bf3  b9388fd100           mov ecx, 0xd18f38
// 008b8bf8  ff15b026a400         call dword ptr [0xa426b0]
// 008b8bfe  84c0                 test al, al
// 008b8c00  0f84a8000000         je 0x8b8cae
// 008b8c06  8bce                 mov ecx, esi
// 008b8c08  e873feffff           call 0x8b8a80
// 008b8c0d  85c0                 test eax, eax
// 008b8c0f  74db                 je 0x8b8bec
// 008b8c11  837c241000           cmp dword ptr [esp + 0x10], 0
// 008b8c16  53                   push ebx
// 008b8c17  57                   push edi
// 008b8c18  8bce                 mov ecx, esi
// 008b8c1a  752e                 jne 0x8b8c4a
// 008b8c1c  8b06                 mov eax, dword ptr [esi]
// 008b8c1e  8b5004               mov edx, dword ptr [eax + 4]
// 008b8c21  6a00                 push 0
// 008b8c23  ffd2                 call edx
// 008b8c25  8bf8                 mov edi, eax
// 008b8c27  85ff                 test edi, edi
// 008b8c29  7416                 je 0x8b8c41
// 008b8c2b  55                   push ebp
// 008b8c2c  57                   push edi
// 008b8c2d  ff150000a400         call dword ptr [0xa40000]
// 008b8c33  57                   push edi
// 008b8c34  894610               mov dword ptr [esi + 0x10], eax
// 008b8c37  85c0                 test eax, eax
// 008b8c39  7461                 je 0x8b8c9c
// 008b8c3b  ff150400a400         call dword ptr [0xa40004]
// 008b8c41  5f                   pop edi
// 008b8c42  5b                   pop ebx
// 008b8c43  5e                   pop esi
// 008b8c44  33c0                 xor eax, eax
// 008b8c46  5d                   pop ebp
// 008b8c47  c20c00               ret 0xc
// 008b8c4a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008b8c4e  681f000200           push 0x2001f
// 008b8c53  55                   push ebp
// 008b8c54  85db                 test ebx, ebx
// 008b8c56  751b                 jne 0x8b8c73
// 008b8c58  8b06                 mov eax, dword ptr [esi]
// 008b8c5a  8b5008               mov edx, dword ptr [eax + 8]
// 008b8c5d  ffd2                 call edx
// 008b8c5f  8bf8                 mov edi, eax
// 008b8c61  85ff                 test edi, edi
// 008b8c63  74dc                 je 0x8b8c41
// 008b8c65  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b8c69  50                   push eax
// 008b8c6a  57                   push edi
// 008b8c6b  ff155000a400         call dword ptr [0xa40050]
// 008b8c71  ebc0                 jmp 0x8b8c33
// 008b8c73  8b16                 mov edx, dword ptr [esi]
// 008b8c75  8b4208               mov eax, dword ptr [edx + 8]
// 008b8c78  ffd0                 call eax
// 008b8c7a  8bf8                 mov edi, eax
// 008b8c7c  85ff                 test edi, edi
// 008b8c7e  74c1                 je 0x8b8c41
// 008b8c80  53                   push ebx
// 008b8c81  ff156403a400         call dword ptr [0xa40364]
// 008b8c87  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b8c8b  40                   inc eax
// 008b8c8c  50                   push eax
// 008b8c8d  53                   push ebx
// 008b8c8e  6a01                 push 1
// 008b8c90  6a00                 push 0
// 008b8c92  51                   push ecx
// 008b8c93  57                   push edi
// 008b8c94  ff154400a400         call dword ptr [0xa40044]
// 008b8c9a  eb97                 jmp 0x8b8c33
// 008b8c9c  ff150400a400         call dword ptr [0xa40004]
// 008b8ca2  5f                   pop edi
// 008b8ca3  5b                   pop ebx
// 008b8ca4  5e                   pop esi
// 008b8ca5  b801000000           mov eax, 1
// 008b8caa  5d                   pop ebp
// 008b8cab  c20c00               ret 0xc
// 008b8cae  b9388fd100           mov ecx, 0xd18f38
// 008b8cb3  ff15c82da400         call dword ptr [0xa42dc8]
// 008b8cb9  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b8cbd  50                   push eax
// 008b8cbe  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b8cc2  52                   push edx
// 008b8cc3  50                   push eax
// 008b8cc4  55                   push ebp
// 008b8cc5  ff154802a400         call dword ptr [0xa40248]
// 008b8ccb  5e                   pop esi
// 008b8ccc  5d                   pop ebp
// 008b8ccd  c20c00               ret 0xc
// copied from an identical function in another client (function ?WriteProfileStringA@CXTRegistryManager@@QAEHPBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp