// roc 2010-06 0089b060  unit: CXTPScrollBase  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089b060
//
// 0089b060  8b442404             mov eax, dword ptr [esp + 4]
// 0089b064  8b10                 mov edx, dword ptr [eax]
// 0089b066  53                   push ebx
// 0089b067  55                   push ebp
// 0089b068  56                   push esi
// 0089b069  8b742414             mov esi, dword ptr [esp + 0x14]
// 0089b06d  837e5800             cmp dword ptr [esi + 0x58], 0
// 0089b071  895644               mov dword ptr [esi + 0x44], edx
// 0089b074  8b5004               mov edx, dword ptr [eax + 4]
// 0089b077  895648               mov dword ptr [esi + 0x48], edx
// 0089b07a  8b5008               mov edx, dword ptr [eax + 8]
// 0089b07d  89564c               mov dword ptr [esi + 0x4c], edx
// 0089b080  8b500c               mov edx, dword ptr [eax + 0xc]
// 0089b083  57                   push edi
// 0089b084  895650               mov dword ptr [esi + 0x50], edx
// 0089b087  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0089b08e  7423                 je 0x89b0b3
// 0089b090  8b5004               mov edx, dword ptr [eax + 4]
// 0089b093  895610               mov dword ptr [esi + 0x10], edx
// 0089b096  8b500c               mov edx, dword ptr [eax + 0xc]
// 0089b099  895614               mov dword ptr [esi + 0x14], edx
// 0089b09c  8b10                 mov edx, dword ptr [eax]
// 0089b09e  895618               mov dword ptr [esi + 0x18], edx
// 0089b0a1  8b4008               mov eax, dword ptr [eax + 8]
// 0089b0a4  89461c               mov dword ptr [esi + 0x1c], eax
// 0089b0a7  8b11                 mov edx, dword ptr [ecx]
// 0089b0a9  8b4224               mov eax, dword ptr [edx + 0x24]
// 0089b0ac  ffd0                 call eax
// 0089b0ae  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0089b0b1  eb21                 jmp 0x89b0d4
// 0089b0b3  8b10                 mov edx, dword ptr [eax]
// 0089b0b5  895610               mov dword ptr [esi + 0x10], edx
// 0089b0b8  8b5008               mov edx, dword ptr [eax + 8]
// 0089b0bb  895614               mov dword ptr [esi + 0x14], edx
// 0089b0be  8b5004               mov edx, dword ptr [eax + 4]
// 0089b0c1  895618               mov dword ptr [esi + 0x18], edx
// 0089b0c4  8b400c               mov eax, dword ptr [eax + 0xc]
// 0089b0c7  89461c               mov dword ptr [esi + 0x1c], eax
// 0089b0ca  8b11                 mov edx, dword ptr [ecx]
// 0089b0cc  8b4224               mov eax, dword ptr [edx + 0x24]
// 0089b0cf  ffd0                 call eax
// 0089b0d1  8b4804               mov ecx, dword ptr [eax + 4]
// 0089b0d4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0089b0d8  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 0089b0db  894e20               mov dword ptr [esi + 0x20], ecx
// 0089b0de  8b5014               mov edx, dword ptr [eax + 0x14]
// 0089b0e1  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0089b0e4  89560c               mov dword ptr [esi + 0xc], edx
// 0089b0e7  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0089b0ea  894e08               mov dword ptr [esi + 8], ecx
// 0089b0ed  8b5008               mov edx, dword ptr [eax + 8]
// 0089b0f0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0089b0f3  8916                 mov dword ptr [esi], edx
// 0089b0f5  8b400c               mov eax, dword ptr [eax + 0xc]
// 0089b0f8  894604               mov dword ptr [esi + 4], eax
// 0089b0fb  2bc2                 sub eax, edx
// 0089b0fd  40                   inc eax
// 0089b0fe  8be8                 mov ebp, eax
// 0089b100  8bc3                 mov eax, ebx
// 0089b102  2bc1                 sub eax, ecx
// 0089b104  99                   cdq 
// 0089b105  2bc2                 sub eax, edx
// 0089b107  d1f8                 sar eax, 1
// 0089b109  3bc7                 cmp eax, edi
// 0089b10b  7d02                 jge 0x89b10f
// 0089b10d  8bf8                 mov edi, eax
// 0089b10f  8b5608               mov edx, dword ptr [esi + 8]
// 0089b112  8bc3                 mov eax, ebx
// 0089b114  8b1dc8a29e00         mov ebx, dword ptr [0x9ea2c8]
// 0089b11a  03cf                 add ecx, edi
// 0089b11c  2bc7                 sub eax, edi
// 0089b11e  894e24               mov dword ptr [esi + 0x24], ecx
// 0089b121  894628               mov dword ptr [esi + 0x28], eax
// 0089b124  85d2                 test edx, edx
// 0089b126  741e                 je 0x89b146
// 0089b128  85ed                 test ebp, ebp
// 0089b12a  741a                 je 0x89b146
// 0089b12c  55                   push ebp
// 0089b12d  52                   push edx
// 0089b12e  2bc1                 sub eax, ecx
// 0089b130  50                   push eax
// 0089b131  ffd3                 call ebx
// 0089b133  8bc8                 mov ecx, eax
// 0089b135  8b4620               mov eax, dword ptr [esi + 0x20]
// 0089b138  99                   cdq 
// 0089b139  2bc2                 sub eax, edx
// 0089b13b  d1f8                 sar eax, 1
// 0089b13d  3bc1                 cmp eax, ecx
// 0089b13f  7f02                 jg 0x89b143
// 0089b141  8bc1                 mov eax, ecx
// 0089b143  894620               mov dword ptr [esi + 0x20], eax
// 0089b146  8b4610               mov eax, dword ptr [esi + 0x10]
// 0089b149  8b5608               mov edx, dword ptr [esi + 8]
// 0089b14c  8d0c38               lea ecx, [eax + edi]
// 0089b14f  8b4614               mov eax, dword ptr [esi + 0x14]
// 0089b152  2b4620               sub eax, dword ptr [esi + 0x20]
// 0089b155  894e40               mov dword ptr [esi + 0x40], ecx
// 0089b158  2bc1                 sub eax, ecx
// 0089b15a  2bc7                 sub eax, edi
// 0089b15c  89463c               mov dword ptr [esi + 0x3c], eax
// 0089b15f  85d2                 test edx, edx
// 0089b161  7505                 jne 0x89b168
// 0089b163  ba01000000           mov edx, 1
// 0089b168  2bea                 sub ebp, edx
// 0089b16a  741f                 je 0x89b18b
// 0089b16c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0089b16f  2b0e                 sub ecx, dword ptr [esi]
// 0089b171  55                   push ebp
// 0089b172  50                   push eax
// 0089b173  51                   push ecx
// 0089b174  ffd3                 call ebx
// 0089b176  034640               add eax, dword ptr [esi + 0x40]
// 0089b179  5f                   pop edi
// 0089b17a  8bd0                 mov edx, eax
// 0089b17c  035620               add edx, dword ptr [esi + 0x20]
// 0089b17f  894634               mov dword ptr [esi + 0x34], eax
// 0089b182  895630               mov dword ptr [esi + 0x30], edx
// 0089b185  5e                   pop esi
// 0089b186  5d                   pop ebp
// 0089b187  5b                   pop ebx
// 0089b188  c20c00               ret 0xc
// 0089b18b  49                   dec ecx
// 0089b18c  8bd1                 mov edx, ecx
// 0089b18e  035620               add edx, dword ptr [esi + 0x20]
// 0089b191  5f                   pop edi
// 0089b192  894e34               mov dword ptr [esi + 0x34], ecx
// 0089b195  895630               mov dword ptr [esi + 0x30], edx
// 0089b198  5e                   pop esi
// 0089b199  5d                   pop ebp
// 0089b19a  5b                   pop ebx
// 0089b19b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?CalcScrollBarInfo@CXTPScrollBase@@MAEXPAUtagRECT@@PAUSCROLLBARPOSINFO@1@PAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
