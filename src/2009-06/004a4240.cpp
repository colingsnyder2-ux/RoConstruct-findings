// roc 2009-06 004a4240  unit: G3D::PBVTextureFormat::?$Table  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4240
//
// 004a4240  51                   push ecx
// 004a4241  53                   push ebx
// 004a4242  55                   push ebp
// 004a4243  56                   push esi
// 004a4244  8bf1                 mov esi, ecx
// 004a4246  57                   push edi
// 004a4247  8d8620010000         lea eax, [esi + 0x120]
// 004a424d  bb01000000           mov ebx, 1
// 004a4252  015e74               add dword ptr [esi + 0x74], ebx
// 004a4255  015e6c               add dword ptr [esi + 0x6c], ebx
// 004a4258  8dbe80080000         lea edi, [esi + 0x880]
// 004a425e  50                   push eax
// 004a425f  8bcf                 mov ecx, edi
// 004a4261  33ed                 xor ebp, ebp
// 004a4263  e838f0ffff           call 0x4a32a0
// 004a4268  015e7c               add dword ptr [esi + 0x7c], ebx
// 004a426b  807c241800           cmp byte ptr [esp + 0x18], 0
// 004a4270  c686bd03000000       mov byte ptr [esi + 0x3bd], 0
// 004a4277  c6867808000000       mov byte ptr [esi + 0x878], 0
// 004a427e  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 004a4288  7431                 je 0x4a42bb
// 004a428a  015e78               add dword ptr [esi + 0x78], ebx
// 004a428d  80bee203000000       cmp byte ptr [esi + 0x3e2], 0
// 004a4294  bd00400000           mov ebp, 0x4000
// 004a4299  7520                 jne 0x4a42bb
// 004a429b  015e70               add dword ptr [esi + 0x70], ebx
// 004a429e  80bee303000000       cmp byte ptr [esi + 0x3e3], 0
// 004a42a5  0f95c1               setne cl
// 004a42a8  0fb6d1               movzx edx, cl
// 004a42ab  52                   push edx
// 004a42ac  53                   push ebx
// 004a42ad  53                   push ebx
// 004a42ae  53                   push ebx
// 004a42af  ff159cea8900         call dword ptr [0x89ea9c]
// 004a42b5  889ee2030000         mov byte ptr [esi + 0x3e2], bl
// 004a42bb  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004a42c0  7422                 je 0x4a42e4
// 004a42c2  015e78               add dword ptr [esi + 0x78], ebx
// 004a42c5  81cd00010000         or ebp, 0x100
// 004a42cb  80bee103000000       cmp byte ptr [esi + 0x3e1], 0
// 004a42d2  7510                 jne 0x4a42e4
// 004a42d4  015e70               add dword ptr [esi + 0x70], ebx
// 004a42d7  53                   push ebx
// 004a42d8  ff1590eb8900         call dword ptr [0x89eb90]
// 004a42de  889ee1030000         mov byte ptr [esi + 0x3e1], bl
// 004a42e4  8d442410             lea eax, [esp + 0x10]
// 004a42e8  50                   push eax
// 004a42e9  68980b0000           push 0xb98
// 004a42ee  ff15d4ea8900         call dword ptr [0x89ead4]
// 004a42f4  807c242000           cmp byte ptr [esp + 0x20], 0
// 004a42f9  7414                 je 0x4a430f
// 004a42fb  6aff                 push -1
// 004a42fd  81cd00040000         or ebp, 0x400
// 004a4303  ff15e0ea8900         call dword ptr [0x89eae0]
// 004a4309  015e70               add dword ptr [esi + 0x70], ebx
// 004a430c  015e78               add dword ptr [esi + 0x78], ebx
// 004a430f  55                   push ebp
// 004a4310  ff1594ea8900         call dword ptr [0x89ea94]
// 004a4316  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a431a  51                   push ecx
// 004a431b  ff15e0ea8900         call dword ptr [0x89eae0]
// 004a4321  015e70               add dword ptr [esi + 0x70], ebx
// 004a4324  015e78               add dword ptr [esi + 0x78], ebx
// 004a4327  8b5704               mov edx, dword ptr [edi + 4]
// 004a432a  8b07                 mov eax, dword ptr [edi]
// 004a432c  69d260070000         imul edx, edx, 0x760
// 004a4332  8d8c02a0f8ffff       lea ecx, [edx + eax - 0x760]
// 004a4339  51                   push ecx
// 004a433a  8bce                 mov ecx, esi
// 004a433c  e8bfd6ffff           call 0x4a1a00
// 004a4341  8b5704               mov edx, dword ptr [edi + 4]
// 004a4344  6a00                 push 0
// 004a4346  2bd3                 sub edx, ebx
// 004a4348  52                   push edx
// 004a4349  8bcf                 mov ecx, edi
// 004a434b  e8d0edffff           call 0x4a3120
// 004a4350  5f                   pop edi
// 004a4351  5e                   pop esi
// 004a4352  5d                   pop ebp
// 004a4353  5b                   pop ebx
// 004a4354  59                   pop ecx
// 004a4355  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?clear@RenderDevice@G3D@@QAEX_N00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
