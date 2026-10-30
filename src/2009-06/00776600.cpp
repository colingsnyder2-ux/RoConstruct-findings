// roc 2009-06 00776600  unit: CXTPPropExchange  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00776600
//
// 00776600  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00776604  56                   push esi
// 00776605  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00776609  3bf2                 cmp esi, edx
// 0077660b  7509                 jne 0x776616
// 0077660d  b801000000           mov eax, 1
// 00776612  5e                   pop esi
// 00776613  c20c00               ret 0xc
// 00776616  85f6                 test esi, esi
// 00776618  0f842c010000         je 0x77674a
// 0077661e  85d2                 test edx, edx
// 00776620  0f8424010000         je 0x77674a
// 00776626  53                   push ebx
// 00776627  57                   push edi
// 00776628  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0077662c  0fb7df               movzx ebx, di
// 0077662f  83c3fe               add ebx, -2
// 00776632  33c0                 xor eax, eax
// 00776634  83fb63               cmp ebx, 0x63
// 00776637  0f8707010000         ja 0x776744
// 0077663d  0fb69b68677700       movzx ebx, byte ptr [ebx + 0x776768]
// 00776644  ff249d50677700       jmp dword ptr [ebx*4 + 0x776750]
// 0077664b  8b06                 mov eax, dword ptr [esi]
// 0077664d  8bca                 mov ecx, edx
// 0077664f  90                   nop 
// 00776650  668b10               mov dx, word ptr [eax]
// 00776653  663b11               cmp dx, word ptr [ecx]
// 00776656  752b                 jne 0x776683
// 00776658  6685d2               test dx, dx
// 0077665b  7415                 je 0x776672
// 0077665d  668b5002             mov dx, word ptr [eax + 2]
// 00776661  663b5102             cmp dx, word ptr [ecx + 2]
// 00776665  751c                 jne 0x776683
// 00776667  83c004               add eax, 4
// 0077666a  83c104               add ecx, 4
// 0077666d  6685d2               test dx, dx
// 00776670  75de                 jne 0x776650
// 00776672  33c0                 xor eax, eax
// 00776674  33c9                 xor ecx, ecx
// 00776676  85c0                 test eax, eax
// 00776678  0f94c1               sete cl
// 0077667b  5f                   pop edi
// 0077667c  5b                   pop ebx
// 0077667d  5e                   pop esi
// 0077667e  8bc1                 mov eax, ecx
// 00776680  c20c00               ret 0xc
// 00776683  1bc0                 sbb eax, eax
// 00776685  83d8ff               sbb eax, -1
// 00776688  33c9                 xor ecx, ecx
// 0077668a  85c0                 test eax, eax
// 0077668c  0f94c1               sete cl
// 0077668f  5f                   pop edi
// 00776690  5b                   pop ebx
// 00776691  5e                   pop esi
// 00776692  8bc1                 mov eax, ecx
// 00776694  c20c00               ret 0xc
// 00776697  52                   push edx
// 00776698  8bce                 mov ecx, esi
// 0077669a  ff15d4fc8900         call dword ptr [0x89fcd4]
// 007766a0  f7d8                 neg eax
// 007766a2  5f                   pop edi
// 007766a3  1bc0                 sbb eax, eax
// 007766a5  5b                   pop ebx
// 007766a6  40                   inc eax
// 007766a7  5e                   pop esi
// 007766a8  c20c00               ret 0xc
// 007766ab  57                   push edi
// 007766ac  e8afecffff           call 0x775360
// 007766b1  83f804               cmp eax, 4
// 007766b4  7214                 jb 0x7766ca
// 007766b6  8b0e                 mov ecx, dword ptr [esi]
// 007766b8  3b0a                 cmp ecx, dword ptr [edx]
// 007766ba  7512                 jne 0x7766ce
// 007766bc  83e804               sub eax, 4
// 007766bf  83c204               add edx, 4
// 007766c2  83c604               add esi, 4
// 007766c5  83f804               cmp eax, 4
// 007766c8  73ec                 jae 0x7766b6
// 007766ca  85c0                 test eax, eax
// 007766cc  744e                 je 0x77671c
// 007766ce  0fb60e               movzx ecx, byte ptr [esi]
// 007766d1  0fb63a               movzx edi, byte ptr [edx]
// 007766d4  2bcf                 sub ecx, edi
// 007766d6  7531                 jne 0x776709
// 007766d8  83f801               cmp eax, 1
// 007766db  763f                 jbe 0x77671c
// 007766dd  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 007766e1  0fb67a01             movzx edi, byte ptr [edx + 1]
// 007766e5  2bcf                 sub ecx, edi
// 007766e7  7520                 jne 0x776709
// 007766e9  83f802               cmp eax, 2
// 007766ec  762e                 jbe 0x77671c
// 007766ee  0fb64e02             movzx ecx, byte ptr [esi + 2]
// 007766f2  0fb67a02             movzx edi, byte ptr [edx + 2]
// 007766f6  2bcf                 sub ecx, edi
// 007766f8  750f                 jne 0x776709
// 007766fa  83f803               cmp eax, 3
// 007766fd  761d                 jbe 0x77671c
// 007766ff  0fb64e03             movzx ecx, byte ptr [esi + 3]
// 00776703  0fb65203             movzx edx, byte ptr [edx + 3]
// 00776707  2bca                 sub ecx, edx
// 00776709  c1f91f               sar ecx, 0x1f
// 0077670c  5f                   pop edi
// 0077670d  83c901               or ecx, 1
// 00776710  33c0                 xor eax, eax
// 00776712  85c9                 test ecx, ecx
// 00776714  5b                   pop ebx
// 00776715  0f94c0               sete al
// 00776718  5e                   pop esi
// 00776719  c20c00               ret 0xc
// 0077671c  5f                   pop edi
// 0077671d  33c9                 xor ecx, ecx
// 0077671f  33c0                 xor eax, eax
// 00776721  85c9                 test ecx, ecx
// 00776723  5b                   pop ebx
// 00776724  0f94c0               sete al
// 00776727  5e                   pop esi
// 00776728  c20c00               ret 0xc
// 0077672b  52                   push edx
// 0077672c  8bce                 mov ecx, esi
// 0077672e  e8c75d0d00           call 0x84c4fa
// 00776733  5f                   pop edi
// 00776734  5b                   pop ebx
// 00776735  5e                   pop esi
// 00776736  c20c00               ret 0xc
// 00776739  52                   push edx
// 0077673a  8bce                 mov ecx, esi
// 0077673c  e87fa3fdff           call 0x750ac0
// 00776741  0fb6c0               movzx eax, al
// 00776744  5f                   pop edi
// 00776745  5b                   pop ebx
// 00776746  5e                   pop esi
// 00776747  c20c00               ret 0xc
// 0077674a  33c0                 xor eax, eax
// 0077674c  5e                   pop esi
// 0077674d  c20c00               ret 0xc
// 00776750  ab                   stosd dword ptr es:[edi], eax
// 00776751  667700               ja 0x776754
// 00776754  396777               cmp dword ptr [edi + 0x77], esp
// 00776757  004b66               add byte ptr [ebx + 0x66], cl
// 0077675a  7700                 ja 0x77675c
// 0077675c  2b6777               sub esp, dword ptr [edi + 0x77]
// 0077675f  009766770044         add byte ptr [edi + 0x44007766], dl
// 00776765  677700               ja 0x776768
// 00776768  0000                 add byte ptr [eax], al
// 0077676a  0000                 add byte ptr [eax], al
// 0077676c  0001                 add byte ptr [ecx], al
// 0077676e  020505000305         add al, byte ptr [0x5030005]
// 00776774  0505050005           add eax, 0x5000505
// 00776779  0505050505           add eax, 0x5050505
// 0077677e  0505050505           add eax, 0x5050505
// 00776783  0504050505           add eax, 0x5050504
// 00776788  0505050505           add eax, 0x5050505
// 0077678d  0505050505           add eax, 0x5050505
// 00776792  0505050505           add eax, 0x5050505
// 00776797  0505050505           add eax, 0x5050505
// 0077679c  0505050505           add eax, 0x5050505
// 007767a1  0505050505           add eax, 0x5050505
// 007767a6  0505050505           add eax, 0x5050505
// 007767ab  0505050505           add eax, 0x5050505
// 007767b0  0505050505           add eax, 0x5050505
// 007767b5  0505050505           add eax, 0x5050505
// 007767ba  0505050505           add eax, 0x5050505
// 007767bf  0505050505           add eax, 0x5050505
// 007767c4  0505050505           add eax, 0x5050505
// copied from an identical function in another client (function ?IsSamePropValue@CXTPPropExchange@@IAEHGPBX0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS- /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPPropExchange.cpp