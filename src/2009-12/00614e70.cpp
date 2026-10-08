// roc 2009-12 00614e70  unit: seg_00610000  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00614e70
//
// 00614e70  8b442410             mov eax, dword ptr [esp + 0x10]
// 00614e74  53                   push ebx
// 00614e75  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00614e79  55                   push ebp
// 00614e7a  56                   push esi
// 00614e7b  8b742414             mov esi, dword ptr [esp + 0x14]
// 00614e7f  57                   push edi
// 00614e80  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00614e84  8d2c07               lea ebp, [edi + eax]
// 00614e87  3b6e04               cmp ebp, dword ptr [esi + 4]
// 00614e8a  770a                 ja 0x614e96
// 00614e8c  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00614e8f  7705                 ja 0x614e96
// 00614e91  833e00               cmp dword ptr [esi], 0
// 00614e94  7513                 jne 0x614ea9
// 00614e96  8b03                 mov eax, dword ptr [ebx]
// 00614e98  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 00614e9f  8b0b                 mov ecx, dword ptr [ebx]
// 00614ea1  8b11                 mov edx, dword ptr [ecx]
// 00614ea3  53                   push ebx
// 00614ea4  ffd2                 call edx
// 00614ea6  83c404               add esp, 4
// 00614ea9  8b4618               mov eax, dword ptr [esi + 0x18]
// 00614eac  3bf8                 cmp edi, eax
// 00614eae  7209                 jb 0x614eb9
// 00614eb0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00614eb3  03c8                 add ecx, eax
// 00614eb5  3be9                 cmp ebp, ecx
// 00614eb7  764f                 jbe 0x614f08
// 00614eb9  807e2200             cmp byte ptr [esi + 0x22], 0
// 00614ebd  7513                 jne 0x614ed2
// 00614ebf  8b13                 mov edx, dword ptr [ebx]
// 00614ec1  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 00614ec8  8b03                 mov eax, dword ptr [ebx]
// 00614eca  8b08                 mov ecx, dword ptr [eax]
// 00614ecc  53                   push ebx
// 00614ecd  ffd1                 call ecx
// 00614ecf  83c404               add esp, 4
// 00614ed2  807e2100             cmp byte ptr [esi + 0x21], 0
// 00614ed6  740f                 je 0x614ee7
// 00614ed8  6a01                 push 1
// 00614eda  53                   push ebx
// 00614edb  e850feffff           call 0x614d30
// 00614ee0  83c408               add esp, 8
// 00614ee3  c6462100             mov byte ptr [esi + 0x21], 0
// 00614ee7  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 00614eea  7605                 jbe 0x614ef1
// 00614eec  897e18               mov dword ptr [esi + 0x18], edi
// 00614eef  eb0c                 jmp 0x614efd
// 00614ef1  8bc5                 mov eax, ebp
// 00614ef3  2b4610               sub eax, dword ptr [esi + 0x10]
// 00614ef6  7902                 jns 0x614efa
// 00614ef8  33c0                 xor eax, eax
// 00614efa  894618               mov dword ptr [esi + 0x18], eax
// 00614efd  6a00                 push 0
// 00614eff  53                   push ebx
// 00614f00  e82bfeffff           call 0x614d30
// 00614f05  83c408               add esp, 8
// 00614f08  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00614f0b  3bfd                 cmp edi, ebp
// 00614f0d  7357                 jae 0x614f66
// 00614f0f  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00614f13  731e                 jae 0x614f33
// 00614f15  807c242400           cmp byte ptr [esp + 0x24], 0
// 00614f1a  7413                 je 0x614f2f
// 00614f1c  8b13                 mov edx, dword ptr [ebx]
// 00614f1e  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 00614f25  8b03                 mov eax, dword ptr [ebx]
// 00614f27  8b08                 mov ecx, dword ptr [eax]
// 00614f29  53                   push ebx
// 00614f2a  ffd1                 call ecx
// 00614f2c  83c404               add esp, 4
// 00614f2f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00614f33  8a442424             mov al, byte ptr [esp + 0x24]
// 00614f37  84c0                 test al, al
// 00614f39  7403                 je 0x614f3e
// 00614f3b  896e1c               mov dword ptr [esi + 0x1c], ebp
// 00614f3e  807e2000             cmp byte ptr [esi + 0x20], 0
// 00614f42  743e                 je 0x614f82
// 00614f44  8b4618               mov eax, dword ptr [esi + 0x18]
// 00614f47  8b5e08               mov ebx, dword ptr [esi + 8]
// 00614f4a  2bf8                 sub edi, eax
// 00614f4c  2be8                 sub ebp, eax
// 00614f4e  3bfd                 cmp edi, ebp
// 00614f50  7314                 jae 0x614f66
// 00614f52  8b16                 mov edx, dword ptr [esi]
// 00614f54  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00614f57  53                   push ebx
// 00614f58  50                   push eax
// 00614f59  e8a26dffff           call 0x60bd00
// 00614f5e  47                   inc edi
// 00614f5f  83c408               add esp, 8
// 00614f62  3bfd                 cmp edi, ebp
// 00614f64  72ec                 jb 0x614f52
// 00614f66  807c242400           cmp byte ptr [esp + 0x24], 0
// 00614f6b  7404                 je 0x614f71
// 00614f6d  c6462101             mov byte ptr [esi + 0x21], 1
// 00614f71  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00614f75  2b4618               sub eax, dword ptr [esi + 0x18]
// 00614f78  8b0e                 mov ecx, dword ptr [esi]
// 00614f7a  5f                   pop edi
// 00614f7b  5e                   pop esi
// 00614f7c  5d                   pop ebp
// 00614f7d  8d0481               lea eax, [ecx + eax*4]
// 00614f80  5b                   pop ebx
// 00614f81  c3                   ret 
// 00614f82  84c0                 test al, al
// 00614f84  75e7                 jne 0x614f6d
// 00614f86  8b0b                 mov ecx, dword ptr [ebx]
// 00614f88  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 00614f8f  8b13                 mov edx, dword ptr [ebx]
// 00614f91  8b02                 mov eax, dword ptr [edx]
// 00614f93  53                   push ebx
// 00614f94  ffd0                 call eax
// 00614f96  8b442420             mov eax, dword ptr [esp + 0x20]
// 00614f9a  2b4618               sub eax, dword ptr [esi + 0x18]
// 00614f9d  8b0e                 mov ecx, dword ptr [esi]
// 00614f9f  83c404               add esp, 4
// 00614fa2  5f                   pop edi
// 00614fa3  5e                   pop esi
// 00614fa4  5d                   pop ebp
// 00614fa5  8d0481               lea eax, [ecx + eax*4]
// 00614fa8  5b                   pop ebx
// 00614fa9  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
