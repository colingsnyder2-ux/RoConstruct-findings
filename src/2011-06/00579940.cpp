// roc 2011-06 00579940  unit: seg_00570000  size: 450 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00579940
//
// 00579940  81ec28040000         sub esp, 0x428
// 00579946  53                   push ebx
// 00579947  55                   push ebp
// 00579948  8bac2438040000       mov ebp, dword ptr [esp + 0x438]
// 0057994f  56                   push esi
// 00579950  8b7070               mov esi, dword ptr [eax + 0x70]
// 00579953  57                   push edi
// 00579954  8bf9                 mov edi, ecx
// 00579956  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 0057995d  8d540918             lea edx, [ecx + ecx + 0x18]
// 00579961  d1fa                 sar edx, 1
// 00579963  8954242c             mov dword ptr [esp + 0x2c], edx
// 00579967  8d5f1c               lea ebx, [edi + 0x1c]
// 0057996a  8d143b               lea edx, [ebx + edi]
// 0057996d  d1fa                 sar edx, 1
// 0057996f  89542418             mov dword ptr [esp + 0x18], edx
// 00579973  8d542d18             lea edx, [ebp + ebp + 0x18]
// 00579977  d1fa                 sar edx, 1
// 00579979  89742430             mov dword ptr [esp + 0x30], esi
// 0057997d  89542428             mov dword ptr [esp + 0x28], edx
// 00579981  c7442414ffffff7f     mov dword ptr [esp + 0x14], 0x7fffffff
// 00579989  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00579991  85f6                 test esi, esi
// 00579993  0f8e3c010000         jle 0x579ad5
// 00579999  8b4074               mov eax, dword ptr [eax + 0x74]
// 0057999c  8b10                 mov edx, dword ptr [eax]
// 0057999e  89542434             mov dword ptr [esp + 0x34], edx
// 005799a2  8b5004               mov edx, dword ptr [eax + 4]
// 005799a5  8b4008               mov eax, dword ptr [eax + 8]
// 005799a8  89542424             mov dword ptr [esp + 0x24], edx
// 005799ac  8944241c             mov dword ptr [esp + 0x1c], eax
// 005799b0  8b542434             mov edx, dword ptr [esp + 0x34]
// 005799b4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005799b8  0fb60402             movzx eax, byte ptr [edx + eax]
// 005799bc  3bc1                 cmp eax, ecx
// 005799be  7d3c                 jge 0x5799fc
// 005799c0  8bd0                 mov edx, eax
// 005799c2  2bd1                 sub edx, ecx
// 005799c4  03d2                 add edx, edx
// 005799c6  0fafd2               imul edx, edx
// 005799c9  83c118               add ecx, 0x18
// 005799cc  2bc1                 sub eax, ecx
// 005799ce  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005799d2  8b742424             mov esi, dword ptr [esp + 0x24]
// 005799d6  0fb60c0e             movzx ecx, byte ptr [esi + ecx]
// 005799da  03c0                 add eax, eax
// 005799dc  0fafc0               imul eax, eax
// 005799df  3bcf                 cmp ecx, edi
// 005799e1  7d37                 jge 0x579a1a
// 005799e3  8bf1                 mov esi, ecx
// 005799e5  2bf7                 sub esi, edi
// 005799e7  8d3476               lea esi, [esi + esi*2]
// 005799ea  8bee                 mov ebp, esi
// 005799ec  0fafee               imul ebp, esi
// 005799ef  03d5                 add edx, ebp
// 005799f1  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 005799f8  2bcb                 sub ecx, ebx
// 005799fa  eb39                 jmp 0x579a35
// 005799fc  8d7118               lea esi, [ecx + 0x18]
// 005799ff  3bc6                 cmp eax, esi
// 00579a01  7e0b                 jle 0x579a0e
// 00579a03  8bd0                 mov edx, eax
// 00579a05  2bd6                 sub edx, esi
// 00579a07  03d2                 add edx, edx
// 00579a09  0fafd2               imul edx, edx
// 00579a0c  ebbe                 jmp 0x5799cc
// 00579a0e  33d2                 xor edx, edx
// 00579a10  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00579a14  7fb6                 jg 0x5799cc
// 00579a16  2bc6                 sub eax, esi
// 00579a18  ebb4                 jmp 0x5799ce
// 00579a1a  3bcb                 cmp ecx, ebx
// 00579a1c  7e4a                 jle 0x579a68
// 00579a1e  8bf1                 mov esi, ecx
// 00579a20  2bf3                 sub esi, ebx
// 00579a22  8d3476               lea esi, [esi + esi*2]
// 00579a25  8bee                 mov ebp, esi
// 00579a27  0fafee               imul ebp, esi
// 00579a2a  03d5                 add edx, ebp
// 00579a2c  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00579a33  2bcf                 sub ecx, edi
// 00579a35  8d0c49               lea ecx, [ecx + ecx*2]
// 00579a38  8bf1                 mov esi, ecx
// 00579a3a  0faff1               imul esi, ecx
// 00579a3d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00579a41  03c6                 add eax, esi
// 00579a43  8b742410             mov esi, dword ptr [esp + 0x10]
// 00579a47  0fb60c31             movzx ecx, byte ptr [ecx + esi]
// 00579a4b  3bcd                 cmp ecx, ebp
// 00579a4d  7d23                 jge 0x579a72
// 00579a4f  8bf1                 mov esi, ecx
// 00579a51  2bf5                 sub esi, ebp
// 00579a53  8bee                 mov ebp, esi
// 00579a55  0fafee               imul ebp, esi
// 00579a58  03d5                 add edx, ebp
// 00579a5a  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00579a61  8d7518               lea esi, [ebp + 0x18]
// 00579a64  2bce                 sub ecx, esi
// 00579a66  eb2b                 jmp 0x579a93
// 00579a68  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00579a6c  7fc5                 jg 0x579a33
// 00579a6e  2bcb                 sub ecx, ebx
// 00579a70  ebc3                 jmp 0x579a35
// 00579a72  8d7518               lea esi, [ebp + 0x18]
// 00579a75  3bce                 cmp ecx, esi
// 00579a77  89742420             mov dword ptr [esp + 0x20], esi
// 00579a7b  7e4e                 jle 0x579acb
// 00579a7d  8bf1                 mov esi, ecx
// 00579a7f  2b742420             sub esi, dword ptr [esp + 0x20]
// 00579a83  8bee                 mov ebp, esi
// 00579a85  0fafee               imul ebp, esi
// 00579a88  03d5                 add edx, ebp
// 00579a8a  8bac2440040000       mov ebp, dword ptr [esp + 0x440]
// 00579a91  2bcd                 sub ecx, ebp
// 00579a93  8bf1                 mov esi, ecx
// 00579a95  0faff1               imul esi, ecx
// 00579a98  8b8c243c040000       mov ecx, dword ptr [esp + 0x43c]
// 00579a9f  03c6                 add eax, esi
// 00579aa1  8b742410             mov esi, dword ptr [esp + 0x10]
// 00579aa5  8954b438             mov dword ptr [esp + esi*4 + 0x38], edx
// 00579aa9  8b542414             mov edx, dword ptr [esp + 0x14]
// 00579aad  3bc2                 cmp eax, edx
// 00579aaf  7d06                 jge 0x579ab7
// 00579ab1  8bd0                 mov edx, eax
// 00579ab3  89542414             mov dword ptr [esp + 0x14], edx
// 00579ab7  ff442410             inc dword ptr [esp + 0x10]
// 00579abb  8b742430             mov esi, dword ptr [esp + 0x30]
// 00579abf  39742410             cmp dword ptr [esp + 0x10], esi
// 00579ac3  0f8ce7feffff         jl 0x5799b0
// 00579ac9  eb0e                 jmp 0x579ad9
// 00579acb  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00579acf  7fc0                 jg 0x579a91
// 00579ad1  2bce                 sub ecx, esi
// 00579ad3  ebbe                 jmp 0x579a93
// 00579ad5  8b542414             mov edx, dword ptr [esp + 0x14]
// 00579ad9  33c0                 xor eax, eax
// 00579adb  33c9                 xor ecx, ecx
// 00579add  85f6                 test esi, esi
// 00579adf  7e16                 jle 0x579af7
// 00579ae1  39548c38             cmp dword ptr [esp + ecx*4 + 0x38], edx
// 00579ae5  7f0b                 jg 0x579af2
// 00579ae7  8bbc2444040000       mov edi, dword ptr [esp + 0x444]
// 00579aee  880c38               mov byte ptr [eax + edi], cl
// 00579af1  40                   inc eax
// 00579af2  41                   inc ecx
// 00579af3  3bce                 cmp ecx, esi
// 00579af5  7cea                 jl 0x579ae1
// 00579af7  5f                   pop edi
// 00579af8  5e                   pop esi
// 00579af9  5d                   pop ebp
// 00579afa  5b                   pop ebx
// 00579afb  81c428040000         add esp, 0x428
// 00579b01  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_nearby_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
