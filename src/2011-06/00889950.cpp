// roc 2011-06 00889950  unit: CXTPRibbonTheme  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00889950
//
// 00889950  83ec30               sub esp, 0x30
// 00889953  53                   push ebx
// 00889954  55                   push ebp
// 00889955  56                   push esi
// 00889956  57                   push edi
// 00889957  680403ad00           push 0xad0304
// 0088995c  8bf9                 mov edi, ecx
// 0088995e  e82d590000           call 0x88f290
// 00889963  8be8                 mov ebp, eax
// 00889965  33db                 xor ebx, ebx
// 00889967  3beb                 cmp ebp, ebx
// 00889969  753b                 jne 0x8899a6
// 0088996b  8b442458             mov eax, dword ptr [esp + 0x58]
// 0088996f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00889973  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00889977  50                   push eax
// 00889978  83ec10               sub esp, 0x10
// 0088997b  8bc4                 mov eax, esp
// 0088997d  8908                 mov dword ptr [eax], ecx
// 0088997f  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00889983  895004               mov dword ptr [eax + 4], edx
// 00889986  8b542468             mov edx, dword ptr [esp + 0x68]
// 0088998a  894808               mov dword ptr [eax + 8], ecx
// 0088998d  89500c               mov dword ptr [eax + 0xc], edx
// 00889990  8b442458             mov eax, dword ptr [esp + 0x58]
// 00889994  50                   push eax
// 00889995  8bcf                 mov ecx, edi
// 00889997  e884120100           call 0x89ac20
// 0088999c  5f                   pop edi
// 0088999d  5e                   pop esi
// 0088999e  5d                   pop ebp
// 0088999f  5b                   pop ebx
// 008899a0  83c430               add esp, 0x30
// 008899a3  c21800               ret 0x18
// 008899a6  be01000000           mov esi, 1
// 008899ab  56                   push esi
// 008899ac  53                   push ebx
// 008899ad  8d4c2438             lea ecx, [esp + 0x38]
// 008899b1  51                   push ecx
// 008899b2  8bcd                 mov ecx, ebp
// 008899b4  8974241c             mov dword ptr [esp + 0x1c], esi
// 008899b8  89742420             mov dword ptr [esp + 0x20], esi
// 008899bc  89742424             mov dword ptr [esp + 0x24], esi
// 008899c0  89742428             mov dword ptr [esp + 0x28], esi
// 008899c4  e8473d0600           call 0x8ed710
// 008899c9  68ff00ff00           push 0xff00ff
// 008899ce  8d542414             lea edx, [esp + 0x14]
// 008899d2  52                   push edx
// 008899d3  8b10                 mov edx, dword ptr [eax]
// 008899d5  83ec10               sub esp, 0x10
// 008899d8  8bcc                 mov ecx, esp
// 008899da  8911                 mov dword ptr [ecx], edx
// 008899dc  8b5004               mov edx, dword ptr [eax + 4]
// 008899df  895104               mov dword ptr [ecx + 4], edx
// 008899e2  8b5008               mov edx, dword ptr [eax + 8]
// 008899e5  8b400c               mov eax, dword ptr [eax + 0xc]
// 008899e8  895108               mov dword ptr [ecx + 8], edx
// 008899eb  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008899ef  89410c               mov dword ptr [ecx + 0xc], eax
// 008899f2  8d4c2460             lea ecx, [esp + 0x60]
// 008899f6  51                   push ecx
// 008899f7  52                   push edx
// 008899f8  8bcd                 mov ecx, ebp
// 008899fa  e851420600           call 0x8edc50
// 008899ff  837c245802           cmp dword ptr [esp + 0x58], 2
// 00889a04  8bcf                 mov ecx, edi
// 00889a06  0f85b8000000         jne 0x889ac4
// 00889a0c  68e802ad00           push 0xad02e8
// 00889a11  e87a580000           call 0x88f290
// 00889a16  56                   push esi
// 00889a17  8be8                 mov ebp, eax
// 00889a19  53                   push ebx
// 00889a1a  8d442418             lea eax, [esp + 0x18]
// 00889a1e  50                   push eax
// 00889a1f  8bcd                 mov ecx, ebp
// 00889a21  e8ea3c0600           call 0x8ed710
// 00889a26  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00889a2a  8b542448             mov edx, dword ptr [esp + 0x48]
// 00889a2e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00889a32  2b742410             sub esi, dword ptr [esp + 0x10]
// 00889a36  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00889a3a  8d040a               lea eax, [edx + ecx]
// 00889a3d  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 00889a41  99                   cdq 
// 00889a42  2bc2                 sub eax, edx
// 00889a44  8bc8                 mov ecx, eax
// 00889a46  8bc6                 mov eax, esi
// 00889a48  99                   cdq 
// 00889a49  2bc2                 sub eax, edx
// 00889a4b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00889a4f  d1f8                 sar eax, 1
// 00889a51  d1f9                 sar ecx, 1
// 00889a53  2bc8                 sub ecx, eax
// 00889a55  8b442414             mov eax, dword ptr [esp + 0x14]
// 00889a59  2bc2                 sub eax, edx
// 00889a5b  03442454             add eax, dword ptr [esp + 0x54]
// 00889a5f  68ff00ff00           push 0xff00ff
// 00889a64  89442438             mov dword ptr [esp + 0x38], eax
// 00889a68  03c7                 add eax, edi
// 00889a6a  89442440             mov dword ptr [esp + 0x40], eax
// 00889a6e  894c2434             mov dword ptr [esp + 0x34], ecx
// 00889a72  03ce                 add ecx, esi
// 00889a74  8d442424             lea eax, [esp + 0x24]
// 00889a78  50                   push eax
// 00889a79  894c2440             mov dword ptr [esp + 0x40], ecx
// 00889a7d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00889a81  83ec10               sub esp, 0x10
// 00889a84  8bc4                 mov eax, esp
// 00889a86  8908                 mov dword ptr [eax], ecx
// 00889a88  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00889a8c  894804               mov dword ptr [eax + 4], ecx
// 00889a8f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00889a93  894808               mov dword ptr [eax + 8], ecx
// 00889a96  89500c               mov dword ptr [eax + 0xc], edx
// 00889a99  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00889a9d  8d542448             lea edx, [esp + 0x48]
// 00889aa1  52                   push edx
// 00889aa2  8bcd                 mov ecx, ebp
// 00889aa4  50                   push eax
// 00889aa5  895c2440             mov dword ptr [esp + 0x40], ebx
// 00889aa9  895c2444             mov dword ptr [esp + 0x44], ebx
// 00889aad  895c2448             mov dword ptr [esp + 0x48], ebx
// 00889ab1  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00889ab5  e896410600           call 0x8edc50
// 00889aba  5f                   pop edi
// 00889abb  5e                   pop esi
// 00889abc  5d                   pop ebp
// 00889abd  5b                   pop ebx
// 00889abe  83c430               add esp, 0x30
// 00889ac1  c21800               ret 0x18
// 00889ac4  68cc02ad00           push 0xad02cc
// 00889ac9  e8c2570000           call 0x88f290
// 00889ace  56                   push esi
// 00889acf  53                   push ebx
// 00889ad0  8d4c2418             lea ecx, [esp + 0x18]
// 00889ad4  8bf8                 mov edi, eax
// 00889ad6  51                   push ecx
// 00889ad7  8bcf                 mov ecx, edi
// 00889ad9  e8323c0600           call 0x8ed710
// 00889ade  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00889ae2  8b442410             mov eax, dword ptr [esp + 0x10]
// 00889ae6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00889aea  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00889aee  2bf1                 sub esi, ecx
// 00889af0  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00889af4  8bd5                 mov edx, ebp
// 00889af6  034c2454             add ecx, dword ptr [esp + 0x54]
// 00889afa  2bd0                 sub edx, eax
// 00889afc  2bc5                 sub eax, ebp
// 00889afe  03442450             add eax, dword ptr [esp + 0x50]
// 00889b02  68ff00ff00           push 0xff00ff
// 00889b07  89442424             mov dword ptr [esp + 0x24], eax
// 00889b0b  03c2                 add eax, edx
// 00889b0d  894c2428             mov dword ptr [esp + 0x28], ecx
// 00889b11  03ce                 add ecx, esi
// 00889b13  8d542434             lea edx, [esp + 0x34]
// 00889b17  52                   push edx
// 00889b18  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00889b1c  83ec10               sub esp, 0x10
// 00889b1f  894c2444             mov dword ptr [esp + 0x44], ecx
// 00889b23  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00889b27  89442440             mov dword ptr [esp + 0x40], eax
// 00889b2b  8bc4                 mov eax, esp
// 00889b2d  8908                 mov dword ptr [eax], ecx
// 00889b2f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00889b33  895004               mov dword ptr [eax + 4], edx
// 00889b36  896808               mov dword ptr [eax + 8], ebp
// 00889b39  89480c               mov dword ptr [eax + 0xc], ecx
// 00889b3c  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00889b40  8d542438             lea edx, [esp + 0x38]
// 00889b44  52                   push edx
// 00889b45  8bcf                 mov ecx, edi
// 00889b47  50                   push eax
// 00889b48  895c2450             mov dword ptr [esp + 0x50], ebx
// 00889b4c  895c2454             mov dword ptr [esp + 0x54], ebx
// 00889b50  895c2458             mov dword ptr [esp + 0x58], ebx
// 00889b54  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00889b58  e8f3400600           call 0x8edc50
// 00889b5d  5f                   pop edi
// 00889b5e  5e                   pop esi
// 00889b5f  5d                   pop ebp
// 00889b60  5b                   pop ebx
// 00889b61  83c430               add esp, 0x30
// 00889b64  c21800               ret 0x18
// library xtp-15.2.1/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawPopupResizeGripper@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonTheme.cpp
