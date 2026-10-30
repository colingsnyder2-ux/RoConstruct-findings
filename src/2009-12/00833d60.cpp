// roc 2009-12 00833d60  unit: CXTTreeBase  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00833d60
//
// 00833d60  83ec08               sub esp, 8
// 00833d63  56                   push esi
// 00833d64  8bf1                 mov esi, ecx
// 00833d66  837e0400             cmp dword ptr [esi + 4], 0
// 00833d6a  750f                 jne 0x833d7b
// 00833d6c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00833d6f  e8bc00fcff           call 0x7f3e30
// 00833d74  5e                   pop esi
// 00833d75  83c408               add esp, 8
// 00833d78  c20c00               ret 0xc
// 00833d7b  53                   push ebx
// 00833d7c  57                   push edi
// 00833d7d  8b3d30cc9800         mov edi, dword ptr [0x98cc30]
// 00833d83  6a11                 push 0x11
// 00833d85  ffd7                 call edi
// 00833d87  33db                 xor ebx, ebx
// 00833d89  6685c0               test ax, ax
// 00833d8c  0f9cc3               setl bl
// 00833d8f  6a10                 push 0x10
// 00833d91  895c2414             mov dword ptr [esp + 0x14], ebx
// 00833d95  ffd7                 call edi
// 00833d97  33c9                 xor ecx, ecx
// 00833d99  6685c0               test ax, ax
// 00833d9c  0f9cc1               setl cl
// 00833d9f  8bc1                 mov eax, ecx
// 00833da1  8944240c             mov dword ptr [esp + 0xc], eax
// 00833da5  85db                 test ebx, ebx
// 00833da7  7530                 jne 0x833dd9
// 00833da9  85c0                 test eax, eax
// 00833dab  752c                 jne 0x833dd9
// 00833dad  8bce                 mov ecx, esi
// 00833daf  e8ccf8ffff           call 0x833680
// 00833db4  83f801               cmp eax, 1
// 00833db7  7715                 ja 0x833dce
// 00833db9  751e                 jne 0x833dd9
// 00833dbb  8bce                 mov ecx, esi
// 00833dbd  e87edbffff           call 0x831940
// 00833dc2  50                   push eax
// 00833dc3  8bce                 mov ecx, esi
// 00833dc5  e8e6d7ffff           call 0x8315b0
// 00833dca  85c0                 test eax, eax
// 00833dcc  750b                 jne 0x833dd9
// 00833dce  6a00                 push 0
// 00833dd0  6a00                 push 0
// 00833dd2  8bce                 mov ecx, esi
// 00833dd4  e837e8ffff           call 0x832610
// 00833dd9  55                   push ebp
// 00833dda  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00833dde  8d45df               lea eax, [ebp - 0x21]
// 00833de1  33ff                 xor edi, edi
// 00833de3  83f807               cmp eax, 7
// 00833de6  773c                 ja 0x833e24
// 00833de8  0fb690d43e8300       movzx edx, byte ptr [eax + 0x833ed4]
// 00833def  ff2495cc3e8300       jmp dword ptr [edx*4 + 0x833ecc]
// 00833df6  8b4634               mov eax, dword ptr [esi + 0x34]
// 00833df9  8b4020               mov eax, dword ptr [eax + 0x20]
// 00833dfc  6a00                 push 0
// 00833dfe  6a09                 push 9
// 00833e00  680a110000           push 0x110a
// 00833e05  50                   push eax
// 00833e06  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00833e0c  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00833e10  8bf8                 mov edi, eax
// 00833e12  7503                 jne 0x833e17
// 00833e14  897e0c               mov dword ptr [esi + 0xc], edi
// 00833e17  85db                 test ebx, ebx
// 00833e19  7509                 jne 0x833e24
// 00833e1b  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00833e1f  7503                 jne 0x833e24
// 00833e21  895e0c               mov dword ptr [esi + 0xc], ebx
// 00833e24  83fd26               cmp ebp, 0x26
// 00833e27  7409                 je 0x833e32
// 00833e29  83fd21               cmp ebp, 0x21
// 00833e2c  7404                 je 0x833e32
// 00833e2e  33db                 xor ebx, ebx
// 00833e30  eb05                 jmp 0x833e37
// 00833e32  bb01000000           mov ebx, 1
// 00833e37  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00833e3a  e8f1fffbff           call 0x7f3e30
// 00833e3f  85ff                 test edi, edi
// 00833e41  747c                 je 0x833ebf
// 00833e43  837c241400           cmp dword ptr [esp + 0x14], 0
// 00833e48  7507                 jne 0x833e51
// 00833e4a  837c241000           cmp dword ptr [esp + 0x10], 0
// 00833e4f  746e                 je 0x833ebf
// 00833e51  83fd22               cmp ebp, 0x22
// 00833e54  741b                 je 0x833e71
// 00833e56  83fd21               cmp ebp, 0x21
// 00833e59  7416                 je 0x833e71
// 00833e5b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00833e5e  57                   push edi
// 00833e5f  85db                 test ebx, ebx
// 00833e61  7407                 je 0x833e6a
// 00833e63  e868daffff           call 0x8318d0
// 00833e68  eb1d                 jmp 0x833e87
// 00833e6a  e841daffff           call 0x8318b0
// 00833e6f  eb16                 jmp 0x833e87
// 00833e71  8b4634               mov eax, dword ptr [esi + 0x34]
// 00833e74  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00833e77  6a00                 push 0
// 00833e79  6a09                 push 9
// 00833e7b  680a110000           push 0x110a
// 00833e80  51                   push ecx
// 00833e81  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00833e87  85c0                 test eax, eax
// 00833e89  7502                 jne 0x833e8d
// 00833e8b  8bc7                 mov eax, edi
// 00833e8d  837c241000           cmp dword ptr [esp + 0x10], 0
// 00833e92  7418                 je 0x833eac
// 00833e94  8b560c               mov edx, dword ptr [esi + 0xc]
// 00833e97  6a01                 push 1
// 00833e99  50                   push eax
// 00833e9a  52                   push edx
// 00833e9b  8bce                 mov ecx, esi
// 00833e9d  e87ee8ffff           call 0x832720
// 00833ea2  5d                   pop ebp
// 00833ea3  5f                   pop edi
// 00833ea4  5b                   pop ebx
// 00833ea5  5e                   pop esi
// 00833ea6  83c408               add esp, 8
// 00833ea9  c20c00               ret 0xc
// 00833eac  837c241400           cmp dword ptr [esp + 0x14], 0
// 00833eb1  740c                 je 0x833ebf
// 00833eb3  6a01                 push 1
// 00833eb5  6a01                 push 1
// 00833eb7  50                   push eax
// 00833eb8  8bce                 mov ecx, esi
// 00833eba  e891e2ffff           call 0x832150
// 00833ebf  5d                   pop ebp
// 00833ec0  5f                   pop edi
// 00833ec1  5b                   pop ebx
// 00833ec2  5e                   pop esi
// 00833ec3  83c408               add esp, 8
// 00833ec6  c20c00               ret 0xc
// 00833ec9  8d4900               lea ecx, [ecx]
// 00833ecc  f63d8300243e         idiv byte ptr [0x3e240083]
// 00833ed2  830000               add dword ptr [eax], 0
// 00833ed5  0001                 add byte ptr [ecx], al
// 00833ed7  0101                 add dword ptr [ecx], eax
// 00833ed9  0001                 add byte ptr [ecx], al
// copied from an identical function in another client (function ?OnKeyDown@CXTTreeBase@@IAEXIII@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp