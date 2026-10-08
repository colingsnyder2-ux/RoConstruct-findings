// roc 2008-06 0047cd20  unit: seg_00470000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047cd20
//
// 0047cd20  51                   push ecx
// 0047cd21  53                   push ebx
// 0047cd22  55                   push ebp
// 0047cd23  56                   push esi
// 0047cd24  8bf1                 mov esi, ecx
// 0047cd26  57                   push edi
// 0047cd27  8d8620010000         lea eax, [esi + 0x120]
// 0047cd2d  bb01000000           mov ebx, 1
// 0047cd32  015e74               add dword ptr [esi + 0x74], ebx
// 0047cd35  015e6c               add dword ptr [esi + 0x6c], ebx
// 0047cd38  8dbe80080000         lea edi, [esi + 0x880]
// 0047cd3e  50                   push eax
// 0047cd3f  8bcf                 mov ecx, edi
// 0047cd41  33ed                 xor ebp, ebp
// 0047cd43  e878f0ffff           call 0x47bdc0
// 0047cd48  015e7c               add dword ptr [esi + 0x7c], ebx
// 0047cd4b  807c241800           cmp byte ptr [esp + 0x18], 0
// 0047cd50  c686bd03000000       mov byte ptr [esi + 0x3bd], 0
// 0047cd57  c6867808000000       mov byte ptr [esi + 0x878], 0
// 0047cd5e  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 0047cd68  7431                 je 0x47cd9b
// 0047cd6a  015e78               add dword ptr [esi + 0x78], ebx
// 0047cd6d  80bee203000000       cmp byte ptr [esi + 0x3e2], 0
// 0047cd74  bd00400000           mov ebp, 0x4000
// 0047cd79  7520                 jne 0x47cd9b
// 0047cd7b  015e70               add dword ptr [esi + 0x70], ebx
// 0047cd7e  80bee303000000       cmp byte ptr [esi + 0x3e3], 0
// 0047cd85  0f95c1               setne cl
// 0047cd88  0fb6d1               movzx edx, cl
// 0047cd8b  52                   push edx
// 0047cd8c  53                   push ebx
// 0047cd8d  53                   push ebx
// 0047cd8e  53                   push ebx
// 0047cd8f  ff1598298000         call dword ptr [0x802998]
// 0047cd95  889ee2030000         mov byte ptr [esi + 0x3e2], bl
// 0047cd9b  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 0047cda0  7422                 je 0x47cdc4
// 0047cda2  015e78               add dword ptr [esi + 0x78], ebx
// 0047cda5  81cd00010000         or ebp, 0x100
// 0047cdab  80bee103000000       cmp byte ptr [esi + 0x3e1], 0
// 0047cdb2  7510                 jne 0x47cdc4
// 0047cdb4  015e70               add dword ptr [esi + 0x70], ebx
// 0047cdb7  53                   push ebx
// 0047cdb8  ff15f0298000         call dword ptr [0x8029f0]
// 0047cdbe  889ee1030000         mov byte ptr [esi + 0x3e1], bl
// 0047cdc4  8d442410             lea eax, [esp + 0x10]
// 0047cdc8  50                   push eax
// 0047cdc9  68980b0000           push 0xb98
// 0047cdce  ff15b42a8000         call dword ptr [0x802ab4]
// 0047cdd4  807c242000           cmp byte ptr [esp + 0x20], 0
// 0047cdd9  7414                 je 0x47cdef
// 0047cddb  6aff                 push -1
// 0047cddd  81cd00040000         or ebp, 0x400
// 0047cde3  ff15442a8000         call dword ptr [0x802a44]
// 0047cde9  015e70               add dword ptr [esi + 0x70], ebx
// 0047cdec  015e78               add dword ptr [esi + 0x78], ebx
// 0047cdef  55                   push ebp
// 0047cdf0  ff15a0298000         call dword ptr [0x8029a0]
// 0047cdf6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047cdfa  51                   push ecx
// 0047cdfb  ff15442a8000         call dword ptr [0x802a44]
// 0047ce01  015e70               add dword ptr [esi + 0x70], ebx
// 0047ce04  015e78               add dword ptr [esi + 0x78], ebx
// 0047ce07  8b5704               mov edx, dword ptr [edi + 4]
// 0047ce0a  8b07                 mov eax, dword ptr [edi]
// 0047ce0c  69d260070000         imul edx, edx, 0x760
// 0047ce12  8d8c02a0f8ffff       lea ecx, [edx + eax - 0x760]
// 0047ce19  51                   push ecx
// 0047ce1a  8bce                 mov ecx, esi
// 0047ce1c  e8cfd6ffff           call 0x47a4f0
// 0047ce21  8b5704               mov edx, dword ptr [edi + 4]
// 0047ce24  6a00                 push 0
// 0047ce26  2bd3                 sub edx, ebx
// 0047ce28  52                   push edx
// 0047ce29  8bcf                 mov ecx, edi
// 0047ce2b  e810eeffff           call 0x47bc40
// 0047ce30  5f                   pop edi
// 0047ce31  5e                   pop esi
// 0047ce32  5d                   pop ebp
// 0047ce33  5b                   pop ebx
// 0047ce34  59                   pop ecx
// 0047ce35  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?clear@RenderDevice@G3D@@QAEX_N00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
