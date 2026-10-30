// roc 2010-06 007fb3c0  unit: CXTPControls  size: 1229 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fb3c0
//
// 007fb3c0  83ec3c               sub esp, 0x3c
// 007fb3c3  8b442450             mov eax, dword ptr [esp + 0x50]
// 007fb3c7  8b00                 mov eax, dword ptr [eax]
// 007fb3c9  53                   push ebx
// 007fb3ca  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 007fb3ce  55                   push ebp
// 007fb3cf  56                   push esi
// 007fb3d0  8be9                 mov ebp, ecx
// 007fb3d2  83e010               and eax, 0x10
// 007fb3d5  57                   push edi
// 007fb3d6  896c2410             mov dword ptr [esp + 0x10], ebp
// 007fb3da  8944241c             mov dword ptr [esp + 0x1c], eax
// 007fb3de  8bff                 mov edi, edi
// 007fb3e0  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 007fb3e3  8d41ff               lea eax, [ecx - 1]
// 007fb3e6  33d2                 xor edx, edx
// 007fb3e8  8bf8                 mov edi, eax
// 007fb3ea  83ff02               cmp edi, 2
// 007fb3ed  89542418             mov dword ptr [esp + 0x18], edx
// 007fb3f1  894c2414             mov dword ptr [esp + 0x14], ecx
// 007fb3f5  0f8c8c000000         jl 0x7fb487
// 007fb3fb  8bcf                 mov ecx, edi
// 007fb3fd  c1e106               shl ecx, 6
// 007fb400  8d5c1934             lea ebx, [ecx + ebx + 0x34]
// 007fb404  eb02                 jmp 0x7fb408
// 007fb406  33d2                 xor edx, edx
// 007fb408  3953f4               cmp dword ptr [ebx - 0xc], edx
// 007fb40b  746d                 je 0x7fb47a
// 007fb40d  3913                 cmp dword ptr [ebx], edx
// 007fb40f  7569                 jne 0x7fb47a
// 007fb411  3bfa                 cmp edi, edx
// 007fb413  89542428             mov dword ptr [esp + 0x28], edx
// 007fb417  8954242c             mov dword ptr [esp + 0x2c], edx
// 007fb41b  89542430             mov dword ptr [esp + 0x30], edx
// 007fb41f  8bc7                 mov eax, edi
// 007fb421  7c57                 jl 0x7fb47a
// 007fb423  8bf3                 mov esi, ebx
// 007fb425  837ef400             cmp dword ptr [esi - 0xc], 0
// 007fb429  743e                 je 0x7fb469
// 007fb42b  83fa02               cmp edx, 2
// 007fb42e  7405                 je 0x7fb435
// 007fb430  833e00               cmp dword ptr [esi], 0
// 007fb433  753c                 jne 0x7fb471
// 007fb435  85c0                 test eax, eax
// 007fb437  7c17                 jl 0x7fb450
// 007fb439  3b442414             cmp eax, dword ptr [esp + 0x14]
// 007fb43d  7d11                 jge 0x7fb450
// 007fb43f  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 007fb442  0f8dcb030000         jge 0x7fb813
// 007fb448  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 007fb44b  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 007fb44e  eb02                 jmp 0x7fb452
// 007fb450  33c9                 xor ecx, ecx
// 007fb452  83b94801000004       cmp dword ptr [ecx + 0x148], 4
// 007fb459  7516                 jne 0x7fb471
// 007fb45b  89449428             mov dword ptr [esp + edx*4 + 0x28], eax
// 007fb45f  42                   inc edx
// 007fb460  83fa03               cmp edx, 3
// 007fb463  0f84bd000000         je 0x7fb526
// 007fb469  48                   dec eax
// 007fb46a  83ee40               sub esi, 0x40
// 007fb46d  85c0                 test eax, eax
// 007fb46f  7db4                 jge 0x7fb425
// 007fb471  83fa03               cmp edx, 3
// 007fb474  0f84ac000000         je 0x7fb526
// 007fb47a  4f                   dec edi
// 007fb47b  83eb40               sub ebx, 0x40
// 007fb47e  83ff02               cmp edi, 2
// 007fb481  7d83                 jge 0x7fb406
// 007fb483  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007fb487  8d41ff               lea eax, [ecx - 1]
// 007fb48a  83f802               cmp eax, 2
// 007fb48d  0f8c52010000         jl 0x7fb5e5
// 007fb493  8b542458             mov edx, dword ptr [esp + 0x58]
// 007fb497  8bc8                 mov ecx, eax
// 007fb499  c1e106               shl ecx, 6
// 007fb49c  837c112800           cmp dword ptr [ecx + edx + 0x28], 0
// 007fb4a1  8d3c11               lea edi, [ecx + edx]
// 007fb4a4  0f8429010000         je 0x7fb5d3
// 007fb4aa  837f3400             cmp dword ptr [edi + 0x34], 0
// 007fb4ae  0f851f010000         jne 0x7fb5d3
// 007fb4b4  33f6                 xor esi, esi
// 007fb4b6  33db                 xor ebx, ebx
// 007fb4b8  33ed                 xor ebp, ebp
// 007fb4ba  33d2                 xor edx, edx
// 007fb4bc  33c9                 xor ecx, ecx
// 007fb4be  89742434             mov dword ptr [esp + 0x34], esi
// 007fb4c2  895c2438             mov dword ptr [esp + 0x38], ebx
// 007fb4c6  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007fb4ca  85c0                 test eax, eax
// 007fb4cc  0f8cf8000000         jl 0x7fb5ca
// 007fb4d2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007fb4d6  8d7734               lea esi, [edi + 0x34]
// 007fb4d9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007fb4dd  8d6a04               lea ebp, [edx + 4]
// 007fb4e0  837ef400             cmp dword ptr [esi - 0xc], 0
// 007fb4e4  0f84c8000000         je 0x7fb5b2
// 007fb4ea  83fa02               cmp edx, 2
// 007fb4ed  7409                 je 0x7fb4f8
// 007fb4ef  833e00               cmp dword ptr [esi], 0
// 007fb4f2  0f85c6000000         jne 0x7fb5be
// 007fb4f8  89449434             mov dword ptr [esp + edx*4 + 0x34], eax
// 007fb4fc  42                   inc edx
// 007fb4fd  85c9                 test ecx, ecx
// 007fb4ff  0f85a3000000         jne 0x7fb5a8
// 007fb505  85c0                 test eax, eax
// 007fb507  0f8c8d000000         jl 0x7fb59a
// 007fb50d  3bc3                 cmp eax, ebx
// 007fb50f  0f8d85000000         jge 0x7fb59a
// 007fb515  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 007fb518  0f8df5020000         jge 0x7fb813
// 007fb51e  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 007fb521  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 007fb524  eb76                 jmp 0x7fb59c
// 007fb526  8b442428             mov eax, dword ptr [esp + 0x28]
// 007fb52a  85c0                 test eax, eax
// 007fb52c  7c17                 jl 0x7fb545
// 007fb52e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 007fb532  7d11                 jge 0x7fb545
// 007fb534  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 007fb537  0f8dd6020000         jge 0x7fb813
// 007fb53d  8b5528               mov edx, dword ptr [ebp + 0x28]
// 007fb540  8b0482               mov eax, dword ptr [edx + eax*4]
// 007fb543  eb02                 jmp 0x7fb547
// 007fb545  33c0                 xor eax, eax
// 007fb547  b903000000           mov ecx, 3
// 007fb54c  898848010000         mov dword ptr [eax + 0x148], ecx
// 007fb552  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007fb556  85c0                 test eax, eax
// 007fb558  7c0d                 jl 0x7fb567
// 007fb55a  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 007fb55d  7d08                 jge 0x7fb567
// 007fb55f  8b5528               mov edx, dword ptr [ebp + 0x28]
// 007fb562  8b0482               mov eax, dword ptr [edx + eax*4]
// 007fb565  eb02                 jmp 0x7fb569
// 007fb567  33c0                 xor eax, eax
// 007fb569  898848010000         mov dword ptr [eax + 0x148], ecx
// 007fb56f  8b442430             mov eax, dword ptr [esp + 0x30]
// 007fb573  85c0                 test eax, eax
// 007fb575  7c16                 jl 0x7fb58d
// 007fb577  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 007fb57a  7d11                 jge 0x7fb58d
// 007fb57c  8b5528               mov edx, dword ptr [ebp + 0x28]
// 007fb57f  8b0482               mov eax, dword ptr [edx + eax*4]
// 007fb582  898848010000         mov dword ptr [eax + 0x148], ecx
// 007fb588  e90a020000           jmp 0x7fb797
// 007fb58d  33c0                 xor eax, eax
// 007fb58f  898848010000         mov dword ptr [eax + 0x148], ecx
// 007fb595  e9fd010000           jmp 0x7fb797
// 007fb59a  33c9                 xor ecx, ecx
// 007fb59c  39a948010000         cmp dword ptr [ecx + 0x148], ebp
// 007fb5a2  7404                 je 0x7fb5a8
// 007fb5a4  33c9                 xor ecx, ecx
// 007fb5a6  eb05                 jmp 0x7fb5ad
// 007fb5a8  b901000000           mov ecx, 1
// 007fb5ad  83fa03               cmp edx, 3
// 007fb5b0  740c                 je 0x7fb5be
// 007fb5b2  48                   dec eax
// 007fb5b3  83ee40               sub esi, 0x40
// 007fb5b6  85c0                 test eax, eax
// 007fb5b8  0f8d22ffffff         jge 0x7fb4e0
// 007fb5be  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 007fb5c2  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 007fb5c6  8b742434             mov esi, dword ptr [esp + 0x34]
// 007fb5ca  83fa03               cmp edx, 3
// 007fb5cd  7504                 jne 0x7fb5d3
// 007fb5cf  85c9                 test ecx, ecx
// 007fb5d1  7572                 jne 0x7fb645
// 007fb5d3  48                   dec eax
// 007fb5d4  83f802               cmp eax, 2
// 007fb5d7  0f8db6feffff         jge 0x7fb493
// 007fb5dd  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007fb5e1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007fb5e5  8d41ff               lea eax, [ecx - 1]
// 007fb5e8  8bd8                 mov ebx, eax
// 007fb5ea  83fb02               cmp ebx, 2
// 007fb5ed  0f8cac010000         jl 0x7fb79f
// 007fb5f3  8b542458             mov edx, dword ptr [esp + 0x58]
// 007fb5f7  8bcb                 mov ecx, ebx
// 007fb5f9  c1e106               shl ecx, 6
// 007fb5fc  8d6c1134             lea ebp, [ecx + edx + 0x34]
// 007fb600  33c9                 xor ecx, ecx
// 007fb602  394df4               cmp dword ptr [ebp - 0xc], ecx
// 007fb605  0f8407010000         je 0x7fb712
// 007fb60b  394d00               cmp dword ptr [ebp], ecx
// 007fb60e  0f85fe000000         jne 0x7fb712
// 007fb614  33d2                 xor edx, edx
// 007fb616  3bd9                 cmp ebx, ecx
// 007fb618  894c2440             mov dword ptr [esp + 0x40], ecx
// 007fb61c  894c2444             mov dword ptr [esp + 0x44], ecx
// 007fb620  894c2448             mov dword ptr [esp + 0x48], ecx
// 007fb624  8bc3                 mov eax, ebx
// 007fb626  0f8ce6000000         jl 0x7fb712
// 007fb62c  8d7dd0               lea edi, [ebp - 0x30]
// 007fb62f  90                   nop 
// 007fb630  837f2400             cmp dword ptr [edi + 0x24], 0
// 007fb634  0f84c7000000         je 0x7fb701
// 007fb63a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007fb63f  7474                 je 0x7fb6b5
// 007fb641  8b37                 mov esi, dword ptr [edi]
// 007fb643  eb73                 jmp 0x7fb6b8
// 007fb645  85f6                 test esi, esi
// 007fb647  7c1b                 jl 0x7fb664
// 007fb649  3b742414             cmp esi, dword ptr [esp + 0x14]
// 007fb64d  7d15                 jge 0x7fb664
// 007fb64f  8b442410             mov eax, dword ptr [esp + 0x10]
// 007fb653  3b702c               cmp esi, dword ptr [eax + 0x2c]
// 007fb656  0f8db7010000         jge 0x7fb813
// 007fb65c  8b5028               mov edx, dword ptr [eax + 0x28]
// 007fb65f  8b34b2               mov esi, dword ptr [edx + esi*4]
// 007fb662  eb06                 jmp 0x7fb66a
// 007fb664  8b442410             mov eax, dword ptr [esp + 0x10]
// 007fb668  33f6                 xor esi, esi
// 007fb66a  b903000000           mov ecx, 3
// 007fb66f  898e48010000         mov dword ptr [esi + 0x148], ecx
// 007fb675  85db                 test ebx, ebx
// 007fb677  7c0d                 jl 0x7fb686
// 007fb679  3b582c               cmp ebx, dword ptr [eax + 0x2c]
// 007fb67c  7d08                 jge 0x7fb686
// 007fb67e  8b5028               mov edx, dword ptr [eax + 0x28]
// 007fb681  8b1c9a               mov ebx, dword ptr [edx + ebx*4]
// 007fb684  eb02                 jmp 0x7fb688
// 007fb686  33db                 xor ebx, ebx
// 007fb688  898b48010000         mov dword ptr [ebx + 0x148], ecx
// 007fb68e  85ed                 test ebp, ebp
// 007fb690  7c16                 jl 0x7fb6a8
// 007fb692  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 007fb695  7d11                 jge 0x7fb6a8
// 007fb697  8b4028               mov eax, dword ptr [eax + 0x28]
// 007fb69a  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 007fb69d  898848010000         mov dword ptr [eax + 0x148], ecx
// 007fb6a3  e9eb000000           jmp 0x7fb793
// 007fb6a8  33c0                 xor eax, eax
// 007fb6aa  898848010000         mov dword ptr [eax + 0x148], ecx
// 007fb6b0  e9de000000           jmp 0x7fb793
// 007fb6b5  8b77fc               mov esi, dword ptr [edi - 4]
// 007fb6b8  85c9                 test ecx, ecx
// 007fb6ba  7404                 je 0x7fb6c0
// 007fb6bc  3bf2                 cmp esi, edx
// 007fb6be  754d                 jne 0x7fb70d
// 007fb6c0  83f902               cmp ecx, 2
// 007fb6c3  7406                 je 0x7fb6cb
// 007fb6c5  837f3000             cmp dword ptr [edi + 0x30], 0
// 007fb6c9  7542                 jne 0x7fb70d
// 007fb6cb  85c0                 test eax, eax
// 007fb6cd  7c1b                 jl 0x7fb6ea
// 007fb6cf  3b442414             cmp eax, dword ptr [esp + 0x14]
// 007fb6d3  7d15                 jge 0x7fb6ea
// 007fb6d5  8b542410             mov edx, dword ptr [esp + 0x10]
// 007fb6d9  3b422c               cmp eax, dword ptr [edx + 0x2c]
// 007fb6dc  0f8d31010000         jge 0x7fb813
// 007fb6e2  8b5228               mov edx, dword ptr [edx + 0x28]
// 007fb6e5  8b1482               mov edx, dword ptr [edx + eax*4]
// 007fb6e8  eb02                 jmp 0x7fb6ec
// 007fb6ea  33d2                 xor edx, edx
// 007fb6ec  83ba4801000003       cmp dword ptr [edx + 0x148], 3
// 007fb6f3  7518                 jne 0x7fb70d
// 007fb6f5  89448c40             mov dword ptr [esp + ecx*4 + 0x40], eax
// 007fb6f9  41                   inc ecx
// 007fb6fa  8bd6                 mov edx, esi
// 007fb6fc  83f903               cmp ecx, 3
// 007fb6ff  7424                 je 0x7fb725
// 007fb701  48                   dec eax
// 007fb702  83ef40               sub edi, 0x40
// 007fb705  85c0                 test eax, eax
// 007fb707  0f8d23ffffff         jge 0x7fb630
// 007fb70d  83f903               cmp ecx, 3
// 007fb710  7413                 je 0x7fb725
// 007fb712  4b                   dec ebx
// 007fb713  83ed40               sub ebp, 0x40
// 007fb716  83fb02               cmp ebx, 2
// 007fb719  0f8de1feffff         jge 0x7fb600
// 007fb71f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007fb723  eb7a                 jmp 0x7fb79f
// 007fb725  8b442440             mov eax, dword ptr [esp + 0x40]
// 007fb729  85c0                 test eax, eax
// 007fb72b  7c1b                 jl 0x7fb748
// 007fb72d  3b442414             cmp eax, dword ptr [esp + 0x14]
// 007fb731  7d15                 jge 0x7fb748
// 007fb733  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007fb737  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 007fb73a  0f8dd3000000         jge 0x7fb813
// 007fb740  8b5128               mov edx, dword ptr [ecx + 0x28]
// 007fb743  8b0482               mov eax, dword ptr [edx + eax*4]
// 007fb746  eb06                 jmp 0x7fb74e
// 007fb748  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007fb74c  33c0                 xor eax, eax
// 007fb74e  ba02000000           mov edx, 2
// 007fb753  899048010000         mov dword ptr [eax + 0x148], edx
// 007fb759  8b442444             mov eax, dword ptr [esp + 0x44]
// 007fb75d  85c0                 test eax, eax
// 007fb75f  7c0d                 jl 0x7fb76e
// 007fb761  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 007fb764  7d08                 jge 0x7fb76e
// 007fb766  8b7128               mov esi, dword ptr [ecx + 0x28]
// 007fb769  8b0486               mov eax, dword ptr [esi + eax*4]
// 007fb76c  eb02                 jmp 0x7fb770
// 007fb76e  33c0                 xor eax, eax
// 007fb770  899048010000         mov dword ptr [eax + 0x148], edx
// 007fb776  8b442448             mov eax, dword ptr [esp + 0x48]
// 007fb77a  85c0                 test eax, eax
// 007fb77c  7c0d                 jl 0x7fb78b
// 007fb77e  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 007fb781  7d08                 jge 0x7fb78b
// 007fb783  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 007fb786  8b0481               mov eax, dword ptr [ecx + eax*4]
// 007fb789  eb02                 jmp 0x7fb78d
// 007fb78b  33c0                 xor eax, eax
// 007fb78d  899048010000         mov dword ptr [eax + 0x148], edx
// 007fb793  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007fb797  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007fb79f  8b742460             mov esi, dword ptr [esp + 0x60]
// 007fb7a3  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 007fb7a7  8b542454             mov edx, dword ptr [esp + 0x54]
// 007fb7ab  56                   push esi
// 007fb7ac  53                   push ebx
// 007fb7ad  52                   push edx
// 007fb7ae  8d44242c             lea eax, [esp + 0x2c]
// 007fb7b2  50                   push eax
// 007fb7b3  8bcd                 mov ecx, ebp
// 007fb7b5  e896ecffff           call 0x7fa450
// 007fb7ba  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007fb7bf  8b5004               mov edx, dword ptr [eax + 4]
// 007fb7c2  8b08                 mov ecx, dword ptr [eax]
// 007fb7c4  8bc2                 mov eax, edx
// 007fb7c6  7502                 jne 0x7fb7ca
// 007fb7c8  8bc1                 mov eax, ecx
// 007fb7ca  3b44245c             cmp eax, dword ptr [esp + 0x5c]
// 007fb7ce  0f8ca6000000         jl 0x7fb87a
// 007fb7d4  837c241800           cmp dword ptr [esp + 0x18], 0
// 007fb7d9  0f8501fcffff         jne 0x7fb3e0
// 007fb7df  f60680               test byte ptr [esi], 0x80
// 007fb7e2  0f8492000000         je 0x7fb87a
// 007fb7e8  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 007fb7eb  bf01000000           mov edi, 1
// 007fb7f0  33c0                 xor eax, eax
// 007fb7f2  8bf7                 mov esi, edi
// 007fb7f4  85c9                 test ecx, ecx
// 007fb7f6  7e5b                 jle 0x7fb853
// 007fb7f8  8bd3                 mov edx, ebx
// 007fb7fa  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007fb7fe  83c20c               add edx, 0xc
// 007fb801  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 007fb805  7440                 je 0x7fb847
// 007fb807  85f6                 test esi, esi
// 007fb809  753a                 jne 0x7fb845
// 007fb80b  85db                 test ebx, ebx
// 007fb80d  7409                 je 0x7fb818
// 007fb80f  8b32                 mov esi, dword ptr [edx]
// 007fb811  eb08                 jmp 0x7fb81b
// 007fb813  e834c4faff           call 0x7a7c4c
// 007fb818  8b72fc               mov esi, dword ptr [edx - 4]
// 007fb81b  3b74245c             cmp esi, dword ptr [esp + 0x5c]
// 007fb81f  7e24                 jle 0x7fb845
// 007fb821  85c0                 test eax, eax
// 007fb823  7c11                 jl 0x7fb836
// 007fb825  3bc1                 cmp eax, ecx
// 007fb827  7d0d                 jge 0x7fb836
// 007fb829  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 007fb82c  7de5                 jge 0x7fb813
// 007fb82e  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 007fb831  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 007fb834  eb02                 jmp 0x7fb838
// 007fb836  33c9                 xor ecx, ecx
// 007fb838  c7814801000002000000 mov dword ptr [ecx + 0x148], 2
// 007fb842  897a24               mov dword ptr [edx + 0x24], edi
// 007fb845  33f6                 xor esi, esi
// 007fb847  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 007fb84a  03c7                 add eax, edi
// 007fb84c  83c240               add edx, 0x40
// 007fb84f  3bc1                 cmp eax, ecx
// 007fb851  7cae                 jl 0x7fb801
// 007fb853  8b542460             mov edx, dword ptr [esp + 0x60]
// 007fb857  8b442458             mov eax, dword ptr [esp + 0x58]
// 007fb85b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007fb85f  8b742450             mov esi, dword ptr [esp + 0x50]
// 007fb863  52                   push edx
// 007fb864  50                   push eax
// 007fb865  51                   push ecx
// 007fb866  56                   push esi
// 007fb867  8bcd                 mov ecx, ebp
// 007fb869  e8e2ebffff           call 0x7fa450
// 007fb86e  5f                   pop edi
// 007fb86f  8bc6                 mov eax, esi
// 007fb871  5e                   pop esi
// 007fb872  5d                   pop ebp
// 007fb873  5b                   pop ebx
// 007fb874  83c43c               add esp, 0x3c
// 007fb877  c21400               ret 0x14
// 007fb87a  8b442450             mov eax, dword ptr [esp + 0x50]
// 007fb87e  5f                   pop edi
// 007fb87f  5e                   pop esi
// 007fb880  5d                   pop ebp
// 007fb881  895004               mov dword ptr [eax + 4], edx
// 007fb884  8908                 mov dword ptr [eax], ecx
// 007fb886  5b                   pop ebx
// 007fb887  83c43c               add esp, 0x3c
// 007fb88a  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_ReduceSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@HAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
