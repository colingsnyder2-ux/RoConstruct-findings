// from server: 100% by auto
// roc 2008-06 0079e100  unit: CXTPScrollBase  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079e100
//
// 0079e100  8b442404             mov eax, dword ptr [esp + 4]
// 0079e104  8b10                 mov edx, dword ptr [eax]
// 0079e106  53                   push ebx
// 0079e107  55                   push ebp
// 0079e108  56                   push esi
// 0079e109  8b742414             mov esi, dword ptr [esp + 0x14]
// 0079e10d  837e5800             cmp dword ptr [esi + 0x58], 0
// 0079e111  895644               mov dword ptr [esi + 0x44], edx
// 0079e114  8b5004               mov edx, dword ptr [eax + 4]
// 0079e117  895648               mov dword ptr [esi + 0x48], edx
// 0079e11a  8b5008               mov edx, dword ptr [eax + 8]
// 0079e11d  89564c               mov dword ptr [esi + 0x4c], edx
// 0079e120  8b500c               mov edx, dword ptr [eax + 0xc]
// 0079e123  57                   push edi
// 0079e124  895650               mov dword ptr [esi + 0x50], edx
// 0079e127  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0079e12e  7423                 je 0x79e153
// 0079e130  8b5004               mov edx, dword ptr [eax + 4]
// 0079e133  895610               mov dword ptr [esi + 0x10], edx
// 0079e136  8b500c               mov edx, dword ptr [eax + 0xc]
// 0079e139  895614               mov dword ptr [esi + 0x14], edx
// 0079e13c  8b10                 mov edx, dword ptr [eax]
// 0079e13e  895618               mov dword ptr [esi + 0x18], edx
// 0079e141  8b4008               mov eax, dword ptr [eax + 8]
// 0079e144  89461c               mov dword ptr [esi + 0x1c], eax
// 0079e147  8b11                 mov edx, dword ptr [ecx]
// 0079e149  8b4224               mov eax, dword ptr [edx + 0x24]
// 0079e14c  ffd0                 call eax
// 0079e14e  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0079e151  eb21                 jmp 0x79e174
// 0079e153  8b10                 mov edx, dword ptr [eax]
// 0079e155  895610               mov dword ptr [esi + 0x10], edx
// 0079e158  8b5008               mov edx, dword ptr [eax + 8]
// 0079e15b  895614               mov dword ptr [esi + 0x14], edx
// 0079e15e  8b5004               mov edx, dword ptr [eax + 4]
// 0079e161  895618               mov dword ptr [esi + 0x18], edx
// 0079e164  8b400c               mov eax, dword ptr [eax + 0xc]
// 0079e167  89461c               mov dword ptr [esi + 0x1c], eax
// 0079e16a  8b11                 mov edx, dword ptr [ecx]
// 0079e16c  8b4224               mov eax, dword ptr [edx + 0x24]
// 0079e16f  ffd0                 call eax
// 0079e171  8b4804               mov ecx, dword ptr [eax + 4]
// 0079e174  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079e178  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 0079e17b  894e20               mov dword ptr [esi + 0x20], ecx
// 0079e17e  8b5014               mov edx, dword ptr [eax + 0x14]
// 0079e181  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0079e184  89560c               mov dword ptr [esi + 0xc], edx
// 0079e187  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0079e18a  894e08               mov dword ptr [esi + 8], ecx
// 0079e18d  8b5008               mov edx, dword ptr [eax + 8]
// 0079e190  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0079e193  8916                 mov dword ptr [esi], edx
// 0079e195  8b400c               mov eax, dword ptr [eax + 0xc]
// 0079e198  894604               mov dword ptr [esi + 4], eax
// 0079e19b  2bc2                 sub eax, edx
// 0079e19d  40                   inc eax
// 0079e19e  8be8                 mov ebp, eax
// 0079e1a0  8bc3                 mov eax, ebx
// 0079e1a2  2bc1                 sub eax, ecx
// 0079e1a4  99                   cdq 
// 0079e1a5  2bc2                 sub eax, edx
// 0079e1a7  d1f8                 sar eax, 1
// 0079e1a9  3bc7                 cmp eax, edi
// 0079e1ab  7d02                 jge 0x79e1af
// 0079e1ad  8bf8                 mov edi, eax
// 0079e1af  8b5608               mov edx, dword ptr [esi + 8]
// 0079e1b2  8bc3                 mov eax, ebx
// 0079e1b4  8b1d28228000         mov ebx, dword ptr [0x802228]
// 0079e1ba  03cf                 add ecx, edi
// 0079e1bc  2bc7                 sub eax, edi
// 0079e1be  894e24               mov dword ptr [esi + 0x24], ecx
// 0079e1c1  894628               mov dword ptr [esi + 0x28], eax
// 0079e1c4  85d2                 test edx, edx
// 0079e1c6  741e                 je 0x79e1e6
// 0079e1c8  85ed                 test ebp, ebp
// 0079e1ca  741a                 je 0x79e1e6
// 0079e1cc  55                   push ebp
// 0079e1cd  52                   push edx
// 0079e1ce  2bc1                 sub eax, ecx
// 0079e1d0  50                   push eax
// 0079e1d1  ffd3                 call ebx
// 0079e1d3  8bc8                 mov ecx, eax
// 0079e1d5  8b4620               mov eax, dword ptr [esi + 0x20]
// 0079e1d8  99                   cdq 
// 0079e1d9  2bc2                 sub eax, edx
// 0079e1db  d1f8                 sar eax, 1
// 0079e1dd  3bc1                 cmp eax, ecx
// 0079e1df  7f02                 jg 0x79e1e3
// 0079e1e1  8bc1                 mov eax, ecx
// 0079e1e3  894620               mov dword ptr [esi + 0x20], eax
// 0079e1e6  8b4610               mov eax, dword ptr [esi + 0x10]
// 0079e1e9  8b5608               mov edx, dword ptr [esi + 8]
// 0079e1ec  8d0c38               lea ecx, [eax + edi]
// 0079e1ef  8b4614               mov eax, dword ptr [esi + 0x14]
// 0079e1f2  2b4620               sub eax, dword ptr [esi + 0x20]
// 0079e1f5  894e40               mov dword ptr [esi + 0x40], ecx
// 0079e1f8  2bc1                 sub eax, ecx
// 0079e1fa  2bc7                 sub eax, edi
// 0079e1fc  89463c               mov dword ptr [esi + 0x3c], eax
// 0079e1ff  85d2                 test edx, edx
// 0079e201  7505                 jne 0x79e208
// 0079e203  ba01000000           mov edx, 1
// 0079e208  2bea                 sub ebp, edx
// 0079e20a  741f                 je 0x79e22b
// 0079e20c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0079e20f  2b0e                 sub ecx, dword ptr [esi]
// 0079e211  55                   push ebp
// 0079e212  50                   push eax
// 0079e213  51                   push ecx
// 0079e214  ffd3                 call ebx
// 0079e216  034640               add eax, dword ptr [esi + 0x40]
// 0079e219  5f                   pop edi
// 0079e21a  8bd0                 mov edx, eax
// 0079e21c  035620               add edx, dword ptr [esi + 0x20]
// 0079e21f  894634               mov dword ptr [esi + 0x34], eax
// 0079e222  895630               mov dword ptr [esi + 0x30], edx
// 0079e225  5e                   pop esi
// 0079e226  5d                   pop ebp
// 0079e227  5b                   pop ebx
// 0079e228  c20c00               ret 0xc
// 0079e22b  49                   dec ecx
// 0079e22c  8bd1                 mov edx, ecx
// 0079e22e  035620               add edx, dword ptr [esi + 0x20]
// 0079e231  5f                   pop edi
// 0079e232  894e34               mov dword ptr [esi + 0x34], ecx
// 0079e235  895630               mov dword ptr [esi + 0x30], edx
// 0079e238  5e                   pop esi
// 0079e239  5d                   pop ebp
// 0079e23a  5b                   pop ebx
// 0079e23b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?CalcScrollBarInfo@CXTPScrollBase@@MAEXPAUtagRECT@@PAUSCROLLBARPOSINFO@1@PAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
