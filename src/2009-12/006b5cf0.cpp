// roc 2009-12 006b5cf0  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b5cf0
//
// 006b5cf0  6aff                 push -1
// 006b5cf2  64a100000000         mov eax, dword ptr fs:[0]
// 006b5cf8  8b542408             mov edx, dword ptr [esp + 8]
// 006b5cfc  6840869400           push 0x948640
// 006b5d01  50                   push eax
// 006b5d02  64892500000000       mov dword ptr fs:[0], esp
// 006b5d09  83ec1c               sub esp, 0x1c
// 006b5d0c  53                   push ebx
// 006b5d0d  55                   push ebp
// 006b5d0e  56                   push esi
// 006b5d0f  57                   push edi
// 006b5d10  8bf9                 mov edi, ecx
// 006b5d12  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006b5d15  8b4104               mov eax, dword ptr [ecx + 4]
// 006b5d18  33db                 xor ebx, ebx
// 006b5d1a  8be9                 mov ebp, ecx
// 006b5d1c  385819               cmp byte ptr [eax + 0x19], bl
// 006b5d1f  7515                 jne 0x6b5d36
// 006b5d21  8b0a                 mov ecx, dword ptr [edx]
// 006b5d23  39480c               cmp dword ptr [eax + 0xc], ecx
// 006b5d26  7d05                 jge 0x6b5d2d
// 006b5d28  8b4008               mov eax, dword ptr [eax + 8]
// 006b5d2b  eb04                 jmp 0x6b5d31
// 006b5d2d  8be8                 mov ebp, eax
// 006b5d2f  8b00                 mov eax, dword ptr [eax]
// 006b5d31  385819               cmp byte ptr [eax + 0x19], bl
// 006b5d34  74ed                 je 0x6b5d23
// 006b5d36  8b37                 mov esi, dword ptr [edi]
// 006b5d38  8b4718               mov eax, dword ptr [edi + 0x18]
// 006b5d3b  89442414             mov dword ptr [esp + 0x14], eax
// 006b5d3f  3bf3                 cmp esi, ebx
// 006b5d41  7404                 je 0x6b5d47
// 006b5d43  3bf6                 cmp esi, esi
// 006b5d45  740c                 je 0x6b5d53
// 006b5d47  ff1560b79800         call dword ptr [0x98b760]
// 006b5d4d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006b5d51  33db                 xor ebx, ebx
// 006b5d53  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 006b5d57  7407                 je 0x6b5d60
// 006b5d59  8b0a                 mov ecx, dword ptr [edx]
// 006b5d5b  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 006b5d5e  7d6d                 jge 0x6b5dcd
// 006b5d60  895c2410             mov dword ptr [esp + 0x10], ebx
// 006b5d64  895c2414             mov dword ptr [esp + 0x14], ebx
// 006b5d68  8b12                 mov edx, dword ptr [edx]
// 006b5d6a  895c2434             mov dword ptr [esp + 0x34], ebx
// 006b5d6e  89542420             mov dword ptr [esp + 0x20], edx
// 006b5d72  895c2424             mov dword ptr [esp + 0x24], ebx
// 006b5d76  895c2428             mov dword ptr [esp + 0x28], ebx
// 006b5d7a  8d442420             lea eax, [esp + 0x20]
// 006b5d7e  50                   push eax
// 006b5d7f  55                   push ebp
// 006b5d80  56                   push esi
// 006b5d81  8d4c2424             lea ecx, [esp + 0x24]
// 006b5d85  51                   push ecx
// 006b5d86  8bcf                 mov ecx, edi
// 006b5d88  c644244401           mov byte ptr [esp + 0x44], 1
// 006b5d8d  e85ef9ffff           call 0x6b56f0
// 006b5d92  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006b5d96  8b30                 mov esi, dword ptr [eax]
// 006b5d98  8b6804               mov ebp, dword ptr [eax + 4]
// 006b5d9b  885c2434             mov byte ptr [esp + 0x34], bl
// 006b5d9f  3bfb                 cmp edi, ebx
// 006b5da1  742a                 je 0x6b5dcd
// 006b5da3  8d5704               lea edx, [edi + 4]
// 006b5da6  83c8ff               or eax, 0xffffffff
// 006b5da9  f00fc102             lock xadd dword ptr [edx], eax
// 006b5dad  751e                 jne 0x6b5dcd
// 006b5daf  8b17                 mov edx, dword ptr [edi]
// 006b5db1  8b4204               mov eax, dword ptr [edx + 4]
// 006b5db4  8bcf                 mov ecx, edi
// 006b5db6  ffd0                 call eax
// 006b5db8  8d4f08               lea ecx, [edi + 8]
// 006b5dbb  83caff               or edx, 0xffffffff
// 006b5dbe  f00fc111             lock xadd dword ptr [ecx], edx
// 006b5dc2  7509                 jne 0x6b5dcd
// 006b5dc4  8b07                 mov eax, dword ptr [edi]
// 006b5dc6  8b5008               mov edx, dword ptr [eax + 8]
// 006b5dc9  8bcf                 mov ecx, edi
// 006b5dcb  ffd2                 call edx
// 006b5dcd  3bf3                 cmp esi, ebx
// 006b5dcf  752b                 jne 0x6b5dfc
// 006b5dd1  ff1560b79800         call dword ptr [0x98b760]
// 006b5dd7  33f6                 xor esi, esi
// 006b5dd9  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 006b5ddc  7506                 jne 0x6b5de4
// 006b5dde  ff1560b79800         call dword ptr [0x98b760]
// 006b5de4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006b5de8  5f                   pop edi
// 006b5de9  5e                   pop esi
// 006b5dea  8d4510               lea eax, [ebp + 0x10]
// 006b5ded  5d                   pop ebp
// 006b5dee  5b                   pop ebx
// 006b5def  64890d00000000       mov dword ptr fs:[0], ecx
// 006b5df6  83c428               add esp, 0x28
// 006b5df9  c20400               ret 4
// 006b5dfc  8b36                 mov esi, dword ptr [esi]
// 006b5dfe  ebd9                 jmp 0x6b5dd9
// copied from an identical function in another client (function ??A?$map@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@@std@@QAEAAV?$shared_ptr@UT@@@boost@@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll map_int_sp.cpp