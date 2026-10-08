// roc 2009-12 00614fb0  unit: seg_00610000  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00614fb0
//
// 00614fb0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00614fb4  53                   push ebx
// 00614fb5  55                   push ebp
// 00614fb6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00614fba  56                   push esi
// 00614fbb  8b742414             mov esi, dword ptr [esp + 0x14]
// 00614fbf  57                   push edi
// 00614fc0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00614fc4  8d1c07               lea ebx, [edi + eax]
// 00614fc7  3b5e04               cmp ebx, dword ptr [esi + 4]
// 00614fca  770a                 ja 0x614fd6
// 00614fcc  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00614fcf  7705                 ja 0x614fd6
// 00614fd1  833e00               cmp dword ptr [esi], 0
// 00614fd4  7515                 jne 0x614feb
// 00614fd6  8b4500               mov eax, dword ptr [ebp]
// 00614fd9  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 00614fe0  8b4d00               mov ecx, dword ptr [ebp]
// 00614fe3  8b11                 mov edx, dword ptr [ecx]
// 00614fe5  55                   push ebp
// 00614fe6  ffd2                 call edx
// 00614fe8  83c404               add esp, 4
// 00614feb  8b4618               mov eax, dword ptr [esi + 0x18]
// 00614fee  3bf8                 cmp edi, eax
// 00614ff0  7209                 jb 0x614ffb
// 00614ff2  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00614ff5  03c8                 add ecx, eax
// 00614ff7  3bd9                 cmp ebx, ecx
// 00614ff9  7651                 jbe 0x61504c
// 00614ffb  807e2200             cmp byte ptr [esi + 0x22], 0
// 00614fff  7515                 jne 0x615016
// 00615001  8b5500               mov edx, dword ptr [ebp]
// 00615004  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 0061500b  8b4500               mov eax, dword ptr [ebp]
// 0061500e  8b08                 mov ecx, dword ptr [eax]
// 00615010  55                   push ebp
// 00615011  ffd1                 call ecx
// 00615013  83c404               add esp, 4
// 00615016  807e2100             cmp byte ptr [esi + 0x21], 0
// 0061501a  740f                 je 0x61502b
// 0061501c  6a01                 push 1
// 0061501e  55                   push ebp
// 0061501f  e8acfdffff           call 0x614dd0
// 00615024  83c408               add esp, 8
// 00615027  c6462100             mov byte ptr [esi + 0x21], 0
// 0061502b  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0061502e  7605                 jbe 0x615035
// 00615030  897e18               mov dword ptr [esi + 0x18], edi
// 00615033  eb0c                 jmp 0x615041
// 00615035  8bc3                 mov eax, ebx
// 00615037  2b4610               sub eax, dword ptr [esi + 0x10]
// 0061503a  7902                 jns 0x61503e
// 0061503c  33c0                 xor eax, eax
// 0061503e  894618               mov dword ptr [esi + 0x18], eax
// 00615041  6a00                 push 0
// 00615043  55                   push ebp
// 00615044  e887fdffff           call 0x614dd0
// 00615049  83c408               add esp, 8
// 0061504c  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0061504f  3bfb                 cmp edi, ebx
// 00615051  7361                 jae 0x6150b4
// 00615053  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00615057  7320                 jae 0x615079
// 00615059  807c242400           cmp byte ptr [esp + 0x24], 0
// 0061505e  7415                 je 0x615075
// 00615060  8b5500               mov edx, dword ptr [ebp]
// 00615063  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 0061506a  8b4500               mov eax, dword ptr [ebp]
// 0061506d  8b08                 mov ecx, dword ptr [eax]
// 0061506f  55                   push ebp
// 00615070  ffd1                 call ecx
// 00615072  83c404               add esp, 4
// 00615075  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00615079  8a442424             mov al, byte ptr [esp + 0x24]
// 0061507d  84c0                 test al, al
// 0061507f  7403                 je 0x615084
// 00615081  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00615084  807e2000             cmp byte ptr [esi + 0x20], 0
// 00615088  7446                 je 0x6150d0
// 0061508a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0061508d  8b6e08               mov ebp, dword ptr [esi + 8]
// 00615090  2bf8                 sub edi, eax
// 00615092  2bd8                 sub ebx, eax
// 00615094  c1e507               shl ebp, 7
// 00615097  3bfb                 cmp edi, ebx
// 00615099  7319                 jae 0x6150b4
// 0061509b  eb03                 jmp 0x6150a0
// 0061509d  8d4900               lea ecx, [ecx]
// 006150a0  8b16                 mov edx, dword ptr [esi]
// 006150a2  8b04ba               mov eax, dword ptr [edx + edi*4]
// 006150a5  55                   push ebp
// 006150a6  50                   push eax
// 006150a7  e8546cffff           call 0x60bd00
// 006150ac  47                   inc edi
// 006150ad  83c408               add esp, 8
// 006150b0  3bfb                 cmp edi, ebx
// 006150b2  72ec                 jb 0x6150a0
// 006150b4  807c242400           cmp byte ptr [esp + 0x24], 0
// 006150b9  7404                 je 0x6150bf
// 006150bb  c6462101             mov byte ptr [esi + 0x21], 1
// 006150bf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006150c3  2b4618               sub eax, dword ptr [esi + 0x18]
// 006150c6  8b0e                 mov ecx, dword ptr [esi]
// 006150c8  5f                   pop edi
// 006150c9  5e                   pop esi
// 006150ca  5d                   pop ebp
// 006150cb  8d0481               lea eax, [ecx + eax*4]
// 006150ce  5b                   pop ebx
// 006150cf  c3                   ret 
// 006150d0  84c0                 test al, al
// 006150d2  75e7                 jne 0x6150bb
// 006150d4  8b4d00               mov ecx, dword ptr [ebp]
// 006150d7  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 006150de  8b5500               mov edx, dword ptr [ebp]
// 006150e1  8b02                 mov eax, dword ptr [edx]
// 006150e3  55                   push ebp
// 006150e4  ffd0                 call eax
// 006150e6  8b442420             mov eax, dword ptr [esp + 0x20]
// 006150ea  2b4618               sub eax, dword ptr [esi + 0x18]
// 006150ed  8b0e                 mov ecx, dword ptr [esi]
// 006150ef  83c404               add esp, 4
// 006150f2  5f                   pop edi
// 006150f3  5e                   pop esi
// 006150f4  5d                   pop ebp
// 006150f5  8d0481               lea eax, [ecx + eax*4]
// 006150f8  5b                   pop ebx
// 006150f9  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
