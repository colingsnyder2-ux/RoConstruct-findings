// from server: 100% by auto
// roc 2007-08 0051fb90  unit: seg_00510000  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051fb90
//
// 0051fb90  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051fb94  53                   push ebx
// 0051fb95  55                   push ebp
// 0051fb96  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0051fb9a  56                   push esi
// 0051fb9b  8b742414             mov esi, dword ptr [esp + 0x14]
// 0051fb9f  57                   push edi
// 0051fba0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0051fba4  8d1c07               lea ebx, [edi + eax]
// 0051fba7  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0051fbaa  770a                 ja 0x51fbb6
// 0051fbac  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0051fbaf  7705                 ja 0x51fbb6
// 0051fbb1  833e00               cmp dword ptr [esi], 0
// 0051fbb4  7515                 jne 0x51fbcb
// 0051fbb6  8b4500               mov eax, dword ptr [ebp]
// 0051fbb9  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 0051fbc0  8b4d00               mov ecx, dword ptr [ebp]
// 0051fbc3  8b11                 mov edx, dword ptr [ecx]
// 0051fbc5  55                   push ebp
// 0051fbc6  ffd2                 call edx
// 0051fbc8  83c404               add esp, 4
// 0051fbcb  8b4618               mov eax, dword ptr [esi + 0x18]
// 0051fbce  3bf8                 cmp edi, eax
// 0051fbd0  7209                 jb 0x51fbdb
// 0051fbd2  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0051fbd5  03c8                 add ecx, eax
// 0051fbd7  3bd9                 cmp ebx, ecx
// 0051fbd9  7651                 jbe 0x51fc2c
// 0051fbdb  807e2200             cmp byte ptr [esi + 0x22], 0
// 0051fbdf  7515                 jne 0x51fbf6
// 0051fbe1  8b5500               mov edx, dword ptr [ebp]
// 0051fbe4  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 0051fbeb  8b4500               mov eax, dword ptr [ebp]
// 0051fbee  8b08                 mov ecx, dword ptr [eax]
// 0051fbf0  55                   push ebp
// 0051fbf1  ffd1                 call ecx
// 0051fbf3  83c404               add esp, 4
// 0051fbf6  807e2100             cmp byte ptr [esi + 0x21], 0
// 0051fbfa  740f                 je 0x51fc0b
// 0051fbfc  6a01                 push 1
// 0051fbfe  55                   push ebp
// 0051fbff  e8acfdffff           call 0x51f9b0
// 0051fc04  83c408               add esp, 8
// 0051fc07  c6462100             mov byte ptr [esi + 0x21], 0
// 0051fc0b  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0051fc0e  7605                 jbe 0x51fc15
// 0051fc10  897e18               mov dword ptr [esi + 0x18], edi
// 0051fc13  eb0c                 jmp 0x51fc21
// 0051fc15  8bc3                 mov eax, ebx
// 0051fc17  2b4610               sub eax, dword ptr [esi + 0x10]
// 0051fc1a  7902                 jns 0x51fc1e
// 0051fc1c  33c0                 xor eax, eax
// 0051fc1e  894618               mov dword ptr [esi + 0x18], eax
// 0051fc21  6a00                 push 0
// 0051fc23  55                   push ebp
// 0051fc24  e887fdffff           call 0x51f9b0
// 0051fc29  83c408               add esp, 8
// 0051fc2c  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0051fc2f  3bfb                 cmp edi, ebx
// 0051fc31  7363                 jae 0x51fc96
// 0051fc33  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0051fc37  7320                 jae 0x51fc59
// 0051fc39  807c242400           cmp byte ptr [esp + 0x24], 0
// 0051fc3e  7415                 je 0x51fc55
// 0051fc40  8b5500               mov edx, dword ptr [ebp]
// 0051fc43  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 0051fc4a  8b4500               mov eax, dword ptr [ebp]
// 0051fc4d  8b08                 mov ecx, dword ptr [eax]
// 0051fc4f  55                   push ebp
// 0051fc50  ffd1                 call ecx
// 0051fc52  83c404               add esp, 4
// 0051fc55  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0051fc59  8a442424             mov al, byte ptr [esp + 0x24]
// 0051fc5d  84c0                 test al, al
// 0051fc5f  7403                 je 0x51fc64
// 0051fc61  895e1c               mov dword ptr [esi + 0x1c], ebx
// 0051fc64  807e2000             cmp byte ptr [esi + 0x20], 0
// 0051fc68  7448                 je 0x51fcb2
// 0051fc6a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0051fc6d  8b6e08               mov ebp, dword ptr [esi + 8]
// 0051fc70  2bf8                 sub edi, eax
// 0051fc72  2bd8                 sub ebx, eax
// 0051fc74  c1e507               shl ebp, 7
// 0051fc77  3bfb                 cmp edi, ebx
// 0051fc79  731b                 jae 0x51fc96
// 0051fc7b  eb03                 jmp 0x51fc80
// 0051fc7d  8d4900               lea ecx, [ecx]
// 0051fc80  8b16                 mov edx, dword ptr [esi]
// 0051fc82  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0051fc85  55                   push ebp
// 0051fc86  50                   push eax
// 0051fc87  e864e6ffff           call 0x51e2f0
// 0051fc8c  83c701               add edi, 1
// 0051fc8f  83c408               add esp, 8
// 0051fc92  3bfb                 cmp edi, ebx
// 0051fc94  72ea                 jb 0x51fc80
// 0051fc96  807c242400           cmp byte ptr [esp + 0x24], 0
// 0051fc9b  7404                 je 0x51fca1
// 0051fc9d  c6462101             mov byte ptr [esi + 0x21], 1
// 0051fca1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051fca5  2b4618               sub eax, dword ptr [esi + 0x18]
// 0051fca8  8b0e                 mov ecx, dword ptr [esi]
// 0051fcaa  5f                   pop edi
// 0051fcab  5e                   pop esi
// 0051fcac  5d                   pop ebp
// 0051fcad  8d0481               lea eax, [ecx + eax*4]
// 0051fcb0  5b                   pop ebx
// 0051fcb1  c3                   ret 
// 0051fcb2  84c0                 test al, al
// 0051fcb4  75e7                 jne 0x51fc9d
// 0051fcb6  8b4d00               mov ecx, dword ptr [ebp]
// 0051fcb9  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 0051fcc0  8b5500               mov edx, dword ptr [ebp]
// 0051fcc3  8b02                 mov eax, dword ptr [edx]
// 0051fcc5  55                   push ebp
// 0051fcc6  ffd0                 call eax
// 0051fcc8  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051fccc  2b4618               sub eax, dword ptr [esi + 0x18]
// 0051fccf  8b0e                 mov ecx, dword ptr [esi]
// 0051fcd1  83c404               add esp, 4
// 0051fcd4  5f                   pop edi
// 0051fcd5  5e                   pop esi
// 0051fcd6  5d                   pop ebp
// 0051fcd7  8d0481               lea eax, [ecx + eax*4]
// 0051fcda  5b                   pop ebx
// 0051fcdb  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_barray)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
