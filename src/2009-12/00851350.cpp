// roc 2009-12 00851350  unit: CXTPPropExchange  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00851350
//
// 00851350  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00851354  56                   push esi
// 00851355  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00851359  3bf2                 cmp esi, edx
// 0085135b  7509                 jne 0x851366
// 0085135d  b801000000           mov eax, 1
// 00851362  5e                   pop esi
// 00851363  c20c00               ret 0xc
// 00851366  85f6                 test esi, esi
// 00851368  0f842c010000         je 0x85149a
// 0085136e  85d2                 test edx, edx
// 00851370  0f8424010000         je 0x85149a
// 00851376  53                   push ebx
// 00851377  57                   push edi
// 00851378  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0085137c  0fb7df               movzx ebx, di
// 0085137f  83c3fe               add ebx, -2
// 00851382  33c0                 xor eax, eax
// 00851384  83fb63               cmp ebx, 0x63
// 00851387  0f8707010000         ja 0x851494
// 0085138d  0fb69bb8148500       movzx ebx, byte ptr [ebx + 0x8514b8]
// 00851394  ff249da0148500       jmp dword ptr [ebx*4 + 0x8514a0]
// 0085139b  8b06                 mov eax, dword ptr [esi]
// 0085139d  8bca                 mov ecx, edx
// 0085139f  90                   nop 
// 008513a0  668b10               mov dx, word ptr [eax]
// 008513a3  663b11               cmp dx, word ptr [ecx]
// 008513a6  752b                 jne 0x8513d3
// 008513a8  6685d2               test dx, dx
// 008513ab  7415                 je 0x8513c2
// 008513ad  668b5002             mov dx, word ptr [eax + 2]
// 008513b1  663b5102             cmp dx, word ptr [ecx + 2]
// 008513b5  751c                 jne 0x8513d3
// 008513b7  83c004               add eax, 4
// 008513ba  83c104               add ecx, 4
// 008513bd  6685d2               test dx, dx
// 008513c0  75de                 jne 0x8513a0
// 008513c2  33c0                 xor eax, eax
// 008513c4  33c9                 xor ecx, ecx
// 008513c6  85c0                 test eax, eax
// 008513c8  0f94c1               sete cl
// 008513cb  5f                   pop edi
// 008513cc  5b                   pop ebx
// 008513cd  5e                   pop esi
// 008513ce  8bc1                 mov eax, ecx
// 008513d0  c20c00               ret 0xc
// 008513d3  1bc0                 sbb eax, eax
// 008513d5  83d8ff               sbb eax, -1
// 008513d8  33c9                 xor ecx, ecx
// 008513da  85c0                 test eax, eax
// 008513dc  0f94c1               sete cl
// 008513df  5f                   pop edi
// 008513e0  5b                   pop ebx
// 008513e1  5e                   pop esi
// 008513e2  8bc1                 mov eax, ecx
// 008513e4  c20c00               ret 0xc
// 008513e7  52                   push edx
// 008513e8  8bce                 mov ecx, esi
// 008513ea  ff1584de9800         call dword ptr [0x98de84]
// 008513f0  f7d8                 neg eax
// 008513f2  5f                   pop edi
// 008513f3  1bc0                 sbb eax, eax
// 008513f5  5b                   pop ebx
// 008513f6  40                   inc eax
// 008513f7  5e                   pop esi
// 008513f8  c20c00               ret 0xc
// 008513fb  57                   push edi
// 008513fc  e8bfecffff           call 0x8500c0
// 00851401  83f804               cmp eax, 4
// 00851404  7214                 jb 0x85141a
// 00851406  8b0e                 mov ecx, dword ptr [esi]
// 00851408  3b0a                 cmp ecx, dword ptr [edx]
// 0085140a  7512                 jne 0x85141e
// 0085140c  83e804               sub eax, 4
// 0085140f  83c204               add edx, 4
// 00851412  83c604               add esi, 4
// 00851415  83f804               cmp eax, 4
// 00851418  73ec                 jae 0x851406
// 0085141a  85c0                 test eax, eax
// 0085141c  744e                 je 0x85146c
// 0085141e  0fb60e               movzx ecx, byte ptr [esi]
// 00851421  0fb63a               movzx edi, byte ptr [edx]
// 00851424  2bcf                 sub ecx, edi
// 00851426  7531                 jne 0x851459
// 00851428  83f801               cmp eax, 1
// 0085142b  763f                 jbe 0x85146c
// 0085142d  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00851431  0fb67a01             movzx edi, byte ptr [edx + 1]
// 00851435  2bcf                 sub ecx, edi
// 00851437  7520                 jne 0x851459
// 00851439  83f802               cmp eax, 2
// 0085143c  762e                 jbe 0x85146c
// 0085143e  0fb64e02             movzx ecx, byte ptr [esi + 2]
// 00851442  0fb67a02             movzx edi, byte ptr [edx + 2]
// 00851446  2bcf                 sub ecx, edi
// 00851448  750f                 jne 0x851459
// 0085144a  83f803               cmp eax, 3
// 0085144d  761d                 jbe 0x85146c
// 0085144f  0fb64e03             movzx ecx, byte ptr [esi + 3]
// 00851453  0fb65203             movzx edx, byte ptr [edx + 3]
// 00851457  2bca                 sub ecx, edx
// 00851459  c1f91f               sar ecx, 0x1f
// 0085145c  5f                   pop edi
// 0085145d  83c901               or ecx, 1
// 00851460  33c0                 xor eax, eax
// 00851462  85c9                 test ecx, ecx
// 00851464  5b                   pop ebx
// 00851465  0f94c0               sete al
// 00851468  5e                   pop esi
// 00851469  c20c00               ret 0xc
// 0085146c  5f                   pop edi
// 0085146d  33c9                 xor ecx, ecx
// 0085146f  33c0                 xor eax, eax
// 00851471  85c9                 test ecx, ecx
// 00851473  5b                   pop ebx
// 00851474  0f94c0               sete al
// 00851477  5e                   pop esi
// 00851478  c20c00               ret 0xc
// 0085147b  52                   push edx
// 0085147c  8bce                 mov ecx, esi
// 0085147e  e8e3550d00           call 0x926a66
// 00851483  5f                   pop edi
// 00851484  5b                   pop ebx
// 00851485  5e                   pop esi
// 00851486  c20c00               ret 0xc
// 00851489  52                   push edx
// 0085148a  8bce                 mov ecx, esi
// 0085148c  e8efa3fdff           call 0x82b880
// 00851491  0fb6c0               movzx eax, al
// 00851494  5f                   pop edi
// 00851495  5b                   pop ebx
// 00851496  5e                   pop esi
// 00851497  c20c00               ret 0xc
// 0085149a  33c0                 xor eax, eax
// 0085149c  5e                   pop esi
// 0085149d  c20c00               ret 0xc
// 008514a0  fb                   sti 
// 008514a1  138500891485         adc eax, dword ptr [ebp - 0x7aeb7700]
// 008514a7  009b1385007b         add byte ptr [ebx + 0x7b008513], bl
// 008514ad  1485                 adc al, 0x85
// 008514af  00e7                 add bh, ah
// 008514b1  138500941485         adc eax, dword ptr [ebp - 0x7aeb6c00]
// 008514b7  0000                 add byte ptr [eax], al
// 008514b9  0000                 add byte ptr [eax], al
// 008514bb  0000                 add byte ptr [eax], al
// 008514bd  0102                 add dword ptr [edx], eax
// 008514bf  0505000305           add eax, 0x5030005
// 008514c4  0505050005           add eax, 0x5000505
// 008514c9  0505050505           add eax, 0x5050505
// 008514ce  0505050505           add eax, 0x5050505
// 008514d3  0504050505           add eax, 0x5050504
// 008514d8  0505050505           add eax, 0x5050505
// 008514dd  0505050505           add eax, 0x5050505
// 008514e2  0505050505           add eax, 0x5050505
// 008514e7  0505050505           add eax, 0x5050505
// 008514ec  0505050505           add eax, 0x5050505
// 008514f1  0505050505           add eax, 0x5050505
// 008514f6  0505050505           add eax, 0x5050505
// 008514fb  0505050505           add eax, 0x5050505
// 00851500  0505050505           add eax, 0x5050505
// 00851505  0505050505           add eax, 0x5050505
// 0085150a  0505050505           add eax, 0x5050505
// 0085150f  0505050505           add eax, 0x5050505
// 00851514  0505050505           add eax, 0x5050505
// copied from an identical function in another client (function ?IsSamePropValue@CXTPPropExchange@@IAEHGPBX0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp