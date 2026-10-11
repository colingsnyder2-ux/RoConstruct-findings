// roc 2007-03 0052d8e0  unit: seg_00520000  size: 482 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052d8e0
//
// 0052d8e0  64a100000000         mov eax, dword ptr fs:[0]
// 0052d8e6  6aff                 push -1
// 0052d8e8  6825127500           push 0x751225
// 0052d8ed  50                   push eax
// 0052d8ee  64892500000000       mov dword ptr fs:[0], esp
// 0052d8f5  83ec34               sub esp, 0x34
// 0052d8f8  57                   push edi
// 0052d8f9  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0052d8fd  85ff                 test edi, edi
// 0052d8ff  7515                 jne 0x52d916
// 0052d901  e8ca010000           call 0x52dad0
// 0052d906  5f                   pop edi
// 0052d907  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0052d90b  64890d00000000       mov dword ptr fs:[0], ecx
// 0052d912  83c440               add esp, 0x40
// 0052d915  c3                   ret 
// 0052d916  53                   push ebx
// 0052d917  56                   push esi
// 0052d918  6824b18b00           push 0x8bb124
// 0052d91d  6860d65200           push 0x52d660
// 0052d922  e8298f1f00           call 0x726850
// 0052d927  83c408               add esp, 8
// 0052d92a  e8d1fcffff           call 0x52d600
// 0052d92f  8bd8                 mov ebx, eax
// 0052d931  8bcb                 mov ecx, ebx
// 0052d933  895c2414             mov dword ptr [esp + 0x14], ebx
// 0052d937  e844911f00           call 0x726a80
// 0052d93c  c644241801           mov byte ptr [esp + 0x18], 1
// 0052d941  57                   push edi
// 0052d942  8d4c2428             lea ecx, [esp + 0x28]
// 0052d946  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0052d94e  ff1578e77700         call dword ptr [0x77e778]
// 0052d954  50                   push eax
// 0052d955  8d442410             lea eax, [esp + 0x10]
// 0052d959  50                   push eax
// 0052d95a  c644245001           mov byte ptr [esp + 0x50], 1
// 0052d95f  e8ecfeffff           call 0x52d850
// 0052d964  8bc8                 mov ecx, eax
// 0052d966  e845280600           call 0x5901b0
// 0052d96b  8d4c2424             lea ecx, [esp + 0x24]
// 0052d96f  c644244800           mov byte ptr [esp + 0x48], 0
// 0052d974  ff158ce77700         call dword ptr [0x77e78c]
// 0052d97a  e8d1feffff           call 0x52d850
// 0052d97f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052d983  85f6                 test esi, esi
// 0052d985  8b4804               mov ecx, dword ptr [eax + 4]
// 0052d988  894c2420             mov dword ptr [esp + 0x20], ecx
// 0052d98c  7404                 je 0x52d992
// 0052d98e  3bf0                 cmp esi, eax
// 0052d990  7406                 je 0x52d998
// 0052d992  ff1544e97700         call dword ptr [0x77e944]
// 0052d998  55                   push ebp
// 0052d999  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052d99d  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 0052d9a1  0f8480000000         je 0x52da27
// 0052d9a7  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0052d9ab  83ffff               cmp edi, -1
// 0052d9ae  743b                 je 0x52d9eb
// 0052d9b0  85f6                 test esi, esi
// 0052d9b2  7506                 jne 0x52d9ba
// 0052d9b4  ff1544e97700         call dword ptr [0x77e944]
// 0052d9ba  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0052d9bd  7506                 jne 0x52d9c5
// 0052d9bf  ff1544e97700         call dword ptr [0x77e944]
// 0052d9c5  8b5528               mov edx, dword ptr [ebp + 0x28]
// 0052d9c8  893a                 mov dword ptr [edx], edi
// 0052d9ca  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0052d9cd  7506                 jne 0x52d9d5
// 0052d9cf  ff1544e97700         call dword ptr [0x77e944]
// 0052d9d5  8d442458             lea eax, [esp + 0x58]
// 0052d9d9  50                   push eax
// 0052d9da  e801fdffff           call 0x52d6e0
// 0052d9df  8bc8                 mov ecx, eax
// 0052d9e1  e83a380500           call 0x581220
// 0052d9e6  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 0052d9e9  8908                 mov dword ptr [eax], ecx
// 0052d9eb  85f6                 test esi, esi
// 0052d9ed  7506                 jne 0x52d9f5
// 0052d9ef  ff1544e97700         call dword ptr [0x77e944]
// 0052d9f5  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0052d9f8  7506                 jne 0x52da00
// 0052d9fa  ff1544e97700         call dword ptr [0x77e944]
// 0052da00  8b6d28               mov ebp, dword ptr [ebp + 0x28]
// 0052da03  8bcb                 mov ecx, ebx
// 0052da05  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0052da0d  e88e901f00           call 0x726aa0
// 0052da12  8bc5                 mov eax, ebp
// 0052da14  5d                   pop ebp
// 0052da15  5e                   pop esi
// 0052da16  5b                   pop ebx
// 0052da17  5f                   pop edi
// 0052da18  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0052da1c  64890d00000000       mov dword ptr fs:[0], ecx
// 0052da23  83c440               add esp, 0x40
// 0052da26  c3                   ret 
// 0052da27  6a20                 push 0x20
// 0052da29  e8da060f00           call 0x61e108
// 0052da2e  8bf0                 mov esi, eax
// 0052da30  83c404               add esp, 4
// 0052da33  89742454             mov dword ptr [esp + 0x54], esi
// 0052da37  85f6                 test esi, esi
// 0052da39  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0052da3e  7412                 je 0x52da52
// 0052da40  8b542458             mov edx, dword ptr [esp + 0x58]
// 0052da44  57                   push edi
// 0052da45  8d4e04               lea ecx, [esi + 4]
// 0052da48  8916                 mov dword ptr [esi], edx
// 0052da4a  ff1578e77700         call dword ptr [0x77e778]
// 0052da50  eb02                 jmp 0x52da54
// 0052da52  33f6                 xor esi, esi
// 0052da54  57                   push edi
// 0052da55  8d4c242c             lea ecx, [esp + 0x2c]
// 0052da59  c644245000           mov byte ptr [esp + 0x50], 0
// 0052da5e  ff1578e77700         call dword ptr [0x77e778]
// 0052da64  8d442428             lea eax, [esp + 0x28]
// 0052da68  50                   push eax
// 0052da69  c644245003           mov byte ptr [esp + 0x50], 3
// 0052da6e  e8ddfdffff           call 0x52d850
// 0052da73  8bc8                 mov ecx, eax
// 0052da75  e8961b0400           call 0x56f610
// 0052da7a  8d4c2428             lea ecx, [esp + 0x28]
// 0052da7e  8930                 mov dword ptr [eax], esi
// 0052da80  c644244c00           mov byte ptr [esp + 0x4c], 0
// 0052da85  ff158ce77700         call dword ptr [0x77e78c]
// 0052da8b  8d4c2458             lea ecx, [esp + 0x58]
// 0052da8f  51                   push ecx
// 0052da90  e84bfcffff           call 0x52d6e0
// 0052da95  8bc8                 mov ecx, eax
// 0052da97  e884370500           call 0x581220
// 0052da9c  8bcb                 mov ecx, ebx
// 0052da9e  8930                 mov dword ptr [eax], esi
// 0052daa0  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0052daa8  e8f38f1f00           call 0x726aa0
// 0052daad  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0052dab1  5d                   pop ebp
// 0052dab2  8bc6                 mov eax, esi
// 0052dab4  5e                   pop esi
// 0052dab5  5b                   pop ebx
// 0052dab6  5f                   pop edi
// 0052dab7  64890d00000000       mov dword ptr fs:[0], ecx
// 0052dabe  83c440               add esp, 0x40
// 0052dac1  c3                   ret 
// library openrbx-client/App\util\Name.cpp (function ?declare@Name@RBX@@SAABV12@PBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
