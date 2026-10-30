// roc 2009-12 0083e6d0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 442 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083e6d0
//
// 0083e6d0  8b442404             mov eax, dword ptr [esp + 4]
// 0083e6d4  55                   push ebp
// 0083e6d5  8be9                 mov ebp, ecx
// 0083e6d7  3d00020000           cmp eax, 0x200
// 0083e6dc  0f849f010000         je 0x83e881
// 0083e6e2  3da0000000           cmp eax, 0xa0
// 0083e6e7  0f8494010000         je 0x83e881
// 0083e6ed  8b8db8000000         mov ecx, dword ptr [ebp + 0xb8]
// 0083e6f3  53                   push ebx
// 0083e6f4  56                   push esi
// 0083e6f5  57                   push edi
// 0083e6f6  e87574fdff           call 0x815b70
// 0083e6fb  8bf8                 mov edi, eax
// 0083e6fd  6a00                 push 0
// 0083e6ff  8bcf                 mov ecx, edi
// 0083e701  e89a080300           call 0x86efa0
// 0083e706  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0083e70a  85c0                 test eax, eax
// 0083e70c  7478                 je 0x83e786
// 0083e70e  8b4308               mov eax, dword ptr [ebx + 8]
// 0083e711  50                   push eax
// 0083e712  e81354fbff           call 0x7f3b2a
// 0083e717  8bf0                 mov esi, eax
// 0083e719  e8725afcff           call 0x804190
// 0083e71e  50                   push eax
// 0083e71f  8bce                 mov ecx, esi
// 0083e721  e8c256fbff           call 0x7f3de8
// 0083e726  85c0                 test eax, eax
// 0083e728  740f                 je 0x83e739
// 0083e72a  8bce                 mov ecx, esi
// 0083e72c  e89f5dfcff           call 0x8044d0
// 0083e731  85c0                 test eax, eax
// 0083e733  0f843c010000         je 0x83e875
// 0083e739  85f6                 test esi, esi
// 0083e73b  7436                 je 0x83e773
// 0083e73d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0083e740  51                   push ecx
// 0083e741  ff15bccb9800         call dword ptr [0x98cbbc]
// 0083e747  50                   push eax
// 0083e748  e8dd53fbff           call 0x7f3b2a
// 0083e74d  8bf0                 mov esi, eax
// 0083e74f  85f6                 test esi, esi
// 0083e751  7420                 je 0x83e773
// 0083e753  e8385afcff           call 0x804190
// 0083e758  50                   push eax
// 0083e759  8bce                 mov ecx, esi
// 0083e75b  e88856fbff           call 0x7f3de8
// 0083e760  85c0                 test eax, eax
// 0083e762  740f                 je 0x83e773
// 0083e764  8bce                 mov ecx, esi
// 0083e766  e8655dfcff           call 0x8044d0
// 0083e76b  85c0                 test eax, eax
// 0083e76d  0f8402010000         je 0x83e875
// 0083e773  8b5304               mov edx, dword ptr [ebx + 4]
// 0083e776  8b03                 mov eax, dword ptr [ebx]
// 0083e778  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083e77c  52                   push edx
// 0083e77d  50                   push eax
// 0083e77e  51                   push ecx
// 0083e77f  8bcf                 mov ecx, edi
// 0083e781  e84a0b0300           call 0x86f2d0
// 0083e786  8b8db4000000         mov ecx, dword ptr [ebp + 0xb4]
// 0083e78c  e8e17c0e00           call 0x926472
// 0083e791  8b35cccb9800         mov esi, dword ptr [0x98cbcc]
// 0083e797  85c0                 test eax, eax
// 0083e799  791b                 jns 0x83e7b6
// 0083e79b  ffd6                 call esi
// 0083e79d  8b95b4000000         mov edx, dword ptr [ebp + 0xb4]
// 0083e7a3  8b7a20               mov edi, dword ptr [edx + 0x20]
// 0083e7a6  e8a5f4ffff           call 0x83dc50
// 0083e7ab  85c0                 test eax, eax
// 0083e7ad  7507                 jne 0x83e7b6
// 0083e7af  8bcd                 mov ecx, ebp
// 0083e7b1  e84c54fbff           call 0x7f3c02
// 0083e7b6  8b8db4000000         mov ecx, dword ptr [ebp + 0xb4]
// 0083e7bc  8b4308               mov eax, dword ptr [ebx + 8]
// 0083e7bf  8b7920               mov edi, dword ptr [ecx + 0x20]
// 0083e7c2  e889f4ffff           call 0x83dc50
// 0083e7c7  85c0                 test eax, eax
// 0083e7c9  0f84a6000000         je 0x83e875
// 0083e7cf  8b4308               mov eax, dword ptr [ebx + 8]
// 0083e7d2  8b7d20               mov edi, dword ptr [ebp + 0x20]
// 0083e7d5  e876f4ffff           call 0x83dc50
// 0083e7da  85c0                 test eax, eax
// 0083e7dc  0f8593000000         jne 0x83e875
// 0083e7e2  ffd6                 call esi
// 0083e7e4  85c0                 test eax, eax
// 0083e7e6  7410                 je 0x83e7f8
// 0083e7e8  ffd6                 call esi
// 0083e7ea  8bf8                 mov edi, eax
// 0083e7ec  8b4308               mov eax, dword ptr [ebx + 8]
// 0083e7ef  e85cf4ffff           call 0x83dc50
// 0083e7f4  85c0                 test eax, eax
// 0083e7f6  757d                 jne 0x83e875
// 0083e7f8  8b5308               mov edx, dword ptr [ebx + 8]
// 0083e7fb  52                   push edx
// 0083e7fc  e82953fbff           call 0x7f3b2a
// 0083e801  8bf0                 mov esi, eax
// 0083e803  85f6                 test esi, esi
// 0083e805  7465                 je 0x83e86c
// 0083e807  8bce                 mov ecx, esi
// 0083e809  e8f244bcff           call 0x402d00
// 0083e80e  8bf8                 mov edi, eax
// 0083e810  e87b59fcff           call 0x804190
// 0083e815  50                   push eax
// 0083e816  8bce                 mov ecx, esi
// 0083e818  e8cb55fbff           call 0x7f3de8
// 0083e81d  85c0                 test eax, eax
// 0083e81f  741b                 je 0x83e83c
// 0083e821  8bce                 mov ecx, esi
// 0083e823  e8a85cfcff           call 0x8044d0
// 0083e828  33c9                 xor ecx, ecx
// 0083e82a  3b85b8000000         cmp eax, dword ptr [ebp + 0xb8]
// 0083e830  5f                   pop edi
// 0083e831  0f94c1               sete cl
// 0083e834  5e                   pop esi
// 0083e835  5b                   pop ebx
// 0083e836  5d                   pop ebp
// 0083e837  8bc1                 mov eax, ecx
// 0083e839  c20800               ret 8
// 0083e83c  85ff                 test edi, edi
// 0083e83e  742c                 je 0x83e86c
// 0083e840  e84b59fcff           call 0x804190
// 0083e845  50                   push eax
// 0083e846  8bcf                 mov ecx, edi
// 0083e848  e89b55fbff           call 0x7f3de8
// 0083e84d  85c0                 test eax, eax
// 0083e84f  741b                 je 0x83e86c
// 0083e851  8bcf                 mov ecx, edi
// 0083e853  e8785cfcff           call 0x8044d0
// 0083e858  33d2                 xor edx, edx
// 0083e85a  3b85b8000000         cmp eax, dword ptr [ebp + 0xb8]
// 0083e860  5f                   pop edi
// 0083e861  0f94c2               sete dl
// 0083e864  5e                   pop esi
// 0083e865  5b                   pop ebx
// 0083e866  5d                   pop ebp
// 0083e867  8bc2                 mov eax, edx
// 0083e869  c20800               ret 8
// 0083e86c  5f                   pop edi
// 0083e86d  5e                   pop esi
// 0083e86e  5b                   pop ebx
// 0083e86f  33c0                 xor eax, eax
// 0083e871  5d                   pop ebp
// 0083e872  c20800               ret 8
// 0083e875  5f                   pop edi
// 0083e876  5e                   pop esi
// 0083e877  5b                   pop ebx
// 0083e878  b801000000           mov eax, 1
// 0083e87d  5d                   pop ebp
// 0083e87e  c20800               ret 8
// 0083e881  b801000000           mov eax, 1
// 0083e886  5d                   pop ebp
// 0083e887  c20800               ret 8
// copied from an identical function in another client (function ?FilterMouse@CXTPCustomizeSheet@@AAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp