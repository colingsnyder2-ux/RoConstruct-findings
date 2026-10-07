// roc 2009-06 00592e60  unit: seg_00590000  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592e60
//
// 00592e60  8b442410             mov eax, dword ptr [esp + 0x10]
// 00592e64  53                   push ebx
// 00592e65  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00592e69  55                   push ebp
// 00592e6a  56                   push esi
// 00592e6b  8b742414             mov esi, dword ptr [esp + 0x14]
// 00592e6f  57                   push edi
// 00592e70  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00592e74  8d2c07               lea ebp, [edi + eax]
// 00592e77  3b6e04               cmp ebp, dword ptr [esi + 4]
// 00592e7a  770a                 ja 0x592e86
// 00592e7c  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00592e7f  7705                 ja 0x592e86
// 00592e81  833e00               cmp dword ptr [esi], 0
// 00592e84  7513                 jne 0x592e99
// 00592e86  8b03                 mov eax, dword ptr [ebx]
// 00592e88  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 00592e8f  8b0b                 mov ecx, dword ptr [ebx]
// 00592e91  8b11                 mov edx, dword ptr [ecx]
// 00592e93  53                   push ebx
// 00592e94  ffd2                 call edx
// 00592e96  83c404               add esp, 4
// 00592e99  8b4618               mov eax, dword ptr [esi + 0x18]
// 00592e9c  3bf8                 cmp edi, eax
// 00592e9e  7209                 jb 0x592ea9
// 00592ea0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00592ea3  03c8                 add ecx, eax
// 00592ea5  3be9                 cmp ebp, ecx
// 00592ea7  764f                 jbe 0x592ef8
// 00592ea9  807e2200             cmp byte ptr [esi + 0x22], 0
// 00592ead  7513                 jne 0x592ec2
// 00592eaf  8b13                 mov edx, dword ptr [ebx]
// 00592eb1  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 00592eb8  8b03                 mov eax, dword ptr [ebx]
// 00592eba  8b08                 mov ecx, dword ptr [eax]
// 00592ebc  53                   push ebx
// 00592ebd  ffd1                 call ecx
// 00592ebf  83c404               add esp, 4
// 00592ec2  807e2100             cmp byte ptr [esi + 0x21], 0
// 00592ec6  740f                 je 0x592ed7
// 00592ec8  6a01                 push 1
// 00592eca  53                   push ebx
// 00592ecb  e850feffff           call 0x592d20
// 00592ed0  83c408               add esp, 8
// 00592ed3  c6462100             mov byte ptr [esi + 0x21], 0
// 00592ed7  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 00592eda  7605                 jbe 0x592ee1
// 00592edc  897e18               mov dword ptr [esi + 0x18], edi
// 00592edf  eb0c                 jmp 0x592eed
// 00592ee1  8bc5                 mov eax, ebp
// 00592ee3  2b4610               sub eax, dword ptr [esi + 0x10]
// 00592ee6  7902                 jns 0x592eea
// 00592ee8  33c0                 xor eax, eax
// 00592eea  894618               mov dword ptr [esi + 0x18], eax
// 00592eed  6a00                 push 0
// 00592eef  53                   push ebx
// 00592ef0  e82bfeffff           call 0x592d20
// 00592ef5  83c408               add esp, 8
// 00592ef8  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00592efb  3bfd                 cmp edi, ebp
// 00592efd  7357                 jae 0x592f56
// 00592eff  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00592f03  731e                 jae 0x592f23
// 00592f05  807c242400           cmp byte ptr [esp + 0x24], 0
// 00592f0a  7413                 je 0x592f1f
// 00592f0c  8b13                 mov edx, dword ptr [ebx]
// 00592f0e  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 00592f15  8b03                 mov eax, dword ptr [ebx]
// 00592f17  8b08                 mov ecx, dword ptr [eax]
// 00592f19  53                   push ebx
// 00592f1a  ffd1                 call ecx
// 00592f1c  83c404               add esp, 4
// 00592f1f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00592f23  8a442424             mov al, byte ptr [esp + 0x24]
// 00592f27  84c0                 test al, al
// 00592f29  7403                 je 0x592f2e
// 00592f2b  896e1c               mov dword ptr [esi + 0x1c], ebp
// 00592f2e  807e2000             cmp byte ptr [esi + 0x20], 0
// 00592f32  743e                 je 0x592f72
// 00592f34  8b4618               mov eax, dword ptr [esi + 0x18]
// 00592f37  8b5e08               mov ebx, dword ptr [esi + 8]
// 00592f3a  2bf8                 sub edi, eax
// 00592f3c  2be8                 sub ebp, eax
// 00592f3e  3bfd                 cmp edi, ebp
// 00592f40  7314                 jae 0x592f56
// 00592f42  8b16                 mov edx, dword ptr [esi]
// 00592f44  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00592f47  53                   push ebx
// 00592f48  50                   push eax
// 00592f49  e8626fffff           call 0x589eb0
// 00592f4e  47                   inc edi
// 00592f4f  83c408               add esp, 8
// 00592f52  3bfd                 cmp edi, ebp
// 00592f54  72ec                 jb 0x592f42
// 00592f56  807c242400           cmp byte ptr [esp + 0x24], 0
// 00592f5b  7404                 je 0x592f61
// 00592f5d  c6462101             mov byte ptr [esi + 0x21], 1
// 00592f61  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00592f65  2b4618               sub eax, dword ptr [esi + 0x18]
// 00592f68  8b0e                 mov ecx, dword ptr [esi]
// 00592f6a  5f                   pop edi
// 00592f6b  5e                   pop esi
// 00592f6c  5d                   pop ebp
// 00592f6d  8d0481               lea eax, [ecx + eax*4]
// 00592f70  5b                   pop ebx
// 00592f71  c3                   ret 
// 00592f72  84c0                 test al, al
// 00592f74  75e7                 jne 0x592f5d
// 00592f76  8b0b                 mov ecx, dword ptr [ebx]
// 00592f78  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 00592f7f  8b13                 mov edx, dword ptr [ebx]
// 00592f81  8b02                 mov eax, dword ptr [edx]
// 00592f83  53                   push ebx
// 00592f84  ffd0                 call eax
// 00592f86  8b442420             mov eax, dword ptr [esp + 0x20]
// 00592f8a  2b4618               sub eax, dword ptr [esi + 0x18]
// 00592f8d  8b0e                 mov ecx, dword ptr [esi]
// 00592f8f  83c404               add esp, 4
// 00592f92  5f                   pop edi
// 00592f93  5e                   pop esi
// 00592f94  5d                   pop ebp
// 00592f95  8d0481               lea eax, [ecx + eax*4]
// 00592f98  5b                   pop ebx
// 00592f99  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
