// from server: 100% by auto
// roc 2011-06 00568f00  unit: seg_00560000  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00568f00
//
// 00568f00  8b442410             mov eax, dword ptr [esp + 0x10]
// 00568f04  53                   push ebx
// 00568f05  55                   push ebp
// 00568f06  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00568f0a  56                   push esi
// 00568f0b  8b742414             mov esi, dword ptr [esp + 0x14]
// 00568f0f  57                   push edi
// 00568f10  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00568f14  8d1c07               lea ebx, [edi + eax]
// 00568f17  3b5e04               cmp ebx, dword ptr [esi + 4]
// 00568f1a  770a                 ja 0x568f26
// 00568f1c  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00568f1f  7705                 ja 0x568f26
// 00568f21  833e00               cmp dword ptr [esi], 0
// 00568f24  7515                 jne 0x568f3b
// 00568f26  8b4500               mov eax, dword ptr [ebp]
// 00568f29  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 00568f30  8b4d00               mov ecx, dword ptr [ebp]
// 00568f33  8b11                 mov edx, dword ptr [ecx]
// 00568f35  55                   push ebp
// 00568f36  ffd2                 call edx
// 00568f38  83c404               add esp, 4
// 00568f3b  8b4618               mov eax, dword ptr [esi + 0x18]
// 00568f3e  3bf8                 cmp edi, eax
// 00568f40  7209                 jb 0x568f4b
// 00568f42  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00568f45  03c8                 add ecx, eax
// 00568f47  3bd9                 cmp ebx, ecx
// 00568f49  7651                 jbe 0x568f9c
// 00568f4b  807e2200             cmp byte ptr [esi + 0x22], 0
// 00568f4f  7515                 jne 0x568f66
// 00568f51  8b5500               mov edx, dword ptr [ebp]
// 00568f54  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 00568f5b  8b4500               mov eax, dword ptr [ebp]
// 00568f5e  8b08                 mov ecx, dword ptr [eax]
// 00568f60  55                   push ebp
// 00568f61  ffd1                 call ecx
// 00568f63  83c404               add esp, 4
// 00568f66  807e2100             cmp byte ptr [esi + 0x21], 0
// 00568f6a  740f                 je 0x568f7b
// 00568f6c  6a01                 push 1
// 00568f6e  55                   push ebp
// 00568f6f  e8acfdffff           call 0x568d20
// 00568f74  83c408               add esp, 8
// 00568f77  c6462100             mov byte ptr [esi + 0x21], 0
// 00568f7b  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 00568f7e  7605                 jbe 0x568f85
// 00568f80  897e18               mov dword ptr [esi + 0x18], edi
// 00568f83  eb0c                 jmp 0x568f91
// 00568f85  8bc3                 mov eax, ebx
// 00568f87  2b4610               sub eax, dword ptr [esi + 0x10]
// 00568f8a  7902                 jns 0x568f8e
// 00568f8c  33c0                 xor eax, eax
// 00568f8e  894618               mov dword ptr [esi + 0x18], eax
// 00568f91  6a00                 push 0
// 00568f93  55                   push ebp
// 00568f94  e887fdffff           call 0x568d20
// 00568f99  83c408               add esp, 8
// 00568f9c  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00568f9f  3bfb                 cmp edi, ebx
// 00568fa1  7361                 jae 0x569004
// 00568fa3  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00568fa7  7320                 jae 0x568fc9
// 00568fa9  807c242400           cmp byte ptr [esp + 0x24], 0
// 00568fae  7415                 je 0x568fc5
// 00568fb0  8b5500               mov edx, dword ptr [ebp]
// 00568fb3  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 00568fba  8b4500               mov eax, dword ptr [ebp]
// 00568fbd  8b08                 mov ecx, dword ptr [eax]
// 00568fbf  55                   push ebp
// 00568fc0  ffd1                 call ecx
// 00568fc2  83c404               add esp, 4
// 00568fc5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00568fc9  8a442424             mov al, byte ptr [esp + 0x24]
// 00568fcd  84c0                 test al, al
// 00568fcf  7403                 je 0x568fd4
// 00568fd1  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00568fd4  807e2000             cmp byte ptr [esi + 0x20], 0
// 00568fd8  7446                 je 0x569020
// 00568fda  8b4618               mov eax, dword ptr [esi + 0x18]
// 00568fdd  8b6e08               mov ebp, dword ptr [esi + 8]
// 00568fe0  2bf8                 sub edi, eax
// 00568fe2  2bd8                 sub ebx, eax
// 00568fe4  c1e507               shl ebp, 7
// 00568fe7  3bfb                 cmp edi, ebx
// 00568fe9  7319                 jae 0x569004
// 00568feb  eb03                 jmp 0x568ff0
// 00568fed  8d4900               lea ecx, [ecx]
// 00568ff0  8b16                 mov edx, dword ptr [esi]
// 00568ff2  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00568ff5  55                   push ebp
// 00568ff6  50                   push eax
// 00568ff7  e844eeffff           call 0x567e40
// 00568ffc  47                   inc edi
// 00568ffd  83c408               add esp, 8
// 00569000  3bfb                 cmp edi, ebx
// 00569002  72ec                 jb 0x568ff0
// 00569004  807c242400           cmp byte ptr [esp + 0x24], 0
// 00569009  7404                 je 0x56900f
// 0056900b  c6462101             mov byte ptr [esi + 0x21], 1
// 0056900f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00569013  2b4618               sub eax, dword ptr [esi + 0x18]
// 00569016  8b0e                 mov ecx, dword ptr [esi]
// 00569018  5f                   pop edi
// 00569019  5e                   pop esi
// 0056901a  5d                   pop ebp
// 0056901b  8d0481               lea eax, [ecx + eax*4]
// 0056901e  5b                   pop ebx
// 0056901f  c3                   ret 
// 00569020  84c0                 test al, al
// 00569022  75e7                 jne 0x56900b
// 00569024  8b4d00               mov ecx, dword ptr [ebp]
// 00569027  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 0056902e  8b5500               mov edx, dword ptr [ebp]
// 00569031  8b02                 mov eax, dword ptr [edx]
// 00569033  55                   push ebp
// 00569034  ffd0                 call eax
// 00569036  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056903a  2b4618               sub eax, dword ptr [esi + 0x18]
// 0056903d  8b0e                 mov ecx, dword ptr [esi]
// 0056903f  83c404               add esp, 4
// 00569042  5f                   pop edi
// 00569043  5e                   pop esi
// 00569044  5d                   pop ebp
// 00569045  8d0481               lea eax, [ecx + eax*4]
// 00569048  5b                   pop ebx
// 00569049  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
