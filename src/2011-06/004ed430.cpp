// roc 2011-06 004ed430  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ed430
//
// 004ed430  53                   push ebx
// 004ed431  55                   push ebp
// 004ed432  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004ed436  56                   push esi
// 004ed437  57                   push edi
// 004ed438  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004ed43c  c1ef03               shr edi, 3
// 004ed43f  4f                   dec edi
// 004ed440  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004ed445  8bf1                 mov esi, ecx
// 004ed447  0f95c3               setne bl
// 004ed44a  fecb                 dec bl
// 004ed44c  85ff                 test edi, edi
// 004ed44e  763c                 jbe 0x4ed48c
// 004ed450  8bce                 mov ecx, esi
// 004ed452  381c2f               cmp byte ptr [edi + ebp], bl
// 004ed455  0f8581000000         jne 0x4ed4dc
// 004ed45b  6a01                 push 1
// 004ed45d  e86ef7ffff           call 0x4ecbd0
// 004ed462  8b06                 mov eax, dword ptr [esi]
// 004ed464  8bc8                 mov ecx, eax
// 004ed466  c1e803               shr eax, 3
// 004ed469  83e107               and ecx, 7
// 004ed46c  7509                 jne 0x4ed477
// 004ed46e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ed471  c6040880             mov byte ptr [eax + ecx], 0x80
// 004ed475  eb0e                 jmp 0x4ed485
// 004ed477  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed47a  03c2                 add eax, edx
// 004ed47c  ba80000000           mov edx, 0x80
// 004ed481  d3fa                 sar edx, cl
// 004ed483  0810                 or byte ptr [eax], dl
// 004ed485  ff06                 inc dword ptr [esi]
// 004ed487  83ef01               sub edi, 1
// 004ed48a  75c4                 jne 0x4ed450
// 004ed48c  03fd                 add edi, ebp
// 004ed48e  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004ed493  746f                 je 0x4ed504
// 004ed495  f607f0               test byte ptr [edi], 0xf0
// 004ed498  7474                 je 0x4ed50e
// 004ed49a  8d54241c             lea edx, [esp + 0x1c]
// 004ed49e  52                   push edx
// 004ed49f  8bce                 mov ecx, esi
// 004ed4a1  c644242000           mov byte ptr [esp + 0x20], 0
// 004ed4a6  e8f5fbffff           call 0x4ed0a0
// 004ed4ab  bb08000000           mov ebx, 8
// 004ed4b0  53                   push ebx
// 004ed4b1  8bce                 mov ecx, esi
// 004ed4b3  e818f7ffff           call 0x4ecbd0
// 004ed4b8  8b06                 mov eax, dword ptr [esi]
// 004ed4ba  8bd0                 mov edx, eax
// 004ed4bc  83e207               and edx, 7
// 004ed4bf  89542418             mov dword ptr [esp + 0x18], edx
// 004ed4c3  0f85d6000000         jne 0x4ed59f
// 004ed4c9  8a0f                 mov cl, byte ptr [edi]
// 004ed4cb  c1e803               shr eax, 3
// 004ed4ce  03460c               add eax, dword ptr [esi + 0xc]
// 004ed4d1  8808                 mov byte ptr [eax], cl
// 004ed4d3  011e                 add dword ptr [esi], ebx
// 004ed4d5  5f                   pop edi
// 004ed4d6  5e                   pop esi
// 004ed4d7  5d                   pop ebp
// 004ed4d8  5b                   pop ebx
// 004ed4d9  c20c00               ret 0xc
// 004ed4dc  8d44241c             lea eax, [esp + 0x1c]
// 004ed4e0  50                   push eax
// 004ed4e1  c644242000           mov byte ptr [esp + 0x20], 0
// 004ed4e6  e8b5fbffff           call 0x4ed0a0
// 004ed4eb  6a01                 push 1
// 004ed4ed  8d0cfd08000000       lea ecx, [edi*8 + 8]
// 004ed4f4  51                   push ecx
// 004ed4f5  55                   push ebp
// 004ed4f6  8bce                 mov ecx, esi
// 004ed4f8  e8d3faffff           call 0x4ecfd0
// 004ed4fd  5f                   pop edi
// 004ed4fe  5e                   pop esi
// 004ed4ff  5d                   pop ebp
// 004ed500  5b                   pop ebx
// 004ed501  c20c00               ret 0xc
// 004ed504  8a17                 mov dl, byte ptr [edi]
// 004ed506  80e2f0               and dl, 0xf0
// 004ed509  80faf0               cmp dl, 0xf0
// 004ed50c  758c                 jne 0x4ed49a
// 004ed50e  8d44241c             lea eax, [esp + 0x1c]
// 004ed512  50                   push eax
// 004ed513  8bce                 mov ecx, esi
// 004ed515  c644242001           mov byte ptr [esp + 0x20], 1
// 004ed51a  e881fbffff           call 0x4ed0a0
// 004ed51f  bb04000000           mov ebx, 4
// 004ed524  53                   push ebx
// 004ed525  8bce                 mov ecx, esi
// 004ed527  895c2420             mov dword ptr [esp + 0x20], ebx
// 004ed52b  e8a0f6ffff           call 0x4ecbd0
// 004ed530  8b16                 mov edx, dword ptr [esi]
// 004ed532  83e207               and edx, 7
// 004ed535  8bef                 mov ebp, edi
// 004ed537  8a4500               mov al, byte ptr [ebp]
// 004ed53a  45                   inc ebp
// 004ed53b  83fb08               cmp ebx, 8
// 004ed53e  7306                 jae 0x4ed546
// 004ed540  b108                 mov cl, 8
// 004ed542  2acb                 sub cl, bl
// 004ed544  d2e0                 shl al, cl
// 004ed546  8b0e                 mov ecx, dword ptr [esi]
// 004ed548  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004ed54b  c1e903               shr ecx, 3
// 004ed54e  85d2                 test edx, edx
// 004ed550  7505                 jne 0x4ed557
// 004ed552  880439               mov byte ptr [ecx + edi], al
// 004ed555  eb2c                 jmp 0x4ed583
// 004ed557  03f9                 add edi, ecx
// 004ed559  8ad8                 mov bl, al
// 004ed55b  8aca                 mov cl, dl
// 004ed55d  d2eb                 shr bl, cl
// 004ed55f  b908000000           mov ecx, 8
// 004ed564  2bca                 sub ecx, edx
// 004ed566  081f                 or byte ptr [edi], bl
// 004ed568  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004ed56c  83f908               cmp ecx, 8
// 004ed56f  7312                 jae 0x4ed583
// 004ed571  3bcb                 cmp ecx, ebx
// 004ed573  730e                 jae 0x4ed583
// 004ed575  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004ed578  d2e0                 shl al, cl
// 004ed57a  8b0e                 mov ecx, dword ptr [esi]
// 004ed57c  c1e903               shr ecx, 3
// 004ed57f  88443901             mov byte ptr [ecx + edi + 1], al
// 004ed583  83fb08               cmp ebx, 8
// 004ed586  0f8247ffffff         jb 0x4ed4d3
// 004ed58c  830608               add dword ptr [esi], 8
// 004ed58f  83eb08               sub ebx, 8
// 004ed592  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004ed596  759f                 jne 0x4ed537
// 004ed598  5f                   pop edi
// 004ed599  5e                   pop esi
// 004ed59a  5d                   pop ebp
// 004ed59b  5b                   pop ebx
// 004ed59c  c20c00               ret 0xc
// 004ed59f  8bef                 mov ebp, edi
// 004ed5a1  8a4500               mov al, byte ptr [ebp]
// 004ed5a4  45                   inc ebp
// 004ed5a5  83fb08               cmp ebx, 8
// 004ed5a8  7306                 jae 0x4ed5b0
// 004ed5aa  b108                 mov cl, 8
// 004ed5ac  2acb                 sub cl, bl
// 004ed5ae  d2e0                 shl al, cl
// 004ed5b0  8b0e                 mov ecx, dword ptr [esi]
// 004ed5b2  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004ed5b5  c1e903               shr ecx, 3
// 004ed5b8  03f9                 add edi, ecx
// 004ed5ba  8ac8                 mov cl, al
// 004ed5bc  884c241c             mov byte ptr [esp + 0x1c], cl
// 004ed5c0  8aca                 mov cl, dl
// 004ed5c2  8ad0                 mov dl, al
// 004ed5c4  d2ea                 shr dl, cl
// 004ed5c6  b908000000           mov ecx, 8
// 004ed5cb  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 004ed5cf  0817                 or byte ptr [edi], dl
// 004ed5d1  83f908               cmp ecx, 8
// 004ed5d4  7312                 jae 0x4ed5e8
// 004ed5d6  3bcb                 cmp ecx, ebx
// 004ed5d8  730e                 jae 0x4ed5e8
// 004ed5da  8b16                 mov edx, dword ptr [esi]
// 004ed5dc  d2e0                 shl al, cl
// 004ed5de  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ed5e1  c1ea03               shr edx, 3
// 004ed5e4  88440a01             mov byte ptr [edx + ecx + 1], al
// 004ed5e8  83fb08               cmp ebx, 8
// 004ed5eb  0f82e2feffff         jb 0x4ed4d3
// 004ed5f1  830608               add dword ptr [esi], 8
// 004ed5f4  83eb08               sub ebx, 8
// 004ed5f7  0f84d8feffff         je 0x4ed4d5
// 004ed5fd  8b542418             mov edx, dword ptr [esp + 0x18]
// 004ed601  eb9e                 jmp 0x4ed5a1
// library rbx2016-raknet/BitStream.cpp (function ?WriteCompressed@BitStream@RakNet@@AAEXPBEI_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
