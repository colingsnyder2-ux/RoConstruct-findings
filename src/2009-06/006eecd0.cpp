// from server: 100% by auto
// roc 2009-06 006eecd0  unit: seg_006e0000  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006eecd0
//
// 006eecd0  56                   push esi
// 006eecd1  8bf0                 mov esi, eax
// 006eecd3  8b4310               mov eax, dword ptr [ebx + 0x10]
// 006eecd6  83c085               add eax, -0x7b
// 006eecd9  57                   push edi
// 006eecda  3da3000000           cmp eax, 0xa3
// 006eecdf  0f87ec000000         ja 0x6eedd1
// 006eece5  0fb68004ee6e00       movzx eax, byte ptr [eax + 0x6eee04]
// 006eecec  ff2485e0ed6e00       jmp dword ptr [eax*4 + 0x6eede0]
// 006eecf3  83c9ff               or ecx, 0xffffffff
// 006eecf6  c7460800000000       mov dword ptr [esi + 8], 0
// 006eecfd  894e10               mov dword ptr [esi + 0x10], ecx
// 006eed00  894e14               mov dword ptr [esi + 0x14], ecx
// 006eed03  c70605000000         mov dword ptr [esi], 5
// 006eed09  dd4318               fld qword ptr [ebx + 0x18]
// 006eed0c  53                   push ebx
// 006eed0d  dd5e08               fstp qword ptr [esi + 8]
// 006eed10  e8cb390000           call 0x6f26e0
// 006eed15  83c404               add esp, 4
// 006eed18  5f                   pop edi
// 006eed19  5e                   pop esi
// 006eed1a  c3                   ret 
// 006eed1b  8b4318               mov eax, dword ptr [ebx + 0x18]
// 006eed1e  8bcb                 mov ecx, ebx
// 006eed20  e8dbebffff           call 0x6ed900
// 006eed25  53                   push ebx
// 006eed26  e8b5390000           call 0x6f26e0
// 006eed2b  83c404               add esp, 4
// 006eed2e  5f                   pop edi
// 006eed2f  5e                   pop esi
// 006eed30  c3                   ret 
// 006eed31  c70601000000         mov dword ptr [esi], 1
// 006eed37  c7460800000000       mov dword ptr [esi + 8], 0
// 006eed3e  eb57                 jmp 0x6eed97
// 006eed40  c70602000000         mov dword ptr [esi], 2
// 006eed46  c7460800000000       mov dword ptr [esi + 8], 0
// 006eed4d  eb48                 jmp 0x6eed97
// 006eed4f  c70603000000         mov dword ptr [esi], 3
// 006eed55  c7460800000000       mov dword ptr [esi + 8], 0
// 006eed5c  eb39                 jmp 0x6eed97
// 006eed5e  8b7b30               mov edi, dword ptr [ebx + 0x30]
// 006eed61  8b0f                 mov ecx, dword ptr [edi]
// 006eed63  80794a00             cmp byte ptr [ecx + 0x4a], 0
// 006eed67  750e                 jne 0x6eed77
// 006eed69  6854df8e00           push 0x8edf54
// 006eed6e  53                   push ebx
// 006eed6f  e87c250000           call 0x6f12f0
// 006eed74  83c408               add esp, 8
// 006eed77  8b07                 mov eax, dword ptr [edi]
// 006eed79  80604afb             and byte ptr [eax + 0x4a], 0xfb
// 006eed7d  6a00                 push 0
// 006eed7f  6a01                 push 1
// 006eed81  6a00                 push 0
// 006eed83  6a25                 push 0x25
// 006eed85  57                   push edi
// 006eed86  e845b40000           call 0x6fa1d0
// 006eed8b  83c414               add esp, 0x14
// 006eed8e  c7060e000000         mov dword ptr [esi], 0xe
// 006eed94  894608               mov dword ptr [esi + 8], eax
// 006eed97  83c9ff               or ecx, 0xffffffff
// 006eed9a  53                   push ebx
// 006eed9b  894e14               mov dword ptr [esi + 0x14], ecx
// 006eed9e  894e10               mov dword ptr [esi + 0x10], ecx
// 006eeda1  e83a390000           call 0x6f26e0
// 006eeda6  83c404               add esp, 4
// 006eeda9  5f                   pop edi
// 006eedaa  5e                   pop esi
// 006eedab  c3                   ret 
// 006eedac  5f                   pop edi
// 006eedad  8bc6                 mov eax, esi
// 006eedaf  8bcb                 mov ecx, ebx
// 006eedb1  5e                   pop esi
// 006eedb2  e939f5ffff           jmp 0x6ee2f0
// 006eedb7  53                   push ebx
// 006eedb8  e823390000           call 0x6f26e0
// 006eedbd  8b5304               mov edx, dword ptr [ebx + 4]
// 006eedc0  52                   push edx
// 006eedc1  6a00                 push 0
// 006eedc3  56                   push esi
// 006eedc4  8bc3                 mov eax, ebx
// 006eedc6  e8d5f8ffff           call 0x6ee6a0
// 006eedcb  83c410               add esp, 0x10
// 006eedce  5f                   pop edi
// 006eedcf  5e                   pop esi
// 006eedd0  c3                   ret 
// 006eedd1  8bfe                 mov edi, esi
// 006eedd3  8bf3                 mov esi, ebx
// 006eedd5  e806fcffff           call 0x6ee9e0
// 006eedda  5f                   pop edi
// 006eeddb  5e                   pop esi
// 006eeddc  c3                   ret 
// 006eeddd  8d4900               lea ecx, [ecx]
// 006eede0  ac                   lodsb al, byte ptr [esi]
// 006eede1  ed                   in eax, dx
// 006eede2  6e                   outsb dx, byte ptr [esi]
// 006eede3  004fed               add byte ptr [edi - 0x13], cl
// 006eede6  6e                   outsb dx, byte ptr [esi]
// 006eede7  00b7ed6e0031         add byte ptr [edi + 0x31006eed], dh
// 006eeded  ed                   in eax, dx
// 006eedee  6e                   outsb dx, byte ptr [esi]
// 006eedef  0040ed               add byte ptr [eax - 0x13], al
// 006eedf2  6e                   outsb dx, byte ptr [esi]
// 006eedf3  005eed               add byte ptr [esi - 0x13], bl
// 006eedf6  6e                   outsb dx, byte ptr [esi]
// 006eedf7  00f3                 add bl, dh
// 006eedf9  ec                   in al, dx
// 006eedfa  6e                   outsb dx, byte ptr [esi]
// 006eedfb  001b                 add byte ptr [ebx], bl
// 006eedfd  ed                   in eax, dx
// 006eedfe  6e                   outsb dx, byte ptr [esi]
// 006eedff  00d1                 add cl, dl
// 006eee01  ed                   in eax, dx
// 006eee02  6e                   outsb dx, byte ptr [esi]
// 006eee03  0000                 add byte ptr [eax], al
// 006eee05  0808                 or byte ptr [eax], cl
// 006eee07  0808                 or byte ptr [eax], cl
// 006eee09  0808                 or byte ptr [eax], cl
// 006eee0b  0808                 or byte ptr [eax], cl
// 006eee0d  0808                 or byte ptr [eax], cl
// 006eee0f  0808                 or byte ptr [eax], cl
// 006eee11  0808                 or byte ptr [eax], cl
// 006eee13  0808                 or byte ptr [eax], cl
// 006eee15  0808                 or byte ptr [eax], cl
// 006eee17  0808                 or byte ptr [eax], cl
// 006eee19  0808                 or byte ptr [eax], cl
// 006eee1b  0808                 or byte ptr [eax], cl
// 006eee1d  0808                 or byte ptr [eax], cl
// 006eee1f  0808                 or byte ptr [eax], cl
// 006eee21  0808                 or byte ptr [eax], cl
// 006eee23  0808                 or byte ptr [eax], cl
// 006eee25  0808                 or byte ptr [eax], cl
// 006eee27  0808                 or byte ptr [eax], cl
// 006eee29  0808                 or byte ptr [eax], cl
// 006eee2b  0808                 or byte ptr [eax], cl
// 006eee2d  0808                 or byte ptr [eax], cl
// 006eee2f  0808                 or byte ptr [eax], cl
// 006eee31  0808                 or byte ptr [eax], cl
// 006eee33  0808                 or byte ptr [eax], cl
// 006eee35  0808                 or byte ptr [eax], cl
// 006eee37  0808                 or byte ptr [eax], cl
// 006eee39  0808                 or byte ptr [eax], cl
// 006eee3b  0808                 or byte ptr [eax], cl
// 006eee3d  0808                 or byte ptr [eax], cl
// 006eee3f  0808                 or byte ptr [eax], cl
// 006eee41  0808                 or byte ptr [eax], cl
// 006eee43  0808                 or byte ptr [eax], cl
// 006eee45  0808                 or byte ptr [eax], cl
// 006eee47  0808                 or byte ptr [eax], cl
// 006eee49  0808                 or byte ptr [eax], cl
// 006eee4b  0808                 or byte ptr [eax], cl
// 006eee4d  0808                 or byte ptr [eax], cl
// 006eee4f  0808                 or byte ptr [eax], cl
// 006eee51  0808                 or byte ptr [eax], cl
// 006eee53  0808                 or byte ptr [eax], cl
// 006eee55  0808                 or byte ptr [eax], cl
// 006eee57  0808                 or byte ptr [eax], cl
// 006eee59  0808                 or byte ptr [eax], cl
// 006eee5b  0808                 or byte ptr [eax], cl
// 006eee5d  0808                 or byte ptr [eax], cl
// 006eee5f  0808                 or byte ptr [eax], cl
// 006eee61  0808                 or byte ptr [eax], cl
// 006eee63  0808                 or byte ptr [eax], cl
// 006eee65  0808                 or byte ptr [eax], cl
// 006eee67  0808                 or byte ptr [eax], cl
// 006eee69  0808                 or byte ptr [eax], cl
// 006eee6b  0808                 or byte ptr [eax], cl
// 006eee6d  0808                 or byte ptr [eax], cl
// 006eee6f  0808                 or byte ptr [eax], cl
// 006eee71  0808                 or byte ptr [eax], cl
// 006eee73  0808                 or byte ptr [eax], cl
// 006eee75  0808                 or byte ptr [eax], cl
// 006eee77  0808                 or byte ptr [eax], cl
// 006eee79  0808                 or byte ptr [eax], cl
// 006eee7b  0808                 or byte ptr [eax], cl
// 006eee7d  0808                 or byte ptr [eax], cl
// 006eee7f  0808                 or byte ptr [eax], cl
// 006eee81  0808                 or byte ptr [eax], cl
// 006eee83  0808                 or byte ptr [eax], cl
// 006eee85  0808                 or byte ptr [eax], cl
// 006eee87  0808                 or byte ptr [eax], cl
// 006eee89  0808                 or byte ptr [eax], cl
// 006eee8b  0808                 or byte ptr [eax], cl
// 006eee8d  0808                 or byte ptr [eax], cl
// 006eee8f  0801                 or byte ptr [ecx], al
// 006eee91  0802                 or byte ptr [edx], al
// 006eee93  0808                 or byte ptr [eax], cl
// 006eee95  0803                 or byte ptr [ebx], al
// 006eee97  0808                 or byte ptr [eax], cl
// 006eee99  0808                 or byte ptr [eax], cl
// 006eee9b  080408               or byte ptr [eax + ecx], al
// 006eee9e  0808                 or byte ptr [eax], cl
// 006eeea0  0508080808           add eax, 0x8080808
// 006eeea5  06                   push es
// 006eeea6  0807                 or byte ptr [edi], al
// library lua-5.1.4/lparser.c (function _simpleexp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
