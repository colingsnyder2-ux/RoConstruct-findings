// roc 2009-12 008eac00  unit: CXTPScrollBase  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eac00
//
// 008eac00  8b442404             mov eax, dword ptr [esp + 4]
// 008eac04  8b10                 mov edx, dword ptr [eax]
// 008eac06  53                   push ebx
// 008eac07  55                   push ebp
// 008eac08  56                   push esi
// 008eac09  8b742414             mov esi, dword ptr [esp + 0x14]
// 008eac0d  837e5800             cmp dword ptr [esi + 0x58], 0
// 008eac11  895644               mov dword ptr [esi + 0x44], edx
// 008eac14  8b5004               mov edx, dword ptr [eax + 4]
// 008eac17  895648               mov dword ptr [esi + 0x48], edx
// 008eac1a  8b5008               mov edx, dword ptr [eax + 8]
// 008eac1d  89564c               mov dword ptr [esi + 0x4c], edx
// 008eac20  8b500c               mov edx, dword ptr [eax + 0xc]
// 008eac23  57                   push edi
// 008eac24  895650               mov dword ptr [esi + 0x50], edx
// 008eac27  c7463800000000       mov dword ptr [esi + 0x38], 0
// 008eac2e  7423                 je 0x8eac53
// 008eac30  8b5004               mov edx, dword ptr [eax + 4]
// 008eac33  895610               mov dword ptr [esi + 0x10], edx
// 008eac36  8b500c               mov edx, dword ptr [eax + 0xc]
// 008eac39  895614               mov dword ptr [esi + 0x14], edx
// 008eac3c  8b10                 mov edx, dword ptr [eax]
// 008eac3e  895618               mov dword ptr [esi + 0x18], edx
// 008eac41  8b4008               mov eax, dword ptr [eax + 8]
// 008eac44  89461c               mov dword ptr [esi + 0x1c], eax
// 008eac47  8b11                 mov edx, dword ptr [ecx]
// 008eac49  8b4224               mov eax, dword ptr [edx + 0x24]
// 008eac4c  ffd0                 call eax
// 008eac4e  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008eac51  eb21                 jmp 0x8eac74
// 008eac53  8b10                 mov edx, dword ptr [eax]
// 008eac55  895610               mov dword ptr [esi + 0x10], edx
// 008eac58  8b5008               mov edx, dword ptr [eax + 8]
// 008eac5b  895614               mov dword ptr [esi + 0x14], edx
// 008eac5e  8b5004               mov edx, dword ptr [eax + 4]
// 008eac61  895618               mov dword ptr [esi + 0x18], edx
// 008eac64  8b400c               mov eax, dword ptr [eax + 0xc]
// 008eac67  89461c               mov dword ptr [esi + 0x1c], eax
// 008eac6a  8b11                 mov edx, dword ptr [ecx]
// 008eac6c  8b4224               mov eax, dword ptr [edx + 0x24]
// 008eac6f  ffd0                 call eax
// 008eac71  8b4804               mov ecx, dword ptr [eax + 4]
// 008eac74  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008eac78  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 008eac7b  894e20               mov dword ptr [esi + 0x20], ecx
// 008eac7e  8b5014               mov edx, dword ptr [eax + 0x14]
// 008eac81  8b7e20               mov edi, dword ptr [esi + 0x20]
// 008eac84  89560c               mov dword ptr [esi + 0xc], edx
// 008eac87  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008eac8a  894e08               mov dword ptr [esi + 8], ecx
// 008eac8d  8b5008               mov edx, dword ptr [eax + 8]
// 008eac90  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008eac93  8916                 mov dword ptr [esi], edx
// 008eac95  8b400c               mov eax, dword ptr [eax + 0xc]
// 008eac98  894604               mov dword ptr [esi + 4], eax
// 008eac9b  2bc2                 sub eax, edx
// 008eac9d  40                   inc eax
// 008eac9e  8be8                 mov ebp, eax
// 008eaca0  8bc3                 mov eax, ebx
// 008eaca2  2bc1                 sub eax, ecx
// 008eaca4  99                   cdq 
// 008eaca5  2bc2                 sub eax, edx
// 008eaca7  d1f8                 sar eax, 1
// 008eaca9  3bc7                 cmp eax, edi
// 008eacab  7d02                 jge 0x8eacaf
// 008eacad  8bf8                 mov edi, eax
// 008eacaf  8b5608               mov edx, dword ptr [esi + 8]
// 008eacb2  8bc3                 mov eax, ebx
// 008eacb4  8b1da0b29800         mov ebx, dword ptr [0x98b2a0]
// 008eacba  03cf                 add ecx, edi
// 008eacbc  2bc7                 sub eax, edi
// 008eacbe  894e24               mov dword ptr [esi + 0x24], ecx
// 008eacc1  894628               mov dword ptr [esi + 0x28], eax
// 008eacc4  85d2                 test edx, edx
// 008eacc6  741e                 je 0x8eace6
// 008eacc8  85ed                 test ebp, ebp
// 008eacca  741a                 je 0x8eace6
// 008eaccc  55                   push ebp
// 008eaccd  52                   push edx
// 008eacce  2bc1                 sub eax, ecx
// 008eacd0  50                   push eax
// 008eacd1  ffd3                 call ebx
// 008eacd3  8bc8                 mov ecx, eax
// 008eacd5  8b4620               mov eax, dword ptr [esi + 0x20]
// 008eacd8  99                   cdq 
// 008eacd9  2bc2                 sub eax, edx
// 008eacdb  d1f8                 sar eax, 1
// 008eacdd  3bc1                 cmp eax, ecx
// 008eacdf  7f02                 jg 0x8eace3
// 008eace1  8bc1                 mov eax, ecx
// 008eace3  894620               mov dword ptr [esi + 0x20], eax
// 008eace6  8b4610               mov eax, dword ptr [esi + 0x10]
// 008eace9  8b5608               mov edx, dword ptr [esi + 8]
// 008eacec  8d0c38               lea ecx, [eax + edi]
// 008eacef  8b4614               mov eax, dword ptr [esi + 0x14]
// 008eacf2  2b4620               sub eax, dword ptr [esi + 0x20]
// 008eacf5  894e40               mov dword ptr [esi + 0x40], ecx
// 008eacf8  2bc1                 sub eax, ecx
// 008eacfa  2bc7                 sub eax, edi
// 008eacfc  89463c               mov dword ptr [esi + 0x3c], eax
// 008eacff  85d2                 test edx, edx
// 008ead01  7505                 jne 0x8ead08
// 008ead03  ba01000000           mov edx, 1
// 008ead08  2bea                 sub ebp, edx
// 008ead0a  741f                 je 0x8ead2b
// 008ead0c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008ead0f  2b0e                 sub ecx, dword ptr [esi]
// 008ead11  55                   push ebp
// 008ead12  50                   push eax
// 008ead13  51                   push ecx
// 008ead14  ffd3                 call ebx
// 008ead16  034640               add eax, dword ptr [esi + 0x40]
// 008ead19  5f                   pop edi
// 008ead1a  8bd0                 mov edx, eax
// 008ead1c  035620               add edx, dword ptr [esi + 0x20]
// 008ead1f  894634               mov dword ptr [esi + 0x34], eax
// 008ead22  895630               mov dword ptr [esi + 0x30], edx
// 008ead25  5e                   pop esi
// 008ead26  5d                   pop ebp
// 008ead27  5b                   pop ebx
// 008ead28  c20c00               ret 0xc
// 008ead2b  49                   dec ecx
// 008ead2c  8bd1                 mov edx, ecx
// 008ead2e  035620               add edx, dword ptr [esi + 0x20]
// 008ead31  5f                   pop edi
// 008ead32  894e34               mov dword ptr [esi + 0x34], ecx
// 008ead35  895630               mov dword ptr [esi + 0x30], edx
// 008ead38  5e                   pop esi
// 008ead39  5d                   pop ebp
// 008ead3a  5b                   pop ebx
// 008ead3b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?CalcScrollBarInfo@CXTPScrollBase@@MAEXPAUtagRECT@@PAUSCROLLBARPOSINFO@1@PAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
