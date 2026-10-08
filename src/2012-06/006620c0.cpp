// from server: 100% by auto
// roc 2012-06 006620c0  unit: seg_00660000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006620c0
//
// 006620c0  51                   push ecx
// 006620c1  53                   push ebx
// 006620c2  55                   push ebp
// 006620c3  56                   push esi
// 006620c4  8b742414             mov esi, dword ptr [esp + 0x14]
// 006620c8  83be6c01000000       cmp dword ptr [esi + 0x16c], 0
// 006620cf  57                   push edi
// 006620d0  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 006620d6  751b                 jne 0x6620f3
// 006620d8  83be700100003f       cmp dword ptr [esi + 0x170], 0x3f
// 006620df  7512                 jne 0x6620f3
// 006620e1  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 006620e8  7509                 jne 0x6620f3
// 006620ea  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 006620f1  7416                 je 0x662109
// 006620f3  8b06                 mov eax, dword ptr [esi]
// 006620f5  c740147a000000       mov dword ptr [eax + 0x14], 0x7a
// 006620fc  8b0e                 mov ecx, dword ptr [esi]
// 006620fe  8b5104               mov edx, dword ptr [ecx + 4]
// 00662101  6aff                 push -1
// 00662103  56                   push esi
// 00662104  ffd2                 call edx
// 00662106  83c408               add esp, 8
// 00662109  83be2401000000       cmp dword ptr [esi + 0x124], 0
// 00662110  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00662118  7e59                 jle 0x662173
// 0066211a  8d4714               lea eax, [edi + 0x14]
// 0066211d  89442410             mov dword ptr [esp + 0x10], eax
// 00662121  8d9e28010000         lea ebx, [esi + 0x128]
// 00662127  8b03                 mov eax, dword ptr [ebx]
// 00662129  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0066212c  8b6818               mov ebp, dword ptr [eax + 0x18]
// 0066212f  8d548f28             lea edx, [edi + ecx*4 + 0x28]
// 00662133  52                   push edx
// 00662134  51                   push ecx
// 00662135  6a01                 push 1
// 00662137  56                   push esi
// 00662138  e823f6ffff           call 0x661760
// 0066213d  8d44af38             lea eax, [edi + ebp*4 + 0x38]
// 00662141  50                   push eax
// 00662142  55                   push ebp
// 00662143  6a00                 push 0
// 00662145  56                   push esi
// 00662146  e815f6ffff           call 0x661760
// 0066214b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0066214f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00662153  c70100000000         mov dword ptr [ecx], 0
// 00662159  40                   inc eax
// 0066215a  83c104               add ecx, 4
// 0066215d  83c420               add esp, 0x20
// 00662160  83c304               add ebx, 4
// 00662163  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00662169  89442418             mov dword ptr [esp + 0x18], eax
// 0066216d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00662171  7cb4                 jl 0x662127
// 00662173  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 0066217a  7e72                 jle 0x6621ee
// 0066217c  b868ffffff           mov eax, 0xffffff68
// 00662181  2bc7                 sub eax, edi
// 00662183  8d8f98000000         lea ecx, [edi + 0x98]
// 00662189  8d5770               lea edx, [edi + 0x70]
// 0066218c  8dae44010000         lea ebp, [esi + 0x144]
// 00662192  89442418             mov dword ptr [esp + 0x18], eax
// 00662196  eb08                 jmp 0x6621a0
// 00662198  8da42400000000       lea esp, [esp]
// 0066219f  90                   nop 
// 006621a0  8b4500               mov eax, dword ptr [ebp]
// 006621a3  8b848628010000       mov eax, dword ptr [esi + eax*4 + 0x128]
// 006621aa  8b5814               mov ebx, dword ptr [eax + 0x14]
// 006621ad  8b5c9f28             mov ebx, dword ptr [edi + ebx*4 + 0x28]
// 006621b1  895ad8               mov dword ptr [edx - 0x28], ebx
// 006621b4  8b5818               mov ebx, dword ptr [eax + 0x18]
// 006621b7  8b5c9f38             mov ebx, dword ptr [edi + ebx*4 + 0x38]
// 006621bb  891a                 mov dword ptr [edx], ebx
// 006621bd  80783000             cmp byte ptr [eax + 0x30], 0
// 006621c1  740f                 je 0x6621d2
// 006621c3  c60101               mov byte ptr [ecx], 1
// 006621c6  83782401             cmp dword ptr [eax + 0x24], 1
// 006621ca  0f9fc0               setg al
// 006621cd  88410a               mov byte ptr [ecx + 0xa], al
// 006621d0  eb07                 jmp 0x6621d9
// 006621d2  c6410a00             mov byte ptr [ecx + 0xa], 0
// 006621d6  c60100               mov byte ptr [ecx], 0
// 006621d9  8b442418             mov eax, dword ptr [esp + 0x18]
// 006621dd  41                   inc ecx
// 006621de  03c1                 add eax, ecx
// 006621e0  83c504               add ebp, 4
// 006621e3  83c204               add edx, 4
// 006621e6  3b8640010000         cmp eax, dword ptr [esi + 0x140]
// 006621ec  7cb2                 jl 0x6621a0
// 006621ee  33c0                 xor eax, eax
// 006621f0  894710               mov dword ptr [edi + 0x10], eax
// 006621f3  89470c               mov dword ptr [edi + 0xc], eax
// 006621f6  884708               mov byte ptr [edi + 8], al
// 006621f9  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006621ff  894f24               mov dword ptr [edi + 0x24], ecx
// 00662202  5f                   pop edi
// 00662203  5e                   pop esi
// 00662204  5d                   pop ebp
// 00662205  5b                   pop ebx
// 00662206  59                   pop ecx
// 00662207  c3                   ret 
// library jpeg-6b/jdhuff.c (function _start_pass_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
