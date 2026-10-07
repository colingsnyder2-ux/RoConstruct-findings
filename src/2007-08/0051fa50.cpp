// roc 2007-08 0051fa50  unit: seg_00510000  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051fa50
//
// 0051fa50  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051fa54  53                   push ebx
// 0051fa55  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0051fa59  55                   push ebp
// 0051fa5a  56                   push esi
// 0051fa5b  8b742414             mov esi, dword ptr [esp + 0x14]
// 0051fa5f  57                   push edi
// 0051fa60  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0051fa64  8d2c07               lea ebp, [edi + eax]
// 0051fa67  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0051fa6a  770a                 ja 0x51fa76
// 0051fa6c  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0051fa6f  7705                 ja 0x51fa76
// 0051fa71  833e00               cmp dword ptr [esi], 0
// 0051fa74  7513                 jne 0x51fa89
// 0051fa76  8b03                 mov eax, dword ptr [ebx]
// 0051fa78  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 0051fa7f  8b0b                 mov ecx, dword ptr [ebx]
// 0051fa81  8b11                 mov edx, dword ptr [ecx]
// 0051fa83  53                   push ebx
// 0051fa84  ffd2                 call edx
// 0051fa86  83c404               add esp, 4
// 0051fa89  8b4618               mov eax, dword ptr [esi + 0x18]
// 0051fa8c  3bf8                 cmp edi, eax
// 0051fa8e  7209                 jb 0x51fa99
// 0051fa90  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0051fa93  03c8                 add ecx, eax
// 0051fa95  3be9                 cmp ebp, ecx
// 0051fa97  764f                 jbe 0x51fae8
// 0051fa99  807e2200             cmp byte ptr [esi + 0x22], 0
// 0051fa9d  7513                 jne 0x51fab2
// 0051fa9f  8b13                 mov edx, dword ptr [ebx]
// 0051faa1  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 0051faa8  8b03                 mov eax, dword ptr [ebx]
// 0051faaa  8b08                 mov ecx, dword ptr [eax]
// 0051faac  53                   push ebx
// 0051faad  ffd1                 call ecx
// 0051faaf  83c404               add esp, 4
// 0051fab2  807e2100             cmp byte ptr [esi + 0x21], 0
// 0051fab6  740f                 je 0x51fac7
// 0051fab8  6a01                 push 1
// 0051faba  53                   push ebx
// 0051fabb  e850feffff           call 0x51f910
// 0051fac0  83c408               add esp, 8
// 0051fac3  c6462100             mov byte ptr [esi + 0x21], 0
// 0051fac7  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0051faca  7605                 jbe 0x51fad1
// 0051facc  897e18               mov dword ptr [esi + 0x18], edi
// 0051facf  eb0c                 jmp 0x51fadd
// 0051fad1  8bc5                 mov eax, ebp
// 0051fad3  2b4610               sub eax, dword ptr [esi + 0x10]
// 0051fad6  7902                 jns 0x51fada
// 0051fad8  33c0                 xor eax, eax
// 0051fada  894618               mov dword ptr [esi + 0x18], eax
// 0051fadd  6a00                 push 0
// 0051fadf  53                   push ebx
// 0051fae0  e82bfeffff           call 0x51f910
// 0051fae5  83c408               add esp, 8
// 0051fae8  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0051faeb  3bfd                 cmp edi, ebp
// 0051faed  7359                 jae 0x51fb48
// 0051faef  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0051faf3  731e                 jae 0x51fb13
// 0051faf5  807c242400           cmp byte ptr [esp + 0x24], 0
// 0051fafa  7413                 je 0x51fb0f
// 0051fafc  8b13                 mov edx, dword ptr [ebx]
// 0051fafe  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 0051fb05  8b03                 mov eax, dword ptr [ebx]
// 0051fb07  8b08                 mov ecx, dword ptr [eax]
// 0051fb09  53                   push ebx
// 0051fb0a  ffd1                 call ecx
// 0051fb0c  83c404               add esp, 4
// 0051fb0f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0051fb13  8a442424             mov al, byte ptr [esp + 0x24]
// 0051fb17  84c0                 test al, al
// 0051fb19  7403                 je 0x51fb1e
// 0051fb1b  896e1c               mov dword ptr [esi + 0x1c], ebp
// 0051fb1e  807e2000             cmp byte ptr [esi + 0x20], 0
// 0051fb22  7440                 je 0x51fb64
// 0051fb24  8b4618               mov eax, dword ptr [esi + 0x18]
// 0051fb27  8b5e08               mov ebx, dword ptr [esi + 8]
// 0051fb2a  2bf8                 sub edi, eax
// 0051fb2c  2be8                 sub ebp, eax
// 0051fb2e  3bfd                 cmp edi, ebp
// 0051fb30  7316                 jae 0x51fb48
// 0051fb32  8b16                 mov edx, dword ptr [esi]
// 0051fb34  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0051fb37  53                   push ebx
// 0051fb38  50                   push eax
// 0051fb39  e8b2e7ffff           call 0x51e2f0
// 0051fb3e  83c701               add edi, 1
// 0051fb41  83c408               add esp, 8
// 0051fb44  3bfd                 cmp edi, ebp
// 0051fb46  72ea                 jb 0x51fb32
// 0051fb48  807c242400           cmp byte ptr [esp + 0x24], 0
// 0051fb4d  7404                 je 0x51fb53
// 0051fb4f  c6462101             mov byte ptr [esi + 0x21], 1
// 0051fb53  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051fb57  2b4618               sub eax, dword ptr [esi + 0x18]
// 0051fb5a  8b0e                 mov ecx, dword ptr [esi]
// 0051fb5c  5f                   pop edi
// 0051fb5d  5e                   pop esi
// 0051fb5e  5d                   pop ebp
// 0051fb5f  8d0481               lea eax, [ecx + eax*4]
// 0051fb62  5b                   pop ebx
// 0051fb63  c3                   ret 
// 0051fb64  84c0                 test al, al
// 0051fb66  75e7                 jne 0x51fb4f
// 0051fb68  8b0b                 mov ecx, dword ptr [ebx]
// 0051fb6a  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 0051fb71  8b13                 mov edx, dword ptr [ebx]
// 0051fb73  8b02                 mov eax, dword ptr [edx]
// 0051fb75  53                   push ebx
// 0051fb76  ffd0                 call eax
// 0051fb78  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051fb7c  2b4618               sub eax, dword ptr [esi + 0x18]
// 0051fb7f  8b0e                 mov ecx, dword ptr [esi]
// 0051fb81  83c404               add esp, 4
// 0051fb84  5f                   pop edi
// 0051fb85  5e                   pop esi
// 0051fb86  5d                   pop ebp
// 0051fb87  8d0481               lea eax, [ecx + eax*4]
// 0051fb8a  5b                   pop ebx
// 0051fb8b  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_sarray)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
