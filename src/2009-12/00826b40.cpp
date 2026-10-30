// roc 2009-12 00826b40  unit: CXTPReportControl  size: 410 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00826b40
//
// 00826b40  6aff                 push -1
// 00826b42  68c0b59500           push 0x95b5c0
// 00826b47  64a100000000         mov eax, dword ptr fs:[0]
// 00826b4d  50                   push eax
// 00826b4e  83ec18               sub esp, 0x18
// 00826b51  53                   push ebx
// 00826b52  55                   push ebp
// 00826b53  56                   push esi
// 00826b54  57                   push edi
// 00826b55  a10052b600           mov eax, dword ptr [0xb65200]
// 00826b5a  33c4                 xor eax, esp
// 00826b5c  50                   push eax
// 00826b5d  8d44242c             lea eax, [esp + 0x2c]
// 00826b61  64a300000000         mov dword ptr fs:[0], eax
// 00826b67  8bf1                 mov esi, ecx
// 00826b69  e8b0cffcff           call 0x7f3b1e
// 00826b6e  8b4804               mov ecx, dword ptr [eax + 4]
// 00826b71  e88ad8fcff           call 0x7f4400
// 00826b76  8b06                 mov eax, dword ptr [esi]
// 00826b78  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 00826b7e  8bce                 mov ecx, esi
// 00826b80  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00826b88  ffd2                 call edx
// 00826b8a  8bce                 mov ecx, esi
// 00826b8c  e8af79ffff           call 0x81e540
// 00826b91  85c0                 test eax, eax
// 00826b93  0f851c010000         jne 0x826cb5
// 00826b99  8d4c2418             lea ecx, [esp + 0x18]
// 00826b9d  e83e7fffff           call 0x81eae0
// 00826ba2  c744241874509f00     mov dword ptr [esp + 0x18], 0x9f5074
// 00826baa  8d442418             lea eax, [esp + 0x18]
// 00826bae  50                   push eax
// 00826baf  6a00                 push 0
// 00826bb1  8bce                 mov ecx, esi
// 00826bb3  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00826bb8  e8c37affff           call 0x81e680
// 00826bbd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00826bc1  83c5ff               add ebp, -1
// 00826bc4  bbffffff7f           mov ebx, 0x7fffffff
// 00826bc9  784e                 js 0x826c19
// 00826bcb  85ed                 test ebp, ebp
// 00826bcd  7c75                 jl 0x826c44
// 00826bcf  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 00826bd3  7d6f                 jge 0x826c44
// 00826bd5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00826bd9  8b7ce904             mov edi, dword ptr [ecx + ebp*8 + 4]
// 00826bdd  85ff                 test edi, edi
// 00826bdf  7427                 je 0x826c08
// 00826be1  8b17                 mov edx, dword ptr [edi]
// 00826be3  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00826be6  8bcf                 mov ecx, edi
// 00826be8  ffd0                 call eax
// 00826bea  3bd8                 cmp ebx, eax
// 00826bec  7c0b                 jl 0x826bf9
// 00826bee  8b17                 mov edx, dword ptr [edi]
// 00826bf0  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00826bf3  8bcf                 mov ecx, edi
// 00826bf5  ffd0                 call eax
// 00826bf7  8bd8                 mov ebx, eax
// 00826bf9  8b16                 mov edx, dword ptr [esi]
// 00826bfb  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00826c01  6a00                 push 0
// 00826c03  57                   push edi
// 00826c04  8bce                 mov ecx, esi
// 00826c06  ffd0                 call eax
// 00826c08  6a01                 push 1
// 00826c0a  55                   push ebp
// 00826c0b  8d4c2420             lea ecx, [esp + 0x20]
// 00826c0f  e8ec7effff           call 0x81eb00
// 00826c14  83ed01               sub ebp, 1
// 00826c17  79b2                 jns 0x826bcb
// 00826c19  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 00826c1f  85c9                 test ecx, ecx
// 00826c21  7469                 je 0x826c8c
// 00826c23  e878780000           call 0x82e4a0
// 00826c28  81fbffffff7f         cmp ebx, 0x7fffffff
// 00826c2e  745c                 je 0x826c8c
// 00826c30  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00826c36  e8e55f0000           call 0x82cc20
// 00826c3b  48                   dec eax
// 00826c3c  3bd8                 cmp ebx, eax
// 00826c3e  7d09                 jge 0x826c49
// 00826c40  8bc3                 mov eax, ebx
// 00826c42  eb11                 jmp 0x826c55
// 00826c44  e8c3cefcff           call 0x7f3b0c
// 00826c49  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00826c4f  e8cc5f0000           call 0x82cc20
// 00826c54  48                   dec eax
// 00826c55  8bce                 mov ecx, esi
// 00826c57  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00826c5d  e8fe78ffff           call 0x81e560
// 00826c62  85c0                 test eax, eax
// 00826c64  7426                 je 0x826c8c
// 00826c66  6a00                 push 0
// 00826c68  8bce                 mov ecx, esi
// 00826c6a  e8f178ffff           call 0x81e560
// 00826c6f  50                   push eax
// 00826c70  8bce                 mov ecx, esi
// 00826c72  e829edffff           call 0x8259a0
// 00826c77  8bbe28010000         mov edi, dword ptr [esi + 0x128]
// 00826c7d  8bce                 mov ecx, esi
// 00826c7f  e8dc78ffff           call 0x81e560
// 00826c84  50                   push eax
// 00826c85  8bcf                 mov ecx, edi
// 00826c87  e8247b0000           call 0x82e7b0
// 00826c8c  8b16                 mov edx, dword ptr [esi]
// 00826c8e  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 00826c94  8bce                 mov ecx, esi
// 00826c96  ffd0                 call eax
// 00826c98  8bce                 mov ecx, esi
// 00826c9a  e8e187ffff           call 0x81f480
// 00826c9f  8d4c2418             lea ecx, [esp + 0x18]
// 00826ca3  c644243400           mov byte ptr [esp + 0x34], 0
// 00826ca8  c744241874509f00     mov dword ptr [esp + 0x18], 0x9f5074
// 00826cb0  e8fb7effff           call 0x81ebb0
// 00826cb5  8d4c2417             lea ecx, [esp + 0x17]
// 00826cb9  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00826cc1  e8ea41c2ff           call 0x44aeb0
// 00826cc6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00826cca  64890d00000000       mov dword ptr fs:[0], ecx
// 00826cd1  59                   pop ecx
// 00826cd2  5f                   pop edi
// 00826cd3  5e                   pop esi
// 00826cd4  5d                   pop ebp
// 00826cd5  5b                   pop ebx
// 00826cd6  83c424               add esp, 0x24
// 00826cd9  c3                   ret 
// copied from an identical function in another client (function ?Cut@CXTPReportControl@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp