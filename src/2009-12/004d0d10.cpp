// roc 2009-12 004d0d10  unit: G3D::PBVTextureFormat::?$Table  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d0d10
//
// 004d0d10  51                   push ecx
// 004d0d11  53                   push ebx
// 004d0d12  55                   push ebp
// 004d0d13  56                   push esi
// 004d0d14  8bf1                 mov esi, ecx
// 004d0d16  57                   push edi
// 004d0d17  8d8620010000         lea eax, [esi + 0x120]
// 004d0d1d  bb01000000           mov ebx, 1
// 004d0d22  015e74               add dword ptr [esi + 0x74], ebx
// 004d0d25  015e6c               add dword ptr [esi + 0x6c], ebx
// 004d0d28  8dbe80080000         lea edi, [esi + 0x880]
// 004d0d2e  50                   push eax
// 004d0d2f  8bcf                 mov ecx, edi
// 004d0d31  33ed                 xor ebp, ebp
// 004d0d33  e838f0ffff           call 0x4cfd70
// 004d0d38  015e7c               add dword ptr [esi + 0x7c], ebx
// 004d0d3b  807c241800           cmp byte ptr [esp + 0x18], 0
// 004d0d40  c686bd03000000       mov byte ptr [esi + 0x3bd], 0
// 004d0d47  c6867808000000       mov byte ptr [esi + 0x878], 0
// 004d0d4e  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 004d0d58  7431                 je 0x4d0d8b
// 004d0d5a  015e78               add dword ptr [esi + 0x78], ebx
// 004d0d5d  80bee203000000       cmp byte ptr [esi + 0x3e2], 0
// 004d0d64  bd00400000           mov ebp, 0x4000
// 004d0d69  7520                 jne 0x4d0d8b
// 004d0d6b  015e70               add dword ptr [esi + 0x70], ebx
// 004d0d6e  80bee303000000       cmp byte ptr [esi + 0x3e3], 0
// 004d0d75  0f95c1               setne cl
// 004d0d78  0fb6d1               movzx edx, cl
// 004d0d7b  52                   push edx
// 004d0d7c  53                   push ebx
// 004d0d7d  53                   push ebx
// 004d0d7e  53                   push ebx
// 004d0d7f  ff15a0bb9800         call dword ptr [0x98bba0]
// 004d0d85  889ee2030000         mov byte ptr [esi + 0x3e2], bl
// 004d0d8b  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004d0d90  7422                 je 0x4d0db4
// 004d0d92  015e78               add dword ptr [esi + 0x78], ebx
// 004d0d95  81cd00010000         or ebp, 0x100
// 004d0d9b  80bee103000000       cmp byte ptr [esi + 0x3e1], 0
// 004d0da2  7510                 jne 0x4d0db4
// 004d0da4  015e70               add dword ptr [esi + 0x70], ebx
// 004d0da7  53                   push ebx
// 004d0da8  ff15b4bb9800         call dword ptr [0x98bbb4]
// 004d0dae  889ee1030000         mov byte ptr [esi + 0x3e1], bl
// 004d0db4  8d442410             lea eax, [esp + 0x10]
// 004d0db8  50                   push eax
// 004d0db9  68980b0000           push 0xb98
// 004d0dbe  ff151cbb9800         call dword ptr [0x98bb1c]
// 004d0dc4  807c242000           cmp byte ptr [esp + 0x20], 0
// 004d0dc9  7414                 je 0x4d0ddf
// 004d0dcb  6aff                 push -1
// 004d0dcd  81cd00040000         or ebp, 0x400
// 004d0dd3  ff1510bb9800         call dword ptr [0x98bb10]
// 004d0dd9  015e70               add dword ptr [esi + 0x70], ebx
// 004d0ddc  015e78               add dword ptr [esi + 0x78], ebx
// 004d0ddf  55                   push ebp
// 004d0de0  ff1598bb9800         call dword ptr [0x98bb98]
// 004d0de6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d0dea  51                   push ecx
// 004d0deb  ff1510bb9800         call dword ptr [0x98bb10]
// 004d0df1  015e70               add dword ptr [esi + 0x70], ebx
// 004d0df4  015e78               add dword ptr [esi + 0x78], ebx
// 004d0df7  8b5704               mov edx, dword ptr [edi + 4]
// 004d0dfa  8b07                 mov eax, dword ptr [edi]
// 004d0dfc  69d260070000         imul edx, edx, 0x760
// 004d0e02  8d8c02a0f8ffff       lea ecx, [edx + eax - 0x760]
// 004d0e09  51                   push ecx
// 004d0e0a  8bce                 mov ecx, esi
// 004d0e0c  e8efd5ffff           call 0x4ce400
// 004d0e11  8b5704               mov edx, dword ptr [edi + 4]
// 004d0e14  6a00                 push 0
// 004d0e16  2bd3                 sub edx, ebx
// 004d0e18  52                   push edx
// 004d0e19  8bcf                 mov ecx, edi
// 004d0e1b  e8c0edffff           call 0x4cfbe0
// 004d0e20  5f                   pop edi
// 004d0e21  5e                   pop esi
// 004d0e22  5d                   pop ebp
// 004d0e23  5b                   pop ebx
// 004d0e24  59                   pop ecx
// 004d0e25  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?clear@RenderDevice@G3D@@QAEX_N00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
