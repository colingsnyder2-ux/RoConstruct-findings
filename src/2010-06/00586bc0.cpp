// from server: 100% by auto
// roc 2010-06 00586bc0  unit: seg_00580000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00586bc0
//
// 00586bc0  56                   push esi
// 00586bc1  57                   push edi
// 00586bc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00586bc6  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00586bc9  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 00586bcf  8b11                 mov edx, dword ptr [ecx]
// 00586bd1  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 00586bd7  895610               mov dword ptr [esi + 0x10], edx
// 00586bda  8944240c             mov dword ptr [esp + 0xc], eax
// 00586bde  8b4718               mov eax, dword ptr [edi + 0x18]
// 00586be1  8b4804               mov ecx, dword ptr [eax + 4]
// 00586be4  894e14               mov dword ptr [esi + 0x14], ecx
// 00586be7  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 00586bee  7414                 je 0x586c04
// 00586bf0  837e4400             cmp dword ptr [esi + 0x44], 0
// 00586bf4  750e                 jne 0x586c04
// 00586bf6  8b5648               mov edx, dword ptr [esi + 0x48]
// 00586bf9  52                   push edx
// 00586bfa  8bc6                 mov eax, esi
// 00586bfc  e8cffbffff           call 0x5867d0
// 00586c01  83c404               add esp, 4
// 00586c04  53                   push ebx
// 00586c05  33db                 xor ebx, ebx
// 00586c07  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 00586c0d  7e2c                 jle 0x586c3b
// 00586c0f  55                   push ebp
// 00586c10  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00586c14  8b449d00             mov eax, dword ptr [ebp + ebx*4]
// 00586c18  668b10               mov dx, word ptr [eax]
// 00586c1b  668b4c2414           mov cx, word ptr [esp + 0x14]
// 00586c20  66d3fa               sar dx, cl
// 00586c23  6a01                 push 1
// 00586c25  0fbfc2               movsx eax, dx
// 00586c28  50                   push eax
// 00586c29  e892f9ffff           call 0x5865c0
// 00586c2e  43                   inc ebx
// 00586c2f  83c408               add esp, 8
// 00586c32  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 00586c38  7cda                 jl 0x586c14
// 00586c3a  5d                   pop ebp
// 00586c3b  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00586c3e  8b5610               mov edx, dword ptr [esi + 0x10]
// 00586c41  8911                 mov dword ptr [ecx], edx
// 00586c43  8b4718               mov eax, dword ptr [edi + 0x18]
// 00586c46  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00586c49  894804               mov dword ptr [eax + 4], ecx
// 00586c4c  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 00586c52  5b                   pop ebx
// 00586c53  85ff                 test edi, edi
// 00586c55  7416                 je 0x586c6d
// 00586c57  837e4400             cmp dword ptr [esi + 0x44], 0
// 00586c5b  750d                 jne 0x586c6a
// 00586c5d  8b5648               mov edx, dword ptr [esi + 0x48]
// 00586c60  42                   inc edx
// 00586c61  83e207               and edx, 7
// 00586c64  897e44               mov dword ptr [esi + 0x44], edi
// 00586c67  895648               mov dword ptr [esi + 0x48], edx
// 00586c6a  ff4e44               dec dword ptr [esi + 0x44]
// 00586c6d  5f                   pop edi
// 00586c6e  b001                 mov al, 1
// 00586c70  5e                   pop esi
// 00586c71  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
