// from server: 100% by auto
// roc 2010-06 00580da0  unit: seg_00580000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00580da0
//
// 00580da0  83ec18               sub esp, 0x18
// 00580da3  56                   push esi
// 00580da4  8b742420             mov esi, dword ptr [esp + 0x20]
// 00580da8  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00580dae  b801000000           mov eax, 1
// 00580db3  d3e0                 shl eax, cl
// 00580db5  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 00580dbc  57                   push edi
// 00580dbd  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00580dc3  89442408             mov dword ptr [esp + 8], eax
// 00580dc7  7415                 je 0x580dde
// 00580dc9  837f2800             cmp dword ptr [edi + 0x28], 0
// 00580dcd  750f                 jne 0x580dde
// 00580dcf  e8ccfaffff           call 0x5808a0
// 00580dd4  84c0                 test al, al
// 00580dd6  7506                 jne 0x580dde
// 00580dd8  5f                   pop edi
// 00580dd9  5e                   pop esi
// 00580dda  83c418               add esp, 0x18
// 00580ddd  c3                   ret 
// 00580dde  8b4618               mov eax, dword ptr [esi + 0x18]
// 00580de1  8974241c             mov dword ptr [esp + 0x1c], esi
// 00580de5  8b08                 mov ecx, dword ptr [eax]
// 00580de7  894c240c             mov dword ptr [esp + 0xc], ecx
// 00580deb  8b5004               mov edx, dword ptr [eax + 4]
// 00580dee  53                   push ebx
// 00580def  33db                 xor ebx, ebx
// 00580df1  399e40010000         cmp dword ptr [esi + 0x140], ebx
// 00580df7  89542414             mov dword ptr [esp + 0x14], edx
// 00580dfb  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00580dfe  55                   push ebp
// 00580dff  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00580e02  7e4c                 jle 0x580e50
// 00580e04  83f901               cmp ecx, 1
// 00580e07  8b442430             mov eax, dword ptr [esp + 0x30]
// 00580e0b  8b0498               mov eax, dword ptr [eax + ebx*4]
// 00580e0e  8944242c             mov dword ptr [esp + 0x2c], eax
// 00580e12  7d21                 jge 0x580e35
// 00580e14  6a01                 push 1
// 00580e16  51                   push ecx
// 00580e17  8d4c241c             lea ecx, [esp + 0x1c]
// 00580e1b  55                   push ebp
// 00580e1c  51                   push ecx
// 00580e1d  e83ef2ffff           call 0x580060
// 00580e22  83c410               add esp, 0x10
// 00580e25  84c0                 test al, al
// 00580e27  744d                 je 0x580e76
// 00580e29  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00580e2d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00580e31  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00580e35  49                   dec ecx
// 00580e36  8bd5                 mov edx, ebp
// 00580e38  d3fa                 sar edx, cl
// 00580e3a  f6c201               test dl, 1
// 00580e3d  7408                 je 0x580e47
// 00580e3f  668b542410           mov dx, word ptr [esp + 0x10]
// 00580e44  660910               or word ptr [eax], dx
// 00580e47  43                   inc ebx
// 00580e48  3b9e40010000         cmp ebx, dword ptr [esi + 0x140]
// 00580e4e  7cb4                 jl 0x580e04
// 00580e50  8b4618               mov eax, dword ptr [esi + 0x18]
// 00580e53  8b542414             mov edx, dword ptr [esp + 0x14]
// 00580e57  8910                 mov dword ptr [eax], edx
// 00580e59  8b4618               mov eax, dword ptr [esi + 0x18]
// 00580e5c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00580e60  895004               mov dword ptr [eax + 4], edx
// 00580e63  ff4f28               dec dword ptr [edi + 0x28]
// 00580e66  896f0c               mov dword ptr [edi + 0xc], ebp
// 00580e69  5d                   pop ebp
// 00580e6a  5b                   pop ebx
// 00580e6b  894f10               mov dword ptr [edi + 0x10], ecx
// 00580e6e  5f                   pop edi
// 00580e6f  b001                 mov al, 1
// 00580e71  5e                   pop esi
// 00580e72  83c418               add esp, 0x18
// 00580e75  c3                   ret 
// 00580e76  5d                   pop ebp
// 00580e77  5b                   pop ebx
// 00580e78  5f                   pop edi
// 00580e79  32c0                 xor al, al
// 00580e7b  5e                   pop esi
// 00580e7c  83c418               add esp, 0x18
// 00580e7f  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
