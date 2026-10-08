// roc 2008-06 004a5490  unit: RBX::VHint::?$FactoryProduct::Creator  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5490
//
// 004a5490  51                   push ecx
// 004a5491  53                   push ebx
// 004a5492  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004a5496  56                   push esi
// 004a5497  53                   push ebx
// 004a5498  8bf1                 mov esi, ecx
// 004a549a  e811ffffff           call 0x4a53b0
// 004a549f  85db                 test ebx, ebx
// 004a54a1  0f8e88000000         jle 0x4a552f
// 004a54a7  57                   push edi
// 004a54a8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004a54ac  8d642400             lea esp, [esp]
// 004a54b0  8b4f08               mov ecx, dword ptr [edi + 8]
// 004a54b3  4b                   dec ebx
// 004a54b4  8d4101               lea eax, [ecx + 1]
// 004a54b7  3b07                 cmp eax, dword ptr [edi]
// 004a54b9  895c2418             mov dword ptr [esp + 0x18], ebx
// 004a54bd  7f6f                 jg 0x4a552e
// 004a54bf  8b06                 mov eax, dword ptr [esi]
// 004a54c1  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 004a54c4  8bd0                 mov edx, eax
// 004a54c6  83e207               and edx, 7
// 004a54c9  8954240c             mov dword ptr [esp + 0xc], edx
// 004a54cd  8bd1                 mov edx, ecx
// 004a54cf  b880000000           mov eax, 0x80
// 004a54d4  7527                 jne 0x4a54fd
// 004a54d6  83e107               and ecx, 7
// 004a54d9  d3f8                 sar eax, cl
// 004a54db  c1fa03               sar edx, 3
// 004a54de  84041a               test byte ptr [edx + ebx], al
// 004a54e1  8b06                 mov eax, dword ptr [esi]
// 004a54e3  740c                 je 0x4a54f1
// 004a54e5  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a54e8  c1f803               sar eax, 3
// 004a54eb  c6040880             mov byte ptr [eax + ecx], 0x80
// 004a54ef  eb30                 jmp 0x4a5521
// 004a54f1  8b560c               mov edx, dword ptr [esi + 0xc]
// 004a54f4  c1f803               sar eax, 3
// 004a54f7  c6041000             mov byte ptr [eax + edx], 0
// 004a54fb  eb24                 jmp 0x4a5521
// 004a54fd  83e107               and ecx, 7
// 004a5500  d3f8                 sar eax, cl
// 004a5502  c1fa03               sar edx, 3
// 004a5505  84041a               test byte ptr [edx + ebx], al
// 004a5508  8b06                 mov eax, dword ptr [esi]
// 004a550a  7415                 je 0x4a5521
// 004a550c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a550f  c1f803               sar eax, 3
// 004a5512  03c1                 add eax, ecx
// 004a5514  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a5518  ba80000000           mov edx, 0x80
// 004a551d  d3fa                 sar edx, cl
// 004a551f  0810                 or byte ptr [eax], dl
// 004a5521  ff4708               inc dword ptr [edi + 8]
// 004a5524  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004a5528  ff06                 inc dword ptr [esi]
// 004a552a  85db                 test ebx, ebx
// 004a552c  7f82                 jg 0x4a54b0
// 004a552e  5f                   pop edi
// 004a552f  5e                   pop esi
// 004a5530  5b                   pop ebx
// 004a5531  59                   pop ecx
// 004a5532  c20800               ret 8
// library rbxgs-raknet/BitStream.cpp (function ?Write@BitStream@RakNet@@QAEXPAV12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
