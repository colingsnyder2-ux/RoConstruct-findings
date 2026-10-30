// roc 2009-06 0074b6a0  unit: CXTPReportControl  size: 1045 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074b6a0
//
// 0074b6a0  83ec14               sub esp, 0x14
// 0074b6a3  53                   push ebx
// 0074b6a4  55                   push ebp
// 0074b6a5  56                   push esi
// 0074b6a6  57                   push edi
// 0074b6a7  8bf1                 mov esi, ecx
// 0074b6a9  e85ad9fcff           call 0x719008
// 0074b6ae  8b3d34ee8900         mov edi, dword ptr [0x89ee34]
// 0074b6b4  6a10                 push 0x10
// 0074b6b6  ffd7                 call edi
// 0074b6b8  33db                 xor ebx, ebx
// 0074b6ba  6685c0               test ax, ax
// 0074b6bd  6a11                 push 0x11
// 0074b6bf  0f9cc3               setl bl
// 0074b6c2  ffd7                 call edi
// 0074b6c4  33c9                 xor ecx, ecx
// 0074b6c6  6685c0               test ax, ax
// 0074b6c9  0f9cc1               setl cl
// 0074b6cc  8be9                 mov ebp, ecx
// 0074b6ce  8bce                 mov ecx, esi
// 0074b6d0  e8cb7fffff           call 0x7436a0
// 0074b6d5  8d542428             lea edx, [esp + 0x28]
// 0074b6d9  52                   push edx
// 0074b6da  56                   push esi
// 0074b6db  8bf8                 mov edi, eax
// 0074b6dd  e87e5c0200           call 0x771360
// 0074b6e2  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0074b6e8  83c408               add esp, 8
// 0074b6eb  e8c0670000           call 0x751eb0
// 0074b6f0  85c0                 test eax, eax
// 0074b6f2  0f84f2020000         je 0x74b9ea
// 0074b6f8  8b442428             mov eax, dword ptr [esp + 0x28]
// 0074b6fc  83c0f3               add eax, -0xd
// 0074b6ff  83f864               cmp eax, 0x64
// 0074b702  0f87e2020000         ja 0x74b9ea
// 0074b708  0fb68050ba7400       movzx eax, byte ptr [eax + 0x74ba50]
// 0074b70f  ff248514ba7400       jmp dword ptr [eax*4 + 0x74ba14]
// 0074b716  85ed                 test ebp, ebp
// 0074b718  740c                 je 0x74b726
// 0074b71a  8bce                 mov ecx, esi
// 0074b71c  e8afceffff           call 0x7485d0
// 0074b721  e9c4020000           jmp 0x74b9ea
// 0074b726  85ff                 test edi, edi
// 0074b728  0f84bc020000         je 0x74b9ea
// 0074b72e  8b17                 mov edx, dword ptr [edi]
// 0074b730  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0074b736  8bcf                 mov ecx, edi
// 0074b738  ffd0                 call eax
// 0074b73a  85c0                 test eax, eax
// 0074b73c  0f84a8020000         je 0x74b9ea
// 0074b742  8b17                 mov edx, dword ptr [edi]
// 0074b744  8b4278               mov eax, dword ptr [edx + 0x78]
// 0074b747  8bcf                 mov ecx, edi
// 0074b749  ffd0                 call eax
// 0074b74b  85c0                 test eax, eax
// 0074b74d  0f8597020000         jne 0x74b9ea
// 0074b753  8b17                 mov edx, dword ptr [edi]
// 0074b755  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0074b758  6a01                 push 1
// 0074b75a  8bcf                 mov ecx, edi
// 0074b75c  ffd0                 call eax
// 0074b75e  e987020000           jmp 0x74b9ea
// 0074b763  85ed                 test ebp, ebp
// 0074b765  740c                 je 0x74b773
// 0074b767  8bce                 mov ecx, esi
// 0074b769  e802ceffff           call 0x748570
// 0074b76e  e977020000           jmp 0x74b9ea
// 0074b773  85ff                 test edi, edi
// 0074b775  0f846f020000         je 0x74b9ea
// 0074b77b  8b17                 mov edx, dword ptr [edi]
// 0074b77d  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0074b783  8bcf                 mov ecx, edi
// 0074b785  ffd0                 call eax
// 0074b787  85c0                 test eax, eax
// 0074b789  0f845b020000         je 0x74b9ea
// 0074b78f  8b17                 mov edx, dword ptr [edi]
// 0074b791  8b4278               mov eax, dword ptr [edx + 0x78]
// 0074b794  8bcf                 mov ecx, edi
// 0074b796  ffd0                 call eax
// 0074b798  85c0                 test eax, eax
// 0074b79a  0f844a020000         je 0x74b9ea
// 0074b7a0  8b17                 mov edx, dword ptr [edi]
// 0074b7a2  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0074b7a5  6a00                 push 0
// 0074b7a7  8bcf                 mov ecx, edi
// 0074b7a9  ffd0                 call eax
// 0074b7ab  e93a020000           jmp 0x74b9ea
// 0074b7b0  85ff                 test edi, edi
// 0074b7b2  746b                 je 0x74b81f
// 0074b7b4  8b17                 mov edx, dword ptr [edi]
// 0074b7b6  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0074b7bc  8bcf                 mov ecx, edi
// 0074b7be  ffd0                 call eax
// 0074b7c0  85c0                 test eax, eax
// 0074b7c2  740d                 je 0x74b7d1
// 0074b7c4  8b17                 mov edx, dword ptr [edi]
// 0074b7c6  8b4278               mov eax, dword ptr [edx + 0x78]
// 0074b7c9  8bcf                 mov ecx, edi
// 0074b7cb  ffd0                 call eax
// 0074b7cd  85c0                 test eax, eax
// 0074b7cf  7482                 je 0x74b753
// 0074b7d1  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 0074b7d8  7445                 je 0x74b81f
// 0074b7da  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 0074b7e0  85c9                 test ecx, ecx
// 0074b7e2  743b                 je 0x74b81f
// 0074b7e4  8b1e                 mov ebx, dword ptr [esi]
// 0074b7e6  6a01                 push 1
// 0074b7e8  e8d3160000           call 0x74cec0
// 0074b7ed  8b9360020000         mov edx, dword ptr [ebx + 0x260]
// 0074b7f3  50                   push eax
// 0074b7f4  57                   push edi
// 0074b7f5  8bce                 mov ecx, esi
// 0074b7f7  ffd2                 call edx
// 0074b7f9  85c0                 test eax, eax
// 0074b7fb  0f84e9010000         je 0x74b9ea
// 0074b801  50                   push eax
// 0074b802  8bce                 mov ecx, esi
// 0074b804  e80794ffff           call 0x744c10
// 0074b809  6a00                 push 0
// 0074b80b  8bce                 mov ecx, esi
// 0074b80d  e88e7effff           call 0x7436a0
// 0074b812  50                   push eax
// 0074b813  8bce                 mov ecx, esi
// 0074b815  e896f3ffff           call 0x74abb0
// 0074b81a  e9cb010000           jmp 0x74b9ea
// 0074b81f  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0074b825  55                   push ebp
// 0074b826  53                   push ebx
// 0074b827  e8d4010800           call 0x7cba00
// 0074b82c  e9b9010000           jmp 0x74b9ea
// 0074b831  85ff                 test edi, edi
// 0074b833  0f84c3000000         je 0x74b8fc
// 0074b839  8b07                 mov eax, dword ptr [edi]
// 0074b83b  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0074b841  8bcf                 mov ecx, edi
// 0074b843  ffd2                 call edx
// 0074b845  85c0                 test eax, eax
// 0074b847  741d                 je 0x74b866
// 0074b849  8b07                 mov eax, dword ptr [edi]
// 0074b84b  8b5078               mov edx, dword ptr [eax + 0x78]
// 0074b84e  8bcf                 mov ecx, edi
// 0074b850  ffd2                 call edx
// 0074b852  85c0                 test eax, eax
// 0074b854  7410                 je 0x74b866
// 0074b856  8b07                 mov eax, dword ptr [edi]
// 0074b858  8b507c               mov edx, dword ptr [eax + 0x7c]
// 0074b85b  6a00                 push 0
// 0074b85d  8bcf                 mov ecx, edi
// 0074b85f  ffd2                 call edx
// 0074b861  e984010000           jmp 0x74b9ea
// 0074b866  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 0074b86d  7445                 je 0x74b8b4
// 0074b86f  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 0074b875  85c9                 test ecx, ecx
// 0074b877  743b                 je 0x74b8b4
// 0074b879  8b1e                 mov ebx, dword ptr [esi]
// 0074b87b  6aff                 push -1
// 0074b87d  e83e160000           call 0x74cec0
// 0074b882  50                   push eax
// 0074b883  8b8360020000         mov eax, dword ptr [ebx + 0x260]
// 0074b889  57                   push edi
// 0074b88a  8bce                 mov ecx, esi
// 0074b88c  ffd0                 call eax
// 0074b88e  85c0                 test eax, eax
// 0074b890  0f8454010000         je 0x74b9ea
// 0074b896  50                   push eax
// 0074b897  8bce                 mov ecx, esi
// 0074b899  e87293ffff           call 0x744c10
// 0074b89e  6a00                 push 0
// 0074b8a0  8bce                 mov ecx, esi
// 0074b8a2  e8f97dffff           call 0x7436a0
// 0074b8a7  50                   push eax
// 0074b8a8  8bce                 mov ecx, esi
// 0074b8aa  e801f3ffff           call 0x74abb0
// 0074b8af  e936010000           jmp 0x74b9ea
// 0074b8b4  8b17                 mov edx, dword ptr [edi]
// 0074b8b6  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0074b8bc  8bcf                 mov ecx, edi
// 0074b8be  ffd0                 call eax
// 0074b8c0  85c0                 test eax, eax
// 0074b8c2  7538                 jne 0x74b8fc
// 0074b8c4  8b17                 mov edx, dword ptr [edi]
// 0074b8c6  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 0074b8cc  8bcf                 mov ecx, edi
// 0074b8ce  ffd0                 call eax
// 0074b8d0  85c0                 test eax, eax
// 0074b8d2  7428                 je 0x74b8fc
// 0074b8d4  85db                 test ebx, ebx
// 0074b8d6  7524                 jne 0x74b8fc
// 0074b8d8  8b17                 mov edx, dword ptr [edi]
// 0074b8da  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 0074b8e0  53                   push ebx
// 0074b8e1  8bcf                 mov ecx, edi
// 0074b8e3  ffd0                 call eax
// 0074b8e5  50                   push eax
// 0074b8e6  8bce                 mov ecx, esi
// 0074b8e8  e8c3f2ffff           call 0x74abb0
// 0074b8ed  8b17                 mov edx, dword ptr [edi]
// 0074b8ef  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0074b8f2  53                   push ebx
// 0074b8f3  8bcf                 mov ecx, edi
// 0074b8f5  ffd0                 call eax
// 0074b8f7  e9ee000000           jmp 0x74b9ea
// 0074b8fc  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0074b902  55                   push ebp
// 0074b903  53                   push ebx
// 0074b904  e8f7010800           call 0x7cbb00
// 0074b909  e9dc000000           jmp 0x74b9ea
// 0074b90e  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0074b914  6a00                 push 0
// 0074b916  53                   push ebx
// 0074b917  e8e4fd0700           call 0x7cb700
// 0074b91c  e9c9000000           jmp 0x74b9ea
// 0074b921  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0074b927  6a00                 push 0
// 0074b929  53                   push ebx
// 0074b92a  e811fe0700           call 0x7cb740
// 0074b92f  e9b6000000           jmp 0x74b9ea
// 0074b934  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0074b93a  6a00                 push 0
// 0074b93c  53                   push ebx
// 0074b93d  e8cefc0700           call 0x7cb610
// 0074b942  e9a3000000           jmp 0x74b9ea
// 0074b947  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0074b94d  6a00                 push 0
// 0074b94f  53                   push ebx
// 0074b950  e83bfd0700           call 0x7cb690
// 0074b955  e990000000           jmp 0x74b9ea
// 0074b95a  85ff                 test edi, edi
// 0074b95c  0f8488000000         je 0x74b9ea
// 0074b962  8b17                 mov edx, dword ptr [edi]
// 0074b964  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0074b96a  8bcf                 mov ecx, edi
// 0074b96c  ffd0                 call eax
// 0074b96e  85c0                 test eax, eax
// 0074b970  7478                 je 0x74b9ea
// 0074b972  8b1f                 mov ebx, dword ptr [edi]
// 0074b974  8b5378               mov edx, dword ptr [ebx + 0x78]
// 0074b977  8bcf                 mov ecx, edi
// 0074b979  ffd2                 call edx
// 0074b97b  f7d8                 neg eax
// 0074b97d  1bc0                 sbb eax, eax
// 0074b97f  40                   inc eax
// 0074b980  50                   push eax
// 0074b981  8b437c               mov eax, dword ptr [ebx + 0x7c]
// 0074b984  8bcf                 mov ecx, edi
// 0074b986  ffd0                 call eax
// 0074b988  eb60                 jmp 0x74b9ea
// 0074b98a  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 0074b991  7457                 je 0x74b9ea
// 0074b993  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 0074b999  e8e2350000           call 0x74ef80
// 0074b99e  eb4a                 jmp 0x74b9ea
// 0074b9a0  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0074b9a6  e855020800           call 0x7cbc00
// 0074b9ab  eb3d                 jmp 0x74b9ea
// 0074b9ad  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 0074b9b4  7434                 je 0x74b9ea
// 0074b9b6  85ed                 test ebp, ebp
// 0074b9b8  7430                 je 0x74b9ea
// 0074b9ba  85ff                 test edi, edi
// 0074b9bc  742c                 je 0x74b9ea
// 0074b9be  8b17                 mov edx, dword ptr [edi]
// 0074b9c0  8b4274               mov eax, dword ptr [edx + 0x74]
// 0074b9c3  8bcf                 mov ecx, edi
// 0074b9c5  ffd0                 call eax
// 0074b9c7  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0074b9cd  57                   push edi
// 0074b9ce  85c0                 test eax, eax
// 0074b9d0  7407                 je 0x74b9d9
// 0074b9d2  e809800000           call 0x7539e0
// 0074b9d7  eb05                 jmp 0x74b9de
// 0074b9d9  e8d27f0000           call 0x7539b0
// 0074b9de  8b16                 mov edx, dword ptr [esi]
// 0074b9e0  8b82dc010000         mov eax, dword ptr [edx + 0x1dc]
// 0074b9e6  8bce                 mov ecx, esi
// 0074b9e8  ffd0                 call eax
// 0074b9ea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0074b9ee  8b542430             mov edx, dword ptr [esp + 0x30]
// 0074b9f2  8d442410             lea eax, [esp + 0x10]
// 0074b9f6  50                   push eax
// 0074b9f7  894c2420             mov dword ptr [esp + 0x20], ecx
// 0074b9fb  6af1                 push -0xf
// 0074b9fd  8bce                 mov ecx, esi
// 0074b9ff  89542428             mov dword ptr [esp + 0x28], edx
// 0074ba03  e858caffff           call 0x748460
// 0074ba08  5f                   pop edi
// 0074ba09  5e                   pop esi
// 0074ba0a  5d                   pop ebp
// 0074ba0b  5b                   pop ebx
// 0074ba0c  83c414               add esp, 0x14
// 0074ba0f  c20c00               ret 0xc
// 0074ba12  8bff                 mov edi, edi
// 0074ba14  5a                   pop edx
// 0074ba15  b974008ab9           mov ecx, 0xb98a0074
// 0074ba1a  7400                 je 0x74ba1c
// 0074ba1c  ad                   lodsd eax, dword ptr [esi]
// 0074ba1d  b9740047b9           mov ecx, 0xb9470074
// 0074ba22  7400                 je 0x74ba24
// 0074ba24  34b9                 xor al, 0xb9
// 0074ba26  7400                 je 0x74ba28
// 0074ba28  21b974000eb9         and dword ptr [ecx - 0x46f1ff8c], edi
// 0074ba2e  7400                 je 0x74ba30
// 0074ba30  31b87400fcb8         xor dword ptr [eax - 0x4703ff8c], edi
// 0074ba36  7400                 je 0x74ba38
// 0074ba38  b0b7                 mov al, 0xb7
// 0074ba3a  7400                 je 0x74ba3c
// 0074ba3c  1f                   pop ds
// 0074ba3d  b8740016b7           mov eax, 0xb7160074
// 0074ba42  7400                 je 0x74ba44
// 0074ba44  63b77400a0b9         arpl word ptr [edi - 0x465fff8c], si
// 0074ba4a  7400                 je 0x74ba4c
// 0074ba4c  eab97400000e0e       ljmp 0xe0e:0x74b9
// 0074ba53  0e                   push cs
// 0074ba54  0e                   push cs
// 0074ba55  0e                   push cs
// 0074ba56  0e                   push cs
// 0074ba57  0e                   push cs
// 0074ba58  0e                   push cs
// 0074ba59  0e                   push cs
// 0074ba5a  0e                   push cs
// 0074ba5b  0e                   push cs
// 0074ba5c  0e                   push cs
// 0074ba5d  0e                   push cs
// 0074ba5e  010e                 add dword ptr [esi], ecx
// 0074ba60  0e                   push cs
// 0074ba61  0e                   push cs
// 0074ba62  0e                   push cs
// 0074ba63  0203                 add al, byte ptr [ebx]
// 0074ba65  0405                 add al, 5
// 0074ba67  06                   push es
// 0074ba68  07                   pop es
// 0074ba69  0809                 or byte ptr [ecx], cl
// 0074ba6b  0a0e                 or cl, byte ptr [esi]
// 0074ba6d  0e                   push cs
// 0074ba6e  0e                   push cs
// 0074ba6f  0e                   push cs
// 0074ba70  0e                   push cs
// 0074ba71  0e                   push cs
// 0074ba72  0e                   push cs
// 0074ba73  0e                   push cs
// 0074ba74  0e                   push cs
// 0074ba75  0e                   push cs
// 0074ba76  0e                   push cs
// 0074ba77  0e                   push cs
// 0074ba78  0e                   push cs
// 0074ba79  0e                   push cs
// 0074ba7a  0e                   push cs
// 0074ba7b  0e                   push cs
// 0074ba7c  0e                   push cs
// 0074ba7d  0e                   push cs
// 0074ba7e  0e                   push cs
// 0074ba7f  0e                   push cs
// 0074ba80  0e                   push cs
// 0074ba81  0e                   push cs
// 0074ba82  0e                   push cs
// 0074ba83  0e                   push cs
// 0074ba84  0e                   push cs
// 0074ba85  0e                   push cs
// 0074ba86  0e                   push cs
// 0074ba87  0e                   push cs
// 0074ba88  0e                   push cs
// 0074ba89  0e                   push cs
// 0074ba8a  0e                   push cs
// 0074ba8b  0e                   push cs
// 0074ba8c  0e                   push cs
// 0074ba8d  0e                   push cs
// 0074ba8e  0e                   push cs
// 0074ba8f  0e                   push cs
// 0074ba90  0e                   push cs
// 0074ba91  0e                   push cs
// 0074ba92  0e                   push cs
// 0074ba93  0e                   push cs
// 0074ba94  0e                   push cs
// 0074ba95  0e                   push cs
// 0074ba96  0e                   push cs
// 0074ba97  0e                   push cs
// 0074ba98  0e                   push cs
// 0074ba99  0e                   push cs
// 0074ba9a  0e                   push cs
// 0074ba9b  0e                   push cs
// 0074ba9c  0e                   push cs
// 0074ba9d  0e                   push cs
// 0074ba9e  0e                   push cs
// 0074ba9f  0e                   push cs
// 0074baa0  0e                   push cs
// 0074baa1  0e                   push cs
// 0074baa2  0e                   push cs
// 0074baa3  0e                   push cs
// 0074baa4  0e                   push cs
// 0074baa5  0e                   push cs
// 0074baa6  0e                   push cs
// 0074baa7  0e                   push cs
// 0074baa8  0e                   push cs
// 0074baa9  0e                   push cs
// 0074baaa  0e                   push cs
// 0074baab  0e                   push cs
// 0074baac  0e                   push cs
// 0074baad  0e                   push cs
// 0074baae  0b0e                 or ecx, dword ptr [esi]
// 0074bab0  0c0e                 or al, 0xe
// 0074bab2  0e                   push cs
// 0074bab3  0e                   push cs
// copied from an identical function in another client (function ?OnKeyDown@CXTPReportControl@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp