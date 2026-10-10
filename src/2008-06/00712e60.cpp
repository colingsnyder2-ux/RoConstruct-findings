// roc 2008-06 00712e60  unit: CXTPPropertyGridItemConstraints  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00712e60
//
// 00712e60  53                   push ebx
// 00712e61  55                   push ebp
// 00712e62  56                   push esi
// 00712e63  8bf1                 mov esi, ecx
// 00712e65  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00712e6b  33db                 xor ebx, ebx
// 00712e6d  57                   push edi
// 00712e6e  3bc3                 cmp eax, ebx
// 00712e70  740e                 je 0x712e80
// 00712e72  39b0e0000000         cmp dword ptr [eax + 0xe0], esi
// 00712e78  7506                 jne 0x712e80
// 00712e7a  8998e0000000         mov dword ptr [eax + 0xe0], ebx
// 00712e80  8baebc000000         mov ebp, dword ptr [esi + 0xbc]
// 00712e86  3beb                 cmp ebp, ebx
// 00712e88  7442                 je 0x712ecc
// 00712e8a  8bbd58010000         mov edi, dword ptr [ebp + 0x158]
// 00712e90  3bfb                 cmp edi, ebx
// 00712e92  7438                 je 0x712ecc
// 00712e94  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 00712e9a  3bd3                 cmp edx, ebx
// 00712e9c  742e                 je 0x712ecc
// 00712e9e  33c0                 xor eax, eax
// 00712ea0  395a28               cmp dword ptr [edx + 0x28], ebx
// 00712ea3  7e27                 jle 0x712ecc
// 00712ea5  3bc3                 cmp eax, ebx
// 00712ea7  7c0d                 jl 0x712eb6
// 00712ea9  3b4228               cmp eax, dword ptr [edx + 0x28]
// 00712eac  7d08                 jge 0x712eb6
// 00712eae  8b4a24               mov ecx, dword ptr [edx + 0x24]
// 00712eb1  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00712eb4  eb02                 jmp 0x712eb8
// 00712eb6  33c9                 xor ecx, ecx
// 00712eb8  3bcf                 cmp ecx, edi
// 00712eba  740a                 je 0x712ec6
// 00712ebc  40                   inc eax
// 00712ebd  8bca                 mov ecx, edx
// 00712ebf  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 00712ec2  7ce1                 jl 0x712ea5
// 00712ec4  eb06                 jmp 0x712ecc
// 00712ec6  899d58010000         mov dword ptr [ebp + 0x158], ebx
// 00712ecc  399ebc000000         cmp dword ptr [esi + 0xbc], ebx
// 00712ed2  745d                 je 0x712f31
// 00712ed4  8b16                 mov edx, dword ptr [esi]
// 00712ed6  8b82d4000000         mov eax, dword ptr [edx + 0xd4]
// 00712edc  8bce                 mov ecx, esi
// 00712ede  ffd0                 call eax
// 00712ee0  397054               cmp dword ptr [eax + 0x54], esi
// 00712ee3  7518                 jne 0x712efd
// 00712ee5  8b16                 mov edx, dword ptr [esi]
// 00712ee7  8b82d4000000         mov eax, dword ptr [edx + 0xd4]
// 00712eed  8bce                 mov ecx, esi
// 00712eef  ffd0                 call eax
// 00712ef1  8b10                 mov edx, dword ptr [eax]
// 00712ef3  8bc8                 mov ecx, eax
// 00712ef5  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 00712efb  ffd0                 call eax
// 00712efd  399ebc000000         cmp dword ptr [esi + 0xbc], ebx
// 00712f03  742c                 je 0x712f31
// 00712f05  8b16                 mov edx, dword ptr [esi]
// 00712f07  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00712f0d  8bce                 mov ecx, esi
// 00712f0f  ffd0                 call eax
// 00712f11  39b0a0000000         cmp dword ptr [eax + 0xa0], esi
// 00712f17  7518                 jne 0x712f31
// 00712f19  8b16                 mov edx, dword ptr [esi]
// 00712f1b  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00712f21  8bce                 mov ecx, esi
// 00712f23  ffd0                 call eax
// 00712f25  8b10                 mov edx, dword ptr [eax]
// 00712f27  8bc8                 mov ecx, eax
// 00712f29  8b826c010000         mov eax, dword ptr [edx + 0x16c]
// 00712f2f  ffd0                 call eax
// 00712f31  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00712f37  3bcb                 cmp ecx, ebx
// 00712f39  741a                 je 0x712f55
// 00712f3b  e8b0fcffff           call 0x712bf0
// 00712f40  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00712f46  3bcb                 cmp ecx, ebx
// 00712f48  740b                 je 0x712f55
// 00712f4a  e895dcf8ff           call 0x6a0be4
// 00712f4f  899ec0000000         mov dword ptr [esi + 0xc0], ebx
// 00712f55  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00712f5b  3bc3                 cmp eax, ebx
// 00712f5d  7418                 je 0x712f77
// 00712f5f  895838               mov dword ptr [eax + 0x38], ebx
// 00712f62  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00712f68  3bcb                 cmp ecx, ebx
// 00712f6a  740b                 je 0x712f77
// 00712f6c  e873dcf8ff           call 0x6a0be4
// 00712f71  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00712f77  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00712f7d  3bcb                 cmp ecx, ebx
// 00712f7f  740b                 je 0x712f8c
// 00712f81  e85edcf8ff           call 0x6a0be4
// 00712f86  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 00712f8c  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00712f92  3bcb                 cmp ecx, ebx
// 00712f94  740b                 je 0x712fa1
// 00712f96  e849dcf8ff           call 0x6a0be4
// 00712f9b  899ed0000000         mov dword ptr [esi + 0xd0], ebx
// 00712fa1  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00712fa7  3bcb                 cmp ecx, ebx
// 00712fa9  740b                 je 0x712fb6
// 00712fab  e834dcf8ff           call 0x6a0be4
// 00712fb0  899ed4000000         mov dword ptr [esi + 0xd4], ebx
// 00712fb6  8bbed8000000         mov edi, dword ptr [esi + 0xd8]
// 00712fbc  3bfb                 cmp edi, ebx
// 00712fbe  7416                 je 0x712fd6
// 00712fc0  8bcf                 mov ecx, edi
// 00712fc2  e8d91d0600           call 0x774da0
// 00712fc7  57                   push edi
// 00712fc8  e8add6f8ff           call 0x6a067a
// 00712fcd  83c404               add esp, 4
// 00712fd0  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 00712fd6  5f                   pop edi
// 00712fd7  899ebc000000         mov dword ptr [esi + 0xbc], ebx
// 00712fdd  5e                   pop esi
// 00712fde  5d                   pop ebp
// 00712fdf  5b                   pop ebx
// 00712fe0  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Clear@CXTPPropertyGridItem@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp
