// from server: 100% by auto
// roc 2011-06 0057ce70  unit: seg_00570000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057ce70
//
// 0057ce70  56                   push esi
// 0057ce71  57                   push edi
// 0057ce72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057ce76  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0057ce79  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 0057ce7f  8b11                 mov edx, dword ptr [ecx]
// 0057ce81  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 0057ce87  895610               mov dword ptr [esi + 0x10], edx
// 0057ce8a  8944240c             mov dword ptr [esp + 0xc], eax
// 0057ce8e  8b4718               mov eax, dword ptr [edi + 0x18]
// 0057ce91  8b4804               mov ecx, dword ptr [eax + 4]
// 0057ce94  894e14               mov dword ptr [esi + 0x14], ecx
// 0057ce97  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 0057ce9e  7414                 je 0x57ceb4
// 0057cea0  837e4400             cmp dword ptr [esi + 0x44], 0
// 0057cea4  750e                 jne 0x57ceb4
// 0057cea6  8b5648               mov edx, dword ptr [esi + 0x48]
// 0057cea9  52                   push edx
// 0057ceaa  8bc6                 mov eax, esi
// 0057ceac  e8cffbffff           call 0x57ca80
// 0057ceb1  83c404               add esp, 4
// 0057ceb4  53                   push ebx
// 0057ceb5  33db                 xor ebx, ebx
// 0057ceb7  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 0057cebd  7e2c                 jle 0x57ceeb
// 0057cebf  55                   push ebp
// 0057cec0  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0057cec4  8b449d00             mov eax, dword ptr [ebp + ebx*4]
// 0057cec8  668b10               mov dx, word ptr [eax]
// 0057cecb  668b4c2414           mov cx, word ptr [esp + 0x14]
// 0057ced0  66d3fa               sar dx, cl
// 0057ced3  6a01                 push 1
// 0057ced5  0fbfc2               movsx eax, dx
// 0057ced8  50                   push eax
// 0057ced9  e892f9ffff           call 0x57c870
// 0057cede  43                   inc ebx
// 0057cedf  83c408               add esp, 8
// 0057cee2  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 0057cee8  7cda                 jl 0x57cec4
// 0057ceea  5d                   pop ebp
// 0057ceeb  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0057ceee  8b5610               mov edx, dword ptr [esi + 0x10]
// 0057cef1  8911                 mov dword ptr [ecx], edx
// 0057cef3  8b4718               mov eax, dword ptr [edi + 0x18]
// 0057cef6  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0057cef9  894804               mov dword ptr [eax + 4], ecx
// 0057cefc  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 0057cf02  5b                   pop ebx
// 0057cf03  85ff                 test edi, edi
// 0057cf05  7416                 je 0x57cf1d
// 0057cf07  837e4400             cmp dword ptr [esi + 0x44], 0
// 0057cf0b  750d                 jne 0x57cf1a
// 0057cf0d  8b5648               mov edx, dword ptr [esi + 0x48]
// 0057cf10  42                   inc edx
// 0057cf11  83e207               and edx, 7
// 0057cf14  897e44               mov dword ptr [esi + 0x44], edi
// 0057cf17  895648               mov dword ptr [esi + 0x48], edx
// 0057cf1a  ff4e44               dec dword ptr [esi + 0x44]
// 0057cf1d  5f                   pop edi
// 0057cf1e  b001                 mov al, 1
// 0057cf20  5e                   pop esi
// 0057cf21  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
