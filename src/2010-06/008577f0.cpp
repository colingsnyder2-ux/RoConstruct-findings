// roc 2010-06 008577f0  unit: CXTPReportHyperlinks  size: 816 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008577f0
//
// 008577f0  6aff                 push -1
// 008577f2  68e2839b00           push 0x9b83e2
// 008577f7  64a100000000         mov eax, dword ptr fs:[0]
// 008577fd  50                   push eax
// 008577fe  83ec4c               sub esp, 0x4c
// 00857801  53                   push ebx
// 00857802  55                   push ebp
// 00857803  56                   push esi
// 00857804  57                   push edi
// 00857805  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0085780a  33c4                 xor eax, esp
// 0085780c  50                   push eax
// 0085780d  8d442460             lea eax, [esp + 0x60]
// 00857811  64a300000000         mov dword ptr fs:[0], eax
// 00857817  8bf1                 mov esi, ecx
// 00857819  33ed                 xor ebp, ebp
// 0085781b  396e54               cmp dword ptr [esi + 0x54], ebp
// 0085781e  7516                 jne 0x857836
// 00857820  33c0                 xor eax, eax
// 00857822  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00857826  64890d00000000       mov dword ptr fs:[0], ecx
// 0085782d  59                   pop ecx
// 0085782e  5f                   pop edi
// 0085782f  5e                   pop esi
// 00857830  5d                   pop ebp
// 00857831  5b                   pop ebx
// 00857832  83c458               add esp, 0x58
// 00857835  c3                   ret 
// 00857836  396e20               cmp dword ptr [esi + 0x20], ebp
// 00857839  74e5                 je 0x857820
// 0085783b  56                   push esi
// 0085783c  8d4c2450             lea ecx, [esp + 0x50]
// 00857840  e8ef0ff5ff           call 0x7a8834
// 00857845  8b4654               mov eax, dword ptr [esi + 0x54]
// 00857848  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0085784e  83c030               add eax, 0x30
// 00857851  50                   push eax
// 00857852  8d4c2450             lea ecx, [esp + 0x50]
// 00857856  51                   push ecx
// 00857857  8d4c2444             lea ecx, [esp + 0x44]
// 0085785b  896c2470             mov dword ptr [esp + 0x70], ebp
// 0085785f  e83c7efaff           call 0x7ff6a0
// 00857864  8b442454             mov eax, dword ptr [esp + 0x54]
// 00857868  8d542434             lea edx, [esp + 0x34]
// 0085786c  52                   push edx
// 0085786d  6a01                 push 1
// 0085786f  68e86ea000           push 0xa06ee8
// 00857874  50                   push eax
// 00857875  c644247801           mov byte ptr [esp + 0x78], 1
// 0085787a  ff1594a19e00         call dword ptr [0x9ea194]
// 00857880  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00857883  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00857887  8b1d54ba9e00         mov ebx, dword ptr [0x9eba54]
// 0085788d  55                   push ebp
// 0085788e  55                   push ebp
// 0085788f  68a1010000           push 0x1a1
// 00857894  51                   push ecx
// 00857895  83c705               add edi, 5
// 00857898  ffd3                 call ebx
// 0085789a  3bc7                 cmp eax, edi
// 0085789c  7410                 je 0x8578ae
// 0085789e  8b4620               mov eax, dword ptr [esi + 0x20]
// 008578a1  0fb7d7               movzx edx, di
// 008578a4  52                   push edx
// 008578a5  55                   push ebp
// 008578a6  68a0010000           push 0x1a0
// 008578ab  50                   push eax
// 008578ac  ffd3                 call ebx
// 008578ae  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008578b1  8bb9ec000000         mov edi, dword ptr [ecx + 0xec]
// 008578b7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008578ba  8b5730               mov edx, dword ptr [edi + 0x30]
// 008578bd  55                   push ebp
// 008578be  55                   push ebp
// 008578bf  688b010000           push 0x18b
// 008578c4  50                   push eax
// 008578c5  897c242c             mov dword ptr [esp + 0x2c], edi
// 008578c9  89542438             mov dword ptr [esp + 0x38], edx
// 008578cd  896c2434             mov dword ptr [esp + 0x34], ebp
// 008578d1  ffd3                 call ebx
// 008578d3  8be8                 mov ebp, eax
// 008578d5  83ed01               sub ebp, 1
// 008578d8  7857                 js 0x857931
// 008578da  8d9b00000000         lea ebx, [ebx]
// 008578e0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008578e3  6a00                 push 0
// 008578e5  55                   push ebp
// 008578e6  6899010000           push 0x199
// 008578eb  51                   push ecx
// 008578ec  ffd3                 call ebx
// 008578ee  50                   push eax
// 008578ef  8bcf                 mov ecx, edi
// 008578f1  e8da88fcff           call 0x8201d0
// 008578f6  8bf8                 mov edi, eax
// 008578f8  85ff                 test edi, edi
// 008578fa  7416                 je 0x857912
// 008578fc  8bcf                 mov ecx, edi
// 008578fe  e89d42f8ff           call 0x7dbba0
// 00857903  85c0                 test eax, eax
// 00857905  750b                 jne 0x857912
// 00857907  8bcf                 mov ecx, edi
// 00857909  e8a2a0e6ff           call 0x6c19b0
// 0085790e  85c0                 test eax, eax
// 00857910  7516                 jne 0x857928
// 00857912  8b5620               mov edx, dword ptr [esi + 0x20]
// 00857915  6a00                 push 0
// 00857917  55                   push ebp
// 00857918  6882010000           push 0x182
// 0085791d  52                   push edx
// 0085791e  ffd3                 call ebx
// 00857920  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00857928  83ed01               sub ebp, 1
// 0085792b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0085792f  79af                 jns 0x8578e0
// 00857931  33c0                 xor eax, eax
// 00857933  39442428             cmp dword ptr [esp + 0x28], eax
// 00857937  89442418             mov dword ptr [esp + 0x18], eax
// 0085793b  0f8e74010000         jle 0x857ab5
// 00857941  85c0                 test eax, eax
// 00857943  0f8c5d010000         jl 0x857aa6
// 00857949  3b4730               cmp eax, dword ptr [edi + 0x30]
// 0085794c  0f8d54010000         jge 0x857aa6
// 00857952  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00857955  8b2c81               mov ebp, dword ptr [ecx + eax*4]
// 00857958  8d0c81               lea ecx, [ecx + eax*4]
// 0085795b  85ed                 test ebp, ebp
// 0085795d  0f8443010000         je 0x857aa6
// 00857963  8bcd                 mov ecx, ebp
// 00857965  e83642f8ff           call 0x7dbba0
// 0085796a  85c0                 test eax, eax
// 0085796c  0f8530010000         jne 0x857aa2
// 00857972  8bcd                 mov ecx, ebp
// 00857974  e837a0e6ff           call 0x6c19b0
// 00857979  85c0                 test eax, eax
// 0085797b  0f8421010000         je 0x857aa2
// 00857981  8bcd                 mov ecx, ebp
// 00857983  e8c811f6ff           call 0x7b8b50
// 00857988  50                   push eax
// 00857989  8bce                 mov ecx, esi
// 0085798b  e810feffff           call 0x8577a0
// 00857990  85c0                 test eax, eax
// 00857992  0f8d0a010000         jge 0x857aa2
// 00857998  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 0085799f  0f84ab000000         je 0x857a50
// 008579a5  8b5620               mov edx, dword ptr [esi + 0x20]
// 008579a8  33ff                 xor edi, edi
// 008579aa  57                   push edi
// 008579ab  57                   push edi
// 008579ac  688b010000           push 0x18b
// 008579b1  52                   push edx
// 008579b2  ffd3                 call ebx
// 008579b4  85c0                 test eax, eax
// 008579b6  7e71                 jle 0x857a29
// 008579b8  57                   push edi
// 008579b9  8d442424             lea eax, [esp + 0x24]
// 008579bd  50                   push eax
// 008579be  8bce                 mov ecx, esi
// 008579c0  e8bbfcffff           call 0x857680
// 008579c5  8d4c242c             lea ecx, [esp + 0x2c]
// 008579c9  51                   push ecx
// 008579ca  8bcd                 mov ecx, ebp
// 008579cc  c644246c02           mov byte ptr [esp + 0x6c], 2
// 008579d1  e85a67f7ff           call 0x7ce130
// 008579d6  8bc8                 mov ecx, eax
// 008579d8  c644246803           mov byte ptr [esp + 0x68], 3
// 008579dd  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008579e3  50                   push eax
// 008579e4  8d4c2424             lea ecx, [esp + 0x24]
// 008579e8  ff15b4ce9e00         call dword ptr [0x9eceb4]
// 008579ee  85c0                 test eax, eax
// 008579f0  8d4c242c             lea ecx, [esp + 0x2c]
// 008579f4  0f9f442417           setg byte ptr [esp + 0x17]
// 008579f9  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008579ff  8d4c2420             lea ecx, [esp + 0x20]
// 00857a03  c644246801           mov byte ptr [esp + 0x68], 1
// 00857a08  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00857a0e  807c241700           cmp byte ptr [esp + 0x17], 0
// 00857a13  7514                 jne 0x857a29
// 00857a15  8b5620               mov edx, dword ptr [esi + 0x20]
// 00857a18  6a00                 push 0
// 00857a1a  6a00                 push 0
// 00857a1c  688b010000           push 0x18b
// 00857a21  52                   push edx
// 00857a22  47                   inc edi
// 00857a23  ffd3                 call ebx
// 00857a25  3bf8                 cmp edi, eax
// 00857a27  7c8f                 jl 0x8579b8
// 00857a29  8d442430             lea eax, [esp + 0x30]
// 00857a2d  50                   push eax
// 00857a2e  8bcd                 mov ecx, ebp
// 00857a30  e8fb66f7ff           call 0x7ce130
// 00857a35  8bc8                 mov ecx, eax
// 00857a37  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00857a3d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00857a40  50                   push eax
// 00857a41  57                   push edi
// 00857a42  6881010000           push 0x181
// 00857a47  51                   push ecx
// 00857a48  ffd3                 call ebx
// 00857a4a  8d4c2430             lea ecx, [esp + 0x30]
// 00857a4e  eb26                 jmp 0x857a76
// 00857a50  8d542434             lea edx, [esp + 0x34]
// 00857a54  52                   push edx
// 00857a55  8bcd                 mov ecx, ebp
// 00857a57  e8d466f7ff           call 0x7ce130
// 00857a5c  8bc8                 mov ecx, eax
// 00857a5e  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00857a64  50                   push eax
// 00857a65  8b4620               mov eax, dword ptr [esi + 0x20]
// 00857a68  6a00                 push 0
// 00857a6a  6880010000           push 0x180
// 00857a6f  50                   push eax
// 00857a70  ffd3                 call ebx
// 00857a72  8d4c2434             lea ecx, [esp + 0x34]
// 00857a76  8bf8                 mov edi, eax
// 00857a78  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00857a7e  85ff                 test edi, edi
// 00857a80  7c1c                 jl 0x857a9e
// 00857a82  8bcd                 mov ecx, ebp
// 00857a84  e8c710f6ff           call 0x7b8b50
// 00857a89  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00857a8c  50                   push eax
// 00857a8d  57                   push edi
// 00857a8e  689a010000           push 0x19a
// 00857a93  51                   push ecx
// 00857a94  ffd3                 call ebx
// 00857a96  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00857a9e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00857aa2  8b442418             mov eax, dword ptr [esp + 0x18]
// 00857aa6  40                   inc eax
// 00857aa7  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00857aab  89442418             mov dword ptr [esp + 0x18], eax
// 00857aaf  0f8c8cfeffff         jl 0x857941
// 00857ab5  8b5620               mov edx, dword ptr [esi + 0x20]
// 00857ab8  6a00                 push 0
// 00857aba  6a00                 push 0
// 00857abc  688b010000           push 0x18b
// 00857ac1  52                   push edx
// 00857ac2  ffd3                 call ebx
// 00857ac4  33c9                 xor ecx, ecx
// 00857ac6  85c0                 test eax, eax
// 00857ac8  0f9fc1               setg cl
// 00857acb  51                   push ecx
// 00857acc  8bce                 mov ecx, esi
// 00857ace  e84b05f5ff           call 0x7a801e
// 00857ad3  837c242400           cmp dword ptr [esp + 0x24], 0
// 00857ad8  740e                 je 0x857ae8
// 00857ada  8b5620               mov edx, dword ptr [esi + 0x20]
// 00857add  6a01                 push 1
// 00857adf  6a00                 push 0
// 00857ae1  52                   push edx
// 00857ae2  ff1578ba9e00         call dword ptr [0x9eba78]
// 00857ae8  8d4c243c             lea ecx, [esp + 0x3c]
// 00857aec  c644246800           mov byte ptr [esp + 0x68], 0
// 00857af1  e82a7cfaff           call 0x7ff720
// 00857af6  8d4c244c             lea ecx, [esp + 0x4c]
// 00857afa  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00857b02  e8270df5ff           call 0x7a882e
// 00857b07  b801000000           mov eax, 1
// 00857b0c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00857b10  64890d00000000       mov dword ptr fs:[0], ecx
// 00857b17  59                   pop ecx
// 00857b18  5f                   pop edi
// 00857b19  5e                   pop esi
// 00857b1a  5d                   pop ebp
// 00857b1b  5b                   pop ebx
// 00857b1c  83c458               add esp, 0x58
// 00857b1f  c3                   ret 
// copied from an identical function in another client (function ?UpdateList@CXTPReportSubListControl@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportSubListControl.cpp