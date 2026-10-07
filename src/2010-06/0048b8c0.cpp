// roc 2010-06 0048b8c0  unit: G3D::Win32Window  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048b8c0
//
// 0048b8c0  6aff                 push -1
// 0048b8c2  6833629800           push 0x986233
// 0048b8c7  64a100000000         mov eax, dword ptr fs:[0]
// 0048b8cd  50                   push eax
// 0048b8ce  64892500000000       mov dword ptr fs:[0], esp
// 0048b8d5  51                   push ecx
// 0048b8d6  53                   push ebx
// 0048b8d7  33db                 xor ebx, ebx
// 0048b8d9  895c2410             mov dword ptr [esp + 0x10], ebx
// 0048b8dd  381d9438c000         cmp byte ptr [0xc03894], bl
// 0048b8e3  7422                 je 0x48b907
// 0048b8e5  8d4c2458             lea ecx, [esp + 0x58]
// 0048b8e9  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0048b8f1  ff1500a49e00         call dword ptr [0x9ea400]
// 0048b8f7  5b                   pop ebx
// 0048b8f8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048b8fc  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b903  83c410               add esp, 0x10
// 0048b906  c3                   ret 
// 0048b907  b810000000           mov eax, 0x10
// 0048b90c  56                   push esi
// 0048b90d  68f0010000           push 0x1f0
// 0048b912  c6059438c00001       mov byte ptr [0xc03894], 1
// 0048b919  885c245e             mov byte ptr [esp + 0x5e], bl
// 0048b91d  89442420             mov dword ptr [esp + 0x20], eax
// 0048b921  89442424             mov dword ptr [esp + 0x24], eax
// 0048b925  885c245d             mov byte ptr [esp + 0x5d], bl
// 0048b929  e872c03100           call 0x7a79a0
// 0048b92e  83c404               add esp, 4
// 0048b931  89442408             mov dword ptr [esp + 8], eax
// 0048b935  c644241401           mov byte ptr [esp + 0x14], 1
// 0048b93a  3bc3                 cmp eax, ebx
// 0048b93c  7412                 je 0x48b950
// 0048b93e  6a01                 push 1
// 0048b940  8d4c2420             lea ecx, [esp + 0x20]
// 0048b944  51                   push ecx
// 0048b945  8bc8                 mov ecx, eax
// 0048b947  e824f7ffff           call 0x48b070
// 0048b94c  8bf0                 mov esi, eax
// 0048b94e  eb02                 jmp 0x48b952
// 0048b950  33f6                 xor esi, esi
// 0048b952  8b0d4c36c000         mov ecx, dword ptr [0xc0364c]
// 0048b958  885c2414             mov byte ptr [esp + 0x14], bl
// 0048b95c  3bf1                 cmp esi, ecx
// 0048b95e  7410                 je 0x48b970
// 0048b960  3bcb                 cmp ecx, ebx
// 0048b962  740c                 je 0x48b970
// 0048b964  8b11                 mov edx, dword ptr [ecx]
// 0048b966  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 0048b96c  6a01                 push 1
// 0048b96e  ffd0                 call eax
// 0048b970  8d4c245c             lea ecx, [esp + 0x5c]
// 0048b974  89354c36c000         mov dword ptr [0xc0364c], esi
// 0048b97a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0048b982  ff1500a49e00         call dword ptr [0x9ea400]
// 0048b988  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048b98c  5e                   pop esi
// 0048b98d  5b                   pop ebx
// 0048b98e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b995  83c410               add esp, 0x10
// 0048b998  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?createShareWindow@Win32Window@G3D@@CAXVSettings@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
