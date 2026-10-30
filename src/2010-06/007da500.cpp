// roc 2010-06 007da500  unit: CXTPReportControl  size: 1045 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007da500
//
// 007da500  83ec14               sub esp, 0x14
// 007da503  53                   push ebx
// 007da504  55                   push ebp
// 007da505  56                   push esi
// 007da506  57                   push edi
// 007da507  8bf1                 mov esi, ecx
// 007da509  e862dafcff           call 0x7a7f70
// 007da50e  8b3d7cbc9e00         mov edi, dword ptr [0x9ebc7c]
// 007da514  6a10                 push 0x10
// 007da516  ffd7                 call edi
// 007da518  33db                 xor ebx, ebx
// 007da51a  6685c0               test ax, ax
// 007da51d  6a11                 push 0x11
// 007da51f  0f9cc3               setl bl
// 007da522  ffd7                 call edi
// 007da524  33c9                 xor ecx, ecx
// 007da526  6685c0               test ax, ax
// 007da529  0f9cc1               setl cl
// 007da52c  8be9                 mov ebp, ecx
// 007da52e  8bce                 mov ecx, esi
// 007da530  e88b80ffff           call 0x7d25c0
// 007da535  8d542428             lea edx, [esp + 0x28]
// 007da539  52                   push edx
// 007da53a  56                   push esi
// 007da53b  8bf8                 mov edi, eax
// 007da53d  e85e5c0200           call 0x8001a0
// 007da542  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 007da548  83c408               add esp, 8
// 007da54b  e830720000           call 0x7e1780
// 007da550  85c0                 test eax, eax
// 007da552  0f84f2020000         je 0x7da84a
// 007da558  8b442428             mov eax, dword ptr [esp + 0x28]
// 007da55c  83c0f3               add eax, -0xd
// 007da55f  83f864               cmp eax, 0x64
// 007da562  0f87e2020000         ja 0x7da84a
// 007da568  0fb680b0a87d00       movzx eax, byte ptr [eax + 0x7da8b0]
// 007da56f  ff248574a87d00       jmp dword ptr [eax*4 + 0x7da874]
// 007da576  85ed                 test ebp, ebp
// 007da578  740c                 je 0x7da586
// 007da57a  8bce                 mov ecx, esi
// 007da57c  e8bfceffff           call 0x7d7440
// 007da581  e9c4020000           jmp 0x7da84a
// 007da586  85ff                 test edi, edi
// 007da588  0f84bc020000         je 0x7da84a
// 007da58e  8b17                 mov edx, dword ptr [edi]
// 007da590  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 007da596  8bcf                 mov ecx, edi
// 007da598  ffd0                 call eax
// 007da59a  85c0                 test eax, eax
// 007da59c  0f84a8020000         je 0x7da84a
// 007da5a2  8b17                 mov edx, dword ptr [edi]
// 007da5a4  8b4278               mov eax, dword ptr [edx + 0x78]
// 007da5a7  8bcf                 mov ecx, edi
// 007da5a9  ffd0                 call eax
// 007da5ab  85c0                 test eax, eax
// 007da5ad  0f8597020000         jne 0x7da84a
// 007da5b3  8b17                 mov edx, dword ptr [edi]
// 007da5b5  8b427c               mov eax, dword ptr [edx + 0x7c]
// 007da5b8  6a01                 push 1
// 007da5ba  8bcf                 mov ecx, edi
// 007da5bc  ffd0                 call eax
// 007da5be  e987020000           jmp 0x7da84a
// 007da5c3  85ed                 test ebp, ebp
// 007da5c5  740c                 je 0x7da5d3
// 007da5c7  8bce                 mov ecx, esi
// 007da5c9  e812ceffff           call 0x7d73e0
// 007da5ce  e977020000           jmp 0x7da84a
// 007da5d3  85ff                 test edi, edi
// 007da5d5  0f846f020000         je 0x7da84a
// 007da5db  8b17                 mov edx, dword ptr [edi]
// 007da5dd  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 007da5e3  8bcf                 mov ecx, edi
// 007da5e5  ffd0                 call eax
// 007da5e7  85c0                 test eax, eax
// 007da5e9  0f845b020000         je 0x7da84a
// 007da5ef  8b17                 mov edx, dword ptr [edi]
// 007da5f1  8b4278               mov eax, dword ptr [edx + 0x78]
// 007da5f4  8bcf                 mov ecx, edi
// 007da5f6  ffd0                 call eax
// 007da5f8  85c0                 test eax, eax
// 007da5fa  0f844a020000         je 0x7da84a
// 007da600  8b17                 mov edx, dword ptr [edi]
// 007da602  8b427c               mov eax, dword ptr [edx + 0x7c]
// 007da605  6a00                 push 0
// 007da607  8bcf                 mov ecx, edi
// 007da609  ffd0                 call eax
// 007da60b  e93a020000           jmp 0x7da84a
// 007da610  85ff                 test edi, edi
// 007da612  746b                 je 0x7da67f
// 007da614  8b17                 mov edx, dword ptr [edi]
// 007da616  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 007da61c  8bcf                 mov ecx, edi
// 007da61e  ffd0                 call eax
// 007da620  85c0                 test eax, eax
// 007da622  740d                 je 0x7da631
// 007da624  8b17                 mov edx, dword ptr [edi]
// 007da626  8b4278               mov eax, dword ptr [edx + 0x78]
// 007da629  8bcf                 mov ecx, edi
// 007da62b  ffd0                 call eax
// 007da62d  85c0                 test eax, eax
// 007da62f  7482                 je 0x7da5b3
// 007da631  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 007da638  7445                 je 0x7da67f
// 007da63a  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 007da640  85c9                 test ecx, ecx
// 007da642  743b                 je 0x7da67f
// 007da644  8b1e                 mov ebx, dword ptr [esi]
// 007da646  6a01                 push 1
// 007da648  e8b3160000           call 0x7dbd00
// 007da64d  8b9360020000         mov edx, dword ptr [ebx + 0x260]
// 007da653  50                   push eax
// 007da654  57                   push edi
// 007da655  8bce                 mov ecx, esi
// 007da657  ffd2                 call edx
// 007da659  85c0                 test eax, eax
// 007da65b  0f84e9010000         je 0x7da84a
// 007da661  50                   push eax
// 007da662  8bce                 mov ecx, esi
// 007da664  e81794ffff           call 0x7d3a80
// 007da669  6a00                 push 0
// 007da66b  8bce                 mov ecx, esi
// 007da66d  e84e7fffff           call 0x7d25c0
// 007da672  50                   push eax
// 007da673  8bce                 mov ecx, esi
// 007da675  e896f3ffff           call 0x7d9a10
// 007da67a  e9cb010000           jmp 0x7da84a
// 007da67f  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 007da685  55                   push ebp
// 007da686  53                   push ebx
// 007da687  e8c4020800           call 0x85a950
// 007da68c  e9b9010000           jmp 0x7da84a
// 007da691  85ff                 test edi, edi
// 007da693  0f84c3000000         je 0x7da75c
// 007da699  8b07                 mov eax, dword ptr [edi]
// 007da69b  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 007da6a1  8bcf                 mov ecx, edi
// 007da6a3  ffd2                 call edx
// 007da6a5  85c0                 test eax, eax
// 007da6a7  741d                 je 0x7da6c6
// 007da6a9  8b07                 mov eax, dword ptr [edi]
// 007da6ab  8b5078               mov edx, dword ptr [eax + 0x78]
// 007da6ae  8bcf                 mov ecx, edi
// 007da6b0  ffd2                 call edx
// 007da6b2  85c0                 test eax, eax
// 007da6b4  7410                 je 0x7da6c6
// 007da6b6  8b07                 mov eax, dword ptr [edi]
// 007da6b8  8b507c               mov edx, dword ptr [eax + 0x7c]
// 007da6bb  6a00                 push 0
// 007da6bd  8bcf                 mov ecx, edi
// 007da6bf  ffd2                 call edx
// 007da6c1  e984010000           jmp 0x7da84a
// 007da6c6  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 007da6cd  7445                 je 0x7da714
// 007da6cf  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 007da6d5  85c9                 test ecx, ecx
// 007da6d7  743b                 je 0x7da714
// 007da6d9  8b1e                 mov ebx, dword ptr [esi]
// 007da6db  6aff                 push -1
// 007da6dd  e81e160000           call 0x7dbd00
// 007da6e2  50                   push eax
// 007da6e3  8b8360020000         mov eax, dword ptr [ebx + 0x260]
// 007da6e9  57                   push edi
// 007da6ea  8bce                 mov ecx, esi
// 007da6ec  ffd0                 call eax
// 007da6ee  85c0                 test eax, eax
// 007da6f0  0f8454010000         je 0x7da84a
// 007da6f6  50                   push eax
// 007da6f7  8bce                 mov ecx, esi
// 007da6f9  e88293ffff           call 0x7d3a80
// 007da6fe  6a00                 push 0
// 007da700  8bce                 mov ecx, esi
// 007da702  e8b97effff           call 0x7d25c0
// 007da707  50                   push eax
// 007da708  8bce                 mov ecx, esi
// 007da70a  e801f3ffff           call 0x7d9a10
// 007da70f  e936010000           jmp 0x7da84a
// 007da714  8b17                 mov edx, dword ptr [edi]
// 007da716  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 007da71c  8bcf                 mov ecx, edi
// 007da71e  ffd0                 call eax
// 007da720  85c0                 test eax, eax
// 007da722  7538                 jne 0x7da75c
// 007da724  8b17                 mov edx, dword ptr [edi]
// 007da726  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 007da72c  8bcf                 mov ecx, edi
// 007da72e  ffd0                 call eax
// 007da730  85c0                 test eax, eax
// 007da732  7428                 je 0x7da75c
// 007da734  85db                 test ebx, ebx
// 007da736  7524                 jne 0x7da75c
// 007da738  8b17                 mov edx, dword ptr [edi]
// 007da73a  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 007da740  53                   push ebx
// 007da741  8bcf                 mov ecx, edi
// 007da743  ffd0                 call eax
// 007da745  50                   push eax
// 007da746  8bce                 mov ecx, esi
// 007da748  e8c3f2ffff           call 0x7d9a10
// 007da74d  8b17                 mov edx, dword ptr [edi]
// 007da74f  8b427c               mov eax, dword ptr [edx + 0x7c]
// 007da752  53                   push ebx
// 007da753  8bcf                 mov ecx, edi
// 007da755  ffd0                 call eax
// 007da757  e9ee000000           jmp 0x7da84a
// 007da75c  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 007da762  55                   push ebp
// 007da763  53                   push ebx
// 007da764  e8e7020800           call 0x85aa50
// 007da769  e9dc000000           jmp 0x7da84a
// 007da76e  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 007da774  6a00                 push 0
// 007da776  53                   push ebx
// 007da777  e8d4fe0700           call 0x85a650
// 007da77c  e9c9000000           jmp 0x7da84a
// 007da781  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 007da787  6a00                 push 0
// 007da789  53                   push ebx
// 007da78a  e801ff0700           call 0x85a690
// 007da78f  e9b6000000           jmp 0x7da84a
// 007da794  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 007da79a  6a00                 push 0
// 007da79c  53                   push ebx
// 007da79d  e8befd0700           call 0x85a560
// 007da7a2  e9a3000000           jmp 0x7da84a
// 007da7a7  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 007da7ad  6a00                 push 0
// 007da7af  53                   push ebx
// 007da7b0  e82bfe0700           call 0x85a5e0
// 007da7b5  e990000000           jmp 0x7da84a
// 007da7ba  85ff                 test edi, edi
// 007da7bc  0f8488000000         je 0x7da84a
// 007da7c2  8b17                 mov edx, dword ptr [edi]
// 007da7c4  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 007da7ca  8bcf                 mov ecx, edi
// 007da7cc  ffd0                 call eax
// 007da7ce  85c0                 test eax, eax
// 007da7d0  7478                 je 0x7da84a
// 007da7d2  8b1f                 mov ebx, dword ptr [edi]
// 007da7d4  8b5378               mov edx, dword ptr [ebx + 0x78]
// 007da7d7  8bcf                 mov ecx, edi
// 007da7d9  ffd2                 call edx
// 007da7db  f7d8                 neg eax
// 007da7dd  1bc0                 sbb eax, eax
// 007da7df  40                   inc eax
// 007da7e0  50                   push eax
// 007da7e1  8b437c               mov eax, dword ptr [ebx + 0x7c]
// 007da7e4  8bcf                 mov ecx, edi
// 007da7e6  ffd0                 call eax
// 007da7e8  eb60                 jmp 0x7da84a
// 007da7ea  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 007da7f1  7457                 je 0x7da84a
// 007da7f3  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 007da7f9  e8c2350000           call 0x7dddc0
// 007da7fe  eb4a                 jmp 0x7da84a
// 007da800  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 007da806  e845030800           call 0x85ab50
// 007da80b  eb3d                 jmp 0x7da84a
// 007da80d  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 007da814  7434                 je 0x7da84a
// 007da816  85ed                 test ebp, ebp
// 007da818  7430                 je 0x7da84a
// 007da81a  85ff                 test edi, edi
// 007da81c  742c                 je 0x7da84a
// 007da81e  8b17                 mov edx, dword ptr [edi]
// 007da820  8b4274               mov eax, dword ptr [edx + 0x74]
// 007da823  8bcf                 mov ecx, edi
// 007da825  ffd0                 call eax
// 007da827  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 007da82d  57                   push edi
// 007da82e  85c0                 test eax, eax
// 007da830  7407                 je 0x7da839
// 007da832  e859810000           call 0x7e2990
// 007da837  eb05                 jmp 0x7da83e
// 007da839  e822810000           call 0x7e2960
// 007da83e  8b16                 mov edx, dword ptr [esi]
// 007da840  8b82dc010000         mov eax, dword ptr [edx + 0x1dc]
// 007da846  8bce                 mov ecx, esi
// 007da848  ffd0                 call eax
// 007da84a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007da84e  8b542430             mov edx, dword ptr [esp + 0x30]
// 007da852  8d442410             lea eax, [esp + 0x10]
// 007da856  50                   push eax
// 007da857  894c2420             mov dword ptr [esp + 0x20], ecx
// 007da85b  6af1                 push -0xf
// 007da85d  8bce                 mov ecx, esi
// 007da85f  89542428             mov dword ptr [esp + 0x28], edx
// 007da863  e868caffff           call 0x7d72d0
// 007da868  5f                   pop edi
// 007da869  5e                   pop esi
// 007da86a  5d                   pop ebp
// 007da86b  5b                   pop ebx
// 007da86c  83c414               add esp, 0x14
// 007da86f  c20c00               ret 0xc
// 007da872  8bff                 mov edi, edi
// 007da874  baa77d00ea           mov edx, 0xea007da7
// 007da879  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 007da87a  7d00                 jge 0x7da87c
// 007da87c  0da87d00a7           or eax, 0xa7007da8
// 007da881  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 007da882  7d00                 jge 0x7da884
// 007da884  94                   xchg esp, eax
// 007da885  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 007da886  7d00                 jge 0x7da888
// 007da888  81a77d006ea77d0091a6 and dword ptr [edi - 0x5891ff83], 0xa691007d
// 007da892  7d00                 jge 0x7da894
// 007da894  5c                   pop esp
// 007da895  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 007da896  7d00                 jge 0x7da898
// 007da898  10a67d007fa6         adc byte ptr [esi - 0x5980ff83], ah
// 007da89e  7d00                 jge 0x7da8a0
// 007da8a0  76a5                 jbe 0x7da847
// 007da8a2  7d00                 jge 0x7da8a4
// 007da8a4  c3                   ret 
// 007da8a5  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 007da8a6  7d00                 jge 0x7da8a8
// 007da8a8  00a87d004aa8         add byte ptr [eax - 0x57b5ff83], ch
// 007da8ae  7d00                 jge 0x7da8b0
// 007da8b0  000e                 add byte ptr [esi], cl
// 007da8b2  0e                   push cs
// 007da8b3  0e                   push cs
// 007da8b4  0e                   push cs
// 007da8b5  0e                   push cs
// 007da8b6  0e                   push cs
// 007da8b7  0e                   push cs
// 007da8b8  0e                   push cs
// 007da8b9  0e                   push cs
// 007da8ba  0e                   push cs
// 007da8bb  0e                   push cs
// 007da8bc  0e                   push cs
// 007da8bd  0e                   push cs
// 007da8be  010e                 add dword ptr [esi], ecx
// 007da8c0  0e                   push cs
// 007da8c1  0e                   push cs
// 007da8c2  0e                   push cs
// 007da8c3  0203                 add al, byte ptr [ebx]
// 007da8c5  0405                 add al, 5
// 007da8c7  06                   push es
// 007da8c8  07                   pop es
// 007da8c9  0809                 or byte ptr [ecx], cl
// 007da8cb  0a0e                 or cl, byte ptr [esi]
// 007da8cd  0e                   push cs
// 007da8ce  0e                   push cs
// 007da8cf  0e                   push cs
// 007da8d0  0e                   push cs
// 007da8d1  0e                   push cs
// 007da8d2  0e                   push cs
// 007da8d3  0e                   push cs
// 007da8d4  0e                   push cs
// 007da8d5  0e                   push cs
// 007da8d6  0e                   push cs
// 007da8d7  0e                   push cs
// 007da8d8  0e                   push cs
// 007da8d9  0e                   push cs
// 007da8da  0e                   push cs
// 007da8db  0e                   push cs
// 007da8dc  0e                   push cs
// 007da8dd  0e                   push cs
// 007da8de  0e                   push cs
// 007da8df  0e                   push cs
// 007da8e0  0e                   push cs
// 007da8e1  0e                   push cs
// 007da8e2  0e                   push cs
// 007da8e3  0e                   push cs
// 007da8e4  0e                   push cs
// 007da8e5  0e                   push cs
// 007da8e6  0e                   push cs
// 007da8e7  0e                   push cs
// 007da8e8  0e                   push cs
// 007da8e9  0e                   push cs
// 007da8ea  0e                   push cs
// 007da8eb  0e                   push cs
// 007da8ec  0e                   push cs
// 007da8ed  0e                   push cs
// 007da8ee  0e                   push cs
// 007da8ef  0e                   push cs
// 007da8f0  0e                   push cs
// 007da8f1  0e                   push cs
// 007da8f2  0e                   push cs
// 007da8f3  0e                   push cs
// 007da8f4  0e                   push cs
// 007da8f5  0e                   push cs
// 007da8f6  0e                   push cs
// 007da8f7  0e                   push cs
// 007da8f8  0e                   push cs
// 007da8f9  0e                   push cs
// 007da8fa  0e                   push cs
// 007da8fb  0e                   push cs
// 007da8fc  0e                   push cs
// 007da8fd  0e                   push cs
// 007da8fe  0e                   push cs
// 007da8ff  0e                   push cs
// 007da900  0e                   push cs
// 007da901  0e                   push cs
// 007da902  0e                   push cs
// 007da903  0e                   push cs
// 007da904  0e                   push cs
// 007da905  0e                   push cs
// 007da906  0e                   push cs
// 007da907  0e                   push cs
// 007da908  0e                   push cs
// 007da909  0e                   push cs
// 007da90a  0e                   push cs
// 007da90b  0e                   push cs
// 007da90c  0e                   push cs
// 007da90d  0e                   push cs
// 007da90e  0b0e                 or ecx, dword ptr [esi]
// 007da910  0c0e                 or al, 0xe
// 007da912  0e                   push cs
// 007da913  0e                   push cs
// copied from an identical function in another client (function ?OnKeyDown@CXTPReportControl@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp