// roc 2009-12 008d8c70  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d8c70
//
// 008d8c70  83ec20               sub esp, 0x20
// 008d8c73  53                   push ebx
// 008d8c74  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008d8c78  8b03                 mov eax, dword ptr [ebx]
// 008d8c7a  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d8c7d  55                   push ebp
// 008d8c7e  56                   push esi
// 008d8c7f  8bf1                 mov esi, ecx
// 008d8c81  57                   push edi
// 008d8c82  8bcb                 mov ecx, ebx
// 008d8c84  ffd2                 call edx
// 008d8c86  50                   push eax
// 008d8c87  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d8c8a  8b5050               mov edx, dword ptr [eax + 0x50]
// 008d8c8d  83c050               add eax, 0x50
// 008d8c90  83ec10               sub esp, 0x10
// 008d8c93  8bcc                 mov ecx, esp
// 008d8c95  8911                 mov dword ptr [ecx], edx
// 008d8c97  8b5004               mov edx, dword ptr [eax + 4]
// 008d8c9a  895104               mov dword ptr [ecx + 4], edx
// 008d8c9d  8b5008               mov edx, dword ptr [eax + 8]
// 008d8ca0  8b400c               mov eax, dword ptr [eax + 0xc]
// 008d8ca3  895108               mov dword ptr [ecx + 8], edx
// 008d8ca6  89410c               mov dword ptr [ecx + 0xc], eax
// 008d8ca9  8d4c2450             lea ecx, [esp + 0x50]
// 008d8cad  51                   push ecx
// 008d8cae  e8cdbaffff           call 0x8d4780
// 008d8cb3  83c418               add esp, 0x18
// 008d8cb6  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 008d8cba  0f84df000000         je 0x8d8d9f
// 008d8cc0  8b16                 mov edx, dword ptr [esi]
// 008d8cc2  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008d8cc5  53                   push ebx
// 008d8cc6  8bce                 mov ecx, esi
// 008d8cc8  ffd0                 call eax
// 008d8cca  8b542444             mov edx, dword ptr [esp + 0x44]
// 008d8cce  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d8cd2  89542418             mov dword ptr [esp + 0x18], edx
// 008d8cd6  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d8cda  8954241c             mov dword ptr [esp + 0x1c], edx
// 008d8cde  8b561c               mov edx, dword ptr [esi + 0x1c]
// 008d8ce1  837a3802             cmp dword ptr [edx + 0x38], 2
// 008d8ce5  89442434             mov dword ptr [esp + 0x34], eax
// 008d8ce9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d8ced  89442410             mov dword ptr [esp + 0x10], eax
// 008d8cf1  7405                 je 0x8d8cf8
// 008d8cf3  40                   inc eax
// 008d8cf4  89442410             mov dword ptr [esp + 0x10], eax
// 008d8cf8  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 008d8cfb  41                   inc ecx
// 008d8cfc  33ed                 xor ebp, ebp
// 008d8cfe  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008d8d02  85c0                 test eax, eax
// 008d8d04  0f8e95000000         jle 0x8d8d9f
// 008d8d0a  8d9b00000000         lea ebx, [ebx]
// 008d8d10  85ed                 test ebp, ebp
// 008d8d12  7c15                 jl 0x8d8d29
// 008d8d14  3be8                 cmp ebp, eax
// 008d8d16  7d11                 jge 0x8d8d29
// 008d8d18  3b6b5c               cmp ebp, dword ptr [ebx + 0x5c]
// 008d8d1b  0f8d88000000         jge 0x8d8da9
// 008d8d21  8b4358               mov eax, dword ptr [ebx + 0x58]
// 008d8d24  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 008d8d27  eb02                 jmp 0x8d8d2b
// 008d8d29  33f6                 xor esi, esi
// 008d8d2b  8b542434             mov edx, dword ptr [esp + 0x34]
// 008d8d2f  8d3c11               lea edi, [ecx + edx]
// 008d8d32  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d8d36  83ec10               sub esp, 0x10
// 008d8d39  8bc4                 mov eax, esp
// 008d8d3b  8910                 mov dword ptr [eax], edx
// 008d8d3d  894804               mov dword ptr [eax + 4], ecx
// 008d8d40  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d8d44  894808               mov dword ptr [eax + 8], ecx
// 008d8d47  8bce                 mov ecx, esi
// 008d8d49  89780c               mov dword ptr [eax + 0xc], edi
// 008d8d4c  e8af5affff           call 0x8ce800
// 008d8d51  8b5660               mov edx, dword ptr [esi + 0x60]
// 008d8d54  8bcf                 mov ecx, edi
// 008d8d56  397204               cmp dword ptr [edx + 4], esi
// 008d8d59  7538                 jne 0x8d8d93
// 008d8d5b  8b7b5c               mov edi, dword ptr [ebx + 0x5c]
// 008d8d5e  8b542434             mov edx, dword ptr [esp + 0x34]
// 008d8d62  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008d8d66  2bfd                 sub edi, ebp
// 008d8d68  4f                   dec edi
// 008d8d69  0faffa               imul edi, edx
// 008d8d6c  8bc6                 mov eax, esi
// 008d8d6e  2bc7                 sub eax, edi
// 008d8d70  03d1                 add edx, ecx
// 008d8d72  3bd0                 cmp edx, eax
// 008d8d74  7e02                 jle 0x8d8d78
// 008d8d76  8bc2                 mov eax, edx
// 008d8d78  8d56ff               lea edx, [esi - 1]
// 008d8d7b  3bc2                 cmp eax, edx
// 008d8d7d  8bf0                 mov esi, eax
// 008d8d7f  7c02                 jl 0x8d8d83
// 008d8d81  8bf2                 mov esi, edx
// 008d8d83  3bce                 cmp ecx, esi
// 008d8d85  7e04                 jle 0x8d8d8b
// 008d8d87  8bc1                 mov eax, ecx
// 008d8d89  eb06                 jmp 0x8d8d91
// 008d8d8b  3bc2                 cmp eax, edx
// 008d8d8d  7c02                 jl 0x8d8d91
// 008d8d8f  8bc2                 mov eax, edx
// 008d8d91  8bc8                 mov ecx, eax
// 008d8d93  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 008d8d96  45                   inc ebp
// 008d8d97  3be8                 cmp ebp, eax
// 008d8d99  0f8c71ffffff         jl 0x8d8d10
// 008d8d9f  5f                   pop edi
// 008d8da0  5e                   pop esi
// 008d8da1  5d                   pop ebp
// 008d8da2  5b                   pop ebx
// 008d8da3  83c420               add esp, 0x20
// 008d8da6  c21800               ret 0x18
// 008d8da9  e85eadf1ff           call 0x7f3b0c
// copied from an identical function in another client (function ?RepositionTabControl@CAppearanceSetVisio@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp