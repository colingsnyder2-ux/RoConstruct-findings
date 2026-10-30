// roc 2011-06 0045a850  unit: CBrowserDocManager  size: 744 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045a850
//
// 0045a850  83ec1c               sub esp, 0x1c
// 0045a853  55                   push ebp
// 0045a854  33ed                 xor ebp, ebp
// 0045a856  396c2424             cmp dword ptr [esp + 0x24], ebp
// 0045a85a  750c                 jne 0x45a868
// 0045a85c  b857000780           mov eax, 0x80070057
// 0045a861  5d                   pop ebp
// 0045a862  83c41c               add esp, 0x1c
// 0045a865  c21800               ret 0x18
// 0045a868  56                   push esi
// 0045a869  8b742434             mov esi, dword ptr [esp + 0x34]
// 0045a86d  57                   push edi
// 0045a86e  3bf5                 cmp esi, ebp
// 0045a870  0f848b020000         je 0x45ab01
// 0045a876  396c243c             cmp dword ptr [esp + 0x3c], ebp
// 0045a87a  0f8481020000         je 0x45ab01
// 0045a880  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0045a884  3bfd                 cmp edi, ebp
// 0045a886  0f8475020000         je 0x45ab01
// 0045a88c  53                   push ebx
// 0045a88d  896c2410             mov dword ptr [esp + 0x10], ebp
// 0045a891  896c2414             mov dword ptr [esp + 0x14], ebp
// 0045a895  896c2418             mov dword ptr [esp + 0x18], ebp
// 0045a899  396e08               cmp dword ptr [esi + 8], ebp
// 0045a89c  0f84c1010000         je 0x45aa63
// 0045a8a2  8b1dd80aa400         mov ebx, dword ptr [0xa40ad8]
// 0045a8a8  eb0a                 jmp 0x45a8b4
// 0045a8aa  8d9b00000000         lea ebx, [ebx]
// 0045a8b0  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0045a8b4  392e                 cmp dword ptr [esi], ebp
// 0045a8b6  0f8474010000         je 0x45aa30
// 0045a8bc  8d44241c             lea eax, [esp + 0x1c]
// 0045a8c0  50                   push eax
// 0045a8c1  ff15ac0aa400         call dword ptr [0xa40aac]
// 0045a8c7  396e14               cmp dword ptr [esi + 0x14], ebp
// 0045a8ca  0f848f000000         je 0x45a95f
// 0045a8d0  0fb74618             movzx eax, word ptr [esi + 0x18]
// 0045a8d4  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0045a8d7  037c2440             add edi, dword ptr [esp + 0x40]
// 0045a8db  83c0f8               add eax, -8
// 0045a8de  83f80f               cmp eax, 0xf
// 0045a8e1  7772                 ja 0x45a955
// 0045a8e3  0fb68828ab4500       movzx ecx, byte ptr [eax + 0x45ab28]
// 0045a8ea  ff248d10ab4500       jmp dword ptr [ecx*4 + 0x45ab10]
// 0045a8f1  8a17                 mov dl, byte ptr [edi]
// 0045a8f3  88542424             mov byte ptr [esp + 0x24], dl
// 0045a8f7  eb35                 jmp 0x45a92e
// 0045a8f9  668b07               mov ax, word ptr [edi]
// 0045a8fc  6689442424           mov word ptr [esp + 0x24], ax
// 0045a901  eb2b                 jmp 0x45a92e
// 0045a903  668b0f               mov cx, word ptr [edi]
// 0045a906  66894c2424           mov word ptr [esp + 0x24], cx
// 0045a90b  eb21                 jmp 0x45a92e
// 0045a90d  8b17                 mov edx, dword ptr [edi]
// 0045a90f  89542424             mov dword ptr [esp + 0x24], edx
// 0045a913  eb19                 jmp 0x45a92e
// 0045a915  8b07                 mov eax, dword ptr [edi]
// 0045a917  50                   push eax
// 0045a918  ff15bc0aa400         call dword ptr [0xa40abc]
// 0045a91e  89442424             mov dword ptr [esp + 0x24], eax
// 0045a922  3bc5                 cmp eax, ebp
// 0045a924  7508                 jne 0x45a92e
// 0045a926  392f                 cmp dword ptr [edi], ebp
// 0045a928  0f8541010000         jne 0x45aa6f
// 0045a92e  668b4e18             mov cx, word ptr [esi + 0x18]
// 0045a932  8b442430             mov eax, dword ptr [esp + 0x30]
// 0045a936  8b10                 mov edx, dword ptr [eax]
// 0045a938  8b5210               mov edx, dword ptr [edx + 0x10]
// 0045a93b  66894c241c           mov word ptr [esp + 0x1c], cx
// 0045a940  8d4c241c             lea ecx, [esp + 0x1c]
// 0045a944  51                   push ecx
// 0045a945  8b0e                 mov ecx, dword ptr [esi]
// 0045a947  51                   push ecx
// 0045a948  50                   push eax
// 0045a949  ffd2                 call edx
// 0045a94b  8bf0                 mov esi, eax
// 0045a94d  3bf5                 cmp esi, ebp
// 0045a94f  0f8c40010000         jl 0x45aa95
// 0045a955  8d44241c             lea eax, [esp + 0x1c]
// 0045a959  50                   push eax
// 0045a95a  e9cf000000           jmp 0x45aa2e
// 0045a95f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0045a963  394e0c               cmp dword ptr [esi + 0xc], ecx
// 0045a966  743b                 je 0x45a9a3
// 0045a968  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045a96c  3bc5                 cmp eax, ebp
// 0045a96e  740c                 je 0x45a97c
// 0045a970  896c2410             mov dword ptr [esp + 0x10], ebp
// 0045a974  8b10                 mov edx, dword ptr [eax]
// 0045a976  50                   push eax
// 0045a977  8b4208               mov eax, dword ptr [edx + 8]
// 0045a97a  ffd0                 call eax
// 0045a97c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0045a97f  3bc5                 cmp eax, ebp
// 0045a981  0f8431010000         je 0x45aab8
// 0045a987  8b0f                 mov ecx, dword ptr [edi]
// 0045a989  8d542410             lea edx, [esp + 0x10]
// 0045a98d  52                   push edx
// 0045a98e  50                   push eax
// 0045a98f  8b01                 mov eax, dword ptr [ecx]
// 0045a991  57                   push edi
// 0045a992  ffd0                 call eax
// 0045a994  85c0                 test eax, eax
// 0045a996  0f8c1c010000         jl 0x45aab8
// 0045a99c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0045a99f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0045a9a3  8b4604               mov eax, dword ptr [esi + 4]
// 0045a9a6  8d54241c             lea edx, [esp + 0x1c]
// 0045a9aa  52                   push edx
// 0045a9ab  50                   push eax
// 0045a9ac  8b442418             mov eax, dword ptr [esp + 0x18]
// 0045a9b0  50                   push eax
// 0045a9b1  e85aebffff           call 0x459510
// 0045a9b6  83c40c               add esp, 0xc
// 0045a9b9  85c0                 test eax, eax
// 0045a9bb  0f8cf7000000         jl 0x45aab8
// 0045a9c1  0fb74618             movzx eax, word ptr [esi + 0x18]
// 0045a9c5  663bc5               cmp ax, bp
// 0045a9c8  7427                 je 0x45a9f1
// 0045a9ca  668b4c241c           mov cx, word ptr [esp + 0x1c]
// 0045a9cf  663bc1               cmp ax, cx
// 0045a9d2  7422                 je 0x45a9f6
// 0045a9d4  0fb7c0               movzx eax, ax
// 0045a9d7  50                   push eax
// 0045a9d8  55                   push ebp
// 0045a9d9  8d4c2424             lea ecx, [esp + 0x24]
// 0045a9dd  51                   push ecx
// 0045a9de  8bd1                 mov edx, ecx
// 0045a9e0  52                   push edx
// 0045a9e1  ff15a40aa400         call dword ptr [0xa40aa4]
// 0045a9e7  8bf8                 mov edi, eax
// 0045a9e9  3bfd                 cmp edi, ebp
// 0045a9eb  0f8ced000000         jl 0x45aade
// 0045a9f1  668b4c241c           mov cx, word ptr [esp + 0x1c]
// 0045a9f6  6683f90d             cmp cx, 0xd
// 0045a9fa  7406                 je 0x45aa02
// 0045a9fc  6683f909             cmp cx, 9
// 0045aa00  750d                 jne 0x45aa0f
// 0045aa02  396c2424             cmp dword ptr [esp + 0x24], ebp
// 0045aa06  7507                 jne 0x45aa0f
// 0045aa08  8d44241c             lea eax, [esp + 0x1c]
// 0045aa0c  50                   push eax
// 0045aa0d  eb1f                 jmp 0x45aa2e
// 0045aa0f  8b442430             mov eax, dword ptr [esp + 0x30]
// 0045aa13  8b08                 mov ecx, dword ptr [eax]
// 0045aa15  8d54241c             lea edx, [esp + 0x1c]
// 0045aa19  52                   push edx
// 0045aa1a  8b16                 mov edx, dword ptr [esi]
// 0045aa1c  52                   push edx
// 0045aa1d  50                   push eax
// 0045aa1e  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0045aa21  ffd0                 call eax
// 0045aa23  8bf0                 mov esi, eax
// 0045aa25  3bf5                 cmp esi, ebp
// 0045aa27  8d4c241c             lea ecx, [esp + 0x1c]
// 0045aa2b  51                   push ecx
// 0045aa2c  7c6c                 jl 0x45aa9a
// 0045aa2e  ffd3                 call ebx
// 0045aa30  8b442418             mov eax, dword ptr [esp + 0x18]
// 0045aa34  40                   inc eax
// 0045aa35  8d14c500000000       lea edx, [eax*8]
// 0045aa3c  2bd0                 sub edx, eax
// 0045aa3e  89442418             mov dword ptr [esp + 0x18], eax
// 0045aa42  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0045aa46  396c9008             cmp dword ptr [eax + edx*4 + 8], ebp
// 0045aa4a  8d3490               lea esi, [eax + edx*4]
// 0045aa4d  0f855dfeffff         jne 0x45a8b0
// 0045aa53  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045aa57  3bc5                 cmp eax, ebp
// 0045aa59  7408                 je 0x45aa63
// 0045aa5b  8b08                 mov ecx, dword ptr [eax]
// 0045aa5d  8b5108               mov edx, dword ptr [ecx + 8]
// 0045aa60  50                   push eax
// 0045aa61  ffd2                 call edx
// 0045aa63  5b                   pop ebx
// 0045aa64  5f                   pop edi
// 0045aa65  5e                   pop esi
// 0045aa66  33c0                 xor eax, eax
// 0045aa68  5d                   pop ebp
// 0045aa69  83c41c               add esp, 0x1c
// 0045aa6c  c21800               ret 0x18
// 0045aa6f  8d4c241c             lea ecx, [esp + 0x1c]
// 0045aa73  51                   push ecx
// 0045aa74  ffd3                 call ebx
// 0045aa76  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045aa7a  3bc5                 cmp eax, ebp
// 0045aa7c  7408                 je 0x45aa86
// 0045aa7e  8b10                 mov edx, dword ptr [eax]
// 0045aa80  50                   push eax
// 0045aa81  8b4208               mov eax, dword ptr [edx + 8]
// 0045aa84  ffd0                 call eax
// 0045aa86  5b                   pop ebx
// 0045aa87  5f                   pop edi
// 0045aa88  5e                   pop esi
// 0045aa89  b80e000780           mov eax, 0x8007000e
// 0045aa8e  5d                   pop ebp
// 0045aa8f  83c41c               add esp, 0x1c
// 0045aa92  c21800               ret 0x18
// 0045aa95  8d4c241c             lea ecx, [esp + 0x1c]
// 0045aa99  51                   push ecx
// 0045aa9a  ffd3                 call ebx
// 0045aa9c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045aaa0  3bc5                 cmp eax, ebp
// 0045aaa2  7408                 je 0x45aaac
// 0045aaa4  8b10                 mov edx, dword ptr [eax]
// 0045aaa6  50                   push eax
// 0045aaa7  8b4208               mov eax, dword ptr [edx + 8]
// 0045aaaa  ffd0                 call eax
// 0045aaac  5b                   pop ebx
// 0045aaad  5f                   pop edi
// 0045aaae  8bc6                 mov eax, esi
// 0045aab0  5e                   pop esi
// 0045aab1  5d                   pop ebp
// 0045aab2  83c41c               add esp, 0x1c
// 0045aab5  c21800               ret 0x18
// 0045aab8  8d4c241c             lea ecx, [esp + 0x1c]
// 0045aabc  51                   push ecx
// 0045aabd  ffd3                 call ebx
// 0045aabf  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045aac3  3bc5                 cmp eax, ebp
// 0045aac5  7408                 je 0x45aacf
// 0045aac7  8b10                 mov edx, dword ptr [eax]
// 0045aac9  50                   push eax
// 0045aaca  8b4208               mov eax, dword ptr [edx + 8]
// 0045aacd  ffd0                 call eax
// 0045aacf  5b                   pop ebx
// 0045aad0  5f                   pop edi
// 0045aad1  5e                   pop esi
// 0045aad2  b805400080           mov eax, 0x80004005
// 0045aad7  5d                   pop ebp
// 0045aad8  83c41c               add esp, 0x1c
// 0045aadb  c21800               ret 0x18
// 0045aade  8d4c241c             lea ecx, [esp + 0x1c]
// 0045aae2  51                   push ecx
// 0045aae3  ffd3                 call ebx
// 0045aae5  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045aae9  3bc5                 cmp eax, ebp
// 0045aaeb  7408                 je 0x45aaf5
// 0045aaed  8b10                 mov edx, dword ptr [eax]
// 0045aaef  50                   push eax
// 0045aaf0  8b4208               mov eax, dword ptr [edx + 8]
// 0045aaf3  ffd0                 call eax
// 0045aaf5  5b                   pop ebx
// 0045aaf6  8bc7                 mov eax, edi
// 0045aaf8  5f                   pop edi
// 0045aaf9  5e                   pop esi
// 0045aafa  5d                   pop ebp
// 0045aafb  83c41c               add esp, 0x1c
// 0045aafe  c21800               ret 0x18
// 0045ab01  5f                   pop edi
// 0045ab02  5e                   pop esi
// 0045ab03  b857000780           mov eax, 0x80070057
// 0045ab08  5d                   pop ebp
// 0045ab09  83c41c               add esp, 0x1c
// 0045ab0c  c21800               ret 0x18
// 0045ab0f  90                   nop 
// 0045ab10  15a94500f9           adc eax, 0xf90045a9
// 0045ab15  a845                 test al, 0x45
// 0045ab17  00f1                 add cl, dh
// 0045ab19  a845                 test al, 0x45
// 0045ab1b  0003                 add byte ptr [ebx], al
// 0045ab1d  a945000da9           test eax, 0xa90d0045
// 0045ab22  45                   inc ebp
// 0045ab23  0055a9               add byte ptr [ebp - 0x57], dl
// 0045ab26  45                   inc ebp
// 0045ab27  0000                 add byte ptr [eax], al
// 0045ab29  0505010505           add eax, 0x5050105
// 0045ab2e  0505020203           add eax, 0x3020205
// 0045ab33  0405                 add al, 5
// copied from an identical function in another client (function _AtlIPersistPropertyBag_Save@24)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-dll atl.cpp