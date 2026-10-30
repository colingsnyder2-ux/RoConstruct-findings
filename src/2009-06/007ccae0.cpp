// roc 2009-06 007ccae0  unit: CXTRegistryManager  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ccae0
//
// 007ccae0  55                   push ebp
// 007ccae1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 007ccae5  56                   push esi
// 007ccae6  8bf1                 mov esi, ecx
// 007ccae8  85ed                 test ebp, ebp
// 007ccaea  7507                 jne 0x7ccaf3
// 007ccaec  5e                   pop esi
// 007ccaed  33c0                 xor eax, eax
// 007ccaef  5d                   pop ebp
// 007ccaf0  c20c00               ret 0xc
// 007ccaf3  b9c426a500           mov ecx, 0xa526c4
// 007ccaf8  ff155cfb8900         call dword ptr [0x89fb5c]
// 007ccafe  84c0                 test al, al
// 007ccb00  0f84a8000000         je 0x7ccbae
// 007ccb06  8bce                 mov ecx, esi
// 007ccb08  e873feffff           call 0x7cc980
// 007ccb0d  85c0                 test eax, eax
// 007ccb0f  74db                 je 0x7ccaec
// 007ccb11  837c241000           cmp dword ptr [esp + 0x10], 0
// 007ccb16  53                   push ebx
// 007ccb17  57                   push edi
// 007ccb18  8bce                 mov ecx, esi
// 007ccb1a  752e                 jne 0x7ccb4a
// 007ccb1c  8b06                 mov eax, dword ptr [esi]
// 007ccb1e  8b5004               mov edx, dword ptr [eax + 4]
// 007ccb21  6a00                 push 0
// 007ccb23  ffd2                 call edx
// 007ccb25  8bf8                 mov edi, eax
// 007ccb27  85ff                 test edi, edi
// 007ccb29  7416                 je 0x7ccb41
// 007ccb2b  55                   push ebp
// 007ccb2c  57                   push edi
// 007ccb2d  ff1538e08900         call dword ptr [0x89e038]
// 007ccb33  57                   push edi
// 007ccb34  894610               mov dword ptr [esi + 0x10], eax
// 007ccb37  85c0                 test eax, eax
// 007ccb39  7461                 je 0x7ccb9c
// 007ccb3b  ff1508e08900         call dword ptr [0x89e008]
// 007ccb41  5f                   pop edi
// 007ccb42  5b                   pop ebx
// 007ccb43  5e                   pop esi
// 007ccb44  33c0                 xor eax, eax
// 007ccb46  5d                   pop ebp
// 007ccb47  c20c00               ret 0xc
// 007ccb4a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007ccb4e  681f000200           push 0x2001f
// 007ccb53  55                   push ebp
// 007ccb54  85db                 test ebx, ebx
// 007ccb56  751b                 jne 0x7ccb73
// 007ccb58  8b06                 mov eax, dword ptr [esi]
// 007ccb5a  8b5008               mov edx, dword ptr [eax + 8]
// 007ccb5d  ffd2                 call edx
// 007ccb5f  8bf8                 mov edi, eax
// 007ccb61  85ff                 test edi, edi
// 007ccb63  74dc                 je 0x7ccb41
// 007ccb65  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ccb69  50                   push eax
// 007ccb6a  57                   push edi
// 007ccb6b  ff1504e08900         call dword ptr [0x89e004]
// 007ccb71  ebc0                 jmp 0x7ccb33
// 007ccb73  8b16                 mov edx, dword ptr [esi]
// 007ccb75  8b4208               mov eax, dword ptr [edx + 8]
// 007ccb78  ffd0                 call eax
// 007ccb7a  8bf8                 mov edi, eax
// 007ccb7c  85ff                 test edi, edi
// 007ccb7e  74c1                 je 0x7ccb41
// 007ccb80  53                   push ebx
// 007ccb81  ff15e0e18900         call dword ptr [0x89e1e0]
// 007ccb87  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ccb8b  40                   inc eax
// 007ccb8c  50                   push eax
// 007ccb8d  53                   push ebx
// 007ccb8e  6a01                 push 1
// 007ccb90  6a00                 push 0
// 007ccb92  51                   push ecx
// 007ccb93  57                   push edi
// 007ccb94  ff1514e08900         call dword ptr [0x89e014]
// 007ccb9a  eb97                 jmp 0x7ccb33
// 007ccb9c  ff1508e08900         call dword ptr [0x89e008]
// 007ccba2  5f                   pop edi
// 007ccba3  5b                   pop ebx
// 007ccba4  5e                   pop esi
// 007ccba5  b801000000           mov eax, 1
// 007ccbaa  5d                   pop ebp
// 007ccbab  c20c00               ret 0xc
// 007ccbae  b9c426a500           mov ecx, 0xa526c4
// 007ccbb3  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ccbb9  8b542414             mov edx, dword ptr [esp + 0x14]
// 007ccbbd  50                   push eax
// 007ccbbe  8b442414             mov eax, dword ptr [esp + 0x14]
// 007ccbc2  52                   push edx
// 007ccbc3  50                   push eax
// 007ccbc4  55                   push ebp
// 007ccbc5  ff156ce38900         call dword ptr [0x89e36c]
// 007ccbcb  5e                   pop esi
// 007ccbcc  5d                   pop ebp
// 007ccbcd  c20c00               ret 0xc
// copied from an identical function in another client (function ?WriteProfileStringA@CXTRegistryManager@@QAEHPBD00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp