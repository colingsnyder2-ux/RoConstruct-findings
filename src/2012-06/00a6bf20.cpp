// roc 2012-06 00a6bf20  unit: CXTPScrollBase  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6bf20
//
// 00a6bf20  8b442404             mov eax, dword ptr [esp + 4]
// 00a6bf24  8b10                 mov edx, dword ptr [eax]
// 00a6bf26  53                   push ebx
// 00a6bf27  55                   push ebp
// 00a6bf28  56                   push esi
// 00a6bf29  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a6bf2d  837e5800             cmp dword ptr [esi + 0x58], 0
// 00a6bf31  895644               mov dword ptr [esi + 0x44], edx
// 00a6bf34  8b5004               mov edx, dword ptr [eax + 4]
// 00a6bf37  895648               mov dword ptr [esi + 0x48], edx
// 00a6bf3a  8b5008               mov edx, dword ptr [eax + 8]
// 00a6bf3d  89564c               mov dword ptr [esi + 0x4c], edx
// 00a6bf40  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a6bf43  57                   push edi
// 00a6bf44  895650               mov dword ptr [esi + 0x50], edx
// 00a6bf47  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00a6bf4e  7423                 je 0xa6bf73
// 00a6bf50  8b5004               mov edx, dword ptr [eax + 4]
// 00a6bf53  895610               mov dword ptr [esi + 0x10], edx
// 00a6bf56  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a6bf59  895614               mov dword ptr [esi + 0x14], edx
// 00a6bf5c  8b10                 mov edx, dword ptr [eax]
// 00a6bf5e  895618               mov dword ptr [esi + 0x18], edx
// 00a6bf61  8b4008               mov eax, dword ptr [eax + 8]
// 00a6bf64  89461c               mov dword ptr [esi + 0x1c], eax
// 00a6bf67  8b11                 mov edx, dword ptr [ecx]
// 00a6bf69  8b4224               mov eax, dword ptr [edx + 0x24]
// 00a6bf6c  ffd0                 call eax
// 00a6bf6e  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00a6bf71  eb21                 jmp 0xa6bf94
// 00a6bf73  8b10                 mov edx, dword ptr [eax]
// 00a6bf75  895610               mov dword ptr [esi + 0x10], edx
// 00a6bf78  8b5008               mov edx, dword ptr [eax + 8]
// 00a6bf7b  895614               mov dword ptr [esi + 0x14], edx
// 00a6bf7e  8b5004               mov edx, dword ptr [eax + 4]
// 00a6bf81  895618               mov dword ptr [esi + 0x18], edx
// 00a6bf84  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a6bf87  89461c               mov dword ptr [esi + 0x1c], eax
// 00a6bf8a  8b11                 mov edx, dword ptr [ecx]
// 00a6bf8c  8b4224               mov eax, dword ptr [edx + 0x24]
// 00a6bf8f  ffd0                 call eax
// 00a6bf91  8b4804               mov ecx, dword ptr [eax + 4]
// 00a6bf94  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a6bf98  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 00a6bf9b  894e20               mov dword ptr [esi + 0x20], ecx
// 00a6bf9e  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a6bfa1  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00a6bfa4  89560c               mov dword ptr [esi + 0xc], edx
// 00a6bfa7  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00a6bfaa  894e08               mov dword ptr [esi + 8], ecx
// 00a6bfad  8b5008               mov edx, dword ptr [eax + 8]
// 00a6bfb0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00a6bfb3  8916                 mov dword ptr [esi], edx
// 00a6bfb5  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a6bfb8  894604               mov dword ptr [esi + 4], eax
// 00a6bfbb  2bc2                 sub eax, edx
// 00a6bfbd  40                   inc eax
// 00a6bfbe  8be8                 mov ebp, eax
// 00a6bfc0  8bc3                 mov eax, ebx
// 00a6bfc2  2bc1                 sub eax, ecx
// 00a6bfc4  99                   cdq 
// 00a6bfc5  2bc2                 sub eax, edx
// 00a6bfc7  d1f8                 sar eax, 1
// 00a6bfc9  3bc7                 cmp eax, edi
// 00a6bfcb  7d02                 jge 0xa6bfcf
// 00a6bfcd  8bf8                 mov edi, eax
// 00a6bfcf  8b5608               mov edx, dword ptr [esi + 8]
// 00a6bfd2  8bc3                 mov eax, ebx
// 00a6bfd4  8b1d0423b200         mov ebx, dword ptr [0xb22304]
// 00a6bfda  03cf                 add ecx, edi
// 00a6bfdc  2bc7                 sub eax, edi
// 00a6bfde  894e24               mov dword ptr [esi + 0x24], ecx
// 00a6bfe1  894628               mov dword ptr [esi + 0x28], eax
// 00a6bfe4  85d2                 test edx, edx
// 00a6bfe6  741e                 je 0xa6c006
// 00a6bfe8  85ed                 test ebp, ebp
// 00a6bfea  741a                 je 0xa6c006
// 00a6bfec  55                   push ebp
// 00a6bfed  52                   push edx
// 00a6bfee  2bc1                 sub eax, ecx
// 00a6bff0  50                   push eax
// 00a6bff1  ffd3                 call ebx
// 00a6bff3  8bc8                 mov ecx, eax
// 00a6bff5  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6bff8  99                   cdq 
// 00a6bff9  2bc2                 sub eax, edx
// 00a6bffb  d1f8                 sar eax, 1
// 00a6bffd  3bc1                 cmp eax, ecx
// 00a6bfff  7f02                 jg 0xa6c003
// 00a6c001  8bc1                 mov eax, ecx
// 00a6c003  894620               mov dword ptr [esi + 0x20], eax
// 00a6c006  8b4610               mov eax, dword ptr [esi + 0x10]
// 00a6c009  8b5608               mov edx, dword ptr [esi + 8]
// 00a6c00c  8d0c38               lea ecx, [eax + edi]
// 00a6c00f  8b4614               mov eax, dword ptr [esi + 0x14]
// 00a6c012  2b4620               sub eax, dword ptr [esi + 0x20]
// 00a6c015  894e40               mov dword ptr [esi + 0x40], ecx
// 00a6c018  2bc1                 sub eax, ecx
// 00a6c01a  2bc7                 sub eax, edi
// 00a6c01c  89463c               mov dword ptr [esi + 0x3c], eax
// 00a6c01f  85d2                 test edx, edx
// 00a6c021  7505                 jne 0xa6c028
// 00a6c023  ba01000000           mov edx, 1
// 00a6c028  2bea                 sub ebp, edx
// 00a6c02a  741f                 je 0xa6c04b
// 00a6c02c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a6c02f  2b0e                 sub ecx, dword ptr [esi]
// 00a6c031  55                   push ebp
// 00a6c032  50                   push eax
// 00a6c033  51                   push ecx
// 00a6c034  ffd3                 call ebx
// 00a6c036  034640               add eax, dword ptr [esi + 0x40]
// 00a6c039  5f                   pop edi
// 00a6c03a  8bd0                 mov edx, eax
// 00a6c03c  035620               add edx, dword ptr [esi + 0x20]
// 00a6c03f  894634               mov dword ptr [esi + 0x34], eax
// 00a6c042  895630               mov dword ptr [esi + 0x30], edx
// 00a6c045  5e                   pop esi
// 00a6c046  5d                   pop ebp
// 00a6c047  5b                   pop ebx
// 00a6c048  c20c00               ret 0xc
// 00a6c04b  49                   dec ecx
// 00a6c04c  8bd1                 mov edx, ecx
// 00a6c04e  035620               add edx, dword ptr [esi + 0x20]
// 00a6c051  5f                   pop edi
// 00a6c052  894e34               mov dword ptr [esi + 0x34], ecx
// 00a6c055  895630               mov dword ptr [esi + 0x30], edx
// 00a6c058  5e                   pop esi
// 00a6c059  5d                   pop ebp
// 00a6c05a  5b                   pop ebx
// 00a6c05b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?CalcScrollBarInfo@CXTPScrollBase@@MAEXPAUtagRECT@@PAUSCROLLBARPOSINFO@1@PAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
