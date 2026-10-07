// roc 2007-08 0047f970  unit: G3D::Win32Window  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047f970
//
// 0047f970  6aff                 push -1
// 0047f972  68a35c7400           push 0x745ca3
// 0047f977  64a100000000         mov eax, dword ptr fs:[0]
// 0047f97d  50                   push eax
// 0047f97e  51                   push ecx
// 0047f97f  53                   push ebx
// 0047f980  56                   push esi
// 0047f981  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047f986  33c4                 xor eax, esp
// 0047f988  50                   push eax
// 0047f989  8d442410             lea eax, [esp + 0x10]
// 0047f98d  64a300000000         mov dword ptr fs:[0], eax
// 0047f993  33db                 xor ebx, ebx
// 0047f995  381dc0d88b00         cmp byte ptr [0x8bd8c0], bl
// 0047f99b  895c2418             mov dword ptr [esp + 0x18], ebx
// 0047f99f  756e                 jne 0x47fa0f
// 0047f9a1  b810000000           mov eax, 0x10
// 0047f9a6  68f0010000           push 0x1f0
// 0047f9ab  c605c0d88b0001       mov byte ptr [0x8bd8c0], 1
// 0047f9b2  885c2462             mov byte ptr [esp + 0x62], bl
// 0047f9b6  89442424             mov dword ptr [esp + 0x24], eax
// 0047f9ba  89442428             mov dword ptr [esp + 0x28], eax
// 0047f9be  885c2461             mov byte ptr [esp + 0x61], bl
// 0047f9c2  e82f051b00           call 0x62fef6
// 0047f9c7  83c404               add esp, 4
// 0047f9ca  8944240c             mov dword ptr [esp + 0xc], eax
// 0047f9ce  3bc3                 cmp eax, ebx
// 0047f9d0  c644241801           mov byte ptr [esp + 0x18], 1
// 0047f9d5  7412                 je 0x47f9e9
// 0047f9d7  6a01                 push 1
// 0047f9d9  8d4c2424             lea ecx, [esp + 0x24]
// 0047f9dd  51                   push ecx
// 0047f9de  8bc8                 mov ecx, eax
// 0047f9e0  e84bf7ffff           call 0x47f130
// 0047f9e5  8bf0                 mov esi, eax
// 0047f9e7  eb02                 jmp 0x47f9eb
// 0047f9e9  33f6                 xor esi, esi
// 0047f9eb  8b0d74d68b00         mov ecx, dword ptr [0x8bd674]
// 0047f9f1  3bf1                 cmp esi, ecx
// 0047f9f3  885c2418             mov byte ptr [esp + 0x18], bl
// 0047f9f7  7410                 je 0x47fa09
// 0047f9f9  3bcb                 cmp ecx, ebx
// 0047f9fb  740c                 je 0x47fa09
// 0047f9fd  8b11                 mov edx, dword ptr [ecx]
// 0047f9ff  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 0047fa05  6a01                 push 1
// 0047fa07  ffd0                 call eax
// 0047fa09  893574d68b00         mov dword ptr [0x8bd674], esi
// 0047fa0f  8d4c2460             lea ecx, [esp + 0x60]
// 0047fa13  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0047fa1b  ff15ace67700         call dword ptr [0x77e6ac]
// 0047fa21  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047fa25  64890d00000000       mov dword ptr fs:[0], ecx
// 0047fa2c  59                   pop ecx
// 0047fa2d  5e                   pop esi
// 0047fa2e  5b                   pop ebx
// 0047fa2f  83c410               add esp, 0x10
// 0047fa32  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?createShareWindow@Win32Window@G3D@@CAXVSettings@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
