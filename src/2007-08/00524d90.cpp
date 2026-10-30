// from server: 100% by auto
// roc 2007-08 00524d90  unit: G3D::Line  size: 575 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524d90
//
// 00524d90  83ec34               sub esp, 0x34
// 00524d93  53                   push ebx
// 00524d94  55                   push ebp
// 00524d95  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00524d99  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 00524d9f  8b9d38010000         mov ebx, dword ptr [ebp + 0x138]
// 00524da5  83e801               sub eax, 1
// 00524da8  56                   push esi
// 00524da9  8bb588010000         mov esi, dword ptr [ebp + 0x188]
// 00524daf  89442434             mov dword ptr [esp + 0x34], eax
// 00524db3  8b4618               mov eax, dword ptr [esi + 0x18]
// 00524db6  83eb01               sub ebx, 1
// 00524db9  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 00524dbc  57                   push edi
// 00524dbd  89742418             mov dword ptr [esp + 0x18], esi
// 00524dc1  895c2434             mov dword ptr [esp + 0x34], ebx
// 00524dc5  89442410             mov dword ptr [esp + 0x10], eax
// 00524dc9  0f8d9c010000         jge 0x524f6b
// 00524dcf  90                   nop 
// 00524dd0  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00524dd3  3bfb                 cmp edi, ebx
// 00524dd5  897c2414             mov dword ptr [esp + 0x14], edi
// 00524dd9  0f8775010000         ja 0x524f54
// 00524ddf  90                   nop 
// 00524de0  8b8540010000         mov eax, dword ptr [ebp + 0x140]
// 00524de6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00524de9  c1e007               shl eax, 7
// 00524dec  83c620               add esi, 0x20
// 00524def  50                   push eax
// 00524df0  51                   push ecx
// 00524df1  e8fa94ffff           call 0x51e2f0
// 00524df6  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 00524dfc  8b4204               mov eax, dword ptr [edx + 4]
// 00524dff  56                   push esi
// 00524e00  55                   push ebp
// 00524e01  ffd0                 call eax
// 00524e03  83c410               add esp, 0x10
// 00524e06  84c0                 test al, al
// 00524e08  0f848d010000         je 0x524f9b
// 00524e0e  33c9                 xor ecx, ecx
// 00524e10  398d24010000         cmp dword ptr [ebp + 0x124], ecx
// 00524e16  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00524e1a  894c2430             mov dword ptr [esp + 0x30], ecx
// 00524e1e  0f8e19010000         jle 0x524f3d
// 00524e24  8d9528010000         lea edx, [ebp + 0x128]
// 00524e2a  89542420             mov dword ptr [esp + 0x20], edx
// 00524e2e  8bff                 mov edi, edi
// 00524e30  8b442420             mov eax, dword ptr [esp + 0x20]
// 00524e34  8b30                 mov esi, dword ptr [eax]
// 00524e36  807e3000             cmp byte ptr [esi + 0x30], 0
// 00524e3a  750c                 jne 0x524e48
// 00524e3c  034e3c               add ecx, dword ptr [esi + 0x3c]
// 00524e3f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00524e43  e9d1000000           jmp 0x524f19
// 00524e48  8b4604               mov eax, dword ptr [esi + 4]
// 00524e4b  8b959c010000         mov edx, dword ptr [ebp + 0x19c]
// 00524e51  03c0                 add eax, eax
// 00524e53  03c0                 add eax, eax
// 00524e55  3bfb                 cmp edi, ebx
// 00524e57  8b540204             mov edx, dword ptr [edx + eax + 4]
// 00524e5b  8954243c             mov dword ptr [esp + 0x3c], edx
// 00524e5f  7305                 jae 0x524e66
// 00524e61  8b5634               mov edx, dword ptr [esi + 0x34]
// 00524e64  eb03                 jmp 0x524e69
// 00524e66  8b5644               mov edx, dword ptr [esi + 0x44]
// 00524e69  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00524e6d  8b0438               mov eax, dword ptr [eax + edi]
// 00524e70  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00524e73  0faf7c2414           imul edi, dword ptr [esp + 0x14]
// 00524e78  89542424             mov dword ptr [esp + 0x24], edx
// 00524e7c  8b5624               mov edx, dword ptr [esi + 0x24]
// 00524e7f  0faf542410           imul edx, dword ptr [esp + 0x10]
// 00524e84  8d1c90               lea ebx, [eax + edx*4]
// 00524e87  33c0                 xor eax, eax
// 00524e89  394638               cmp dword ptr [esi + 0x38], eax
// 00524e8c  897c2440             mov dword ptr [esp + 0x40], edi
// 00524e90  8944242c             mov dword ptr [esp + 0x2c], eax
// 00524e94  0f8e7f000000         jle 0x524f19
// 00524e9a  8d9b00000000         lea ebx, [ebx]
// 00524ea0  8b542438             mov edx, dword ptr [esp + 0x38]
// 00524ea4  399580000000         cmp dword ptr [ebp + 0x80], edx
// 00524eaa  720b                 jb 0x524eb7
// 00524eac  8b542410             mov edx, dword ptr [esp + 0x10]
// 00524eb0  03d0                 add edx, eax
// 00524eb2  3b5648               cmp edx, dword ptr [esi + 0x48]
// 00524eb5  7d49                 jge 0x524f00
// 00524eb7  8b542424             mov edx, dword ptr [esp + 0x24]
// 00524ebb  85d2                 test edx, edx
// 00524ebd  7e41                 jle 0x524f00
// 00524ebf  8b442418             mov eax, dword ptr [esp + 0x18]
// 00524ec3  8d6c8820             lea ebp, [eax + ecx*4 + 0x20]
// 00524ec7  89542428             mov dword ptr [esp + 0x28], edx
// 00524ecb  eb03                 jmp 0x524ed0
// 00524ecd  8d4900               lea ecx, [ecx]
// 00524ed0  8b4d00               mov ecx, dword ptr [ebp]
// 00524ed3  8b542448             mov edx, dword ptr [esp + 0x48]
// 00524ed7  57                   push edi
// 00524ed8  53                   push ebx
// 00524ed9  51                   push ecx
// 00524eda  56                   push esi
// 00524edb  52                   push edx
// 00524edc  ff542450             call dword ptr [esp + 0x50]
// 00524ee0  037e24               add edi, dword ptr [esi + 0x24]
// 00524ee3  83c414               add esp, 0x14
// 00524ee6  83c504               add ebp, 4
// 00524ee9  836c242801           sub dword ptr [esp + 0x28], 1
// 00524eee  75e0                 jne 0x524ed0
// 00524ef0  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00524ef4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00524ef8  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00524efc  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00524f00  034e34               add ecx, dword ptr [esi + 0x34]
// 00524f03  8b5624               mov edx, dword ptr [esi + 0x24]
// 00524f06  83c001               add eax, 1
// 00524f09  3b4638               cmp eax, dword ptr [esi + 0x38]
// 00524f0c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00524f10  8d1c93               lea ebx, [ebx + edx*4]
// 00524f13  8944242c             mov dword ptr [esp + 0x2c], eax
// 00524f17  7c87                 jl 0x524ea0
// 00524f19  8b442430             mov eax, dword ptr [esp + 0x30]
// 00524f1d  8344242004           add dword ptr [esp + 0x20], 4
// 00524f22  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00524f26  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00524f2a  83c001               add eax, 1
// 00524f2d  3b8524010000         cmp eax, dword ptr [ebp + 0x124]
// 00524f33  89442430             mov dword ptr [esp + 0x30], eax
// 00524f37  0f8cf3feffff         jl 0x524e30
// 00524f3d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00524f41  83c701               add edi, 1
// 00524f44  3bfb                 cmp edi, ebx
// 00524f46  897c2414             mov dword ptr [esp + 0x14], edi
// 00524f4a  0f8690feffff         jbe 0x524de0
// 00524f50  8b442410             mov eax, dword ptr [esp + 0x10]
// 00524f54  83c001               add eax, 1
// 00524f57  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00524f5e  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 00524f61  89442410             mov dword ptr [esp + 0x10], eax
// 00524f65  0f8c65feffff         jl 0x524dd0
// 00524f6b  83858000000001       add dword ptr [ebp + 0x80], 1
// 00524f72  8b8580000000         mov eax, dword ptr [ebp + 0x80]
// 00524f78  83858800000001       add dword ptr [ebp + 0x88], 1
// 00524f7f  3b851c010000         cmp eax, dword ptr [ebp + 0x11c]
// 00524f85  732c                 jae 0x524fb3
// 00524f87  8bcd                 mov ecx, ebp
// 00524f89  e892fdffff           call 0x524d20
// 00524f8e  5f                   pop edi
// 00524f8f  5e                   pop esi
// 00524f90  5d                   pop ebp
// 00524f91  b803000000           mov eax, 3
// 00524f96  5b                   pop ebx
// 00524f97  83c434               add esp, 0x34
// 00524f9a  c3                   ret 
// 00524f9b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00524f9f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00524fa3  897814               mov dword ptr [eax + 0x14], edi
// 00524fa6  5f                   pop edi
// 00524fa7  5e                   pop esi
// 00524fa8  5d                   pop ebp
// 00524fa9  894818               mov dword ptr [eax + 0x18], ecx
// 00524fac  33c0                 xor eax, eax
// 00524fae  5b                   pop ebx
// 00524faf  83c434               add esp, 0x34
// 00524fb2  c3                   ret 
// 00524fb3  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 00524fb9  8b420c               mov eax, dword ptr [edx + 0xc]
// 00524fbc  55                   push ebp
// 00524fbd  ffd0                 call eax
// 00524fbf  83c404               add esp, 4
// 00524fc2  5f                   pop edi
// 00524fc3  5e                   pop esi
// 00524fc4  5d                   pop ebp
// 00524fc5  b804000000           mov eax, 4
// 00524fca  5b                   pop ebx
// 00524fcb  83c434               add esp, 0x34
// 00524fce  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_onepass)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
