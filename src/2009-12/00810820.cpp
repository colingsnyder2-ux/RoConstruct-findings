// roc 2009-12 00810820  unit: CXTPImageManager  size: 653 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00810820
//
// 00810820  6aff                 push -1
// 00810822  6898a09500           push 0x95a098
// 00810827  64a100000000         mov eax, dword ptr fs:[0]
// 0081082d  50                   push eax
// 0081082e  83ec24               sub esp, 0x24
// 00810831  53                   push ebx
// 00810832  55                   push ebp
// 00810833  56                   push esi
// 00810834  57                   push edi
// 00810835  a10052b600           mov eax, dword ptr [0xb65200]
// 0081083a  33c4                 xor eax, esp
// 0081083c  50                   push eax
// 0081083d  8d442438             lea eax, [esp + 0x38]
// 00810841  64a300000000         mov dword ptr fs:[0], eax
// 00810847  8bf1                 mov esi, ecx
// 00810849  8d4658               lea eax, [esi + 0x58]
// 0081084c  50                   push eax
// 0081084d  8d4c2418             lea ecx, [esp + 0x18]
// 00810851  e8babb0200           call 0x83c410
// 00810856  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0081085a  33db                 xor ebx, ebx
// 0081085c  895c2440             mov dword ptr [esp + 0x40], ebx
// 00810860  395d00               cmp dword ptr [ebp], ebx
// 00810863  0f8585010000         jne 0x8109ee
// 00810869  395c2460             cmp dword ptr [esp + 0x60], ebx
// 0081086d  7426                 je 0x810895
// 0081086f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00810873  8b542458             mov edx, dword ptr [esp + 0x58]
// 00810877  8b442454             mov eax, dword ptr [esp + 0x54]
// 0081087b  51                   push ecx
// 0081087c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00810880  52                   push edx
// 00810881  8b542450             mov edx, dword ptr [esp + 0x50]
// 00810885  50                   push eax
// 00810886  51                   push ecx
// 00810887  55                   push ebp
// 00810888  52                   push edx
// 00810889  8bce                 mov ecx, esi
// 0081088b  e830fdffff           call 0x8105c0
// 00810890  e9f1010000           jmp 0x810a86
// 00810895  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 00810899  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0081089c  57                   push edi
// 0081089d  e8fe87ffff           call 0x8090a0
// 008108a2  85c0                 test eax, eax
// 008108a4  740e                 je 0x8108b4
// 008108a6  8b442458             mov eax, dword ptr [esp + 0x58]
// 008108aa  01442450             add dword ptr [esp + 0x50], eax
// 008108ae  f7d8                 neg eax
// 008108b0  89442458             mov dword ptr [esp + 0x58], eax
// 008108b4  8b4604               mov eax, dword ptr [esi + 4]
// 008108b7  3bc3                 cmp eax, ebx
// 008108b9  0f84b7000000         je 0x810976
// 008108bf  8d5e08               lea ebx, [esi + 8]
// 008108c2  50                   push eax
// 008108c3  8bcb                 mov ecx, ebx
// 008108c5  e8c695ffff           call 0x809e90
// 008108ca  8b03                 mov eax, dword ptr [ebx]
// 008108cc  8b5038               mov edx, dword ptr [eax + 0x38]
// 008108cf  6a00                 push 0
// 008108d1  8bcb                 mov ecx, ebx
// 008108d3  ffd2                 call edx
// 008108d5  8b03                 mov eax, dword ptr [ebx]
// 008108d7  8b5034               mov edx, dword ptr [eax + 0x34]
// 008108da  68ffffff00           push 0xffffff
// 008108df  8bcb                 mov ecx, ebx
// 008108e1  ffd2                 call edx
// 008108e3  8b07                 mov eax, dword ptr [edi]
// 008108e5  8b5038               mov edx, dword ptr [eax + 0x38]
// 008108e8  6a00                 push 0
// 008108ea  8bcf                 mov ecx, edi
// 008108ec  ffd2                 call edx
// 008108ee  8944244c             mov dword ptr [esp + 0x4c], eax
// 008108f2  8b07                 mov eax, dword ptr [edi]
// 008108f4  8b5034               mov edx, dword ptr [eax + 0x34]
// 008108f7  68ffffff00           push 0xffffff
// 008108fc  8bcf                 mov ecx, edi
// 008108fe  ffd2                 call edx
// 00810900  89442448             mov dword ptr [esp + 0x48], eax
// 00810904  85db                 test ebx, ebx
// 00810906  7504                 jne 0x81090c
// 00810908  33c9                 xor ecx, ecx
// 0081090a  eb03                 jmp 0x81090f
// 0081090c  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0081090f  8b5628               mov edx, dword ptr [esi + 0x28]
// 00810912  8b4704               mov eax, dword ptr [edi + 4]
// 00810915  68c6008800           push 0x8800c6
// 0081091a  52                   push edx
// 0081091b  8b5624               mov edx, dword ptr [esi + 0x24]
// 0081091e  52                   push edx
// 0081091f  8b5504               mov edx, dword ptr [ebp + 4]
// 00810922  6a00                 push 0
// 00810924  52                   push edx
// 00810925  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00810929  51                   push ecx
// 0081092a  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0081092e  51                   push ecx
// 0081092f  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00810933  52                   push edx
// 00810934  8b542470             mov edx, dword ptr [esp + 0x70]
// 00810938  51                   push ecx
// 00810939  52                   push edx
// 0081093a  50                   push eax
// 0081093b  ff151cb19800         call dword ptr [0x98b11c]
// 00810941  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00810945  8b07                 mov eax, dword ptr [edi]
// 00810947  8b5034               mov edx, dword ptr [eax + 0x34]
// 0081094a  51                   push ecx
// 0081094b  8bcf                 mov ecx, edi
// 0081094d  ffd2                 call edx
// 0081094f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00810953  8b07                 mov eax, dword ptr [edi]
// 00810955  8b5038               mov edx, dword ptr [eax + 0x38]
// 00810958  51                   push ecx
// 00810959  8bcf                 mov ecx, edi
// 0081095b  ffd2                 call edx
// 0081095d  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00810960  85c0                 test eax, eax
// 00810962  7412                 je 0x810976
// 00810964  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00810967  50                   push eax
// 00810968  51                   push ecx
// 00810969  ff154cb19800         call dword ptr [0x98b14c]
// 0081096f  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 00810976  8b06                 mov eax, dword ptr [esi]
// 00810978  85c0                 test eax, eax
// 0081097a  0f8406010000         je 0x810a86
// 00810980  8d5e08               lea ebx, [esi + 8]
// 00810983  50                   push eax
// 00810984  8bcb                 mov ecx, ebx
// 00810986  e80595ffff           call 0x809e90
// 0081098b  85db                 test ebx, ebx
// 0081098d  7504                 jne 0x810993
// 0081098f  33c0                 xor eax, eax
// 00810991  eb03                 jmp 0x810996
// 00810993  8b4304               mov eax, dword ptr [ebx + 4]
// 00810996  85ff                 test edi, edi
// 00810998  7403                 je 0x81099d
// 0081099a  8b7f04               mov edi, dword ptr [edi + 4]
// 0081099d  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008109a0  8b5624               mov edx, dword ptr [esi + 0x24]
// 008109a3  6846006600           push 0x660046
// 008109a8  51                   push ecx
// 008109a9  8b4d04               mov ecx, dword ptr [ebp + 4]
// 008109ac  52                   push edx
// 008109ad  8b542468             mov edx, dword ptr [esp + 0x68]
// 008109b1  6a00                 push 0
// 008109b3  51                   push ecx
// 008109b4  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008109b8  50                   push eax
// 008109b9  8b442470             mov eax, dword ptr [esp + 0x70]
// 008109bd  52                   push edx
// 008109be  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008109c2  50                   push eax
// 008109c3  51                   push ecx
// 008109c4  52                   push edx
// 008109c5  57                   push edi
// 008109c6  ff151cb19800         call dword ptr [0x98b11c]
// 008109cc  8b4310               mov eax, dword ptr [ebx + 0x10]
// 008109cf  85c0                 test eax, eax
// 008109d1  0f84af000000         je 0x810a86
// 008109d7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008109da  50                   push eax
// 008109db  51                   push ecx
// 008109dc  ff154cb19800         call dword ptr [0x98b14c]
// 008109e2  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 008109e9  e998000000           jmp 0x810a86
// 008109ee  8b06                 mov eax, dword ptr [esi]
// 008109f0  8d7e08               lea edi, [esi + 8]
// 008109f3  50                   push eax
// 008109f4  8bcf                 mov ecx, edi
// 008109f6  e89594ffff           call 0x809e90
// 008109fb  8b5624               mov edx, dword ptr [esi + 0x24]
// 008109fe  8b4504               mov eax, dword ptr [ebp + 4]
// 00810a01  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00810a04  8b7628               mov esi, dword ptr [esi + 0x28]
// 00810a07  03d0                 add edx, eax
// 00810a09  03f1                 add esi, ecx
// 00810a0b  89442418             mov dword ptr [esp + 0x18], eax
// 00810a0f  89542420             mov dword ptr [esp + 0x20], edx
// 00810a13  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00810a17  89742424             mov dword ptr [esp + 0x24], esi
// 00810a1b  3bfb                 cmp edi, ebx
// 00810a1d  7504                 jne 0x810a23
// 00810a1f  33c9                 xor ecx, ecx
// 00810a21  eb03                 jmp 0x810a26
// 00810a23  8b4f04               mov ecx, dword ptr [edi + 4]
// 00810a26  8b442450             mov eax, dword ptr [esp + 0x50]
// 00810a2a  8b542458             mov edx, dword ptr [esp + 0x58]
// 00810a2e  89442428             mov dword ptr [esp + 0x28], eax
// 00810a32  03c2                 add eax, edx
// 00810a34  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00810a38  89442430             mov dword ptr [esp + 0x30], eax
// 00810a3c  8b442454             mov eax, dword ptr [esp + 0x54]
// 00810a40  8944242c             mov dword ptr [esp + 0x2c], eax
// 00810a44  03c2                 add eax, edx
// 00810a46  89442434             mov dword ptr [esp + 0x34], eax
// 00810a4a  8b442448             mov eax, dword ptr [esp + 0x48]
// 00810a4e  3bc3                 cmp eax, ebx
// 00810a50  7504                 jne 0x810a56
// 00810a52  33c0                 xor eax, eax
// 00810a54  eb03                 jmp 0x810a59
// 00810a56  8b4004               mov eax, dword ptr [eax + 4]
// 00810a59  8d542418             lea edx, [esp + 0x18]
// 00810a5d  52                   push edx
// 00810a5e  51                   push ecx
// 00810a5f  8d4c2430             lea ecx, [esp + 0x30]
// 00810a63  51                   push ecx
// 00810a64  50                   push eax
// 00810a65  e846faffff           call 0x8104b0
// 00810a6a  8bc8                 mov ecx, eax
// 00810a6c  e88f95ffff           call 0x80a000
// 00810a71  8b4710               mov eax, dword ptr [edi + 0x10]
// 00810a74  3bc3                 cmp eax, ebx
// 00810a76  740e                 je 0x810a86
// 00810a78  8b4f04               mov ecx, dword ptr [edi + 4]
// 00810a7b  50                   push eax
// 00810a7c  51                   push ecx
// 00810a7d  ff154cb19800         call dword ptr [0x98b14c]
// 00810a83  895f10               mov dword ptr [edi + 0x10], ebx
// 00810a86  8d4c2414             lea ecx, [esp + 0x14]
// 00810a8a  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 00810a92  e899b90200           call 0x83c430
// 00810a97  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00810a9b  64890d00000000       mov dword ptr fs:[0], ecx
// 00810aa2  59                   pop ecx
// 00810aa3  5f                   pop edi
// 00810aa4  5e                   pop esi
// 00810aa5  5d                   pop ebp
// 00810aa6  5b                   pop ebx
// 00810aa7  83c430               add esp, 0x30
// 00810aaa  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Draw@CXTPImageManagerResource@@QAEXPAVCDC@@PAUXTP_IMAGERESOURCE_INFO@@VCPoint@@VCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp