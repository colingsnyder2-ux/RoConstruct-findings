// roc 2010-06 00497840  unit: seg_00490000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00497840
//
// 00497840  51                   push ecx
// 00497841  53                   push ebx
// 00497842  55                   push ebp
// 00497843  56                   push esi
// 00497844  8bf1                 mov esi, ecx
// 00497846  57                   push edi
// 00497847  8d8620010000         lea eax, [esi + 0x120]
// 0049784d  bb01000000           mov ebx, 1
// 00497852  015e74               add dword ptr [esi + 0x74], ebx
// 00497855  015e6c               add dword ptr [esi + 0x6c], ebx
// 00497858  8dbe80080000         lea edi, [esi + 0x880]
// 0049785e  50                   push eax
// 0049785f  8bcf                 mov ecx, edi
// 00497861  33ed                 xor ebp, ebp
// 00497863  e838f0ffff           call 0x4968a0
// 00497868  015e7c               add dword ptr [esi + 0x7c], ebx
// 0049786b  807c241800           cmp byte ptr [esp + 0x18], 0
// 00497870  c686bd03000000       mov byte ptr [esi + 0x3bd], 0
// 00497877  c6867808000000       mov byte ptr [esi + 0x878], 0
// 0049787e  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 00497888  7431                 je 0x4978bb
// 0049788a  015e78               add dword ptr [esi + 0x78], ebx
// 0049788d  80bee203000000       cmp byte ptr [esi + 0x3e2], 0
// 00497894  bd00400000           mov ebp, 0x4000
// 00497899  7520                 jne 0x4978bb
// 0049789b  015e70               add dword ptr [esi + 0x70], ebx
// 0049789e  80bee303000000       cmp byte ptr [esi + 0x3e3], 0
// 004978a5  0f95c1               setne cl
// 004978a8  0fb6d1               movzx edx, cl
// 004978ab  52                   push edx
// 004978ac  53                   push ebx
// 004978ad  53                   push ebx
// 004978ae  53                   push ebx
// 004978af  ff1560ab9e00         call dword ptr [0x9eab60]
// 004978b5  889ee2030000         mov byte ptr [esi + 0x3e2], bl
// 004978bb  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004978c0  7422                 je 0x4978e4
// 004978c2  015e78               add dword ptr [esi + 0x78], ebx
// 004978c5  81cd00010000         or ebp, 0x100
// 004978cb  80bee103000000       cmp byte ptr [esi + 0x3e1], 0
// 004978d2  7510                 jne 0x4978e4
// 004978d4  015e70               add dword ptr [esi + 0x70], ebx
// 004978d7  53                   push ebx
// 004978d8  ff1564ab9e00         call dword ptr [0x9eab64]
// 004978de  889ee1030000         mov byte ptr [esi + 0x3e1], bl
// 004978e4  8d442410             lea eax, [esp + 0x10]
// 004978e8  50                   push eax
// 004978e9  68980b0000           push 0xb98
// 004978ee  ff1544ab9e00         call dword ptr [0x9eab44]
// 004978f4  807c242000           cmp byte ptr [esp + 0x20], 0
// 004978f9  7414                 je 0x49790f
// 004978fb  6aff                 push -1
// 004978fd  81cd00040000         or ebp, 0x400
// 00497903  ff15ecab9e00         call dword ptr [0x9eabec]
// 00497909  015e70               add dword ptr [esi + 0x70], ebx
// 0049790c  015e78               add dword ptr [esi + 0x78], ebx
// 0049790f  55                   push ebp
// 00497910  ff15a4aa9e00         call dword ptr [0x9eaaa4]
// 00497916  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049791a  51                   push ecx
// 0049791b  ff15ecab9e00         call dword ptr [0x9eabec]
// 00497921  015e70               add dword ptr [esi + 0x70], ebx
// 00497924  015e78               add dword ptr [esi + 0x78], ebx
// 00497927  8b5704               mov edx, dword ptr [edi + 4]
// 0049792a  8b07                 mov eax, dword ptr [edi]
// 0049792c  69d260070000         imul edx, edx, 0x760
// 00497932  8d8c02a0f8ffff       lea ecx, [edx + eax - 0x760]
// 00497939  51                   push ecx
// 0049793a  8bce                 mov ecx, esi
// 0049793c  e8efd5ffff           call 0x494f30
// 00497941  8b5704               mov edx, dword ptr [edi + 4]
// 00497944  6a00                 push 0
// 00497946  2bd3                 sub edx, ebx
// 00497948  52                   push edx
// 00497949  8bcf                 mov ecx, edi
// 0049794b  e8c0edffff           call 0x496710
// 00497950  5f                   pop edi
// 00497951  5e                   pop esi
// 00497952  5d                   pop ebp
// 00497953  5b                   pop ebx
// 00497954  59                   pop ecx
// 00497955  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?clear@RenderDevice@G3D@@QAEX_N00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
