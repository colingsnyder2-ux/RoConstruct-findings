// roc 2009-06 007340c0  unit: CXTPImageManagerResource::CBitmapDC  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007340c0
//
// 007340c0  51                   push ecx
// 007340c1  57                   push edi
// 007340c2  0fb77c240c           movzx edi, word ptr [esp + 0xc]
// 007340c7  85ff                 test edi, edi
// 007340c9  7507                 jne 0x7340d2
// 007340cb  33c0                 xor eax, eax
// 007340cd  5f                   pop edi
// 007340ce  59                   pop ecx
// 007340cf  c21000               ret 0x10
// 007340d2  56                   push esi
// 007340d3  68f1000000           push 0xf1
// 007340d8  57                   push edi
// 007340d9  e8d852feff           call 0x7193b6
// 007340de  68f1000000           push 0xf1
// 007340e3  8bf0                 mov esi, eax
// 007340e5  57                   push edi
// 007340e6  56                   push esi
// 007340e7  ff15c0e18900         call dword ptr [0x89e1c0]
// 007340ed  85c0                 test eax, eax
// 007340ef  7506                 jne 0x7340f7
// 007340f1  5e                   pop esi
// 007340f2  5f                   pop edi
// 007340f3  59                   pop ecx
// 007340f4  c21000               ret 0x10
// 007340f7  55                   push ebp
// 007340f8  50                   push eax
// 007340f9  56                   push esi
// 007340fa  ff15bce18900         call dword ptr [0x89e1bc]
// 00734100  8be8                 mov ebp, eax
// 00734102  896c240c             mov dword ptr [esp + 0xc], ebp
// 00734106  85ed                 test ebp, ebp
// 00734108  740d                 je 0x734117
// 0073410a  55                   push ebp
// 0073410b  ff1550e28900         call dword ptr [0x89e250]
// 00734111  8bf0                 mov esi, eax
// 00734113  85f6                 test esi, esi
// 00734115  7509                 jne 0x734120
// 00734117  5d                   pop ebp
// 00734118  5e                   pop esi
// 00734119  33c0                 xor eax, eax
// 0073411b  5f                   pop edi
// 0073411c  59                   pop ecx
// 0073411d  c21000               ret 0x10
// 00734120  0fb74606             movzx eax, word ptr [esi + 6]
// 00734124  33c9                 xor ecx, ecx
// 00734126  ba04000000           mov edx, 4
// 0073412b  f7e2                 mul edx
// 0073412d  0f90c1               seto cl
// 00734130  53                   push ebx
// 00734131  f7d9                 neg ecx
// 00734133  0bc8                 or ecx, eax
// 00734135  51                   push ecx
// 00734136  e8df4bfeff           call 0x718d1a
// 0073413b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0073413f  8b542424             mov edx, dword ptr [esp + 0x24]
// 00734143  8903                 mov dword ptr [ebx], eax
// 00734145  33c0                 xor eax, eax
// 00734147  83c404               add esp, 4
// 0073414a  c70200000000         mov dword ptr [edx], 0
// 00734150  33ff                 xor edi, edi
// 00734152  663b4606             cmp ax, word ptr [esi + 6]
// 00734156  7332                 jae 0x73418a
// 00734158  8bc6                 mov eax, esi
// 0073415a  e811630000           call 0x73a470
// 0073415f  89442418             mov dword ptr [esp + 0x18], eax
// 00734163  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00734167  0fb70c79             movzx ecx, word ptr [ecx + edi*2]
// 0073416b  6685c9               test cx, cx
// 0073416e  7411                 je 0x734181
// 00734170  8b2b                 mov ebp, dword ptr [ebx]
// 00734172  0fb7c1               movzx eax, cx
// 00734175  8b0a                 mov ecx, dword ptr [edx]
// 00734177  89448d00             mov dword ptr [ebp + ecx*4], eax
// 0073417b  ff02                 inc dword ptr [edx]
// 0073417d  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00734181  0fb74606             movzx eax, word ptr [esi + 6]
// 00734185  47                   inc edi
// 00734186  3bf8                 cmp edi, eax
// 00734188  7cd9                 jl 0x734163
// 0073418a  0fb74602             movzx eax, word ptr [esi + 2]
// 0073418e  0fb74e04             movzx ecx, word ptr [esi + 4]
// 00734192  8b542424             mov edx, dword ptr [esp + 0x24]
// 00734196  55                   push ebp
// 00734197  8902                 mov dword ptr [edx], eax
// 00734199  894a04               mov dword ptr [edx + 4], ecx
// 0073419c  ff154ce28900         call dword ptr [0x89e24c]
// 007341a2  5b                   pop ebx
// 007341a3  5d                   pop ebp
// 007341a4  5e                   pop esi
// 007341a5  b801000000           mov eax, 1
// 007341aa  5f                   pop edi
// 007341ab  59                   pop ecx
// 007341ac  c21000               ret 0x10
// copied from an identical function in another client (function ?LoadToolbar@CXTPImageManager@@ABEHIAAPAIAAHAAVCSize@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source\Common\XTPImageManager.cpp