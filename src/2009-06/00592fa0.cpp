// roc 2009-06 00592fa0  unit: seg_00590000  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592fa0
//
// 00592fa0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00592fa4  53                   push ebx
// 00592fa5  55                   push ebp
// 00592fa6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00592faa  56                   push esi
// 00592fab  8b742414             mov esi, dword ptr [esp + 0x14]
// 00592faf  57                   push edi
// 00592fb0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00592fb4  8d1c07               lea ebx, [edi + eax]
// 00592fb7  3b5e04               cmp ebx, dword ptr [esi + 4]
// 00592fba  770a                 ja 0x592fc6
// 00592fbc  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00592fbf  7705                 ja 0x592fc6
// 00592fc1  833e00               cmp dword ptr [esi], 0
// 00592fc4  7515                 jne 0x592fdb
// 00592fc6  8b4500               mov eax, dword ptr [ebp]
// 00592fc9  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 00592fd0  8b4d00               mov ecx, dword ptr [ebp]
// 00592fd3  8b11                 mov edx, dword ptr [ecx]
// 00592fd5  55                   push ebp
// 00592fd6  ffd2                 call edx
// 00592fd8  83c404               add esp, 4
// 00592fdb  8b4618               mov eax, dword ptr [esi + 0x18]
// 00592fde  3bf8                 cmp edi, eax
// 00592fe0  7209                 jb 0x592feb
// 00592fe2  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00592fe5  03c8                 add ecx, eax
// 00592fe7  3bd9                 cmp ebx, ecx
// 00592fe9  7651                 jbe 0x59303c
// 00592feb  807e2200             cmp byte ptr [esi + 0x22], 0
// 00592fef  7515                 jne 0x593006
// 00592ff1  8b5500               mov edx, dword ptr [ebp]
// 00592ff4  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 00592ffb  8b4500               mov eax, dword ptr [ebp]
// 00592ffe  8b08                 mov ecx, dword ptr [eax]
// 00593000  55                   push ebp
// 00593001  ffd1                 call ecx
// 00593003  83c404               add esp, 4
// 00593006  807e2100             cmp byte ptr [esi + 0x21], 0
// 0059300a  740f                 je 0x59301b
// 0059300c  6a01                 push 1
// 0059300e  55                   push ebp
// 0059300f  e8acfdffff           call 0x592dc0
// 00593014  83c408               add esp, 8
// 00593017  c6462100             mov byte ptr [esi + 0x21], 0
// 0059301b  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0059301e  7605                 jbe 0x593025
// 00593020  897e18               mov dword ptr [esi + 0x18], edi
// 00593023  eb0c                 jmp 0x593031
// 00593025  8bc3                 mov eax, ebx
// 00593027  2b4610               sub eax, dword ptr [esi + 0x10]
// 0059302a  7902                 jns 0x59302e
// 0059302c  33c0                 xor eax, eax
// 0059302e  894618               mov dword ptr [esi + 0x18], eax
// 00593031  6a00                 push 0
// 00593033  55                   push ebp
// 00593034  e887fdffff           call 0x592dc0
// 00593039  83c408               add esp, 8
// 0059303c  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0059303f  3bfb                 cmp edi, ebx
// 00593041  7361                 jae 0x5930a4
// 00593043  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00593047  7320                 jae 0x593069
// 00593049  807c242400           cmp byte ptr [esp + 0x24], 0
// 0059304e  7415                 je 0x593065
// 00593050  8b5500               mov edx, dword ptr [ebp]
// 00593053  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 0059305a  8b4500               mov eax, dword ptr [ebp]
// 0059305d  8b08                 mov ecx, dword ptr [eax]
// 0059305f  55                   push ebp
// 00593060  ffd1                 call ecx
// 00593062  83c404               add esp, 4
// 00593065  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00593069  8a442424             mov al, byte ptr [esp + 0x24]
// 0059306d  84c0                 test al, al
// 0059306f  7403                 je 0x593074
// 00593071  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00593074  807e2000             cmp byte ptr [esi + 0x20], 0
// 00593078  7446                 je 0x5930c0
// 0059307a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059307d  8b6e08               mov ebp, dword ptr [esi + 8]
// 00593080  2bf8                 sub edi, eax
// 00593082  2bd8                 sub ebx, eax
// 00593084  c1e507               shl ebp, 7
// 00593087  3bfb                 cmp edi, ebx
// 00593089  7319                 jae 0x5930a4
// 0059308b  eb03                 jmp 0x593090
// 0059308d  8d4900               lea ecx, [ecx]
// 00593090  8b16                 mov edx, dword ptr [esi]
// 00593092  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00593095  55                   push ebp
// 00593096  50                   push eax
// 00593097  e8146effff           call 0x589eb0
// 0059309c  47                   inc edi
// 0059309d  83c408               add esp, 8
// 005930a0  3bfb                 cmp edi, ebx
// 005930a2  72ec                 jb 0x593090
// 005930a4  807c242400           cmp byte ptr [esp + 0x24], 0
// 005930a9  7404                 je 0x5930af
// 005930ab  c6462101             mov byte ptr [esi + 0x21], 1
// 005930af  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005930b3  2b4618               sub eax, dword ptr [esi + 0x18]
// 005930b6  8b0e                 mov ecx, dword ptr [esi]
// 005930b8  5f                   pop edi
// 005930b9  5e                   pop esi
// 005930ba  5d                   pop ebp
// 005930bb  8d0481               lea eax, [ecx + eax*4]
// 005930be  5b                   pop ebx
// 005930bf  c3                   ret 
// 005930c0  84c0                 test al, al
// 005930c2  75e7                 jne 0x5930ab
// 005930c4  8b4d00               mov ecx, dword ptr [ebp]
// 005930c7  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 005930ce  8b5500               mov edx, dword ptr [ebp]
// 005930d1  8b02                 mov eax, dword ptr [edx]
// 005930d3  55                   push ebp
// 005930d4  ffd0                 call eax
// 005930d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005930da  2b4618               sub eax, dword ptr [esi + 0x18]
// 005930dd  8b0e                 mov ecx, dword ptr [esi]
// 005930df  83c404               add esp, 4
// 005930e2  5f                   pop edi
// 005930e3  5e                   pop esi
// 005930e4  5d                   pop ebp
// 005930e5  8d0481               lea eax, [ecx + eax*4]
// 005930e8  5b                   pop ebx
// 005930e9  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
