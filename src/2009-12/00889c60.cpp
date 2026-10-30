// roc 2009-12 00889c60  unit: XTPPaintThemes::CXTPOfficeTheme  size: 483 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00889c60
//
// 00889c60  83ec30               sub esp, 0x30
// 00889c63  837c244400           cmp dword ptr [esp + 0x44], 0
// 00889c68  56                   push esi
// 00889c69  8bf1                 mov esi, ecx
// 00889c6b  7539                 jne 0x889ca6
// 00889c6d  8b442440             mov eax, dword ptr [esp + 0x40]
// 00889c71  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 00889c78  8b442438             mov eax, dword ptr [esp + 0x38]
// 00889c7c  7514                 jne 0x889c92
// 00889c7e  c70003000000         mov dword ptr [eax], 3
// 00889c84  c7400403000000       mov dword ptr [eax + 4], 3
// 00889c8b  5e                   pop esi
// 00889c8c  83c430               add esp, 0x30
// 00889c8f  c21400               ret 0x14
// 00889c92  c70006000000         mov dword ptr [eax], 6
// 00889c98  c7400406000000       mov dword ptr [eax + 4], 6
// 00889c9f  5e                   pop esi
// 00889ca0  83c430               add esp, 0x30
// 00889ca3  c21400               ret 0x14
// 00889ca6  53                   push ebx
// 00889ca7  55                   push ebp
// 00889ca8  57                   push edi
// 00889ca9  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00889cad  8b5720               mov edx, dword ptr [edi + 0x20]
// 00889cb0  8d4c2430             lea ecx, [esp + 0x30]
// 00889cb4  51                   push ecx
// 00889cb5  52                   push edx
// 00889cb6  ff1550cc9800         call dword ptr [0x98cc50]
// 00889cbc  83bff800000002       cmp dword ptr [edi + 0xf8], 2
// 00889cc3  8b442450             mov eax, dword ptr [esp + 0x50]
// 00889cc7  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 00889ccd  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 00889cd3  8ba8c0000000         mov ebp, dword ptr [eax + 0xc0]
// 00889cd9  8b98b4000000         mov ebx, dword ptr [eax + 0xb4]
// 00889cdf  894c2424             mov dword ptr [esp + 0x24], ecx
// 00889ce3  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 00889ce9  89542428             mov dword ptr [esp + 0x28], edx
// 00889ced  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 00889cf3  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00889cf7  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 00889cfd  89542410             mov dword ptr [esp + 0x10], edx
// 00889d01  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 00889d07  894c2418             mov dword ptr [esp + 0x18], ecx
// 00889d0b  8954241c             mov dword ptr [esp + 0x1c], edx
// 00889d0f  7566                 jne 0x889d77
// 00889d11  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00889d18  6a27                 push 0x27
// 00889d1a  8bce                 mov ecx, esi
// 00889d1c  7536                 jne 0x889d54
// 00889d1e  e81d39f7ff           call 0x7fd640
// 00889d23  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00889d27  8b16                 mov edx, dword ptr [esi]
// 00889d29  50                   push eax
// 00889d2a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00889d2e  40                   inc eax
// 00889d2f  50                   push eax
// 00889d30  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 00889d36  83c1fe               add ecx, -2
// 00889d39  51                   push ecx
// 00889d3a  57                   push edi
// 00889d3b  8bce                 mov ecx, esi
// 00889d3d  ffd0                 call eax
// 00889d3f  038680000000         add eax, dword ptr [esi + 0x80]
// 00889d45  8b542454             mov edx, dword ptr [esp + 0x54]
// 00889d49  8d4c28ff             lea ecx, [eax + ebp - 1]
// 00889d4d  51                   push ecx
// 00889d4e  52                   push edx
// 00889d4f  e9cd000000           jmp 0x889e21
// 00889d54  e8e738f7ff           call 0x7fd640
// 00889d59  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00889d5d  50                   push eax
// 00889d5e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889d62  40                   inc eax
// 00889d63  50                   push eax
// 00889d64  4b                   dec ebx
// 00889d65  53                   push ebx
// 00889d66  83c5fe               add ebp, -2
// 00889d69  55                   push ebp
// 00889d6a  51                   push ecx
// 00889d6b  8bce                 mov ecx, esi
// 00889d6d  e82e3bf7ff           call 0x7fd8a0
// 00889d72  e9b1000000           jmp 0x889e28
// 00889d77  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 00889d7d  83ff05               cmp edi, 5
// 00889d80  745b                 je 0x889ddd
// 00889d82  83ff02               cmp edi, 2
// 00889d85  7405                 je 0x889d8c
// 00889d87  83ff03               cmp edi, 3
// 00889d8a  7551                 jne 0x889ddd
// 00889d8c  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00889d93  6a27                 push 0x27
// 00889d95  8bce                 mov ecx, esi
// 00889d97  751f                 jne 0x889db8
// 00889d99  e8a238f7ff           call 0x7fd640
// 00889d9e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00889da2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00889da6  50                   push eax
// 00889da7  8b442428             mov eax, dword ptr [esp + 0x28]
// 00889dab  52                   push edx
// 00889dac  8b542450             mov edx, dword ptr [esp + 0x50]
// 00889db0  83c0fc               add eax, -4
// 00889db3  50                   push eax
// 00889db4  51                   push ecx
// 00889db5  52                   push edx
// 00889db6  eb69                 jmp 0x889e21
// 00889db8  e88338f7ff           call 0x7fd640
// 00889dbd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00889dc1  8b542448             mov edx, dword ptr [esp + 0x48]
// 00889dc5  50                   push eax
// 00889dc6  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889dca  50                   push eax
// 00889dcb  83c304               add ebx, 4
// 00889dce  53                   push ebx
// 00889dcf  83c102               add ecx, 2
// 00889dd2  51                   push ecx
// 00889dd3  52                   push edx
// 00889dd4  8bce                 mov ecx, esi
// 00889dd6  e8c53af7ff           call 0x7fd8a0
// 00889ddb  eb4b                 jmp 0x889e28
// 00889ddd  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00889de4  6a27                 push 0x27
// 00889de6  8bce                 mov ecx, esi
// 00889de8  751e                 jne 0x889e08
// 00889dea  e85138f7ff           call 0x7fd640
// 00889def  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00889df3  50                   push eax
// 00889df4  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889df8  50                   push eax
// 00889df9  53                   push ebx
// 00889dfa  83c5fc               add ebp, -4
// 00889dfd  55                   push ebp
// 00889dfe  51                   push ecx
// 00889dff  8bce                 mov ecx, esi
// 00889e01  e89a3af7ff           call 0x7fd8a0
// 00889e06  eb20                 jmp 0x889e28
// 00889e08  e83338f7ff           call 0x7fd640
// 00889e0d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00889e11  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00889e15  50                   push eax
// 00889e16  8b442414             mov eax, dword ptr [esp + 0x14]
// 00889e1a  52                   push edx
// 00889e1b  83c3fc               add ebx, -4
// 00889e1e  53                   push ebx
// 00889e1f  50                   push eax
// 00889e20  51                   push ecx
// 00889e21  8bce                 mov ecx, esi
// 00889e23  e8483af7ff           call 0x7fd870
// 00889e28  8b442444             mov eax, dword ptr [esp + 0x44]
// 00889e2c  5f                   pop edi
// 00889e2d  5d                   pop ebp
// 00889e2e  5b                   pop ebx
// 00889e2f  c70000000000         mov dword ptr [eax], 0
// 00889e35  c7400400000000       mov dword ptr [eax + 4], 0
// 00889e3c  5e                   pop esi
// 00889e3d  83c430               add esp, 0x30
// 00889e40  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCommandBarSeparator@CXTPOfficeTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOfficeTheme.cpp