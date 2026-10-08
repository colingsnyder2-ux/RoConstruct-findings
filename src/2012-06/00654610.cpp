// from server: 100% by auto
// roc 2012-06 00654610  unit: seg_00650000  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00654610
//
// 00654610  8b442410             mov eax, dword ptr [esp + 0x10]
// 00654614  53                   push ebx
// 00654615  55                   push ebp
// 00654616  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0065461a  56                   push esi
// 0065461b  8b742414             mov esi, dword ptr [esp + 0x14]
// 0065461f  57                   push edi
// 00654620  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00654624  8d1c07               lea ebx, [edi + eax]
// 00654627  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0065462a  770a                 ja 0x654636
// 0065462c  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0065462f  7705                 ja 0x654636
// 00654631  833e00               cmp dword ptr [esi], 0
// 00654634  7515                 jne 0x65464b
// 00654636  8b4500               mov eax, dword ptr [ebp]
// 00654639  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 00654640  8b4d00               mov ecx, dword ptr [ebp]
// 00654643  8b11                 mov edx, dword ptr [ecx]
// 00654645  55                   push ebp
// 00654646  ffd2                 call edx
// 00654648  83c404               add esp, 4
// 0065464b  8b4618               mov eax, dword ptr [esi + 0x18]
// 0065464e  3bf8                 cmp edi, eax
// 00654650  7209                 jb 0x65465b
// 00654652  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00654655  03c8                 add ecx, eax
// 00654657  3bd9                 cmp ebx, ecx
// 00654659  7651                 jbe 0x6546ac
// 0065465b  807e2200             cmp byte ptr [esi + 0x22], 0
// 0065465f  7515                 jne 0x654676
// 00654661  8b5500               mov edx, dword ptr [ebp]
// 00654664  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 0065466b  8b4500               mov eax, dword ptr [ebp]
// 0065466e  8b08                 mov ecx, dword ptr [eax]
// 00654670  55                   push ebp
// 00654671  ffd1                 call ecx
// 00654673  83c404               add esp, 4
// 00654676  807e2100             cmp byte ptr [esi + 0x21], 0
// 0065467a  740f                 je 0x65468b
// 0065467c  6a01                 push 1
// 0065467e  55                   push ebp
// 0065467f  e8acfdffff           call 0x654430
// 00654684  83c408               add esp, 8
// 00654687  c6462100             mov byte ptr [esi + 0x21], 0
// 0065468b  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0065468e  7605                 jbe 0x654695
// 00654690  897e18               mov dword ptr [esi + 0x18], edi
// 00654693  eb0c                 jmp 0x6546a1
// 00654695  8bc3                 mov eax, ebx
// 00654697  2b4610               sub eax, dword ptr [esi + 0x10]
// 0065469a  7902                 jns 0x65469e
// 0065469c  33c0                 xor eax, eax
// 0065469e  894618               mov dword ptr [esi + 0x18], eax
// 006546a1  6a00                 push 0
// 006546a3  55                   push ebp
// 006546a4  e887fdffff           call 0x654430
// 006546a9  83c408               add esp, 8
// 006546ac  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 006546af  3bfb                 cmp edi, ebx
// 006546b1  7361                 jae 0x654714
// 006546b3  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 006546b7  7320                 jae 0x6546d9
// 006546b9  807c242400           cmp byte ptr [esp + 0x24], 0
// 006546be  7415                 je 0x6546d5
// 006546c0  8b5500               mov edx, dword ptr [ebp]
// 006546c3  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 006546ca  8b4500               mov eax, dword ptr [ebp]
// 006546cd  8b08                 mov ecx, dword ptr [eax]
// 006546cf  55                   push ebp
// 006546d0  ffd1                 call ecx
// 006546d2  83c404               add esp, 4
// 006546d5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006546d9  8a442424             mov al, byte ptr [esp + 0x24]
// 006546dd  84c0                 test al, al
// 006546df  7403                 je 0x6546e4
// 006546e1  895e1c               mov dword ptr [esi + 0x1c], ebx
// 006546e4  807e2000             cmp byte ptr [esi + 0x20], 0
// 006546e8  7446                 je 0x654730
// 006546ea  8b4618               mov eax, dword ptr [esi + 0x18]
// 006546ed  8b6e08               mov ebp, dword ptr [esi + 8]
// 006546f0  2bf8                 sub edi, eax
// 006546f2  2bd8                 sub ebx, eax
// 006546f4  c1e507               shl ebp, 7
// 006546f7  3bfb                 cmp edi, ebx
// 006546f9  7319                 jae 0x654714
// 006546fb  eb03                 jmp 0x654700
// 006546fd  8d4900               lea ecx, [ecx]
// 00654700  8b16                 mov edx, dword ptr [esi]
// 00654702  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00654705  55                   push ebp
// 00654706  50                   push eax
// 00654707  e844eeffff           call 0x653550
// 0065470c  47                   inc edi
// 0065470d  83c408               add esp, 8
// 00654710  3bfb                 cmp edi, ebx
// 00654712  72ec                 jb 0x654700
// 00654714  807c242400           cmp byte ptr [esp + 0x24], 0
// 00654719  7404                 je 0x65471f
// 0065471b  c6462101             mov byte ptr [esi + 0x21], 1
// 0065471f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00654723  2b4618               sub eax, dword ptr [esi + 0x18]
// 00654726  8b0e                 mov ecx, dword ptr [esi]
// 00654728  5f                   pop edi
// 00654729  5e                   pop esi
// 0065472a  5d                   pop ebp
// 0065472b  8d0481               lea eax, [ecx + eax*4]
// 0065472e  5b                   pop ebx
// 0065472f  c3                   ret 
// 00654730  84c0                 test al, al
// 00654732  75e7                 jne 0x65471b
// 00654734  8b4d00               mov ecx, dword ptr [ebp]
// 00654737  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 0065473e  8b5500               mov edx, dword ptr [ebp]
// 00654741  8b02                 mov eax, dword ptr [edx]
// 00654743  55                   push ebp
// 00654744  ffd0                 call eax
// 00654746  8b442420             mov eax, dword ptr [esp + 0x20]
// 0065474a  2b4618               sub eax, dword ptr [esi + 0x18]
// 0065474d  8b0e                 mov ecx, dword ptr [esi]
// 0065474f  83c404               add esp, 4
// 00654752  5f                   pop edi
// 00654753  5e                   pop esi
// 00654754  5d                   pop ebp
// 00654755  8d0481               lea eax, [ecx + eax*4]
// 00654758  5b                   pop ebx
// 00654759  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
