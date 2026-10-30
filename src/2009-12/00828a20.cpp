// roc 2009-12 00828a20  unit: CXTPReportHeader  size: 468 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00828a20
//
// 00828a20  83ec08               sub esp, 8
// 00828a23  53                   push ebx
// 00828a24  55                   push ebp
// 00828a25  56                   push esi
// 00828a26  8bd9                 mov ebx, ecx
// 00828a28  33f6                 xor esi, esi
// 00828a2a  57                   push edi
// 00828a2b  39b38c000000         cmp dword ptr [ebx + 0x8c], esi
// 00828a31  0f8442010000         je 0x828b79
// 00828a37  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00828a3b  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00828a3e  33ed                 xor ebp, ebp
// 00828a40  3b7830               cmp edi, dword ptr [eax + 0x30]
// 00828a43  89742414             mov dword ptr [esp + 0x14], esi
// 00828a47  0f8d19010000         jge 0x828b66
// 00828a4d  8d4900               lea ecx, [ecx]
// 00828a50  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00828a53  85ff                 test edi, edi
// 00828a55  7c0d                 jl 0x828a64
// 00828a57  3b7830               cmp edi, dword ptr [eax + 0x30]
// 00828a5a  7d08                 jge 0x828a64
// 00828a5c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00828a5f  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 00828a62  eb02                 jmp 0x828a66
// 00828a64  33f6                 xor esi, esi
// 00828a66  8bce                 mov ecx, esi
// 00828a68  e853b00800           call 0x8b3ac0
// 00828a6d  85c0                 test eax, eax
// 00828a6f  7420                 je 0x828a91
// 00828a71  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 00828a78  740c                 je 0x828a86
// 00828a7a  03aea0000000         add ebp, dword ptr [esi + 0xa0]
// 00828a80  89742414             mov dword ptr [esp + 0x14], esi
// 00828a84  eb0b                 jmp 0x828a91
// 00828a86  8bce                 mov ecx, esi
// 00828a88  e8f3f6ffff           call 0x828180
// 00828a8d  2944241c             sub dword ptr [esp + 0x1c], eax
// 00828a91  8b5320               mov edx, dword ptr [ebx + 0x20]
// 00828a94  47                   inc edi
// 00828a95  3b7a30               cmp edi, dword ptr [edx + 0x30]
// 00828a98  7cb6                 jl 0x828a50
// 00828a9a  837c241400           cmp dword ptr [esp + 0x14], 0
// 00828a9f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00828aa3  0f84bd000000         je 0x828b66
// 00828aa9  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00828aad  85ff                 test edi, edi
// 00828aaf  0f8eb1000000         jle 0x828b66
// 00828ab5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00828ab9  8bc2                 mov eax, edx
// 00828abb  3b6830               cmp ebp, dword ptr [eax + 0x30]
// 00828abe  0f8da2000000         jge 0x828b66
// 00828ac4  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00828ac7  85ed                 test ebp, ebp
// 00828ac9  7c0d                 jl 0x828ad8
// 00828acb  3b6830               cmp ebp, dword ptr [eax + 0x30]
// 00828ace  7d08                 jge 0x828ad8
// 00828ad0  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00828ad3  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 00828ad6  eb02                 jmp 0x828ada
// 00828ad8  33f6                 xor esi, esi
// 00828ada  8bce                 mov ecx, esi
// 00828adc  e8dfaf0800           call 0x8b3ac0
// 00828ae1  85c0                 test eax, eax
// 00828ae3  7474                 je 0x828b59
// 00828ae5  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 00828aec  746b                 je 0x828b59
// 00828aee  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00828af2  7518                 jne 0x828b0c
// 00828af4  8bce                 mov ecx, esi
// 00828af6  e855f4ffff           call 0x827f50
// 00828afb  3bf8                 cmp edi, eax
// 00828afd  7e04                 jle 0x828b03
// 00828aff  8bc7                 mov eax, edi
// 00828b01  eb50                 jmp 0x828b53
// 00828b03  8bce                 mov ecx, esi
// 00828b05  e846f4ffff           call 0x827f50
// 00828b0a  eb47                 jmp 0x828b53
// 00828b0c  b801000000           mov eax, 1
// 00828b11  39442410             cmp dword ptr [esp + 0x10], eax
// 00828b15  7d04                 jge 0x828b1b
// 00828b17  89442410             mov dword ptr [esp + 0x10], eax
// 00828b1b  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00828b21  0fafc7               imul eax, edi
// 00828b24  99                   cdq 
// 00828b25  f77c2410             idiv dword ptr [esp + 0x10]
// 00828b29  8bce                 mov ecx, esi
// 00828b2b  8bf8                 mov edi, eax
// 00828b2d  e81ef4ffff           call 0x827f50
// 00828b32  3bf8                 cmp edi, eax
// 00828b34  7e04                 jle 0x828b3a
// 00828b36  8bc7                 mov eax, edi
// 00828b38  eb07                 jmp 0x828b41
// 00828b3a  8bce                 mov ecx, esi
// 00828b3c  e80ff4ffff           call 0x827f50
// 00828b41  2944241c             sub dword ptr [esp + 0x1c], eax
// 00828b45  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 00828b4b  29542410             sub dword ptr [esp + 0x10], edx
// 00828b4f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00828b53  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00828b59  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00828b5c  45                   inc ebp
// 00828b5d  3b6830               cmp ebp, dword ptr [eax + 0x30]
// 00828b60  0f8c5effffff         jl 0x828ac4
// 00828b66  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00828b69  8b4878               mov ecx, dword ptr [eax + 0x78]
// 00828b6c  83c070               add eax, 0x70
// 00828b6f  2b08                 sub ecx, dword ptr [eax]
// 00828b71  898b9c000000         mov dword ptr [ebx + 0x9c], ecx
// 00828b77  eb65                 jmp 0x828bde
// 00828b79  8b5320               mov edx, dword ptr [ebx + 0x20]
// 00828b7c  89b39c000000         mov dword ptr [ebx + 0x9c], esi
// 00828b82  397230               cmp dword ptr [edx + 0x30], esi
// 00828b85  7e37                 jle 0x828bbe
// 00828b87  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00828b8a  85f6                 test esi, esi
// 00828b8c  7c27                 jl 0x828bb5
// 00828b8e  3b7030               cmp esi, dword ptr [eax + 0x30]
// 00828b91  7d22                 jge 0x828bb5
// 00828b93  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00828b96  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 00828b99  85ff                 test edi, edi
// 00828b9b  7418                 je 0x828bb5
// 00828b9d  8bcf                 mov ecx, edi
// 00828b9f  e81caf0800           call 0x8b3ac0
// 00828ba4  85c0                 test eax, eax
// 00828ba6  740d                 je 0x828bb5
// 00828ba8  8bcf                 mov ecx, edi
// 00828baa  e8d1f5ffff           call 0x828180
// 00828baf  01839c000000         add dword ptr [ebx + 0x9c], eax
// 00828bb5  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00828bb8  46                   inc esi
// 00828bb9  3b7130               cmp esi, dword ptr [ecx + 0x30]
// 00828bbc  7cc9                 jl 0x828b87
// 00828bbe  83bb9c00000000       cmp dword ptr [ebx + 0x9c], 0
// 00828bc5  750a                 jne 0x828bd1
// 00828bc7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00828bcb  89939c000000         mov dword ptr [ebx + 0x9c], edx
// 00828bd1  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00828bd4  8b01                 mov eax, dword ptr [ecx]
// 00828bd6  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00828bdc  ffd2                 call edx
// 00828bde  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00828be1  6a00                 push 0
// 00828be3  6abc                 push -0x44
// 00828be5  e886a6ffff           call 0x823270
// 00828bea  5f                   pop edi
// 00828beb  5e                   pop esi
// 00828bec  5d                   pop ebp
// 00828bed  5b                   pop ebx
// 00828bee  83c408               add esp, 8
// 00828bf1  c20800               ret 8
// copied from an identical function in another client (function ?AdjustColumnsWidth@CXTPReportHeader@@IAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHeader.cpp