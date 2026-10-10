// roc 2008-06 007950c0  unit: CXTPRibbonGroup  size: 396 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007950c0
//
// 007950c0  83ec18               sub esp, 0x18
// 007950c3  53                   push ebx
// 007950c4  55                   push ebp
// 007950c5  56                   push esi
// 007950c6  8bf1                 mov esi, ecx
// 007950c8  57                   push edi
// 007950c9  8b7e5c               mov edi, dword ptr [esi + 0x5c]
// 007950cc  8bcf                 mov ecx, edi
// 007950ce  e8edcff8ff           call 0x7220c0
// 007950d3  8ba860060000         mov ebp, dword ptr [eax + 0x660]
// 007950d9  8b07                 mov eax, dword ptr [edi]
// 007950db  8b9030020000         mov edx, dword ptr [eax + 0x230]
// 007950e1  8bcf                 mov ecx, edi
// 007950e3  ffd2                 call edx
// 007950e5  8bd8                 mov ebx, eax
// 007950e7  b8f7ffffff           mov eax, 0xfffffff7
// 007950ec  2bc5                 sub eax, ebp
// 007950ee  03d8                 add ebx, eax
// 007950f0  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 007950f6  8b7804               mov edi, dword ptr [eax + 4]
// 007950f9  8b08                 mov ecx, dword ptr [eax]
// 007950fb  8d47ff               lea eax, [edi - 1]
// 007950fe  33d2                 xor edx, edx
// 00795100  897c2418             mov dword ptr [esp + 0x18], edi
// 00795104  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00795108  85c0                 test eax, eax
// 0079510a  7c29                 jl 0x795135
// 0079510c  8bf8                 mov edi, eax
// 0079510e  c1e704               shl edi, 4
// 00795111  03f8                 add edi, eax
// 00795113  8d4cb940             lea ecx, [ecx + edi*4 + 0x40]
// 00795117  8b79e0               mov edi, dword ptr [ecx - 0x20]
// 0079511a  8b69e4               mov ebp, dword ptr [ecx - 0x1c]
// 0079511d  03d7                 add edx, edi
// 0079511f  8379f400             cmp dword ptr [ecx - 0xc], 0
// 00795123  896c2424             mov dword ptr [esp + 0x24], ebp
// 00795127  8911                 mov dword ptr [ecx], edx
// 00795129  7402                 je 0x79512d
// 0079512b  33d2                 xor edx, edx
// 0079512d  48                   dec eax
// 0079512e  83e944               sub ecx, 0x44
// 00795131  85c0                 test eax, eax
// 00795133  7de2                 jge 0x795117
// 00795135  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00795138  e883cff8ff           call 0x7220c0
// 0079513d  8ba814010000         mov ebp, dword ptr [eax + 0x114]
// 00795143  6a00                 push 0
// 00795145  68007d0000           push 0x7d00
// 0079514a  8bce                 mov ecx, esi
// 0079514c  e87ff7ffff           call 0x7948d0
// 00795151  8bce                 mov ecx, esi
// 00795153  e818feffff           call 0x794f70
// 00795158  8d4c2d00             lea ecx, [ebp + ebp]
// 0079515c  3bd9                 cmp ebx, ecx
// 0079515e  89442410             mov dword ptr [esp + 0x10], eax
// 00795162  bf03000000           mov edi, 3
// 00795167  7d15                 jge 0x79517e
// 00795169  6a00                 push 0
// 0079516b  68007d0000           push 0x7d00
// 00795170  8bce                 mov ecx, esi
// 00795172  e859f7ffff           call 0x7948d0
// 00795177  bf01000000           mov edi, 1
// 0079517c  eb2e                 jmp 0x7951ac
// 0079517e  8d546d00             lea edx, [ebp + ebp*2]
// 00795182  3bda                 cmp ebx, edx
// 00795184  7c10                 jl 0x795196
// 00795186  397e7c               cmp dword ptr [esi + 0x7c], edi
// 00795189  750b                 jne 0x795196
// 0079518b  8bce                 mov ecx, esi
// 0079518d  e8aefeffff           call 0x795040
// 00795192  85c0                 test eax, eax
// 00795194  7516                 jne 0x7951ac
// 00795196  8b442410             mov eax, dword ptr [esp + 0x10]
// 0079519a  99                   cdq 
// 0079519b  2bc2                 sub eax, edx
// 0079519d  6a00                 push 0
// 0079519f  d1f8                 sar eax, 1
// 007951a1  50                   push eax
// 007951a2  8bce                 mov ecx, esi
// 007951a4  e827f7ffff           call 0x7948d0
// 007951a9  8bf8                 mov edi, eax
// 007951ab  47                   inc edi
// 007951ac  8bce                 mov ecx, esi
// 007951ae  e8bdfdffff           call 0x794f70
// 007951b3  89442410             mov dword ptr [esp + 0x10], eax
// 007951b7  8bc7                 mov eax, edi
// 007951b9  0fafc5               imul eax, ebp
// 007951bc  8bcb                 mov ecx, ebx
// 007951be  2bc8                 sub ecx, eax
// 007951c0  8d4101               lea eax, [ecx + 1]
// 007951c3  8d5f01               lea ebx, [edi + 1]
// 007951c6  99                   cdq 
// 007951c7  f7fb                 idiv ebx
// 007951c9  33db                 xor ebx, ebx
// 007951cb  395c2418             cmp dword ptr [esp + 0x18], ebx
// 007951cf  894c2420             mov dword ptr [esp + 0x20], ecx
// 007951d3  8be8                 mov ebp, eax
// 007951d5  7e3e                 jle 0x795215
// 007951d7  897c2414             mov dword ptr [esp + 0x14], edi
// 007951db  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007951df  eb04                 jmp 0x7951e5
// 007951e1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007951e5  85db                 test ebx, ebx
// 007951e7  7e18                 jle 0x795201
// 007951e9  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 007951ed  7412                 je 0x795201
// 007951ef  8bc1                 mov eax, ecx
// 007951f1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007951f5  2bc5                 sub eax, ebp
// 007951f7  99                   cdq 
// 007951f8  f7f9                 idiv ecx
// 007951fa  03e8                 add ebp, eax
// 007951fc  49                   dec ecx
// 007951fd  894c2414             mov dword ptr [esp + 0x14], ecx
// 00795201  55                   push ebp
// 00795202  6a00                 push 0
// 00795204  57                   push edi
// 00795205  ff15682d8000         call dword ptr [0x802d68]
// 0079520b  43                   inc ebx
// 0079520c  83c744               add edi, 0x44
// 0079520f  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 00795213  7ccc                 jl 0x7951e1
// 00795215  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 0079521b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0079521f  89510c               mov dword ptr [ecx + 0xc], edx
// 00795222  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00795228  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0079522b  3b4808               cmp ecx, dword ptr [eax + 8]
// 0079522e  7e0f                 jle 0x79523f
// 00795230  5f                   pop edi
// 00795231  5e                   pop esi
// 00795232  8bd0                 mov edx, eax
// 00795234  8b420c               mov eax, dword ptr [edx + 0xc]
// 00795237  5d                   pop ebp
// 00795238  5b                   pop ebx
// 00795239  83c418               add esp, 0x18
// 0079523c  c20400               ret 4
// 0079523f  8b4008               mov eax, dword ptr [eax + 8]
// 00795242  5f                   pop edi
// 00795243  5e                   pop esi
// 00795244  5d                   pop ebp
// 00795245  5b                   pop ebx
// 00795246  83c418               add esp, 0x18
// 00795249  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroups.cpp (function ?_CalcSpecialDynamicSize@CXTPRibbonGroup@@AAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroups.cpp
