// roc 2008-06 007a20f0  unit: CXTCaptionButtonTheme  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a20f0
//
// 007a20f0  83ec20               sub esp, 0x20
// 007a20f3  53                   push ebx
// 007a20f4  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 007a20f8  8b03                 mov eax, dword ptr [ebx]
// 007a20fa  8b5308               mov edx, dword ptr [ebx + 8]
// 007a20fd  55                   push ebp
// 007a20fe  56                   push esi
// 007a20ff  57                   push edi
// 007a2100  8be9                 mov ebp, ecx
// 007a2102  8b4b04               mov ecx, dword ptr [ebx + 4]
// 007a2105  6a00                 push 0
// 007a2107  894c2428             mov dword ptr [esp + 0x28], ecx
// 007a210b  89442424             mov dword ptr [esp + 0x24], eax
// 007a210f  8b430c               mov eax, dword ptr [ebx + 0xc]
// 007a2112  6afe                 push -2
// 007a2114  8d4c2428             lea ecx, [esp + 0x28]
// 007a2118  51                   push ecx
// 007a2119  89542434             mov dword ptr [esp + 0x34], edx
// 007a211d  89442438             mov dword ptr [esp + 0x38], eax
// 007a2121  ff15282d8000         call dword ptr [0x802d28]
// 007a2127  8b742434             mov esi, dword ptr [esp + 0x34]
// 007a212b  8b542420             mov edx, dword ptr [esp + 0x20]
// 007a212f  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a2133  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 007a2137  8916                 mov dword ptr [esi], edx
// 007a2139  894604               mov dword ptr [esi + 4], eax
// 007a213c  837f7800             cmp dword ptr [edi + 0x78], 0
// 007a2140  7422                 je 0x7a2164
// 007a2142  8d4c2410             lea ecx, [esp + 0x10]
// 007a2146  51                   push ecx
// 007a2147  8bcf                 mov ecx, edi
// 007a2149  e8220bffff           call 0x792c70
// 007a214e  8b10                 mov edx, dword ptr [eax]
// 007a2150  8916                 mov dword ptr [esi], edx
// 007a2152  8b4004               mov eax, dword ptr [eax + 4]
// 007a2155  5f                   pop edi
// 007a2156  894604               mov dword ptr [esi + 4], eax
// 007a2159  8bc6                 mov eax, esi
// 007a215b  5e                   pop esi
// 007a215c  5d                   pop ebp
// 007a215d  5b                   pop ebx
// 007a215e  83c420               add esp, 0x20
// 007a2161  c21400               ret 0x14
// 007a2164  8b442440             mov eax, dword ptr [esp + 0x40]
// 007a2168  8b4804               mov ecx, dword ptr [eax + 4]
// 007a216b  8b00                 mov eax, dword ptr [eax]
// 007a216d  8b5500               mov edx, dword ptr [ebp]
// 007a2170  8b5240               mov edx, dword ptr [edx + 0x40]
// 007a2173  57                   push edi
// 007a2174  51                   push ecx
// 007a2175  50                   push eax
// 007a2176  56                   push esi
// 007a2177  8bcd                 mov ecx, ebp
// 007a2179  ffd2                 call edx
// 007a217b  8b476c               mov eax, dword ptr [edi + 0x6c]
// 007a217e  8906                 mov dword ptr [esi], eax
// 007a2180  8b17                 mov edx, dword ptr [edi]
// 007a2182  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 007a2188  8bcf                 mov ecx, edi
// 007a218a  ffd0                 call eax
// 007a218c  a804                 test al, 4
// 007a218e  7425                 je 0x7a21b5
// 007a2190  8b6f70               mov ebp, dword ptr [edi + 0x70]
// 007a2193  8d4c2410             lea ecx, [esp + 0x10]
// 007a2197  51                   push ecx
// 007a2198  8bcf                 mov ecx, edi
// 007a219a  e8510affff           call 0x792bf0
// 007a219f  8b4004               mov eax, dword ptr [eax + 4]
// 007a21a2  99                   cdq 
// 007a21a3  2bc2                 sub eax, edx
// 007a21a5  8bc8                 mov ecx, eax
// 007a21a7  8bc5                 mov eax, ebp
// 007a21a9  99                   cdq 
// 007a21aa  2bc2                 sub eax, edx
// 007a21ac  d1f9                 sar ecx, 1
// 007a21ae  d1f8                 sar eax, 1
// 007a21b0  03c8                 add ecx, eax
// 007a21b2  014e04               add dword ptr [esi + 4], ecx
// 007a21b5  8bcf                 mov ecx, edi
// 007a21b7  e84e9e0100           call 0x7bc00a
// 007a21bc  2500030000           and eax, 0x300
// 007a21c1  3d00010000           cmp eax, 0x100
// 007a21c6  7466                 je 0x7a222e
// 007a21c8  3d00020000           cmp eax, 0x200
// 007a21cd  7445                 je 0x7a2214
// 007a21cf  8b17                 mov edx, dword ptr [edi]
// 007a21d1  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 007a21d7  8bcf                 mov ecx, edi
// 007a21d9  ffd0                 call eax
// 007a21db  a804                 test al, 4
// 007a21dd  7510                 jne 0x7a21ef
// 007a21df  8d4c2410             lea ecx, [esp + 0x10]
// 007a21e3  51                   push ecx
// 007a21e4  8bcf                 mov ecx, edi
// 007a21e6  e8050affff           call 0x792bf0
// 007a21eb  8b10                 mov edx, dword ptr [eax]
// 007a21ed  0116                 add dword ptr [esi], edx
// 007a21ef  8b4308               mov eax, dword ptr [ebx + 8]
// 007a21f2  2b476c               sub eax, dword ptr [edi + 0x6c]
// 007a21f5  8b542440             mov edx, dword ptr [esp + 0x40]
// 007a21f9  2b02                 sub eax, dword ptr [edx]
// 007a21fb  8b0e                 mov ecx, dword ptr [esi]
// 007a21fd  2bc1                 sub eax, ecx
// 007a21ff  99                   cdq 
// 007a2200  2bc2                 sub eax, edx
// 007a2202  d1f8                 sar eax, 1
// 007a2204  03c1                 add eax, ecx
// 007a2206  5f                   pop edi
// 007a2207  8906                 mov dword ptr [esi], eax
// 007a2209  8bc6                 mov eax, esi
// 007a220b  5e                   pop esi
// 007a220c  5d                   pop ebp
// 007a220d  5b                   pop ebx
// 007a220e  83c420               add esp, 0x20
// 007a2211  c21400               ret 0x14
// 007a2214  8b4308               mov eax, dword ptr [ebx + 8]
// 007a2217  2b476c               sub eax, dword ptr [edi + 0x6c]
// 007a221a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007a221e  2b01                 sub eax, dword ptr [ecx]
// 007a2220  5f                   pop edi
// 007a2221  8906                 mov dword ptr [esi], eax
// 007a2223  8bc6                 mov eax, esi
// 007a2225  5e                   pop esi
// 007a2226  5d                   pop ebp
// 007a2227  5b                   pop ebx
// 007a2228  83c420               add esp, 0x20
// 007a222b  c21400               ret 0x14
// 007a222e  8b17                 mov edx, dword ptr [edi]
// 007a2230  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 007a2236  8bcf                 mov ecx, edi
// 007a2238  ffd0                 call eax
// 007a223a  a804                 test al, 4
// 007a223c  7515                 jne 0x7a2253
// 007a223e  8b5f70               mov ebx, dword ptr [edi + 0x70]
// 007a2241  8d4c2418             lea ecx, [esp + 0x18]
// 007a2245  51                   push ecx
// 007a2246  8bcf                 mov ecx, edi
// 007a2248  e8a309ffff           call 0x792bf0
// 007a224d  8b10                 mov edx, dword ptr [eax]
// 007a224f  03d3                 add edx, ebx
// 007a2251  0116                 add dword ptr [esi], edx
// 007a2253  5f                   pop edi
// 007a2254  8bc6                 mov eax, esi
// 007a2256  5e                   pop esi
// 007a2257  5d                   pop ebp
// 007a2258  5b                   pop ebx
// 007a2259  83c420               add esp, 0x20
// 007a225c  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\Controls\XTButtonTheme.cpp (function ?GetTextPosition@CXTButtonTheme@@MAE?AVCPoint@@IAAVCRect@@AAVCSize@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTButtonTheme.cpp
