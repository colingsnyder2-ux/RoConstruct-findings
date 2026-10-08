// roc 2011-06 008f3bc0  unit: CXTPScrollBase  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3bc0
//
// 008f3bc0  8b442404             mov eax, dword ptr [esp + 4]
// 008f3bc4  8b10                 mov edx, dword ptr [eax]
// 008f3bc6  53                   push ebx
// 008f3bc7  55                   push ebp
// 008f3bc8  56                   push esi
// 008f3bc9  8b742414             mov esi, dword ptr [esp + 0x14]
// 008f3bcd  837e5800             cmp dword ptr [esi + 0x58], 0
// 008f3bd1  895644               mov dword ptr [esi + 0x44], edx
// 008f3bd4  8b5004               mov edx, dword ptr [eax + 4]
// 008f3bd7  895648               mov dword ptr [esi + 0x48], edx
// 008f3bda  8b5008               mov edx, dword ptr [eax + 8]
// 008f3bdd  89564c               mov dword ptr [esi + 0x4c], edx
// 008f3be0  8b500c               mov edx, dword ptr [eax + 0xc]
// 008f3be3  57                   push edi
// 008f3be4  895650               mov dword ptr [esi + 0x50], edx
// 008f3be7  c7463800000000       mov dword ptr [esi + 0x38], 0
// 008f3bee  7423                 je 0x8f3c13
// 008f3bf0  8b5004               mov edx, dword ptr [eax + 4]
// 008f3bf3  895610               mov dword ptr [esi + 0x10], edx
// 008f3bf6  8b500c               mov edx, dword ptr [eax + 0xc]
// 008f3bf9  895614               mov dword ptr [esi + 0x14], edx
// 008f3bfc  8b10                 mov edx, dword ptr [eax]
// 008f3bfe  895618               mov dword ptr [esi + 0x18], edx
// 008f3c01  8b4008               mov eax, dword ptr [eax + 8]
// 008f3c04  89461c               mov dword ptr [esi + 0x1c], eax
// 008f3c07  8b11                 mov edx, dword ptr [ecx]
// 008f3c09  8b4224               mov eax, dword ptr [edx + 0x24]
// 008f3c0c  ffd0                 call eax
// 008f3c0e  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008f3c11  eb21                 jmp 0x8f3c34
// 008f3c13  8b10                 mov edx, dword ptr [eax]
// 008f3c15  895610               mov dword ptr [esi + 0x10], edx
// 008f3c18  8b5008               mov edx, dword ptr [eax + 8]
// 008f3c1b  895614               mov dword ptr [esi + 0x14], edx
// 008f3c1e  8b5004               mov edx, dword ptr [eax + 4]
// 008f3c21  895618               mov dword ptr [esi + 0x18], edx
// 008f3c24  8b400c               mov eax, dword ptr [eax + 0xc]
// 008f3c27  89461c               mov dword ptr [esi + 0x1c], eax
// 008f3c2a  8b11                 mov edx, dword ptr [ecx]
// 008f3c2c  8b4224               mov eax, dword ptr [edx + 0x24]
// 008f3c2f  ffd0                 call eax
// 008f3c31  8b4804               mov ecx, dword ptr [eax + 4]
// 008f3c34  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008f3c38  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 008f3c3b  894e20               mov dword ptr [esi + 0x20], ecx
// 008f3c3e  8b5014               mov edx, dword ptr [eax + 0x14]
// 008f3c41  8b7e20               mov edi, dword ptr [esi + 0x20]
// 008f3c44  89560c               mov dword ptr [esi + 0xc], edx
// 008f3c47  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008f3c4a  894e08               mov dword ptr [esi + 8], ecx
// 008f3c4d  8b5008               mov edx, dword ptr [eax + 8]
// 008f3c50  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008f3c53  8916                 mov dword ptr [esi], edx
// 008f3c55  8b400c               mov eax, dword ptr [eax + 0xc]
// 008f3c58  894604               mov dword ptr [esi + 4], eax
// 008f3c5b  2bc2                 sub eax, edx
// 008f3c5d  40                   inc eax
// 008f3c5e  8be8                 mov ebp, eax
// 008f3c60  8bc3                 mov eax, ebx
// 008f3c62  2bc1                 sub eax, ecx
// 008f3c64  99                   cdq 
// 008f3c65  2bc2                 sub eax, edx
// 008f3c67  d1f8                 sar eax, 1
// 008f3c69  3bc7                 cmp eax, edi
// 008f3c6b  7d02                 jge 0x8f3c6f
// 008f3c6d  8bf8                 mov edi, eax
// 008f3c6f  8b5608               mov edx, dword ptr [esi + 8]
// 008f3c72  8bc3                 mov eax, ebx
// 008f3c74  8b1ddc01a400         mov ebx, dword ptr [0xa401dc]
// 008f3c7a  03cf                 add ecx, edi
// 008f3c7c  2bc7                 sub eax, edi
// 008f3c7e  894e24               mov dword ptr [esi + 0x24], ecx
// 008f3c81  894628               mov dword ptr [esi + 0x28], eax
// 008f3c84  85d2                 test edx, edx
// 008f3c86  741e                 je 0x8f3ca6
// 008f3c88  85ed                 test ebp, ebp
// 008f3c8a  741a                 je 0x8f3ca6
// 008f3c8c  55                   push ebp
// 008f3c8d  52                   push edx
// 008f3c8e  2bc1                 sub eax, ecx
// 008f3c90  50                   push eax
// 008f3c91  ffd3                 call ebx
// 008f3c93  8bc8                 mov ecx, eax
// 008f3c95  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f3c98  99                   cdq 
// 008f3c99  2bc2                 sub eax, edx
// 008f3c9b  d1f8                 sar eax, 1
// 008f3c9d  3bc1                 cmp eax, ecx
// 008f3c9f  7f02                 jg 0x8f3ca3
// 008f3ca1  8bc1                 mov eax, ecx
// 008f3ca3  894620               mov dword ptr [esi + 0x20], eax
// 008f3ca6  8b4610               mov eax, dword ptr [esi + 0x10]
// 008f3ca9  8b5608               mov edx, dword ptr [esi + 8]
// 008f3cac  8d0c38               lea ecx, [eax + edi]
// 008f3caf  8b4614               mov eax, dword ptr [esi + 0x14]
// 008f3cb2  2b4620               sub eax, dword ptr [esi + 0x20]
// 008f3cb5  894e40               mov dword ptr [esi + 0x40], ecx
// 008f3cb8  2bc1                 sub eax, ecx
// 008f3cba  2bc7                 sub eax, edi
// 008f3cbc  89463c               mov dword ptr [esi + 0x3c], eax
// 008f3cbf  85d2                 test edx, edx
// 008f3cc1  7505                 jne 0x8f3cc8
// 008f3cc3  ba01000000           mov edx, 1
// 008f3cc8  2bea                 sub ebp, edx
// 008f3cca  741f                 je 0x8f3ceb
// 008f3ccc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008f3ccf  2b0e                 sub ecx, dword ptr [esi]
// 008f3cd1  55                   push ebp
// 008f3cd2  50                   push eax
// 008f3cd3  51                   push ecx
// 008f3cd4  ffd3                 call ebx
// 008f3cd6  034640               add eax, dword ptr [esi + 0x40]
// 008f3cd9  5f                   pop edi
// 008f3cda  8bd0                 mov edx, eax
// 008f3cdc  035620               add edx, dword ptr [esi + 0x20]
// 008f3cdf  894634               mov dword ptr [esi + 0x34], eax
// 008f3ce2  895630               mov dword ptr [esi + 0x30], edx
// 008f3ce5  5e                   pop esi
// 008f3ce6  5d                   pop ebp
// 008f3ce7  5b                   pop ebx
// 008f3ce8  c20c00               ret 0xc
// 008f3ceb  49                   dec ecx
// 008f3cec  8bd1                 mov edx, ecx
// 008f3cee  035620               add edx, dword ptr [esi + 0x20]
// 008f3cf1  5f                   pop edi
// 008f3cf2  894e34               mov dword ptr [esi + 0x34], ecx
// 008f3cf5  895630               mov dword ptr [esi + 0x30], edx
// 008f3cf8  5e                   pop esi
// 008f3cf9  5d                   pop ebp
// 008f3cfa  5b                   pop ebx
// 008f3cfb  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?CalcScrollBarInfo@CXTPScrollBase@@MAEXPAUtagRECT@@PAUSCROLLBARPOSINFO@1@PAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
