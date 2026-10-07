// roc 2008-06 00538d50  unit: seg_00530000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00538d50
//
// 00538d50  56                   push esi
// 00538d51  57                   push edi
// 00538d52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00538d56  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00538d59  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 00538d5f  8b11                 mov edx, dword ptr [ecx]
// 00538d61  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 00538d67  895610               mov dword ptr [esi + 0x10], edx
// 00538d6a  8944240c             mov dword ptr [esp + 0xc], eax
// 00538d6e  8b4718               mov eax, dword ptr [edi + 0x18]
// 00538d71  8b4804               mov ecx, dword ptr [eax + 4]
// 00538d74  894e14               mov dword ptr [esi + 0x14], ecx
// 00538d77  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 00538d7e  7414                 je 0x538d94
// 00538d80  837e4400             cmp dword ptr [esi + 0x44], 0
// 00538d84  750e                 jne 0x538d94
// 00538d86  8b5648               mov edx, dword ptr [esi + 0x48]
// 00538d89  52                   push edx
// 00538d8a  8bc6                 mov eax, esi
// 00538d8c  e8cffbffff           call 0x538960
// 00538d91  83c404               add esp, 4
// 00538d94  53                   push ebx
// 00538d95  33db                 xor ebx, ebx
// 00538d97  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 00538d9d  7e2c                 jle 0x538dcb
// 00538d9f  55                   push ebp
// 00538da0  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00538da4  8b449d00             mov eax, dword ptr [ebp + ebx*4]
// 00538da8  668b10               mov dx, word ptr [eax]
// 00538dab  668b4c2414           mov cx, word ptr [esp + 0x14]
// 00538db0  66d3fa               sar dx, cl
// 00538db3  6a01                 push 1
// 00538db5  0fbfc2               movsx eax, dx
// 00538db8  50                   push eax
// 00538db9  e892f9ffff           call 0x538750
// 00538dbe  43                   inc ebx
// 00538dbf  83c408               add esp, 8
// 00538dc2  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 00538dc8  7cda                 jl 0x538da4
// 00538dca  5d                   pop ebp
// 00538dcb  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00538dce  8b5610               mov edx, dword ptr [esi + 0x10]
// 00538dd1  8911                 mov dword ptr [ecx], edx
// 00538dd3  8b4718               mov eax, dword ptr [edi + 0x18]
// 00538dd6  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00538dd9  894804               mov dword ptr [eax + 4], ecx
// 00538ddc  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 00538de2  5b                   pop ebx
// 00538de3  85ff                 test edi, edi
// 00538de5  7416                 je 0x538dfd
// 00538de7  837e4400             cmp dword ptr [esi + 0x44], 0
// 00538deb  750d                 jne 0x538dfa
// 00538ded  8b5648               mov edx, dword ptr [esi + 0x48]
// 00538df0  42                   inc edx
// 00538df1  83e207               and edx, 7
// 00538df4  897e44               mov dword ptr [esi + 0x44], edi
// 00538df7  895648               mov dword ptr [esi + 0x48], edx
// 00538dfa  ff4e44               dec dword ptr [esi + 0x44]
// 00538dfd  5f                   pop edi
// 00538dfe  b001                 mov al, 1
// 00538e00  5e                   pop esi
// 00538e01  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
