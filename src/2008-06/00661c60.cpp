// from server: 100% by auto
// roc 2008-06 00661c60  unit: RBX::FilterStairs  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00661c60
//
// 00661c60  56                   push esi
// 00661c61  8bf0                 mov esi, eax
// 00661c63  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00661c66  83c085               add eax, -0x7b
// 00661c69  57                   push edi
// 00661c6a  3da3000000           cmp eax, 0xa3
// 00661c6f  0f87ec000000         ja 0x661d61
// 00661c75  0fb680941d6600       movzx eax, byte ptr [eax + 0x661d94]
// 00661c7c  ff2485701d6600       jmp dword ptr [eax*4 + 0x661d70]
// 00661c83  83c9ff               or ecx, 0xffffffff
// 00661c86  c7460800000000       mov dword ptr [esi + 8], 0
// 00661c8d  894e10               mov dword ptr [esi + 0x10], ecx
// 00661c90  894e14               mov dword ptr [esi + 0x14], ecx
// 00661c93  c70605000000         mov dword ptr [esi], 5
// 00661c99  dd4318               fld qword ptr [ebx + 0x18]
// 00661c9c  53                   push ebx
// 00661c9d  dd5e08               fstp qword ptr [esi + 8]
// 00661ca0  e85b390000           call 0x665600
// 00661ca5  83c404               add esp, 4
// 00661ca8  5f                   pop edi
// 00661ca9  5e                   pop esi
// 00661caa  c3                   ret 
// 00661cab  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00661cae  8bcb                 mov ecx, ebx
// 00661cb0  e8dbebffff           call 0x660890
// 00661cb5  53                   push ebx
// 00661cb6  e845390000           call 0x665600
// 00661cbb  83c404               add esp, 4
// 00661cbe  5f                   pop edi
// 00661cbf  5e                   pop esi
// 00661cc0  c3                   ret 
// 00661cc1  c70601000000         mov dword ptr [esi], 1
// 00661cc7  c7460800000000       mov dword ptr [esi + 8], 0
// 00661cce  eb57                 jmp 0x661d27
// 00661cd0  c70602000000         mov dword ptr [esi], 2
// 00661cd6  c7460800000000       mov dword ptr [esi + 8], 0
// 00661cdd  eb48                 jmp 0x661d27
// 00661cdf  c70603000000         mov dword ptr [esi], 3
// 00661ce5  c7460800000000       mov dword ptr [esi + 8], 0
// 00661cec  eb39                 jmp 0x661d27
// 00661cee  8b7b30               mov edi, dword ptr [ebx + 0x30]
// 00661cf1  8b0f                 mov ecx, dword ptr [edi]
// 00661cf3  80794a00             cmp byte ptr [ecx + 0x4a], 0
// 00661cf7  750e                 jne 0x661d07
// 00661cf9  685cc68400           push 0x84c65c
// 00661cfe  53                   push ebx
// 00661cff  e80c250000           call 0x664210
// 00661d04  83c408               add esp, 8
// 00661d07  8b07                 mov eax, dword ptr [edi]
// 00661d09  80604afb             and byte ptr [eax + 0x4a], 0xfb
// 00661d0d  6a00                 push 0
// 00661d0f  6a01                 push 1
// 00661d11  6a00                 push 0
// 00661d13  6a25                 push 0x25
// 00661d15  57                   push edi
// 00661d16  e815950000           call 0x66b230
// 00661d1b  83c414               add esp, 0x14
// 00661d1e  c7060e000000         mov dword ptr [esi], 0xe
// 00661d24  894608               mov dword ptr [esi + 8], eax
// 00661d27  83c9ff               or ecx, 0xffffffff
// 00661d2a  53                   push ebx
// 00661d2b  894e14               mov dword ptr [esi + 0x14], ecx
// 00661d2e  894e10               mov dword ptr [esi + 0x10], ecx
// 00661d31  e8ca380000           call 0x665600
// 00661d36  83c404               add esp, 4
// 00661d39  5f                   pop edi
// 00661d3a  5e                   pop esi
// 00661d3b  c3                   ret 
// 00661d3c  5f                   pop edi
// 00661d3d  8bc6                 mov eax, esi
// 00661d3f  8bcb                 mov ecx, ebx
// 00661d41  5e                   pop esi
// 00661d42  e939f5ffff           jmp 0x661280
// 00661d47  53                   push ebx
// 00661d48  e8b3380000           call 0x665600
// 00661d4d  8b5304               mov edx, dword ptr [ebx + 4]
// 00661d50  52                   push edx
// 00661d51  6a00                 push 0
// 00661d53  56                   push esi
// 00661d54  8bc3                 mov eax, ebx
// 00661d56  e8d5f8ffff           call 0x661630
// 00661d5b  83c410               add esp, 0x10
// 00661d5e  5f                   pop edi
// 00661d5f  5e                   pop esi
// 00661d60  c3                   ret 
// 00661d61  8bfe                 mov edi, esi
// 00661d63  8bf3                 mov esi, ebx
// 00661d65  e806fcffff           call 0x661970
// 00661d6a  5f                   pop edi
// 00661d6b  5e                   pop esi
// 00661d6c  c3                   ret 
// 00661d6d  8d4900               lea ecx, [ecx]
// 00661d70  3c1d                 cmp al, 0x1d
// 00661d72  6600df               add bh, bl
// 00661d75  1c66                 sbb al, 0x66
// 00661d77  00471d               add byte ptr [edi + 0x1d], al
// 00661d7a  6600c1               add cl, al
// 00661d7d  1c66                 sbb al, 0x66
// 00661d7f  00d0                 add al, dl
// 00661d81  1c66                 sbb al, 0x66
// 00661d83  00ee                 add dh, ch
// 00661d85  1c66                 sbb al, 0x66
// 00661d87  00831c6600ab         add byte ptr [ebx - 0x54ff99e4], al
// 00661d8d  1c66                 sbb al, 0x66
// 00661d8f  00611d               add byte ptr [ecx + 0x1d], ah
// 00661d92  660000               add byte ptr [eax], al
// 00661d95  0808                 or byte ptr [eax], cl
// 00661d97  0808                 or byte ptr [eax], cl
// 00661d99  0808                 or byte ptr [eax], cl
// 00661d9b  0808                 or byte ptr [eax], cl
// 00661d9d  0808                 or byte ptr [eax], cl
// 00661d9f  0808                 or byte ptr [eax], cl
// 00661da1  0808                 or byte ptr [eax], cl
// 00661da3  0808                 or byte ptr [eax], cl
// 00661da5  0808                 or byte ptr [eax], cl
// 00661da7  0808                 or byte ptr [eax], cl
// 00661da9  0808                 or byte ptr [eax], cl
// 00661dab  0808                 or byte ptr [eax], cl
// 00661dad  0808                 or byte ptr [eax], cl
// 00661daf  0808                 or byte ptr [eax], cl
// 00661db1  0808                 or byte ptr [eax], cl
// 00661db3  0808                 or byte ptr [eax], cl
// 00661db5  0808                 or byte ptr [eax], cl
// 00661db7  0808                 or byte ptr [eax], cl
// 00661db9  0808                 or byte ptr [eax], cl
// 00661dbb  0808                 or byte ptr [eax], cl
// 00661dbd  0808                 or byte ptr [eax], cl
// 00661dbf  0808                 or byte ptr [eax], cl
// 00661dc1  0808                 or byte ptr [eax], cl
// 00661dc3  0808                 or byte ptr [eax], cl
// 00661dc5  0808                 or byte ptr [eax], cl
// 00661dc7  0808                 or byte ptr [eax], cl
// 00661dc9  0808                 or byte ptr [eax], cl
// 00661dcb  0808                 or byte ptr [eax], cl
// 00661dcd  0808                 or byte ptr [eax], cl
// 00661dcf  0808                 or byte ptr [eax], cl
// 00661dd1  0808                 or byte ptr [eax], cl
// 00661dd3  0808                 or byte ptr [eax], cl
// 00661dd5  0808                 or byte ptr [eax], cl
// 00661dd7  0808                 or byte ptr [eax], cl
// 00661dd9  0808                 or byte ptr [eax], cl
// 00661ddb  0808                 or byte ptr [eax], cl
// 00661ddd  0808                 or byte ptr [eax], cl
// 00661ddf  0808                 or byte ptr [eax], cl
// 00661de1  0808                 or byte ptr [eax], cl
// 00661de3  0808                 or byte ptr [eax], cl
// 00661de5  0808                 or byte ptr [eax], cl
// 00661de7  0808                 or byte ptr [eax], cl
// 00661de9  0808                 or byte ptr [eax], cl
// 00661deb  0808                 or byte ptr [eax], cl
// 00661ded  0808                 or byte ptr [eax], cl
// 00661def  0808                 or byte ptr [eax], cl
// 00661df1  0808                 or byte ptr [eax], cl
// 00661df3  0808                 or byte ptr [eax], cl
// 00661df5  0808                 or byte ptr [eax], cl
// 00661df7  0808                 or byte ptr [eax], cl
// 00661df9  0808                 or byte ptr [eax], cl
// 00661dfb  0808                 or byte ptr [eax], cl
// 00661dfd  0808                 or byte ptr [eax], cl
// 00661dff  0808                 or byte ptr [eax], cl
// 00661e01  0808                 or byte ptr [eax], cl
// 00661e03  0808                 or byte ptr [eax], cl
// 00661e05  0808                 or byte ptr [eax], cl
// 00661e07  0808                 or byte ptr [eax], cl
// 00661e09  0808                 or byte ptr [eax], cl
// 00661e0b  0808                 or byte ptr [eax], cl
// 00661e0d  0808                 or byte ptr [eax], cl
// 00661e0f  0808                 or byte ptr [eax], cl
// 00661e11  0808                 or byte ptr [eax], cl
// 00661e13  0808                 or byte ptr [eax], cl
// 00661e15  0808                 or byte ptr [eax], cl
// 00661e17  0808                 or byte ptr [eax], cl
// 00661e19  0808                 or byte ptr [eax], cl
// 00661e1b  0808                 or byte ptr [eax], cl
// 00661e1d  0808                 or byte ptr [eax], cl
// 00661e1f  0801                 or byte ptr [ecx], al
// 00661e21  0802                 or byte ptr [edx], al
// 00661e23  0808                 or byte ptr [eax], cl
// 00661e25  0803                 or byte ptr [ebx], al
// 00661e27  0808                 or byte ptr [eax], cl
// 00661e29  0808                 or byte ptr [eax], cl
// 00661e2b  080408               or byte ptr [eax + ecx], al
// 00661e2e  0808                 or byte ptr [eax], cl
// 00661e30  0508080808           add eax, 0x8080808
// 00661e35  06                   push es
// 00661e36  0807                 or byte ptr [edi], al
// library lua-5.1.4/lparser.c (function _simpleexp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
