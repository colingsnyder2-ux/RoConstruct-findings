// roc 2009-12 00866640  unit: CXTPPropertyGridItemConstraints  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00866640
//
// 00866640  53                   push ebx
// 00866641  55                   push ebp
// 00866642  56                   push esi
// 00866643  8bf1                 mov esi, ecx
// 00866645  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0086664b  33db                 xor ebx, ebx
// 0086664d  57                   push edi
// 0086664e  3bc3                 cmp eax, ebx
// 00866650  740e                 je 0x866660
// 00866652  39b0e0000000         cmp dword ptr [eax + 0xe0], esi
// 00866658  7506                 jne 0x866660
// 0086665a  8998e0000000         mov dword ptr [eax + 0xe0], ebx
// 00866660  8baebc000000         mov ebp, dword ptr [esi + 0xbc]
// 00866666  3beb                 cmp ebp, ebx
// 00866668  7442                 je 0x8666ac
// 0086666a  8bbd58010000         mov edi, dword ptr [ebp + 0x158]
// 00866670  3bfb                 cmp edi, ebx
// 00866672  7438                 je 0x8666ac
// 00866674  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 0086667a  3bd3                 cmp edx, ebx
// 0086667c  742e                 je 0x8666ac
// 0086667e  33c0                 xor eax, eax
// 00866680  395a28               cmp dword ptr [edx + 0x28], ebx
// 00866683  7e27                 jle 0x8666ac
// 00866685  3bc3                 cmp eax, ebx
// 00866687  7c0d                 jl 0x866696
// 00866689  3b4228               cmp eax, dword ptr [edx + 0x28]
// 0086668c  7d08                 jge 0x866696
// 0086668e  8b4a24               mov ecx, dword ptr [edx + 0x24]
// 00866691  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00866694  eb02                 jmp 0x866698
// 00866696  33c9                 xor ecx, ecx
// 00866698  3bcf                 cmp ecx, edi
// 0086669a  740a                 je 0x8666a6
// 0086669c  40                   inc eax
// 0086669d  8bca                 mov ecx, edx
// 0086669f  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 008666a2  7ce1                 jl 0x866685
// 008666a4  eb06                 jmp 0x8666ac
// 008666a6  899d58010000         mov dword ptr [ebp + 0x158], ebx
// 008666ac  399ebc000000         cmp dword ptr [esi + 0xbc], ebx
// 008666b2  745d                 je 0x866711
// 008666b4  8b16                 mov edx, dword ptr [esi]
// 008666b6  8b82d4000000         mov eax, dword ptr [edx + 0xd4]
// 008666bc  8bce                 mov ecx, esi
// 008666be  ffd0                 call eax
// 008666c0  397054               cmp dword ptr [eax + 0x54], esi
// 008666c3  7518                 jne 0x8666dd
// 008666c5  8b16                 mov edx, dword ptr [esi]
// 008666c7  8b82d4000000         mov eax, dword ptr [edx + 0xd4]
// 008666cd  8bce                 mov ecx, esi
// 008666cf  ffd0                 call eax
// 008666d1  8b10                 mov edx, dword ptr [eax]
// 008666d3  8bc8                 mov ecx, eax
// 008666d5  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 008666db  ffd0                 call eax
// 008666dd  399ebc000000         cmp dword ptr [esi + 0xbc], ebx
// 008666e3  742c                 je 0x866711
// 008666e5  8b16                 mov edx, dword ptr [esi]
// 008666e7  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 008666ed  8bce                 mov ecx, esi
// 008666ef  ffd0                 call eax
// 008666f1  39b0a0000000         cmp dword ptr [eax + 0xa0], esi
// 008666f7  7518                 jne 0x866711
// 008666f9  8b16                 mov edx, dword ptr [esi]
// 008666fb  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00866701  8bce                 mov ecx, esi
// 00866703  ffd0                 call eax
// 00866705  8b10                 mov edx, dword ptr [eax]
// 00866707  8bc8                 mov ecx, eax
// 00866709  8b826c010000         mov eax, dword ptr [edx + 0x16c]
// 0086670f  ffd0                 call eax
// 00866711  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00866717  3bcb                 cmp ecx, ebx
// 00866719  741a                 je 0x866735
// 0086671b  e8b0fcffff           call 0x8663d0
// 00866720  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00866726  3bcb                 cmp ecx, ebx
// 00866728  740b                 je 0x866735
// 0086672a  e8add6f8ff           call 0x7f3ddc
// 0086672f  899ec0000000         mov dword ptr [esi + 0xc0], ebx
// 00866735  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0086673b  3bc3                 cmp eax, ebx
// 0086673d  7418                 je 0x866757
// 0086673f  895838               mov dword ptr [eax + 0x38], ebx
// 00866742  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00866748  3bcb                 cmp ecx, ebx
// 0086674a  740b                 je 0x866757
// 0086674c  e88bd6f8ff           call 0x7f3ddc
// 00866751  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00866757  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0086675d  3bcb                 cmp ecx, ebx
// 0086675f  740b                 je 0x86676c
// 00866761  e876d6f8ff           call 0x7f3ddc
// 00866766  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0086676c  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00866772  3bcb                 cmp ecx, ebx
// 00866774  740b                 je 0x866781
// 00866776  e861d6f8ff           call 0x7f3ddc
// 0086677b  899ed0000000         mov dword ptr [esi + 0xd0], ebx
// 00866781  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00866787  3bcb                 cmp ecx, ebx
// 00866789  740b                 je 0x866796
// 0086678b  e84cd6f8ff           call 0x7f3ddc
// 00866790  899ed4000000         mov dword ptr [esi + 0xd4], ebx
// 00866796  8bbed8000000         mov edi, dword ptr [esi + 0xd8]
// 0086679c  3bfb                 cmp edi, ebx
// 0086679e  7416                 je 0x8667b6
// 008667a0  8bcf                 mov ecx, edi
// 008667a2  e8c9180600           call 0x8c8070
// 008667a7  57                   push edi
// 008667a8  e8add0f8ff           call 0x7f385a
// 008667ad  83c404               add esp, 4
// 008667b0  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 008667b6  5f                   pop edi
// 008667b7  899ebc000000         mov dword ptr [esi + 0xbc], ebx
// 008667bd  5e                   pop esi
// 008667be  5d                   pop ebp
// 008667bf  5b                   pop ebx
// 008667c0  c3                   ret 
// copied from an identical function in another client (function ?Clear@CXTPPropertyGridItem@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp