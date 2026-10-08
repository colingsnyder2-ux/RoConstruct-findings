// from server: 100% by auto
// roc 2010-06 005768d0  unit: seg_00570000  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005768d0
//
// 005768d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005768d4  53                   push ebx
// 005768d5  55                   push ebp
// 005768d6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005768da  56                   push esi
// 005768db  8b742414             mov esi, dword ptr [esp + 0x14]
// 005768df  57                   push edi
// 005768e0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005768e4  8d1c07               lea ebx, [edi + eax]
// 005768e7  3b5e04               cmp ebx, dword ptr [esi + 4]
// 005768ea  770a                 ja 0x5768f6
// 005768ec  3b460c               cmp eax, dword ptr [esi + 0xc]
// 005768ef  7705                 ja 0x5768f6
// 005768f1  833e00               cmp dword ptr [esi], 0
// 005768f4  7515                 jne 0x57690b
// 005768f6  8b4500               mov eax, dword ptr [ebp]
// 005768f9  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 00576900  8b4d00               mov ecx, dword ptr [ebp]
// 00576903  8b11                 mov edx, dword ptr [ecx]
// 00576905  55                   push ebp
// 00576906  ffd2                 call edx
// 00576908  83c404               add esp, 4
// 0057690b  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057690e  3bf8                 cmp edi, eax
// 00576910  7209                 jb 0x57691b
// 00576912  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00576915  03c8                 add ecx, eax
// 00576917  3bd9                 cmp ebx, ecx
// 00576919  7651                 jbe 0x57696c
// 0057691b  807e2200             cmp byte ptr [esi + 0x22], 0
// 0057691f  7515                 jne 0x576936
// 00576921  8b5500               mov edx, dword ptr [ebp]
// 00576924  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 0057692b  8b4500               mov eax, dword ptr [ebp]
// 0057692e  8b08                 mov ecx, dword ptr [eax]
// 00576930  55                   push ebp
// 00576931  ffd1                 call ecx
// 00576933  83c404               add esp, 4
// 00576936  807e2100             cmp byte ptr [esi + 0x21], 0
// 0057693a  740f                 je 0x57694b
// 0057693c  6a01                 push 1
// 0057693e  55                   push ebp
// 0057693f  e8acfdffff           call 0x5766f0
// 00576944  83c408               add esp, 8
// 00576947  c6462100             mov byte ptr [esi + 0x21], 0
// 0057694b  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0057694e  7605                 jbe 0x576955
// 00576950  897e18               mov dword ptr [esi + 0x18], edi
// 00576953  eb0c                 jmp 0x576961
// 00576955  8bc3                 mov eax, ebx
// 00576957  2b4610               sub eax, dword ptr [esi + 0x10]
// 0057695a  7902                 jns 0x57695e
// 0057695c  33c0                 xor eax, eax
// 0057695e  894618               mov dword ptr [esi + 0x18], eax
// 00576961  6a00                 push 0
// 00576963  55                   push ebp
// 00576964  e887fdffff           call 0x5766f0
// 00576969  83c408               add esp, 8
// 0057696c  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0057696f  3bfb                 cmp edi, ebx
// 00576971  7361                 jae 0x5769d4
// 00576973  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00576977  7320                 jae 0x576999
// 00576979  807c242400           cmp byte ptr [esp + 0x24], 0
// 0057697e  7415                 je 0x576995
// 00576980  8b5500               mov edx, dword ptr [ebp]
// 00576983  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 0057698a  8b4500               mov eax, dword ptr [ebp]
// 0057698d  8b08                 mov ecx, dword ptr [eax]
// 0057698f  55                   push ebp
// 00576990  ffd1                 call ecx
// 00576992  83c404               add esp, 4
// 00576995  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00576999  8a442424             mov al, byte ptr [esp + 0x24]
// 0057699d  84c0                 test al, al
// 0057699f  7403                 je 0x5769a4
// 005769a1  895e1c               mov dword ptr [esi + 0x1c], ebx
// 005769a4  807e2000             cmp byte ptr [esi + 0x20], 0
// 005769a8  7446                 je 0x5769f0
// 005769aa  8b4618               mov eax, dword ptr [esi + 0x18]
// 005769ad  8b6e08               mov ebp, dword ptr [esi + 8]
// 005769b0  2bf8                 sub edi, eax
// 005769b2  2bd8                 sub ebx, eax
// 005769b4  c1e507               shl ebp, 7
// 005769b7  3bfb                 cmp edi, ebx
// 005769b9  7319                 jae 0x5769d4
// 005769bb  eb03                 jmp 0x5769c0
// 005769bd  8d4900               lea ecx, [ecx]
// 005769c0  8b16                 mov edx, dword ptr [esi]
// 005769c2  8b04ba               mov eax, dword ptr [edx + edi*4]
// 005769c5  55                   push ebp
// 005769c6  50                   push eax
// 005769c7  e8146affff           call 0x56d3e0
// 005769cc  47                   inc edi
// 005769cd  83c408               add esp, 8
// 005769d0  3bfb                 cmp edi, ebx
// 005769d2  72ec                 jb 0x5769c0
// 005769d4  807c242400           cmp byte ptr [esp + 0x24], 0
// 005769d9  7404                 je 0x5769df
// 005769db  c6462101             mov byte ptr [esi + 0x21], 1
// 005769df  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005769e3  2b4618               sub eax, dword ptr [esi + 0x18]
// 005769e6  8b0e                 mov ecx, dword ptr [esi]
// 005769e8  5f                   pop edi
// 005769e9  5e                   pop esi
// 005769ea  5d                   pop ebp
// 005769eb  8d0481               lea eax, [ecx + eax*4]
// 005769ee  5b                   pop ebx
// 005769ef  c3                   ret 
// 005769f0  84c0                 test al, al
// 005769f2  75e7                 jne 0x5769db
// 005769f4  8b4d00               mov ecx, dword ptr [ebp]
// 005769f7  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 005769fe  8b5500               mov edx, dword ptr [ebp]
// 00576a01  8b02                 mov eax, dword ptr [edx]
// 00576a03  55                   push ebp
// 00576a04  ffd0                 call eax
// 00576a06  8b442420             mov eax, dword ptr [esp + 0x20]
// 00576a0a  2b4618               sub eax, dword ptr [esi + 0x18]
// 00576a0d  8b0e                 mov ecx, dword ptr [esi]
// 00576a0f  83c404               add esp, 4
// 00576a12  5f                   pop edi
// 00576a13  5e                   pop esi
// 00576a14  5d                   pop ebp
// 00576a15  8d0481               lea eax, [ecx + eax*4]
// 00576a18  5b                   pop ebx
// 00576a19  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
