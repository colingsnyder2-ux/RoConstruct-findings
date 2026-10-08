// roc 2009-06 0076c540  unit: CXTPControls  size: 1229 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076c540
//
// 0076c540  83ec3c               sub esp, 0x3c
// 0076c543  8b442450             mov eax, dword ptr [esp + 0x50]
// 0076c547  8b00                 mov eax, dword ptr [eax]
// 0076c549  53                   push ebx
// 0076c54a  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 0076c54e  55                   push ebp
// 0076c54f  56                   push esi
// 0076c550  8be9                 mov ebp, ecx
// 0076c552  83e010               and eax, 0x10
// 0076c555  57                   push edi
// 0076c556  896c2410             mov dword ptr [esp + 0x10], ebp
// 0076c55a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0076c55e  8bff                 mov edi, edi
// 0076c560  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 0076c563  8d41ff               lea eax, [ecx - 1]
// 0076c566  33d2                 xor edx, edx
// 0076c568  8bf8                 mov edi, eax
// 0076c56a  83ff02               cmp edi, 2
// 0076c56d  89542418             mov dword ptr [esp + 0x18], edx
// 0076c571  894c2414             mov dword ptr [esp + 0x14], ecx
// 0076c575  0f8c8c000000         jl 0x76c607
// 0076c57b  8bcf                 mov ecx, edi
// 0076c57d  c1e106               shl ecx, 6
// 0076c580  8d5c1934             lea ebx, [ecx + ebx + 0x34]
// 0076c584  eb02                 jmp 0x76c588
// 0076c586  33d2                 xor edx, edx
// 0076c588  3953f4               cmp dword ptr [ebx - 0xc], edx
// 0076c58b  746d                 je 0x76c5fa
// 0076c58d  3913                 cmp dword ptr [ebx], edx
// 0076c58f  7569                 jne 0x76c5fa
// 0076c591  3bfa                 cmp edi, edx
// 0076c593  89542428             mov dword ptr [esp + 0x28], edx
// 0076c597  8954242c             mov dword ptr [esp + 0x2c], edx
// 0076c59b  89542430             mov dword ptr [esp + 0x30], edx
// 0076c59f  8bc7                 mov eax, edi
// 0076c5a1  7c57                 jl 0x76c5fa
// 0076c5a3  8bf3                 mov esi, ebx
// 0076c5a5  837ef400             cmp dword ptr [esi - 0xc], 0
// 0076c5a9  743e                 je 0x76c5e9
// 0076c5ab  83fa02               cmp edx, 2
// 0076c5ae  7405                 je 0x76c5b5
// 0076c5b0  833e00               cmp dword ptr [esi], 0
// 0076c5b3  753c                 jne 0x76c5f1
// 0076c5b5  85c0                 test eax, eax
// 0076c5b7  7c17                 jl 0x76c5d0
// 0076c5b9  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0076c5bd  7d11                 jge 0x76c5d0
// 0076c5bf  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 0076c5c2  0f8dcb030000         jge 0x76c993
// 0076c5c8  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 0076c5cb  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0076c5ce  eb02                 jmp 0x76c5d2
// 0076c5d0  33c9                 xor ecx, ecx
// 0076c5d2  83b94801000004       cmp dword ptr [ecx + 0x148], 4
// 0076c5d9  7516                 jne 0x76c5f1
// 0076c5db  89449428             mov dword ptr [esp + edx*4 + 0x28], eax
// 0076c5df  42                   inc edx
// 0076c5e0  83fa03               cmp edx, 3
// 0076c5e3  0f84bd000000         je 0x76c6a6
// 0076c5e9  48                   dec eax
// 0076c5ea  83ee40               sub esi, 0x40
// 0076c5ed  85c0                 test eax, eax
// 0076c5ef  7db4                 jge 0x76c5a5
// 0076c5f1  83fa03               cmp edx, 3
// 0076c5f4  0f84ac000000         je 0x76c6a6
// 0076c5fa  4f                   dec edi
// 0076c5fb  83eb40               sub ebx, 0x40
// 0076c5fe  83ff02               cmp edi, 2
// 0076c601  7d83                 jge 0x76c586
// 0076c603  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076c607  8d41ff               lea eax, [ecx - 1]
// 0076c60a  83f802               cmp eax, 2
// 0076c60d  0f8c52010000         jl 0x76c765
// 0076c613  8b542458             mov edx, dword ptr [esp + 0x58]
// 0076c617  8bc8                 mov ecx, eax
// 0076c619  c1e106               shl ecx, 6
// 0076c61c  837c112800           cmp dword ptr [ecx + edx + 0x28], 0
// 0076c621  8d3c11               lea edi, [ecx + edx]
// 0076c624  0f8429010000         je 0x76c753
// 0076c62a  837f3400             cmp dword ptr [edi + 0x34], 0
// 0076c62e  0f851f010000         jne 0x76c753
// 0076c634  33f6                 xor esi, esi
// 0076c636  33db                 xor ebx, ebx
// 0076c638  33ed                 xor ebp, ebp
// 0076c63a  33d2                 xor edx, edx
// 0076c63c  33c9                 xor ecx, ecx
// 0076c63e  89742434             mov dword ptr [esp + 0x34], esi
// 0076c642  895c2438             mov dword ptr [esp + 0x38], ebx
// 0076c646  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0076c64a  85c0                 test eax, eax
// 0076c64c  0f8cf8000000         jl 0x76c74a
// 0076c652  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0076c656  8d7734               lea esi, [edi + 0x34]
// 0076c659  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0076c65d  8d6a04               lea ebp, [edx + 4]
// 0076c660  837ef400             cmp dword ptr [esi - 0xc], 0
// 0076c664  0f84c8000000         je 0x76c732
// 0076c66a  83fa02               cmp edx, 2
// 0076c66d  7409                 je 0x76c678
// 0076c66f  833e00               cmp dword ptr [esi], 0
// 0076c672  0f85c6000000         jne 0x76c73e
// 0076c678  89449434             mov dword ptr [esp + edx*4 + 0x34], eax
// 0076c67c  42                   inc edx
// 0076c67d  85c9                 test ecx, ecx
// 0076c67f  0f85a3000000         jne 0x76c728
// 0076c685  85c0                 test eax, eax
// 0076c687  0f8c8d000000         jl 0x76c71a
// 0076c68d  3bc3                 cmp eax, ebx
// 0076c68f  0f8d85000000         jge 0x76c71a
// 0076c695  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 0076c698  0f8df5020000         jge 0x76c993
// 0076c69e  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0076c6a1  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0076c6a4  eb76                 jmp 0x76c71c
// 0076c6a6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0076c6aa  85c0                 test eax, eax
// 0076c6ac  7c17                 jl 0x76c6c5
// 0076c6ae  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0076c6b2  7d11                 jge 0x76c6c5
// 0076c6b4  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 0076c6b7  0f8dd6020000         jge 0x76c993
// 0076c6bd  8b5528               mov edx, dword ptr [ebp + 0x28]
// 0076c6c0  8b0482               mov eax, dword ptr [edx + eax*4]
// 0076c6c3  eb02                 jmp 0x76c6c7
// 0076c6c5  33c0                 xor eax, eax
// 0076c6c7  b903000000           mov ecx, 3
// 0076c6cc  898848010000         mov dword ptr [eax + 0x148], ecx
// 0076c6d2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0076c6d6  85c0                 test eax, eax
// 0076c6d8  7c0d                 jl 0x76c6e7
// 0076c6da  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 0076c6dd  7d08                 jge 0x76c6e7
// 0076c6df  8b5528               mov edx, dword ptr [ebp + 0x28]
// 0076c6e2  8b0482               mov eax, dword ptr [edx + eax*4]
// 0076c6e5  eb02                 jmp 0x76c6e9
// 0076c6e7  33c0                 xor eax, eax
// 0076c6e9  898848010000         mov dword ptr [eax + 0x148], ecx
// 0076c6ef  8b442430             mov eax, dword ptr [esp + 0x30]
// 0076c6f3  85c0                 test eax, eax
// 0076c6f5  7c16                 jl 0x76c70d
// 0076c6f7  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 0076c6fa  7d11                 jge 0x76c70d
// 0076c6fc  8b5528               mov edx, dword ptr [ebp + 0x28]
// 0076c6ff  8b0482               mov eax, dword ptr [edx + eax*4]
// 0076c702  898848010000         mov dword ptr [eax + 0x148], ecx
// 0076c708  e90a020000           jmp 0x76c917
// 0076c70d  33c0                 xor eax, eax
// 0076c70f  898848010000         mov dword ptr [eax + 0x148], ecx
// 0076c715  e9fd010000           jmp 0x76c917
// 0076c71a  33c9                 xor ecx, ecx
// 0076c71c  39a948010000         cmp dword ptr [ecx + 0x148], ebp
// 0076c722  7404                 je 0x76c728
// 0076c724  33c9                 xor ecx, ecx
// 0076c726  eb05                 jmp 0x76c72d
// 0076c728  b901000000           mov ecx, 1
// 0076c72d  83fa03               cmp edx, 3
// 0076c730  740c                 je 0x76c73e
// 0076c732  48                   dec eax
// 0076c733  83ee40               sub esi, 0x40
// 0076c736  85c0                 test eax, eax
// 0076c738  0f8d22ffffff         jge 0x76c660
// 0076c73e  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0076c742  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0076c746  8b742434             mov esi, dword ptr [esp + 0x34]
// 0076c74a  83fa03               cmp edx, 3
// 0076c74d  7504                 jne 0x76c753
// 0076c74f  85c9                 test ecx, ecx
// 0076c751  7572                 jne 0x76c7c5
// 0076c753  48                   dec eax
// 0076c754  83f802               cmp eax, 2
// 0076c757  0f8db6feffff         jge 0x76c613
// 0076c75d  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0076c761  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076c765  8d41ff               lea eax, [ecx - 1]
// 0076c768  8bd8                 mov ebx, eax
// 0076c76a  83fb02               cmp ebx, 2
// 0076c76d  0f8cac010000         jl 0x76c91f
// 0076c773  8b542458             mov edx, dword ptr [esp + 0x58]
// 0076c777  8bcb                 mov ecx, ebx
// 0076c779  c1e106               shl ecx, 6
// 0076c77c  8d6c1134             lea ebp, [ecx + edx + 0x34]
// 0076c780  33c9                 xor ecx, ecx
// 0076c782  394df4               cmp dword ptr [ebp - 0xc], ecx
// 0076c785  0f8407010000         je 0x76c892
// 0076c78b  394d00               cmp dword ptr [ebp], ecx
// 0076c78e  0f85fe000000         jne 0x76c892
// 0076c794  33d2                 xor edx, edx
// 0076c796  3bd9                 cmp ebx, ecx
// 0076c798  894c2440             mov dword ptr [esp + 0x40], ecx
// 0076c79c  894c2444             mov dword ptr [esp + 0x44], ecx
// 0076c7a0  894c2448             mov dword ptr [esp + 0x48], ecx
// 0076c7a4  8bc3                 mov eax, ebx
// 0076c7a6  0f8ce6000000         jl 0x76c892
// 0076c7ac  8d7dd0               lea edi, [ebp - 0x30]
// 0076c7af  90                   nop 
// 0076c7b0  837f2400             cmp dword ptr [edi + 0x24], 0
// 0076c7b4  0f84c7000000         je 0x76c881
// 0076c7ba  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0076c7bf  7474                 je 0x76c835
// 0076c7c1  8b37                 mov esi, dword ptr [edi]
// 0076c7c3  eb73                 jmp 0x76c838
// 0076c7c5  85f6                 test esi, esi
// 0076c7c7  7c1b                 jl 0x76c7e4
// 0076c7c9  3b742414             cmp esi, dword ptr [esp + 0x14]
// 0076c7cd  7d15                 jge 0x76c7e4
// 0076c7cf  8b442410             mov eax, dword ptr [esp + 0x10]
// 0076c7d3  3b702c               cmp esi, dword ptr [eax + 0x2c]
// 0076c7d6  0f8db7010000         jge 0x76c993
// 0076c7dc  8b5028               mov edx, dword ptr [eax + 0x28]
// 0076c7df  8b34b2               mov esi, dword ptr [edx + esi*4]
// 0076c7e2  eb06                 jmp 0x76c7ea
// 0076c7e4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0076c7e8  33f6                 xor esi, esi
// 0076c7ea  b903000000           mov ecx, 3
// 0076c7ef  898e48010000         mov dword ptr [esi + 0x148], ecx
// 0076c7f5  85db                 test ebx, ebx
// 0076c7f7  7c0d                 jl 0x76c806
// 0076c7f9  3b582c               cmp ebx, dword ptr [eax + 0x2c]
// 0076c7fc  7d08                 jge 0x76c806
// 0076c7fe  8b5028               mov edx, dword ptr [eax + 0x28]
// 0076c801  8b1c9a               mov ebx, dword ptr [edx + ebx*4]
// 0076c804  eb02                 jmp 0x76c808
// 0076c806  33db                 xor ebx, ebx
// 0076c808  898b48010000         mov dword ptr [ebx + 0x148], ecx
// 0076c80e  85ed                 test ebp, ebp
// 0076c810  7c16                 jl 0x76c828
// 0076c812  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 0076c815  7d11                 jge 0x76c828
// 0076c817  8b4028               mov eax, dword ptr [eax + 0x28]
// 0076c81a  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 0076c81d  898848010000         mov dword ptr [eax + 0x148], ecx
// 0076c823  e9eb000000           jmp 0x76c913
// 0076c828  33c0                 xor eax, eax
// 0076c82a  898848010000         mov dword ptr [eax + 0x148], ecx
// 0076c830  e9de000000           jmp 0x76c913
// 0076c835  8b77fc               mov esi, dword ptr [edi - 4]
// 0076c838  85c9                 test ecx, ecx
// 0076c83a  7404                 je 0x76c840
// 0076c83c  3bf2                 cmp esi, edx
// 0076c83e  754d                 jne 0x76c88d
// 0076c840  83f902               cmp ecx, 2
// 0076c843  7406                 je 0x76c84b
// 0076c845  837f3000             cmp dword ptr [edi + 0x30], 0
// 0076c849  7542                 jne 0x76c88d
// 0076c84b  85c0                 test eax, eax
// 0076c84d  7c1b                 jl 0x76c86a
// 0076c84f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0076c853  7d15                 jge 0x76c86a
// 0076c855  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076c859  3b422c               cmp eax, dword ptr [edx + 0x2c]
// 0076c85c  0f8d31010000         jge 0x76c993
// 0076c862  8b5228               mov edx, dword ptr [edx + 0x28]
// 0076c865  8b1482               mov edx, dword ptr [edx + eax*4]
// 0076c868  eb02                 jmp 0x76c86c
// 0076c86a  33d2                 xor edx, edx
// 0076c86c  83ba4801000003       cmp dword ptr [edx + 0x148], 3
// 0076c873  7518                 jne 0x76c88d
// 0076c875  89448c40             mov dword ptr [esp + ecx*4 + 0x40], eax
// 0076c879  41                   inc ecx
// 0076c87a  8bd6                 mov edx, esi
// 0076c87c  83f903               cmp ecx, 3
// 0076c87f  7424                 je 0x76c8a5
// 0076c881  48                   dec eax
// 0076c882  83ef40               sub edi, 0x40
// 0076c885  85c0                 test eax, eax
// 0076c887  0f8d23ffffff         jge 0x76c7b0
// 0076c88d  83f903               cmp ecx, 3
// 0076c890  7413                 je 0x76c8a5
// 0076c892  4b                   dec ebx
// 0076c893  83ed40               sub ebp, 0x40
// 0076c896  83fb02               cmp ebx, 2
// 0076c899  0f8de1feffff         jge 0x76c780
// 0076c89f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0076c8a3  eb7a                 jmp 0x76c91f
// 0076c8a5  8b442440             mov eax, dword ptr [esp + 0x40]
// 0076c8a9  85c0                 test eax, eax
// 0076c8ab  7c1b                 jl 0x76c8c8
// 0076c8ad  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0076c8b1  7d15                 jge 0x76c8c8
// 0076c8b3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0076c8b7  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 0076c8ba  0f8dd3000000         jge 0x76c993
// 0076c8c0  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0076c8c3  8b0482               mov eax, dword ptr [edx + eax*4]
// 0076c8c6  eb06                 jmp 0x76c8ce
// 0076c8c8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0076c8cc  33c0                 xor eax, eax
// 0076c8ce  ba02000000           mov edx, 2
// 0076c8d3  899048010000         mov dword ptr [eax + 0x148], edx
// 0076c8d9  8b442444             mov eax, dword ptr [esp + 0x44]
// 0076c8dd  85c0                 test eax, eax
// 0076c8df  7c0d                 jl 0x76c8ee
// 0076c8e1  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 0076c8e4  7d08                 jge 0x76c8ee
// 0076c8e6  8b7128               mov esi, dword ptr [ecx + 0x28]
// 0076c8e9  8b0486               mov eax, dword ptr [esi + eax*4]
// 0076c8ec  eb02                 jmp 0x76c8f0
// 0076c8ee  33c0                 xor eax, eax
// 0076c8f0  899048010000         mov dword ptr [eax + 0x148], edx
// 0076c8f6  8b442448             mov eax, dword ptr [esp + 0x48]
// 0076c8fa  85c0                 test eax, eax
// 0076c8fc  7c0d                 jl 0x76c90b
// 0076c8fe  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 0076c901  7d08                 jge 0x76c90b
// 0076c903  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 0076c906  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0076c909  eb02                 jmp 0x76c90d
// 0076c90b  33c0                 xor eax, eax
// 0076c90d  899048010000         mov dword ptr [eax + 0x148], edx
// 0076c913  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0076c917  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0076c91f  8b742460             mov esi, dword ptr [esp + 0x60]
// 0076c923  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0076c927  8b542454             mov edx, dword ptr [esp + 0x54]
// 0076c92b  56                   push esi
// 0076c92c  53                   push ebx
// 0076c92d  52                   push edx
// 0076c92e  8d44242c             lea eax, [esp + 0x2c]
// 0076c932  50                   push eax
// 0076c933  8bcd                 mov ecx, ebp
// 0076c935  e896ecffff           call 0x76b5d0
// 0076c93a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0076c93f  8b5004               mov edx, dword ptr [eax + 4]
// 0076c942  8b08                 mov ecx, dword ptr [eax]
// 0076c944  8bc2                 mov eax, edx
// 0076c946  7502                 jne 0x76c94a
// 0076c948  8bc1                 mov eax, ecx
// 0076c94a  3b44245c             cmp eax, dword ptr [esp + 0x5c]
// 0076c94e  0f8ca6000000         jl 0x76c9fa
// 0076c954  837c241800           cmp dword ptr [esp + 0x18], 0
// 0076c959  0f8501fcffff         jne 0x76c560
// 0076c95f  f60680               test byte ptr [esi], 0x80
// 0076c962  0f8492000000         je 0x76c9fa
// 0076c968  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 0076c96b  bf01000000           mov edi, 1
// 0076c970  33c0                 xor eax, eax
// 0076c972  8bf7                 mov esi, edi
// 0076c974  85c9                 test ecx, ecx
// 0076c976  7e5b                 jle 0x76c9d3
// 0076c978  8bd3                 mov edx, ebx
// 0076c97a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0076c97e  83c20c               add edx, 0xc
// 0076c981  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 0076c985  7440                 je 0x76c9c7
// 0076c987  85f6                 test esi, esi
// 0076c989  753a                 jne 0x76c9c5
// 0076c98b  85db                 test ebx, ebx
// 0076c98d  7409                 je 0x76c998
// 0076c98f  8b32                 mov esi, dword ptr [edx]
// 0076c991  eb08                 jmp 0x76c99b
// 0076c993  e84cc3faff           call 0x718ce4
// 0076c998  8b72fc               mov esi, dword ptr [edx - 4]
// 0076c99b  3b74245c             cmp esi, dword ptr [esp + 0x5c]
// 0076c99f  7e24                 jle 0x76c9c5
// 0076c9a1  85c0                 test eax, eax
// 0076c9a3  7c11                 jl 0x76c9b6
// 0076c9a5  3bc1                 cmp eax, ecx
// 0076c9a7  7d0d                 jge 0x76c9b6
// 0076c9a9  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 0076c9ac  7de5                 jge 0x76c993
// 0076c9ae  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 0076c9b1  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0076c9b4  eb02                 jmp 0x76c9b8
// 0076c9b6  33c9                 xor ecx, ecx
// 0076c9b8  c7814801000002000000 mov dword ptr [ecx + 0x148], 2
// 0076c9c2  897a24               mov dword ptr [edx + 0x24], edi
// 0076c9c5  33f6                 xor esi, esi
// 0076c9c7  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 0076c9ca  03c7                 add eax, edi
// 0076c9cc  83c240               add edx, 0x40
// 0076c9cf  3bc1                 cmp eax, ecx
// 0076c9d1  7cae                 jl 0x76c981
// 0076c9d3  8b542460             mov edx, dword ptr [esp + 0x60]
// 0076c9d7  8b442458             mov eax, dword ptr [esp + 0x58]
// 0076c9db  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0076c9df  8b742450             mov esi, dword ptr [esp + 0x50]
// 0076c9e3  52                   push edx
// 0076c9e4  50                   push eax
// 0076c9e5  51                   push ecx
// 0076c9e6  56                   push esi
// 0076c9e7  8bcd                 mov ecx, ebp
// 0076c9e9  e8e2ebffff           call 0x76b5d0
// 0076c9ee  5f                   pop edi
// 0076c9ef  8bc6                 mov eax, esi
// 0076c9f1  5e                   pop esi
// 0076c9f2  5d                   pop ebp
// 0076c9f3  5b                   pop ebx
// 0076c9f4  83c43c               add esp, 0x3c
// 0076c9f7  c21400               ret 0x14
// 0076c9fa  8b442450             mov eax, dword ptr [esp + 0x50]
// 0076c9fe  5f                   pop edi
// 0076c9ff  5e                   pop esi
// 0076ca00  5d                   pop ebp
// 0076ca01  895004               mov dword ptr [eax + 4], edx
// 0076ca04  8908                 mov dword ptr [eax], ecx
// 0076ca06  5b                   pop ebx
// 0076ca07  83c43c               add esp, 0x3c
// 0076ca0a  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_ReduceSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@HAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
