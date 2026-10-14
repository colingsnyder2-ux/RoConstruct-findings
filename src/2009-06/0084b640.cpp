// roc 2009-06 0084b640  unit: G3D::H::PAV?$Array::?$Table  size: 951 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084b640
//
// 0084b640  55                   push ebp
// 0084b641  8bec                 mov ebp, esp
// 0084b643  83e4f8               and esp, 0xfffffff8
// 0084b646  6aff                 push -1
// 0084b648  68e83f8800           push 0x883fe8
// 0084b64d  64a100000000         mov eax, dword ptr fs:[0]
// 0084b653  50                   push eax
// 0084b654  64892500000000       mov dword ptr fs:[0], esp
// 0084b65b  83ec70               sub esp, 0x70
// 0084b65e  f605b8c8a30001       test byte ptr [0xa3c8b8], 1
// 0084b665  53                   push ebx
// 0084b666  56                   push esi
// 0084b667  57                   push edi
// 0084b668  8bf9                 mov edi, ecx
// 0084b66a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0084b672  7514                 jne 0x84b688
// 0084b674  a144e58900           mov eax, dword ptr [0x89e544]
// 0084b679  830db8c8a30001       or dword ptr [0xa3c8b8], 1
// 0084b680  dd00                 fld qword ptr [eax]
// 0084b682  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 0084b688  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 0084b68e  8b7508               mov esi, dword ptr [ebp + 8]
// 0084b691  8d4c2410             lea ecx, [esp + 0x10]
// 0084b695  dd5c2428             fstp qword ptr [esp + 0x28]
// 0084b699  d906                 fld dword ptr [esi]
// 0084b69b  51                   push ecx
// 0084b69c  8d54241c             lea edx, [esp + 0x1c]
// 0084b6a0  52                   push edx
// 0084b6a1  8d442424             lea eax, [esp + 0x24]
// 0084b6a5  50                   push eax
// 0084b6a6  83ec0c               sub esp, 0xc
// 0084b6a9  8bc4                 mov eax, esp
// 0084b6ab  d918                 fstp dword ptr [eax]
// 0084b6ad  8bcf                 mov ecx, edi
// 0084b6af  d94604               fld dword ptr [esi + 4]
// 0084b6b2  89642448             mov dword ptr [esp + 0x48], esp
// 0084b6b6  d95804               fstp dword ptr [eax + 4]
// 0084b6b9  d94608               fld dword ptr [esi + 8]
// 0084b6bc  d95808               fstp dword ptr [eax + 8]
// 0084b6bf  e8fcf8ffff           call 0x84afc0
// 0084b6c4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0084b6c8  dd442428             fld qword ptr [esp + 0x28]
// 0084b6cc  c1e005               shl eax, 5
// 0084b6cf  03442418             add eax, dword ptr [esp + 0x18]
// 0084b6d3  33db                 xor ebx, ebx
// 0084b6d5  c1e005               shl eax, 5
// 0084b6d8  03442410             add eax, dword ptr [esp + 0x10]
// 0084b6dc  895c2418             mov dword ptr [esp + 0x18], ebx
// 0084b6e0  8d0c40               lea ecx, [eax + eax*2]
// 0084b6e3  8d048f               lea eax, [edi + ecx*4]
// 0084b6e6  8b4804               mov ecx, dword ptr [eax + 4]
// 0084b6e9  3bcb                 cmp ecx, ebx
// 0084b6eb  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0084b6ef  7e5c                 jle 0x84b74d
// 0084b6f1  8b8f04000600         mov ecx, dword ptr [edi + 0x60004]
// 0084b6f7  8b19                 mov ebx, dword ptr [ecx]
// 0084b6f9  8b10                 mov edx, dword ptr [eax]
// 0084b6fb  8b0a                 mov ecx, dword ptr [edx]
// 0084b6fd  8d0449               lea eax, [ecx + ecx*2]
// 0084b700  d90483               fld dword ptr [ebx + eax*4]
// 0084b703  8d0483               lea eax, [ebx + eax*4]
// 0084b706  d826                 fsub dword ptr [esi]
// 0084b708  d94004               fld dword ptr [eax + 4]
// 0084b70b  d86604               fsub dword ptr [esi + 4]
// 0084b70e  d94008               fld dword ptr [eax + 8]
// 0084b711  d86608               fsub dword ptr [esi + 8]
// 0084b714  d9c2                 fld st(2)
// 0084b716  decb                 fmulp st(3)
// 0084b718  d9c1                 fld st(1)
// 0084b71a  deca                 fmulp st(2)
// 0084b71c  d9ca                 fxch st(2)
// 0084b71e  dec1                 faddp st(1)
// 0084b720  d9c1                 fld st(1)
// 0084b722  deca                 fmulp st(2)
// 0084b724  dec1                 faddp st(1)
// 0084b726  d8d1                 fcom st(1)
// 0084b728  dfe0                 fnstsw ax
// 0084b72a  f6c405               test ah, 5
// 0084b72d  7a08                 jp 0x84b737
// 0084b72f  ddd9                 fstp st(1)
// 0084b731  894c2414             mov dword ptr [esp + 0x14], ecx
// 0084b735  eb02                 jmp 0x84b739
// 0084b737  ddd8                 fstp st(0)
// 0084b739  8b442418             mov eax, dword ptr [esp + 0x18]
// 0084b73d  40                   inc eax
// 0084b73e  83c204               add edx, 4
// 0084b741  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0084b745  89442418             mov dword ptr [esp + 0x18], eax
// 0084b749  7cb0                 jl 0x84b6fb
// 0084b74b  33db                 xor ebx, ebx
// 0084b74d  dd8710000600         fld qword ptr [edi + 0x60010]
// 0084b753  dcc8                 fmul st(0), st(0)
// 0084b755  ded9                 fcompp 
// 0084b757  dfe0                 fnstsw ax
// 0084b759  f6c401               test ah, 1
// 0084b75c  7518                 jne 0x84b776
// 0084b75e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0084b762  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0084b766  64890d00000000       mov dword ptr fs:[0], ecx
// 0084b76d  5f                   pop edi
// 0084b76e  5e                   pop esi
// 0084b76f  5b                   pop ebx
// 0084b770  8be5                 mov esp, ebp
// 0084b772  5d                   pop ebp
// 0084b773  c20400               ret 4
// 0084b776  8b8f04000600         mov ecx, dword ptr [edi + 0x60004]
// 0084b77c  8b5104               mov edx, dword ptr [ecx + 4]
// 0084b77f  56                   push esi
// 0084b780  89542414             mov dword ptr [esp + 0x14], edx
// 0084b784  e8e7b0d1ff           call 0x566870
// 0084b789  6a10                 push 0x10
// 0084b78b  6a28                 push 0x28
// 0084b78d  c744243ccc4c9200     mov dword ptr [esp + 0x3c], 0x924ccc
// 0084b795  c7442440c44c9200     mov dword ptr [esp + 0x40], 0x924cc4
// 0084b79d  c744244c0a000000     mov dword ptr [esp + 0x4c], 0xa
// 0084b7a5  895c2444             mov dword ptr [esp + 0x44], ebx
// 0084b7a9  e8c2f9d1ff           call 0x56b170
// 0084b7ae  6a28                 push 0x28
// 0084b7b0  53                   push ebx
// 0084b7b1  50                   push eax
// 0084b7b2  89442454             mov dword ptr [esp + 0x54], eax
// 0084b7b6  e8d506d2ff           call 0x56be90
// 0084b7bb  83c414               add esp, 0x14
// 0084b7be  d90594758b00         fld dword ptr [0x8b7594]
// 0084b7c4  d95c2418             fstp dword ptr [esp + 0x18]
// 0084b7c8  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 0084b7cf  c644240f01           mov byte ptr [esp + 0xf], 1
// 0084b7d4  d90594758b00         fld dword ptr [0x8b7594]
// 0084b7da  d9542414             fst dword ptr [esp + 0x14]
// 0084b7de  d90594758b00         fld dword ptr [0x8b7594]
// 0084b7e4  d954241c             fst dword ptr [esp + 0x1c]
// 0084b7e8  eb1e                 jmp 0x84b808
// 0084b7ea  8d9b00000000         lea ebx, [ebx]
// 0084b7f0  ddd9                 fstp st(1)
// 0084b7f2  d90594758b00         fld dword ptr [0x8b7594]
// 0084b7f8  d954241c             fst dword ptr [esp + 0x1c]
// 0084b7fc  eb0a                 jmp 0x84b808
// 0084b7fe  8bff                 mov edi, edi
// 0084b800  ddd9                 fstp st(1)
// 0084b802  d9442414             fld dword ptr [esp + 0x14]
// 0084b806  d9c9                 fxch st(1)
// 0084b808  dd8710000600         fld qword ptr [edi + 0x60010]
// 0084b80e  8d442428             lea eax, [esp + 0x28]
// 0084b812  d9442418             fld dword ptr [esp + 0x18]
// 0084b816  50                   push eax
// 0084b817  d8c9                 fmul st(1)
// 0084b819  8d4c2428             lea ecx, [esp + 0x28]
// 0084b81d  d9c1                 fld st(1)
// 0084b81f  51                   push ecx
// 0084b820  decc                 fmulp st(4)
// 0084b822  8d542428             lea edx, [esp + 0x28]
// 0084b826  d9c9                 fxch st(1)
// 0084b828  52                   push edx
// 0084b829  deca                 fmulp st(2)
// 0084b82b  83ec0c               sub esp, 0xc
// 0084b82e  8bc4                 mov eax, esp
// 0084b830  8bcf                 mov ecx, edi
// 0084b832  d806                 fadd dword ptr [esi]
// 0084b834  89642448             mov dword ptr [esp + 0x48], esp
// 0084b838  d9ca                 fxch st(2)
// 0084b83a  d84604               fadd dword ptr [esi + 4]
// 0084b83d  d94608               fld dword ptr [esi + 8]
// 0084b840  dec2                 faddp st(2)
// 0084b842  d9ca                 fxch st(2)
// 0084b844  d918                 fstp dword ptr [eax]
// 0084b846  d9c9                 fxch st(1)
// 0084b848  d95804               fstp dword ptr [eax + 4]
// 0084b84b  d95808               fstp dword ptr [eax + 8]
// 0084b84e  e86df7ffff           call 0x84afc0
// 0084b853  8b442420             mov eax, dword ptr [esp + 0x20]
// 0084b857  c1e005               shl eax, 5
// 0084b85a  03442424             add eax, dword ptr [esp + 0x24]
// 0084b85e  8d54240f             lea edx, [esp + 0xf]
// 0084b862  c1e005               shl eax, 5
// 0084b865  03442428             add eax, dword ptr [esp + 0x28]
// 0084b869  52                   push edx
// 0084b86a  8d0440               lea eax, [eax + eax*2]
// 0084b86d  8d0c87               lea ecx, [edi + eax*4]
// 0084b870  8d442434             lea eax, [esp + 0x34]
// 0084b874  894c2434             mov dword ptr [esp + 0x34], ecx
// 0084b878  50                   push eax
// 0084b879  8d4c2440             lea ecx, [esp + 0x40]
// 0084b87d  e82ef9ffff           call 0x84b1b0
// 0084b882  d944241c             fld dword ptr [esp + 0x1c]
// 0084b886  d9e8                 fld1 
// 0084b888  dcc1                 fadd st(1), st(0)
// 0084b88a  d9c9                 fxch st(1)
// 0084b88c  d954241c             fst dword ptr [esp + 0x1c]
// 0084b890  d8d1                 fcom st(1)
// 0084b892  dfe0                 fnstsw ax
// 0084b894  f6c441               test ah, 0x41
// 0084b897  0f8b63ffffff         jnp 0x84b800
// 0084b89d  ddd8                 fstp st(0)
// 0084b89f  d9442414             fld dword ptr [esp + 0x14]
// 0084b8a3  d8c1                 fadd st(1)
// 0084b8a5  d9542414             fst dword ptr [esp + 0x14]
// 0084b8a9  d8d1                 fcom st(1)
// 0084b8ab  dfe0                 fnstsw ax
// 0084b8ad  f6c441               test ah, 0x41
// 0084b8b0  0f8b3affffff         jnp 0x84b7f0
// 0084b8b6  ddd8                 fstp st(0)
// 0084b8b8  d9442418             fld dword ptr [esp + 0x18]
// 0084b8bc  d8c1                 fadd st(1)
// 0084b8be  d9542418             fst dword ptr [esp + 0x18]
// 0084b8c2  ded9                 fcompp 
// 0084b8c4  dfe0                 fnstsw ax
// 0084b8c6  f6c441               test ah, 0x41
// 0084b8c9  0f8b05ffffff         jnp 0x84b7d4
// 0084b8cf  8b542444             mov edx, dword ptr [esp + 0x44]
// 0084b8d3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0084b8d7  8d742438             lea esi, [esp + 0x38]
// 0084b8db  3bd3                 cmp edx, ebx
// 0084b8dd  7557                 jne 0x84b936
// 0084b8df  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 0084b8e3  8b442460             mov eax, dword ptr [esp + 0x60]
// 0084b8e7  c644247401           mov byte ptr [esp + 0x74], 1
// 0084b8ec  894c2458             mov dword ptr [esp + 0x58], ecx
// 0084b8f0  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0084b8f4  8bd8                 mov ebx, eax
// 0084b8f6  89742450             mov dword ptr [esp + 0x50], esi
// 0084b8fa  89542454             mov dword ptr [esp + 0x54], edx
// 0084b8fe  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0084b902  807c245c01           cmp byte ptr [esp + 0x5c], 1
// 0084b907  750e                 jne 0x84b917
// 0084b909  8d542438             lea edx, [esp + 0x38]
// 0084b90d  3b542450             cmp edx, dword ptr [esp + 0x50]
// 0084b911  0f84a4000000         je 0x84b9bb
// 0084b917  8b7704               mov esi, dword ptr [edi + 4]
// 0084b91a  8b4604               mov eax, dword ptr [esi + 4]
// 0084b91d  3b4608               cmp eax, dword ptr [esi + 8]
// 0084b920  8b0e                 mov ecx, dword ptr [esi]
// 0084b922  7d2c                 jge 0x84b950
// 0084b924  8d0481               lea eax, [ecx + eax*4]
// 0084b927  85c0                 test eax, eax
// 0084b929  7406                 je 0x84b931
// 0084b92b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0084b92f  8910                 mov dword ptr [eax], edx
// 0084b931  ff4604               inc dword ptr [esi + 4]
// 0084b934  eb57                 jmp 0x84b98d
// 0084b936  8b39                 mov edi, dword ptr [ecx]
// 0084b938  33c0                 xor eax, eax
// 0084b93a  88442474             mov byte ptr [esp + 0x74], al
// 0084b93e  3bfb                 cmp edi, ebx
// 0084b940  75aa                 jne 0x84b8ec
// 0084b942  40                   inc eax
// 0084b943  3bc2                 cmp eax, edx
// 0084b945  7da0                 jge 0x84b8e7
// 0084b947  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 0084b94a  3bfb                 cmp edi, ebx
// 0084b94c  74f4                 je 0x84b942
// 0084b94e  eb9c                 jmp 0x84b8ec
// 0084b950  8d542410             lea edx, [esp + 0x10]
// 0084b954  3bd1                 cmp edx, ecx
// 0084b956  721d                 jb 0x84b975
// 0084b958  8d0c81               lea ecx, [ecx + eax*4]
// 0084b95b  3bd1                 cmp edx, ecx
// 0084b95d  7316                 jae 0x84b975
// 0084b95f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0084b963  8d4c2430             lea ecx, [esp + 0x30]
// 0084b967  51                   push ecx
// 0084b968  8bce                 mov ecx, esi
// 0084b96a  89442434             mov dword ptr [esp + 0x34], eax
// 0084b96e  e8adfad5ff           call 0x5ab420
// 0084b973  eb18                 jmp 0x84b98d
// 0084b975  6a00                 push 0
// 0084b977  40                   inc eax
// 0084b978  50                   push eax
// 0084b979  8bce                 mov ecx, esi
// 0084b97b  e840e7c5ff           call 0x4aa0c0
// 0084b980  8b5604               mov edx, dword ptr [esi + 4]
// 0084b983  8b06                 mov eax, dword ptr [esi]
// 0084b985  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084b989  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0084b98d  8b7f0c               mov edi, dword ptr [edi + 0xc]
// 0084b990  85ff                 test edi, edi
// 0084b992  0f856affffff         jne 0x84b902
// 0084b998  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0084b99c  8b442458             mov eax, dword ptr [esp + 0x58]
// 0084b9a0  43                   inc ebx
// 0084b9a1  3bd9                 cmp ebx, ecx
// 0084b9a3  7d0c                 jge 0x84b9b1
// 0084b9a5  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 0084b9a8  85ff                 test edi, edi
// 0084b9aa  74f4                 je 0x84b9a0
// 0084b9ac  e951ffffff           jmp 0x84b902
// 0084b9b1  c644245c01           mov byte ptr [esp + 0x5c], 1
// 0084b9b6  e947ffffff           jmp 0x84b902
// 0084b9bb  8d4c2438             lea ecx, [esp + 0x38]
// 0084b9bf  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 0084b9ca  c7442434cc4c9200     mov dword ptr [esp + 0x34], 0x924ccc
// 0084b9d2  c7442438c44c9200     mov dword ptr [esp + 0x38], 0x924cc4
// 0084b9da  e871f7ffff           call 0x84b150
// 0084b9df  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0084b9e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0084b9e7  5f                   pop edi
// 0084b9e8  5e                   pop esi
// 0084b9e9  64890d00000000       mov dword ptr fs:[0], ecx
// 0084b9f0  5b                   pop ebx
// 0084b9f1  8be5                 mov esp, ebp
// 0084b9f3  5d                   pop ebp
// 0084b9f4  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgWeld.cpp (function ?getIndex@Welder@_internal@G3D@@QAEHABVVector3@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgWeld.cpp
