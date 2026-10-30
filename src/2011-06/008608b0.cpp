// roc 2011-06 008608b0  unit: CXTPPropExchange  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008608b0
//
// 008608b0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008608b4  56                   push esi
// 008608b5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008608b9  3bf2                 cmp esi, edx
// 008608bb  7509                 jne 0x8608c6
// 008608bd  b801000000           mov eax, 1
// 008608c2  5e                   pop esi
// 008608c3  c20c00               ret 0xc
// 008608c6  85f6                 test esi, esi
// 008608c8  0f842c010000         je 0x8609fa
// 008608ce  85d2                 test edx, edx
// 008608d0  0f8424010000         je 0x8609fa
// 008608d6  53                   push ebx
// 008608d7  57                   push edi
// 008608d8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008608dc  0fb7df               movzx ebx, di
// 008608df  83c3fe               add ebx, -2
// 008608e2  33c0                 xor eax, eax
// 008608e4  83fb63               cmp ebx, 0x63
// 008608e7  0f8707010000         ja 0x8609f4
// 008608ed  0fb69b180a8600       movzx ebx, byte ptr [ebx + 0x860a18]
// 008608f4  ff249d000a8600       jmp dword ptr [ebx*4 + 0x860a00]
// 008608fb  8b06                 mov eax, dword ptr [esi]
// 008608fd  8bca                 mov ecx, edx
// 008608ff  90                   nop 
// 00860900  668b10               mov dx, word ptr [eax]
// 00860903  663b11               cmp dx, word ptr [ecx]
// 00860906  752b                 jne 0x860933
// 00860908  6685d2               test dx, dx
// 0086090b  7415                 je 0x860922
// 0086090d  668b5002             mov dx, word ptr [eax + 2]
// 00860911  663b5102             cmp dx, word ptr [ecx + 2]
// 00860915  751c                 jne 0x860933
// 00860917  83c004               add eax, 4
// 0086091a  83c104               add ecx, 4
// 0086091d  6685d2               test dx, dx
// 00860920  75de                 jne 0x860900
// 00860922  33c0                 xor eax, eax
// 00860924  33c9                 xor ecx, ecx
// 00860926  85c0                 test eax, eax
// 00860928  0f94c1               sete cl
// 0086092b  5f                   pop edi
// 0086092c  5b                   pop ebx
// 0086092d  5e                   pop esi
// 0086092e  8bc1                 mov eax, ecx
// 00860930  c20c00               ret 0xc
// 00860933  1bc0                 sbb eax, eax
// 00860935  83d8ff               sbb eax, -1
// 00860938  33c9                 xor ecx, ecx
// 0086093a  85c0                 test eax, eax
// 0086093c  0f94c1               sete cl
// 0086093f  5f                   pop edi
// 00860940  5b                   pop ebx
// 00860941  5e                   pop esi
// 00860942  8bc1                 mov eax, ecx
// 00860944  c20c00               ret 0xc
// 00860947  52                   push edx
// 00860948  8bce                 mov ecx, esi
// 0086094a  ff15cc2da400         call dword ptr [0xa42dcc]
// 00860950  f7d8                 neg eax
// 00860952  5f                   pop edi
// 00860953  1bc0                 sbb eax, eax
// 00860955  5b                   pop ebx
// 00860956  40                   inc eax
// 00860957  5e                   pop esi
// 00860958  c20c00               ret 0xc
// 0086095b  57                   push edi
// 0086095c  e89fecffff           call 0x85f600
// 00860961  83f804               cmp eax, 4
// 00860964  7214                 jb 0x86097a
// 00860966  8b0e                 mov ecx, dword ptr [esi]
// 00860968  3b0a                 cmp ecx, dword ptr [edx]
// 0086096a  7512                 jne 0x86097e
// 0086096c  83e804               sub eax, 4
// 0086096f  83c204               add edx, 4
// 00860972  83c604               add esi, 4
// 00860975  83f804               cmp eax, 4
// 00860978  73ec                 jae 0x860966
// 0086097a  85c0                 test eax, eax
// 0086097c  744e                 je 0x8609cc
// 0086097e  0fb60e               movzx ecx, byte ptr [esi]
// 00860981  0fb63a               movzx edi, byte ptr [edx]
// 00860984  2bcf                 sub ecx, edi
// 00860986  7531                 jne 0x8609b9
// 00860988  83f801               cmp eax, 1
// 0086098b  763f                 jbe 0x8609cc
// 0086098d  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00860991  0fb67a01             movzx edi, byte ptr [edx + 1]
// 00860995  2bcf                 sub ecx, edi
// 00860997  7520                 jne 0x8609b9
// 00860999  83f802               cmp eax, 2
// 0086099c  762e                 jbe 0x8609cc
// 0086099e  0fb64e02             movzx ecx, byte ptr [esi + 2]
// 008609a2  0fb67a02             movzx edi, byte ptr [edx + 2]
// 008609a6  2bcf                 sub ecx, edi
// 008609a8  750f                 jne 0x8609b9
// 008609aa  83f803               cmp eax, 3
// 008609ad  761d                 jbe 0x8609cc
// 008609af  0fb64e03             movzx ecx, byte ptr [esi + 3]
// 008609b3  0fb65203             movzx edx, byte ptr [edx + 3]
// 008609b7  2bca                 sub ecx, edx
// 008609b9  c1f91f               sar ecx, 0x1f
// 008609bc  5f                   pop edi
// 008609bd  83c901               or ecx, 1
// 008609c0  33c0                 xor eax, eax
// 008609c2  85c9                 test ecx, ecx
// 008609c4  5b                   pop ebx
// 008609c5  0f94c0               sete al
// 008609c8  5e                   pop esi
// 008609c9  c20c00               ret 0xc
// 008609cc  5f                   pop edi
// 008609cd  33c9                 xor ecx, ecx
// 008609cf  33c0                 xor eax, eax
// 008609d1  85c9                 test ecx, ecx
// 008609d3  5b                   pop ebx
// 008609d4  0f94c0               sete al
// 008609d7  5e                   pop esi
// 008609d8  c20c00               ret 0xc
// 008609db  52                   push edx
// 008609dc  8bce                 mov ecx, esi
// 008609de  e8b9bf1600           call 0x9cc99c
// 008609e3  5f                   pop edi
// 008609e4  5b                   pop ebx
// 008609e5  5e                   pop esi
// 008609e6  c20c00               ret 0xc
// 008609e9  52                   push edx
// 008609ea  8bce                 mov ecx, esi
// 008609ec  e8af0afeff           call 0x8414a0
// 008609f1  0fb6c0               movzx eax, al
// 008609f4  5f                   pop edi
// 008609f5  5b                   pop ebx
// 008609f6  5e                   pop esi
// 008609f7  c20c00               ret 0xc
// 008609fa  33c0                 xor eax, eax
// 008609fc  5e                   pop esi
// 008609fd  c20c00               ret 0xc
// 00860a00  5b                   pop ebx
// 00860a01  098600e90986         or dword ptr [esi - 0x79f61700], eax
// 00860a07  00fb                 add bl, bh
// 00860a09  088600db0986         or byte ptr [esi - 0x79f62500], al
// 00860a0f  004709               add byte ptr [edi + 9], al
// 00860a12  8600                 xchg byte ptr [eax], al
// 00860a14  f4                   hlt 
// 00860a15  098600000000         or dword ptr [esi], eax
// 00860a1b  0000                 add byte ptr [eax], al
// 00860a1d  0102                 add dword ptr [edx], eax
// 00860a1f  0505000305           add eax, 0x5030005
// 00860a24  0505050005           add eax, 0x5000505
// 00860a29  0505050505           add eax, 0x5050505
// 00860a2e  0505050505           add eax, 0x5050505
// 00860a33  0504050505           add eax, 0x5050504
// 00860a38  0505050505           add eax, 0x5050505
// 00860a3d  0505050505           add eax, 0x5050505
// 00860a42  0505050505           add eax, 0x5050505
// 00860a47  0505050505           add eax, 0x5050505
// 00860a4c  0505050505           add eax, 0x5050505
// 00860a51  0505050505           add eax, 0x5050505
// 00860a56  0505050505           add eax, 0x5050505
// 00860a5b  0505050505           add eax, 0x5050505
// 00860a60  0505050505           add eax, 0x5050505
// 00860a65  0505050505           add eax, 0x5050505
// 00860a6a  0505050505           add eax, 0x5050505
// 00860a6f  0505050505           add eax, 0x5050505
// 00860a74  0505050505           add eax, 0x5050505
// copied from an identical function in another client (function ?IsSamePropValue@CXTPPropExchange@@IAEHGPBX0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp