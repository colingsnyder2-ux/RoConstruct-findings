// roc 2007-03 00519eb0  unit: seg_00510000  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519eb0
//
// 00519eb0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00519eb4  53                   push ebx
// 00519eb5  55                   push ebp
// 00519eb6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00519eba  56                   push esi
// 00519ebb  8b742414             mov esi, dword ptr [esp + 0x14]
// 00519ebf  57                   push edi
// 00519ec0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00519ec4  8d1c07               lea ebx, [edi + eax]
// 00519ec7  3b5e04               cmp ebx, dword ptr [esi + 4]
// 00519eca  770a                 ja 0x519ed6
// 00519ecc  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00519ecf  7705                 ja 0x519ed6
// 00519ed1  833e00               cmp dword ptr [esi], 0
// 00519ed4  7515                 jne 0x519eeb
// 00519ed6  8b4500               mov eax, dword ptr [ebp]
// 00519ed9  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 00519ee0  8b4d00               mov ecx, dword ptr [ebp]
// 00519ee3  8b11                 mov edx, dword ptr [ecx]
// 00519ee5  55                   push ebp
// 00519ee6  ffd2                 call edx
// 00519ee8  83c404               add esp, 4
// 00519eeb  8b4618               mov eax, dword ptr [esi + 0x18]
// 00519eee  3bf8                 cmp edi, eax
// 00519ef0  7209                 jb 0x519efb
// 00519ef2  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00519ef5  03c8                 add ecx, eax
// 00519ef7  3bd9                 cmp ebx, ecx
// 00519ef9  7651                 jbe 0x519f4c
// 00519efb  807e2200             cmp byte ptr [esi + 0x22], 0
// 00519eff  7515                 jne 0x519f16
// 00519f01  8b5500               mov edx, dword ptr [ebp]
// 00519f04  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 00519f0b  8b4500               mov eax, dword ptr [ebp]
// 00519f0e  8b08                 mov ecx, dword ptr [eax]
// 00519f10  55                   push ebp
// 00519f11  ffd1                 call ecx
// 00519f13  83c404               add esp, 4
// 00519f16  807e2100             cmp byte ptr [esi + 0x21], 0
// 00519f1a  740f                 je 0x519f2b
// 00519f1c  6a01                 push 1
// 00519f1e  55                   push ebp
// 00519f1f  e8acfdffff           call 0x519cd0
// 00519f24  83c408               add esp, 8
// 00519f27  c6462100             mov byte ptr [esi + 0x21], 0
// 00519f2b  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 00519f2e  7605                 jbe 0x519f35
// 00519f30  897e18               mov dword ptr [esi + 0x18], edi
// 00519f33  eb0c                 jmp 0x519f41
// 00519f35  8bc3                 mov eax, ebx
// 00519f37  2b4610               sub eax, dword ptr [esi + 0x10]
// 00519f3a  7902                 jns 0x519f3e
// 00519f3c  33c0                 xor eax, eax
// 00519f3e  894618               mov dword ptr [esi + 0x18], eax
// 00519f41  6a00                 push 0
// 00519f43  55                   push ebp
// 00519f44  e887fdffff           call 0x519cd0
// 00519f49  83c408               add esp, 8
// 00519f4c  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00519f4f  3bfb                 cmp edi, ebx
// 00519f51  7363                 jae 0x519fb6
// 00519f53  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00519f57  7320                 jae 0x519f79
// 00519f59  807c242400           cmp byte ptr [esp + 0x24], 0
// 00519f5e  7415                 je 0x519f75
// 00519f60  8b5500               mov edx, dword ptr [ebp]
// 00519f63  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 00519f6a  8b4500               mov eax, dword ptr [ebp]
// 00519f6d  8b08                 mov ecx, dword ptr [eax]
// 00519f6f  55                   push ebp
// 00519f70  ffd1                 call ecx
// 00519f72  83c404               add esp, 4
// 00519f75  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00519f79  8a442424             mov al, byte ptr [esp + 0x24]
// 00519f7d  84c0                 test al, al
// 00519f7f  7403                 je 0x519f84
// 00519f81  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00519f84  807e2000             cmp byte ptr [esi + 0x20], 0
// 00519f88  7448                 je 0x519fd2
// 00519f8a  8b4618               mov eax, dword ptr [esi + 0x18]
// 00519f8d  8b6e08               mov ebp, dword ptr [esi + 8]
// 00519f90  2bf8                 sub edi, eax
// 00519f92  2bd8                 sub ebx, eax
// 00519f94  c1e507               shl ebp, 7
// 00519f97  3bfb                 cmp edi, ebx
// 00519f99  731b                 jae 0x519fb6
// 00519f9b  eb03                 jmp 0x519fa0
// 00519f9d  8d4900               lea ecx, [ecx]
// 00519fa0  8b16                 mov edx, dword ptr [esi]
// 00519fa2  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00519fa5  55                   push ebp
// 00519fa6  50                   push eax
// 00519fa7  e804a7ffff           call 0x5146b0
// 00519fac  83c701               add edi, 1
// 00519faf  83c408               add esp, 8
// 00519fb2  3bfb                 cmp edi, ebx
// 00519fb4  72ea                 jb 0x519fa0
// 00519fb6  807c242400           cmp byte ptr [esp + 0x24], 0
// 00519fbb  7404                 je 0x519fc1
// 00519fbd  c6462101             mov byte ptr [esi + 0x21], 1
// 00519fc1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00519fc5  2b4618               sub eax, dword ptr [esi + 0x18]
// 00519fc8  8b0e                 mov ecx, dword ptr [esi]
// 00519fca  5f                   pop edi
// 00519fcb  5e                   pop esi
// 00519fcc  5d                   pop ebp
// 00519fcd  8d0481               lea eax, [ecx + eax*4]
// 00519fd0  5b                   pop ebx
// 00519fd1  c3                   ret 
// 00519fd2  84c0                 test al, al
// 00519fd4  75e7                 jne 0x519fbd
// 00519fd6  8b4d00               mov ecx, dword ptr [ebp]
// 00519fd9  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 00519fe0  8b5500               mov edx, dword ptr [ebp]
// 00519fe3  8b02                 mov eax, dword ptr [edx]
// 00519fe5  55                   push ebp
// 00519fe6  ffd0                 call eax
// 00519fe8  8b442420             mov eax, dword ptr [esp + 0x20]
// 00519fec  2b4618               sub eax, dword ptr [esi + 0x18]
// 00519fef  8b0e                 mov ecx, dword ptr [esi]
// 00519ff1  83c404               add esp, 4
// 00519ff4  5f                   pop edi
// 00519ff5  5e                   pop esi
// 00519ff6  5d                   pop ebp
// 00519ff7  8d0481               lea eax, [ecx + eax*4]
// 00519ffa  5b                   pop ebx
// 00519ffb  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_barray)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
