// from server: 100% by auto
// roc 2007-08 00526880  unit: G3D::Line  size: 567 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00526880
//
// 00526880  83ec3c               sub esp, 0x3c
// 00526883  56                   push esi
// 00526884  8b742444             mov esi, dword ptr [esp + 0x44]
// 00526888  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0052688f  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00526895  57                   push edi
// 00526896  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0052689c  89442414             mov dword ptr [esp + 0x14], eax
// 005268a0  7415                 je 0x5268b7
// 005268a2  837f2800             cmp dword ptr [edi + 0x28], 0
// 005268a6  750f                 jne 0x5268b7
// 005268a8  e843ffffff           call 0x5267f0
// 005268ad  84c0                 test al, al
// 005268af  7506                 jne 0x5268b7
// 005268b1  5f                   pop edi
// 005268b2  5e                   pop esi
// 005268b3  83c43c               add esp, 0x3c
// 005268b6  c3                   ret 
// 005268b7  807f0800             cmp byte ptr [edi + 8], 0
// 005268bb  53                   push ebx
// 005268bc  55                   push ebp
// 005268bd  0f85dc010000         jne 0x526a9f
// 005268c3  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 005268ca  8b4618               mov eax, dword ptr [esi + 0x18]
// 005268cd  89742434             mov dword ptr [esp + 0x34], esi
// 005268d1  8b08                 mov ecx, dword ptr [eax]
// 005268d3  894c2424             mov dword ptr [esp + 0x24], ecx
// 005268d7  8b5004               mov edx, dword ptr [eax + 4]
// 005268da  89542428             mov dword ptr [esp + 0x28], edx
// 005268de  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 005268e1  8b5718               mov edx, dword ptr [edi + 0x18]
// 005268e4  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 005268e7  8b4710               mov eax, dword ptr [edi + 0x10]
// 005268ea  894c2438             mov dword ptr [esp + 0x38], ecx
// 005268ee  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 005268f1  8954243c             mov dword ptr [esp + 0x3c], edx
// 005268f5  8b5720               mov edx, dword ptr [edi + 0x20]
// 005268f8  894c2440             mov dword ptr [esp + 0x40], ecx
// 005268fc  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 005268ff  896c2450             mov dword ptr [esp + 0x50], ebp
// 00526903  89542444             mov dword ptr [esp + 0x44], edx
// 00526907  894c2448             mov dword ptr [esp + 0x48], ecx
// 0052690b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00526913  0f8e4a010000         jle 0x526a63
// 00526919  8d9644010000         lea edx, [esi + 0x144]
// 0052691f  89542414             mov dword ptr [esp + 0x14], edx
// 00526923  83f808               cmp eax, 8
// 00526926  8b542410             mov edx, dword ptr [esp + 0x10]
// 0052692a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0052692e  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00526931  8b542414             mov edx, dword ptr [esp + 0x14]
// 00526935  894c2420             mov dword ptr [esp + 0x20], ecx
// 00526939  8b0a                 mov ecx, dword ptr [edx]
// 0052693b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052693f  8b8c8e28010000       mov ecx, dword ptr [esi + ecx*4 + 0x128]
// 00526946  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00526949  8b5c972c             mov ebx, dword ptr [edi + edx*4 + 0x2c]
// 0052694d  7d31                 jge 0x526980
// 0052694f  6a00                 push 0
// 00526951  50                   push eax
// 00526952  8d44242c             lea eax, [esp + 0x2c]
// 00526956  55                   push ebp
// 00526957  50                   push eax
// 00526958  e833f6ffff           call 0x525f90
// 0052695d  83c410               add esp, 0x10
// 00526960  84c0                 test al, al
// 00526962  0f8445010000         je 0x526aad
// 00526968  8b442430             mov eax, dword ptr [esp + 0x30]
// 0052696c  83f808               cmp eax, 8
// 0052696f  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00526973  896c2450             mov dword ptr [esp + 0x50], ebp
// 00526977  7d07                 jge 0x526980
// 00526979  b901000000           mov ecx, 1
// 0052697e  eb29                 jmp 0x5269a9
// 00526980  8d48f8               lea ecx, [eax - 8]
// 00526983  8bd5                 mov edx, ebp
// 00526985  d3fa                 sar edx, cl
// 00526987  81e2ff000000         and edx, 0xff
// 0052698d  8b8c9390000000       mov ecx, dword ptr [ebx + edx*4 + 0x90]
// 00526994  85c9                 test ecx, ecx
// 00526996  740c                 je 0x5269a4
// 00526998  0fb69c1a90040000     movzx ebx, byte ptr [edx + ebx + 0x490]
// 005269a0  2bc1                 sub eax, ecx
// 005269a2  eb2c                 jmp 0x5269d0
// 005269a4  b909000000           mov ecx, 9
// 005269a9  51                   push ecx
// 005269aa  53                   push ebx
// 005269ab  50                   push eax
// 005269ac  8d4c2430             lea ecx, [esp + 0x30]
// 005269b0  55                   push ebp
// 005269b1  51                   push ecx
// 005269b2  e809f7ffff           call 0x5260c0
// 005269b7  8bd8                 mov ebx, eax
// 005269b9  83c414               add esp, 0x14
// 005269bc  85db                 test ebx, ebx
// 005269be  0f8ce9000000         jl 0x526aad
// 005269c4  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005269c8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005269cc  896c2450             mov dword ptr [esp + 0x50], ebp
// 005269d0  85db                 test ebx, ebx
// 005269d2  7456                 je 0x526a2a
// 005269d4  3bc3                 cmp eax, ebx
// 005269d6  7d24                 jge 0x5269fc
// 005269d8  53                   push ebx
// 005269d9  50                   push eax
// 005269da  8d54242c             lea edx, [esp + 0x2c]
// 005269de  55                   push ebp
// 005269df  52                   push edx
// 005269e0  e8abf5ffff           call 0x525f90
// 005269e5  83c410               add esp, 0x10
// 005269e8  84c0                 test al, al
// 005269ea  0f84bd000000         je 0x526aad
// 005269f0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005269f4  8b442430             mov eax, dword ptr [esp + 0x30]
// 005269f8  896c2450             mov dword ptr [esp + 0x50], ebp
// 005269fc  8bcb                 mov ecx, ebx
// 005269fe  2bc3                 sub eax, ebx
// 00526a00  ba01000000           mov edx, 1
// 00526a05  d3e2                 shl edx, cl
// 00526a07  8bc8                 mov ecx, eax
// 00526a09  d3fd                 sar ebp, cl
// 00526a0b  83ea01               sub edx, 1
// 00526a0e  23d5                 and edx, ebp
// 00526a10  3b149d28457a00       cmp edx, dword ptr [ebx*4 + 0x7a4528]
// 00526a17  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00526a1b  7d0b                 jge 0x526a28
// 00526a1d  8b1c9d68457a00       mov ebx, dword ptr [ebx*4 + 0x7a4568]
// 00526a24  03da                 add ebx, edx
// 00526a26  eb02                 jmp 0x526a2a
// 00526a28  8bda                 mov ebx, edx
// 00526a2a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00526a2e  015c8c3c             add dword ptr [esp + ecx*4 + 0x3c], ebx
// 00526a32  8b548c3c             mov edx, dword ptr [esp + ecx*4 + 0x3c]
// 00526a36  8344241404           add dword ptr [esp + 0x14], 4
// 00526a3b  8d4c8c3c             lea ecx, [esp + ecx*4 + 0x3c]
// 00526a3f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00526a43  d3e2                 shl edx, cl
// 00526a45  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00526a49  668911               mov word ptr [ecx], dx
// 00526a4c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00526a50  83c101               add ecx, 1
// 00526a53  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 00526a59  894c2410             mov dword ptr [esp + 0x10], ecx
// 00526a5d  0f8cc0feffff         jl 0x526923
// 00526a63  8b5618               mov edx, dword ptr [esi + 0x18]
// 00526a66  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00526a6a  890a                 mov dword ptr [edx], ecx
// 00526a6c  8b5618               mov edx, dword ptr [esi + 0x18]
// 00526a6f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00526a73  894a04               mov dword ptr [edx + 4], ecx
// 00526a76  8b542438             mov edx, dword ptr [esp + 0x38]
// 00526a7a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00526a7e  895714               mov dword ptr [edi + 0x14], edx
// 00526a81  8b542444             mov edx, dword ptr [esp + 0x44]
// 00526a85  894710               mov dword ptr [edi + 0x10], eax
// 00526a88  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00526a8c  894718               mov dword ptr [edi + 0x18], eax
// 00526a8f  8b442448             mov eax, dword ptr [esp + 0x48]
// 00526a93  894f1c               mov dword ptr [edi + 0x1c], ecx
// 00526a96  895720               mov dword ptr [edi + 0x20], edx
// 00526a99  896f0c               mov dword ptr [edi + 0xc], ebp
// 00526a9c  894724               mov dword ptr [edi + 0x24], eax
// 00526a9f  834728ff             add dword ptr [edi + 0x28], -1
// 00526aa3  5d                   pop ebp
// 00526aa4  5b                   pop ebx
// 00526aa5  5f                   pop edi
// 00526aa6  b001                 mov al, 1
// 00526aa8  5e                   pop esi
// 00526aa9  83c43c               add esp, 0x3c
// 00526aac  c3                   ret 
// 00526aad  5d                   pop ebp
// 00526aae  5b                   pop ebx
// 00526aaf  5f                   pop edi
// 00526ab0  32c0                 xor al, al
// 00526ab2  5e                   pop esi
// 00526ab3  83c43c               add esp, 0x3c
// 00526ab6  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_first)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
