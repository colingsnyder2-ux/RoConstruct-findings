// roc 2008-06 006f2c90  unit: CXTPControls  size: 542 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f2c90
//
// 006f2c90  83ec38               sub esp, 0x38
// 006f2c93  8b442448             mov eax, dword ptr [esp + 0x48]
// 006f2c97  53                   push ebx
// 006f2c98  55                   push ebp
// 006f2c99  56                   push esi
// 006f2c9a  8b30                 mov esi, dword ptr [eax]
// 006f2c9c  57                   push edi
// 006f2c9d  8bd9                 mov ebx, ecx
// 006f2c9f  6a01                 push 1
// 006f2ca1  8d4c243c             lea ecx, [esp + 0x3c]
// 006f2ca5  51                   push ecx
// 006f2ca6  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006f2ca9  83e610               and esi, 0x10
// 006f2cac  895c242c             mov dword ptr [esp + 0x2c], ebx
// 006f2cb0  c744242001000000     mov dword ptr [esp + 0x20], 1
// 006f2cb8  89742424             mov dword ptr [esp + 0x24], esi
// 006f2cbc  e85f0ffdff           call 0x6c3c20
// 006f2cc1  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006f2cc4  e80722fcff           call 0x6b4ed0
// 006f2cc9  8bc8                 mov ecx, eax
// 006f2ccb  e8a0bcfbff           call 0x6ae970
// 006f2cd0  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006f2cd4  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 006f2cd7  8d441007             lea eax, [eax + edx + 7]
// 006f2cdb  33ed                 xor ebp, ebp
// 006f2cdd  89442428             mov dword ptr [esp + 0x28], eax
// 006f2ce1  89442434             mov dword ptr [esp + 0x34], eax
// 006f2ce5  33c0                 xor eax, eax
// 006f2ce7  3bcd                 cmp ecx, ebp
// 006f2ce9  896c2430             mov dword ptr [esp + 0x30], ebp
// 006f2ced  896c2458             mov dword ptr [esp + 0x58], ebp
// 006f2cf1  896c2410             mov dword ptr [esp + 0x10], ebp
// 006f2cf5  89442420             mov dword ptr [esp + 0x20], eax
// 006f2cf9  0f8e74010000         jle 0x6f2e73
// 006f2cff  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 006f2d03  83c73c               add edi, 0x3c
// 006f2d06  837fec00             cmp dword ptr [edi - 0x14], 0
// 006f2d0a  0f8450010000         je 0x6f2e60
// 006f2d10  837ff400             cmp dword ptr [edi - 0xc], 0
// 006f2d14  0f8546010000         jne 0x6f2e60
// 006f2d1a  85c0                 test eax, eax
// 006f2d1c  7c15                 jl 0x6f2d33
// 006f2d1e  3bc1                 cmp eax, ecx
// 006f2d20  7d11                 jge 0x6f2d33
// 006f2d22  3b432c               cmp eax, dword ptr [ebx + 0x2c]
// 006f2d25  0f8d62010000         jge 0x6f2e8d
// 006f2d2b  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 006f2d2e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006f2d31  eb02                 jmp 0x6f2d35
// 006f2d33  33c0                 xor eax, eax
// 006f2d35  8b0f                 mov ecx, dword ptr [edi]
// 006f2d37  33db                 xor ebx, ebx
// 006f2d39  83b84801000004       cmp dword ptr [eax + 0x148], 4
// 006f2d40  0f94c3               sete bl
// 006f2d43  e84882fbff           call 0x6aaf90
// 006f2d48  3947fc               cmp dword ptr [edi - 4], eax
// 006f2d4b  742b                 je 0x6f2d78
// 006f2d4d  8b0f                 mov ecx, dword ptr [edi]
// 006f2d4f  e83c82fbff           call 0x6aaf90
// 006f2d54  8b0f                 mov ecx, dword ptr [edi]
// 006f2d56  8947fc               mov dword ptr [edi - 4], eax
// 006f2d59  8b442450             mov eax, dword ptr [esp + 0x50]
// 006f2d5d  8b11                 mov edx, dword ptr [ecx]
// 006f2d5f  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 006f2d65  50                   push eax
// 006f2d66  8d442444             lea eax, [esp + 0x44]
// 006f2d6a  50                   push eax
// 006f2d6b  ffd2                 call edx
// 006f2d6d  8b08                 mov ecx, dword ptr [eax]
// 006f2d6f  894fe4               mov dword ptr [edi - 0x1c], ecx
// 006f2d72  8b5004               mov edx, dword ptr [eax + 4]
// 006f2d75  8957e8               mov dword ptr [edi - 0x18], edx
// 006f2d78  8b47e4               mov eax, dword ptr [edi - 0x1c]
// 006f2d7b  8b4fe8               mov ecx, dword ptr [edi - 0x18]
// 006f2d7e  85f6                 test esi, esi
// 006f2d80  7431                 je 0x6f2db3
// 006f2d82  894c2454             mov dword ptr [esp + 0x54], ecx
// 006f2d86  89442414             mov dword ptr [esp + 0x14], eax
// 006f2d8a  8bd0                 mov edx, eax
// 006f2d8c  837ff800             cmp dword ptr [edi - 8], 0
// 006f2d90  742f                 je 0x6f2dc1
// 006f2d92  837c241800           cmp dword ptr [esp + 0x18], 0
// 006f2d97  7503                 jne 0x6f2d9c
// 006f2d99  83c506               add ebp, 6
// 006f2d9c  036c2410             add ebp, dword ptr [esp + 0x10]
// 006f2da0  85f6                 test esi, esi
// 006f2da2  8d5fc4               lea ebx, [edi - 0x3c]
// 006f2da5  8d3429               lea esi, [ecx + ebp]
// 006f2da8  7461                 je 0x6f2e0b
// 006f2daa  56                   push esi
// 006f2dab  6a00                 push 0
// 006f2dad  55                   push ebp
// 006f2dae  f7da                 neg edx
// 006f2db0  52                   push edx
// 006f2db1  eb5d                 jmp 0x6f2e10
// 006f2db3  8bd1                 mov edx, ecx
// 006f2db5  89442454             mov dword ptr [esp + 0x54], eax
// 006f2db9  89542414             mov dword ptr [esp + 0x14], edx
// 006f2dbd  8bc8                 mov ecx, eax
// 006f2dbf  ebcb                 jmp 0x6f2d8c
// 006f2dc1  837c241800           cmp dword ptr [esp + 0x18], 0
// 006f2dc6  75d4                 jne 0x6f2d9c
// 006f2dc8  85db                 test ebx, ebx
// 006f2dca  75d0                 jne 0x6f2d9c
// 006f2dcc  8b442458             mov eax, dword ptr [esp + 0x58]
// 006f2dd0  03c2                 add eax, edx
// 006f2dd2  3b442428             cmp eax, dword ptr [esp + 0x28]
// 006f2dd6  7fc4                 jg 0x6f2d9c
// 006f2dd8  85f6                 test esi, esi
// 006f2dda  8d3429               lea esi, [ecx + ebp]
// 006f2ddd  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 006f2de1  8d5fc4               lea ebx, [edi - 0x3c]
// 006f2de4  740a                 je 0x6f2df0
// 006f2de6  56                   push esi
// 006f2de7  f7d9                 neg ecx
// 006f2de9  51                   push ecx
// 006f2dea  55                   push ebp
// 006f2deb  f7d8                 neg eax
// 006f2ded  50                   push eax
// 006f2dee  eb04                 jmp 0x6f2df4
// 006f2df0  50                   push eax
// 006f2df1  56                   push esi
// 006f2df2  51                   push ecx
// 006f2df3  55                   push ebp
// 006f2df4  8bcb                 mov ecx, ebx
// 006f2df6  e875edd6ff           call 0x461b70
// 006f2dfb  8b442454             mov eax, dword ptr [esp + 0x54]
// 006f2dff  39442410             cmp dword ptr [esp + 0x10], eax
// 006f2e03  7f28                 jg 0x6f2e2d
// 006f2e05  89442410             mov dword ptr [esp + 0x10], eax
// 006f2e09  eb22                 jmp 0x6f2e2d
// 006f2e0b  52                   push edx
// 006f2e0c  56                   push esi
// 006f2e0d  6a00                 push 0
// 006f2e0f  55                   push ebp
// 006f2e10  53                   push ebx
// 006f2e11  ff15102d8000         call dword ptr [0x802d10]
// 006f2e17  8b442414             mov eax, dword ptr [esp + 0x14]
// 006f2e1b  3b442434             cmp eax, dword ptr [esp + 0x34]
// 006f2e1f  7e04                 jle 0x6f2e25
// 006f2e21  89442434             mov dword ptr [esp + 0x34], eax
// 006f2e25  8b542454             mov edx, dword ptr [esp + 0x54]
// 006f2e29  89542410             mov dword ptr [esp + 0x10], edx
// 006f2e2d  3b742430             cmp esi, dword ptr [esp + 0x30]
// 006f2e31  7e04                 jle 0x6f2e37
// 006f2e33  89742430             mov dword ptr [esp + 0x30], esi
// 006f2e37  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006f2e3b  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006f2e43  85f6                 test esi, esi
// 006f2e45  740a                 je 0x6f2e51
// 006f2e47  8b1b                 mov ebx, dword ptr [ebx]
// 006f2e49  f7db                 neg ebx
// 006f2e4b  895c2458             mov dword ptr [esp + 0x58], ebx
// 006f2e4f  eb07                 jmp 0x6f2e58
// 006f2e51  8b47d0               mov eax, dword ptr [edi - 0x30]
// 006f2e54  89442458             mov dword ptr [esp + 0x58], eax
// 006f2e58  8b442420             mov eax, dword ptr [esp + 0x20]
// 006f2e5c  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006f2e60  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 006f2e63  40                   inc eax
// 006f2e64  83c740               add edi, 0x40
// 006f2e67  3bc1                 cmp eax, ecx
// 006f2e69  89442420             mov dword ptr [esp + 0x20], eax
// 006f2e6d  0f8c93feffff         jl 0x6f2d06
// 006f2e73  85f6                 test esi, esi
// 006f2e75  741b                 je 0x6f2e92
// 006f2e77  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006f2e7b  8b542430             mov edx, dword ptr [esp + 0x30]
// 006f2e7f  894c2428             mov dword ptr [esp + 0x28], ecx
// 006f2e83  8954242c             mov dword ptr [esp + 0x2c], edx
// 006f2e87  8d4c2428             lea ecx, [esp + 0x28]
// 006f2e8b  eb09                 jmp 0x6f2e96
// 006f2e8d  e8b2dafaff           call 0x6a0944
// 006f2e92  8d4c2430             lea ecx, [esp + 0x30]
// 006f2e96  8b11                 mov edx, dword ptr [ecx]
// 006f2e98  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006f2e9c  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f2e9f  5f                   pop edi
// 006f2ea0  5e                   pop esi
// 006f2ea1  5d                   pop ebp
// 006f2ea2  8910                 mov dword ptr [eax], edx
// 006f2ea4  894804               mov dword ptr [eax + 4], ecx
// 006f2ea7  5b                   pop ebx
// 006f2ea8  83c438               add esp, 0x38
// 006f2eab  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?_CalcSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@AAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
