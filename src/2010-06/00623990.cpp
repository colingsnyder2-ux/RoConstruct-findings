// roc 2010-06 00623990  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00623990
//
// 00623990  6aff                 push -1
// 00623992  64a100000000         mov eax, dword ptr fs:[0]
// 00623998  8b542408             mov edx, dword ptr [esp + 8]
// 0062399c  68a0af9900           push 0x99afa0
// 006239a1  50                   push eax
// 006239a2  64892500000000       mov dword ptr fs:[0], esp
// 006239a9  83ec1c               sub esp, 0x1c
// 006239ac  53                   push ebx
// 006239ad  55                   push ebp
// 006239ae  56                   push esi
// 006239af  57                   push edi
// 006239b0  8bf9                 mov edi, ecx
// 006239b2  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006239b5  8b4104               mov eax, dword ptr [ecx + 4]
// 006239b8  33db                 xor ebx, ebx
// 006239ba  8be9                 mov ebp, ecx
// 006239bc  385819               cmp byte ptr [eax + 0x19], bl
// 006239bf  7515                 jne 0x6239d6
// 006239c1  8b0a                 mov ecx, dword ptr [edx]
// 006239c3  39480c               cmp dword ptr [eax + 0xc], ecx
// 006239c6  7d05                 jge 0x6239cd
// 006239c8  8b4008               mov eax, dword ptr [eax + 8]
// 006239cb  eb04                 jmp 0x6239d1
// 006239cd  8be8                 mov ebp, eax
// 006239cf  8b00                 mov eax, dword ptr [eax]
// 006239d1  385819               cmp byte ptr [eax + 0x19], bl
// 006239d4  74ed                 je 0x6239c3
// 006239d6  8b37                 mov esi, dword ptr [edi]
// 006239d8  8b4718               mov eax, dword ptr [edi + 0x18]
// 006239db  89442414             mov dword ptr [esp + 0x14], eax
// 006239df  3bf3                 cmp esi, ebx
// 006239e1  7404                 je 0x6239e7
// 006239e3  3bf6                 cmp esi, esi
// 006239e5  740c                 je 0x6239f3
// 006239e7  ff150ca99e00         call dword ptr [0x9ea90c]
// 006239ed  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006239f1  33db                 xor ebx, ebx
// 006239f3  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 006239f7  7407                 je 0x623a00
// 006239f9  8b0a                 mov ecx, dword ptr [edx]
// 006239fb  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 006239fe  7d6d                 jge 0x623a6d
// 00623a00  895c2410             mov dword ptr [esp + 0x10], ebx
// 00623a04  895c2414             mov dword ptr [esp + 0x14], ebx
// 00623a08  8b12                 mov edx, dword ptr [edx]
// 00623a0a  895c2434             mov dword ptr [esp + 0x34], ebx
// 00623a0e  89542420             mov dword ptr [esp + 0x20], edx
// 00623a12  895c2424             mov dword ptr [esp + 0x24], ebx
// 00623a16  895c2428             mov dword ptr [esp + 0x28], ebx
// 00623a1a  8d442420             lea eax, [esp + 0x20]
// 00623a1e  50                   push eax
// 00623a1f  55                   push ebp
// 00623a20  56                   push esi
// 00623a21  8d4c2424             lea ecx, [esp + 0x24]
// 00623a25  51                   push ecx
// 00623a26  8bcf                 mov ecx, edi
// 00623a28  c644244401           mov byte ptr [esp + 0x44], 1
// 00623a2d  e8def9ffff           call 0x623410
// 00623a32  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00623a36  8b30                 mov esi, dword ptr [eax]
// 00623a38  8b6804               mov ebp, dword ptr [eax + 4]
// 00623a3b  885c2434             mov byte ptr [esp + 0x34], bl
// 00623a3f  3bfb                 cmp edi, ebx
// 00623a41  742a                 je 0x623a6d
// 00623a43  8d5704               lea edx, [edi + 4]
// 00623a46  83c8ff               or eax, 0xffffffff
// 00623a49  f00fc102             lock xadd dword ptr [edx], eax
// 00623a4d  751e                 jne 0x623a6d
// 00623a4f  8b17                 mov edx, dword ptr [edi]
// 00623a51  8b4204               mov eax, dword ptr [edx + 4]
// 00623a54  8bcf                 mov ecx, edi
// 00623a56  ffd0                 call eax
// 00623a58  8d4f08               lea ecx, [edi + 8]
// 00623a5b  83caff               or edx, 0xffffffff
// 00623a5e  f00fc111             lock xadd dword ptr [ecx], edx
// 00623a62  7509                 jne 0x623a6d
// 00623a64  8b07                 mov eax, dword ptr [edi]
// 00623a66  8b5008               mov edx, dword ptr [eax + 8]
// 00623a69  8bcf                 mov ecx, edi
// 00623a6b  ffd2                 call edx
// 00623a6d  3bf3                 cmp esi, ebx
// 00623a6f  752b                 jne 0x623a9c
// 00623a71  ff150ca99e00         call dword ptr [0x9ea90c]
// 00623a77  33f6                 xor esi, esi
// 00623a79  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 00623a7c  7506                 jne 0x623a84
// 00623a7e  ff150ca99e00         call dword ptr [0x9ea90c]
// 00623a84  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00623a88  5f                   pop edi
// 00623a89  5e                   pop esi
// 00623a8a  8d4510               lea eax, [ebp + 0x10]
// 00623a8d  5d                   pop ebp
// 00623a8e  5b                   pop ebx
// 00623a8f  64890d00000000       mov dword ptr fs:[0], ecx
// 00623a96  83c428               add esp, 0x28
// 00623a99  c20400               ret 4
// 00623a9c  8b36                 mov esi, dword ptr [esi]
// 00623a9e  ebd9                 jmp 0x623a79
// copied from an identical function in another client (function ??A?$map@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@@std@@QAEAAV?$shared_ptr@UT@@@boost@@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll map_int_sp.cpp