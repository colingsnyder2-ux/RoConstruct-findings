// roc 2010-06 008053d0  unit: CXTPPropExchange  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008053d0
//
// 008053d0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008053d4  56                   push esi
// 008053d5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008053d9  3bf2                 cmp esi, edx
// 008053db  7509                 jne 0x8053e6
// 008053dd  b801000000           mov eax, 1
// 008053e2  5e                   pop esi
// 008053e3  c20c00               ret 0xc
// 008053e6  85f6                 test esi, esi
// 008053e8  0f842c010000         je 0x80551a
// 008053ee  85d2                 test edx, edx
// 008053f0  0f8424010000         je 0x80551a
// 008053f6  53                   push ebx
// 008053f7  57                   push edi
// 008053f8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008053fc  0fb7df               movzx ebx, di
// 008053ff  83c3fe               add ebx, -2
// 00805402  33c0                 xor eax, eax
// 00805404  83fb63               cmp ebx, 0x63
// 00805407  0f8707010000         ja 0x805514
// 0080540d  0fb69b38558000       movzx ebx, byte ptr [ebx + 0x805538]
// 00805414  ff249d20558000       jmp dword ptr [ebx*4 + 0x805520]
// 0080541b  8b06                 mov eax, dword ptr [esi]
// 0080541d  8bca                 mov ecx, edx
// 0080541f  90                   nop 
// 00805420  668b10               mov dx, word ptr [eax]
// 00805423  663b11               cmp dx, word ptr [ecx]
// 00805426  752b                 jne 0x805453
// 00805428  6685d2               test dx, dx
// 0080542b  7415                 je 0x805442
// 0080542d  668b5002             mov dx, word ptr [eax + 2]
// 00805431  663b5102             cmp dx, word ptr [ecx + 2]
// 00805435  751c                 jne 0x805453
// 00805437  83c004               add eax, 4
// 0080543a  83c104               add ecx, 4
// 0080543d  6685d2               test dx, dx
// 00805440  75de                 jne 0x805420
// 00805442  33c0                 xor eax, eax
// 00805444  33c9                 xor ecx, ecx
// 00805446  85c0                 test eax, eax
// 00805448  0f94c1               sete cl
// 0080544b  5f                   pop edi
// 0080544c  5b                   pop ebx
// 0080544d  5e                   pop esi
// 0080544e  8bc1                 mov eax, ecx
// 00805450  c20c00               ret 0xc
// 00805453  1bc0                 sbb eax, eax
// 00805455  83d8ff               sbb eax, -1
// 00805458  33c9                 xor ecx, ecx
// 0080545a  85c0                 test eax, eax
// 0080545c  0f94c1               sete cl
// 0080545f  5f                   pop edi
// 00805460  5b                   pop ebx
// 00805461  5e                   pop esi
// 00805462  8bc1                 mov eax, ecx
// 00805464  c20c00               ret 0xc
// 00805467  52                   push edx
// 00805468  8bce                 mov ecx, esi
// 0080546a  ff15b4ce9e00         call dword ptr [0x9eceb4]
// 00805470  f7d8                 neg eax
// 00805472  5f                   pop edi
// 00805473  1bc0                 sbb eax, eax
// 00805475  5b                   pop ebx
// 00805476  40                   inc eax
// 00805477  5e                   pop esi
// 00805478  c20c00               ret 0xc
// 0080547b  57                   push edi
// 0080547c  e89fecffff           call 0x804120
// 00805481  83f804               cmp eax, 4
// 00805484  7214                 jb 0x80549a
// 00805486  8b0e                 mov ecx, dword ptr [esi]
// 00805488  3b0a                 cmp ecx, dword ptr [edx]
// 0080548a  7512                 jne 0x80549e
// 0080548c  83e804               sub eax, 4
// 0080548f  83c204               add edx, 4
// 00805492  83c604               add esi, 4
// 00805495  83f804               cmp eax, 4
// 00805498  73ec                 jae 0x805486
// 0080549a  85c0                 test eax, eax
// 0080549c  744e                 je 0x8054ec
// 0080549e  0fb60e               movzx ecx, byte ptr [esi]
// 008054a1  0fb63a               movzx edi, byte ptr [edx]
// 008054a4  2bcf                 sub ecx, edi
// 008054a6  7531                 jne 0x8054d9
// 008054a8  83f801               cmp eax, 1
// 008054ab  763f                 jbe 0x8054ec
// 008054ad  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 008054b1  0fb67a01             movzx edi, byte ptr [edx + 1]
// 008054b5  2bcf                 sub ecx, edi
// 008054b7  7520                 jne 0x8054d9
// 008054b9  83f802               cmp eax, 2
// 008054bc  762e                 jbe 0x8054ec
// 008054be  0fb64e02             movzx ecx, byte ptr [esi + 2]
// 008054c2  0fb67a02             movzx edi, byte ptr [edx + 2]
// 008054c6  2bcf                 sub ecx, edi
// 008054c8  750f                 jne 0x8054d9
// 008054ca  83f803               cmp eax, 3
// 008054cd  761d                 jbe 0x8054ec
// 008054cf  0fb64e03             movzx ecx, byte ptr [esi + 3]
// 008054d3  0fb65203             movzx edx, byte ptr [edx + 3]
// 008054d7  2bca                 sub ecx, edx
// 008054d9  c1f91f               sar ecx, 0x1f
// 008054dc  5f                   pop edi
// 008054dd  83c901               or ecx, 1
// 008054e0  33c0                 xor eax, eax
// 008054e2  85c9                 test ecx, ecx
// 008054e4  5b                   pop ebx
// 008054e5  0f94c0               sete al
// 008054e8  5e                   pop esi
// 008054e9  c20c00               ret 0xc
// 008054ec  5f                   pop edi
// 008054ed  33c9                 xor ecx, ecx
// 008054ef  33c0                 xor eax, eax
// 008054f1  85c9                 test ecx, ecx
// 008054f3  5b                   pop ebx
// 008054f4  0f94c0               sete al
// 008054f7  5e                   pop esi
// 008054f8  c20c00               ret 0xc
// 008054fb  52                   push edx
// 008054fc  8bce                 mov ecx, esi
// 008054fe  e8a57e1700           call 0x97d3a8
// 00805503  5f                   pop edi
// 00805504  5b                   pop ebx
// 00805505  5e                   pop esi
// 00805506  c20c00               ret 0xc
// 00805509  52                   push edx
// 0080550a  8bce                 mov ecx, esi
// 0080550c  e8afa3fdff           call 0x7df8c0
// 00805511  0fb6c0               movzx eax, al
// 00805514  5f                   pop edi
// 00805515  5b                   pop ebx
// 00805516  5e                   pop esi
// 00805517  c20c00               ret 0xc
// 0080551a  33c0                 xor eax, eax
// 0080551c  5e                   pop esi
// 0080551d  c20c00               ret 0xc
// 00805520  7b54                 jnp 0x805576
// 00805522  800009               add byte ptr [eax], 9
// 00805525  55                   push ebp
// 00805526  80001b               add byte ptr [eax], 0x1b
// 00805529  54                   push esp
// 0080552a  8000fb               add byte ptr [eax], 0xfb
// 0080552d  54                   push esp
// 0080552e  800067               add byte ptr [eax], 0x67
// 00805531  54                   push esp
// 00805532  800014               add byte ptr [eax], 0x14
// 00805535  55                   push ebp
// 00805536  800000               add byte ptr [eax], 0
// 00805539  0000                 add byte ptr [eax], al
// 0080553b  0000                 add byte ptr [eax], al
// 0080553d  0102                 add dword ptr [edx], eax
// 0080553f  0505000305           add eax, 0x5030005
// 00805544  0505050005           add eax, 0x5000505
// 00805549  0505050505           add eax, 0x5050505
// 0080554e  0505050505           add eax, 0x5050505
// 00805553  0504050505           add eax, 0x5050504
// 00805558  0505050505           add eax, 0x5050505
// 0080555d  0505050505           add eax, 0x5050505
// 00805562  0505050505           add eax, 0x5050505
// 00805567  0505050505           add eax, 0x5050505
// 0080556c  0505050505           add eax, 0x5050505
// 00805571  0505050505           add eax, 0x5050505
// 00805576  0505050505           add eax, 0x5050505
// 0080557b  0505050505           add eax, 0x5050505
// 00805580  0505050505           add eax, 0x5050505
// 00805585  0505050505           add eax, 0x5050505
// 0080558a  0505050505           add eax, 0x5050505
// 0080558f  0505050505           add eax, 0x5050505
// 00805594  0505050505           add eax, 0x5050505
// copied from an identical function in another client (function ?IsSamePropValue@CXTPPropExchange@@IAEHGPBX0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp