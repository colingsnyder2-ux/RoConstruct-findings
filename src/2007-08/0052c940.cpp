// roc 2007-08 0052c940  unit: seg_00520000  size: 482 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052c940
//
// 0052c940  64a100000000         mov eax, dword ptr fs:[0]
// 0052c946  6aff                 push -1
// 0052c948  68b5027500           push 0x7502b5
// 0052c94d  50                   push eax
// 0052c94e  64892500000000       mov dword ptr fs:[0], esp
// 0052c955  83ec34               sub esp, 0x34
// 0052c958  57                   push edi
// 0052c959  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0052c95d  85ff                 test edi, edi
// 0052c95f  7515                 jne 0x52c976
// 0052c961  e8ca010000           call 0x52cb30
// 0052c966  5f                   pop edi
// 0052c967  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0052c96b  64890d00000000       mov dword ptr fs:[0], ecx
// 0052c972  83c440               add esp, 0x40
// 0052c975  c3                   ret 
// 0052c976  53                   push ebx
// 0052c977  56                   push esi
// 0052c978  68540c8c00           push 0x8c0c54
// 0052c97d  6830c75200           push 0x52c730
// 0052c982  e8998b1f00           call 0x725520
// 0052c987  83c408               add esp, 8
// 0052c98a  e841fdffff           call 0x52c6d0
// 0052c98f  8bd8                 mov ebx, eax
// 0052c991  8bcb                 mov ecx, ebx
// 0052c993  895c2414             mov dword ptr [esp + 0x14], ebx
// 0052c997  e8b48d1f00           call 0x725750
// 0052c99c  c644241801           mov byte ptr [esp + 0x18], 1
// 0052c9a1  57                   push edi
// 0052c9a2  8d4c2428             lea ecx, [esp + 0x28]
// 0052c9a6  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0052c9ae  ff1598e67700         call dword ptr [0x77e698]
// 0052c9b4  50                   push eax
// 0052c9b5  8d442410             lea eax, [esp + 0x10]
// 0052c9b9  50                   push eax
// 0052c9ba  c644245001           mov byte ptr [esp + 0x50], 1
// 0052c9bf  e8ecfeffff           call 0x52c8b0
// 0052c9c4  8bc8                 mov ecx, eax
// 0052c9c6  e8a5f30800           call 0x5bbd70
// 0052c9cb  8d4c2424             lea ecx, [esp + 0x24]
// 0052c9cf  c644244800           mov byte ptr [esp + 0x48], 0
// 0052c9d4  ff15ace67700         call dword ptr [0x77e6ac]
// 0052c9da  e8d1feffff           call 0x52c8b0
// 0052c9df  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052c9e3  85f6                 test esi, esi
// 0052c9e5  8b4804               mov ecx, dword ptr [eax + 4]
// 0052c9e8  894c2420             mov dword ptr [esp + 0x20], ecx
// 0052c9ec  7404                 je 0x52c9f2
// 0052c9ee  3bf0                 cmp esi, eax
// 0052c9f0  7406                 je 0x52c9f8
// 0052c9f2  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052c9f8  55                   push ebp
// 0052c9f9  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052c9fd  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 0052ca01  0f8480000000         je 0x52ca87
// 0052ca07  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0052ca0b  83ffff               cmp edi, -1
// 0052ca0e  743b                 je 0x52ca4b
// 0052ca10  85f6                 test esi, esi
// 0052ca12  7506                 jne 0x52ca1a
// 0052ca14  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052ca1a  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0052ca1d  7506                 jne 0x52ca25
// 0052ca1f  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052ca25  8b5528               mov edx, dword ptr [ebp + 0x28]
// 0052ca28  893a                 mov dword ptr [edx], edi
// 0052ca2a  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0052ca2d  7506                 jne 0x52ca35
// 0052ca2f  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052ca35  8d442458             lea eax, [esp + 0x58]
// 0052ca39  50                   push eax
// 0052ca3a  e801fdffff           call 0x52c740
// 0052ca3f  8bc8                 mov ecx, eax
// 0052ca41  e85a7f0500           call 0x5849a0
// 0052ca46  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 0052ca49  8908                 mov dword ptr [eax], ecx
// 0052ca4b  85f6                 test esi, esi
// 0052ca4d  7506                 jne 0x52ca55
// 0052ca4f  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052ca55  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0052ca58  7506                 jne 0x52ca60
// 0052ca5a  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052ca60  8b6d28               mov ebp, dword ptr [ebp + 0x28]
// 0052ca63  8bcb                 mov ecx, ebx
// 0052ca65  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0052ca6d  e8fe8c1f00           call 0x725770
// 0052ca72  8bc5                 mov eax, ebp
// 0052ca74  5d                   pop ebp
// 0052ca75  5e                   pop esi
// 0052ca76  5b                   pop ebx
// 0052ca77  5f                   pop edi
// 0052ca78  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0052ca7c  64890d00000000       mov dword ptr fs:[0], ecx
// 0052ca83  83c440               add esp, 0x40
// 0052ca86  c3                   ret 
// 0052ca87  6a20                 push 0x20
// 0052ca89  e868341000           call 0x62fef6
// 0052ca8e  8bf0                 mov esi, eax
// 0052ca90  83c404               add esp, 4
// 0052ca93  89742454             mov dword ptr [esp + 0x54], esi
// 0052ca97  85f6                 test esi, esi
// 0052ca99  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0052ca9e  7412                 je 0x52cab2
// 0052caa0  8b542458             mov edx, dword ptr [esp + 0x58]
// 0052caa4  57                   push edi
// 0052caa5  8d4e04               lea ecx, [esi + 4]
// 0052caa8  8916                 mov dword ptr [esi], edx
// 0052caaa  ff1598e67700         call dword ptr [0x77e698]
// 0052cab0  eb02                 jmp 0x52cab4
// 0052cab2  33f6                 xor esi, esi
// 0052cab4  57                   push edi
// 0052cab5  8d4c242c             lea ecx, [esp + 0x2c]
// 0052cab9  c644245000           mov byte ptr [esp + 0x50], 0
// 0052cabe  ff1598e67700         call dword ptr [0x77e698]
// 0052cac4  8d442428             lea eax, [esp + 0x28]
// 0052cac8  50                   push eax
// 0052cac9  c644245003           mov byte ptr [esp + 0x50], 3
// 0052cace  e8ddfdffff           call 0x52c8b0
// 0052cad3  8bc8                 mov ecx, eax
// 0052cad5  e8c6640b00           call 0x5e2fa0
// 0052cada  8d4c2428             lea ecx, [esp + 0x28]
// 0052cade  8930                 mov dword ptr [eax], esi
// 0052cae0  c644244c00           mov byte ptr [esp + 0x4c], 0
// 0052cae5  ff15ace67700         call dword ptr [0x77e6ac]
// 0052caeb  8d4c2458             lea ecx, [esp + 0x58]
// 0052caef  51                   push ecx
// 0052caf0  e84bfcffff           call 0x52c740
// 0052caf5  8bc8                 mov ecx, eax
// 0052caf7  e8a47e0500           call 0x5849a0
// 0052cafc  8bcb                 mov ecx, ebx
// 0052cafe  8930                 mov dword ptr [eax], esi
// 0052cb00  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0052cb08  e8638c1f00           call 0x725770
// 0052cb0d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0052cb11  5d                   pop ebp
// 0052cb12  8bc6                 mov eax, esi
// 0052cb14  5e                   pop esi
// 0052cb15  5b                   pop ebx
// 0052cb16  5f                   pop edi
// 0052cb17  64890d00000000       mov dword ptr fs:[0], ecx
// 0052cb1e  83c440               add esp, 0x40
// 0052cb21  c3                   ret 
// library openrbx-client/App\util\Name.cpp (function ?declare@Name@RBX@@SAABV12@PBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
