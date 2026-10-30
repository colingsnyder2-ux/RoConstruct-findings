// roc 2009-12 00625060  unit: seg_00620000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00625060
//
// 00625060  56                   push esi
// 00625061  57                   push edi
// 00625062  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00625066  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00625069  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 0062506f  8b11                 mov edx, dword ptr [ecx]
// 00625071  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 00625077  895610               mov dword ptr [esi + 0x10], edx
// 0062507a  8944240c             mov dword ptr [esp + 0xc], eax
// 0062507e  8b4718               mov eax, dword ptr [edi + 0x18]
// 00625081  8b4804               mov ecx, dword ptr [eax + 4]
// 00625084  894e14               mov dword ptr [esi + 0x14], ecx
// 00625087  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 0062508e  7414                 je 0x6250a4
// 00625090  837e4400             cmp dword ptr [esi + 0x44], 0
// 00625094  750e                 jne 0x6250a4
// 00625096  8b5648               mov edx, dword ptr [esi + 0x48]
// 00625099  52                   push edx
// 0062509a  8bc6                 mov eax, esi
// 0062509c  e8cffbffff           call 0x624c70
// 006250a1  83c404               add esp, 4
// 006250a4  53                   push ebx
// 006250a5  33db                 xor ebx, ebx
// 006250a7  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 006250ad  7e2c                 jle 0x6250db
// 006250af  55                   push ebp
// 006250b0  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006250b4  8b449d00             mov eax, dword ptr [ebp + ebx*4]
// 006250b8  668b10               mov dx, word ptr [eax]
// 006250bb  668b4c2414           mov cx, word ptr [esp + 0x14]
// 006250c0  66d3fa               sar dx, cl
// 006250c3  6a01                 push 1
// 006250c5  0fbfc2               movsx eax, dx
// 006250c8  50                   push eax
// 006250c9  e892f9ffff           call 0x624a60
// 006250ce  43                   inc ebx
// 006250cf  83c408               add esp, 8
// 006250d2  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 006250d8  7cda                 jl 0x6250b4
// 006250da  5d                   pop ebp
// 006250db  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006250de  8b5610               mov edx, dword ptr [esi + 0x10]
// 006250e1  8911                 mov dword ptr [ecx], edx
// 006250e3  8b4718               mov eax, dword ptr [edi + 0x18]
// 006250e6  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006250e9  894804               mov dword ptr [eax + 4], ecx
// 006250ec  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 006250f2  5b                   pop ebx
// 006250f3  85ff                 test edi, edi
// 006250f5  7416                 je 0x62510d
// 006250f7  837e4400             cmp dword ptr [esi + 0x44], 0
// 006250fb  750d                 jne 0x62510a
// 006250fd  8b5648               mov edx, dword ptr [esi + 0x48]
// 00625100  42                   inc edx
// 00625101  83e207               and edx, 7
// 00625104  897e44               mov dword ptr [esi + 0x44], edi
// 00625107  895648               mov dword ptr [esi + 0x48], edx
// 0062510a  ff4e44               dec dword ptr [esi + 0x44]
// 0062510d  5f                   pop edi
// 0062510e  b001                 mov al, 1
// 00625110  5e                   pop esi
// 00625111  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
