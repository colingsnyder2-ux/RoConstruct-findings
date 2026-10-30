// roc 2011-06 00813520  unit: CXTPPaintManager  size: 1820 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00813520
//
// 00813520  6aff                 push -1
// 00813522  681526a000           push 0xa02615
// 00813527  64a100000000         mov eax, dword ptr fs:[0]
// 0081352d  50                   push eax
// 0081352e  83ec6c               sub esp, 0x6c
// 00813531  53                   push ebx
// 00813532  55                   push ebp
// 00813533  56                   push esi
// 00813534  57                   push edi
// 00813535  a12058c900           mov eax, dword ptr [0xc95820]
// 0081353a  33c4                 xor eax, esp
// 0081353c  50                   push eax
// 0081353d  8d842480000000       lea eax, [esp + 0x80]
// 00813544  64a300000000         mov dword ptr fs:[0], eax
// 0081354a  8bd9                 mov ebx, ecx
// 0081354c  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00813553  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00813559  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0081355f  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00813565  33ed                 xor ebp, ebp
// 00813567  894c2460             mov dword ptr [esp + 0x60], ecx
// 0081356b  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00813571  8944242c             mov dword ptr [esp + 0x2c], eax
// 00813575  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0081357b  89542464             mov dword ptr [esp + 0x64], edx
// 0081357f  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 00813585  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00813589  8bce                 mov ecx, esi
// 0081358b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0081358f  896c2450             mov dword ptr [esp + 0x50], ebp
// 00813593  896c2454             mov dword ptr [esp + 0x54], ebp
// 00813597  896c2458             mov dword ptr [esp + 0x58], ebp
// 0081359b  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0081359f  896c2470             mov dword ptr [esp + 0x70], ebp
// 008135a3  896c2474             mov dword ptr [esp + 0x74], ebp
// 008135a7  896c2478             mov dword ptr [esp + 0x78], ebp
// 008135ab  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008135af  89442468             mov dword ptr [esp + 0x68], eax
// 008135b3  89542424             mov dword ptr [esp + 0x24], edx
// 008135b7  e8048fffff           call 0x80c4c0
// 008135bc  8bf8                 mov edi, eax
// 008135be  8b06                 mov eax, dword ptr [esi]
// 008135c0  8b5058               mov edx, dword ptr [eax + 0x58]
// 008135c3  8d4c2420             lea ecx, [esp + 0x20]
// 008135c7  51                   push ecx
// 008135c8  8bce                 mov ecx, esi
// 008135ca  897c2434             mov dword ptr [esp + 0x34], edi
// 008135ce  ffd2                 call edx
// 008135d0  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 008135d7  3bfd                 cmp edi, ebp
// 008135d9  740c                 je 0x8135e7
// 008135db  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 008135e2  83ff01               cmp edi, 1
// 008135e5  740b                 je 0x8135f2
// 008135e7  c784249800000001000000 mov dword ptr [esp + 0x98], 1
// 008135f2  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008135f6  8b03                 mov eax, dword ptr [ebx]
// 008135f8  8b9010010000         mov edx, dword ptr [eax + 0x110]
// 008135fe  57                   push edi
// 008135ff  8d4c243c             lea ecx, [esp + 0x3c]
// 00813603  51                   push ecx
// 00813604  8bcb                 mov ecx, ebx
// 00813606  ffd2                 call edx
// 00813608  8b07                 mov eax, dword ptr [edi]
// 0081360a  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 00813610  8bcf                 mov ecx, edi
// 00813612  ffd2                 call edx
// 00813614  85c0                 test eax, eax
// 00813616  7415                 je 0x81362d
// 00813618  39af10020000         cmp dword ptr [edi + 0x210], ebp
// 0081361e  740d                 je 0x81362d
// 00813620  8b442438             mov eax, dword ptr [esp + 0x38]
// 00813624  8d0c00               lea ecx, [eax + eax]
// 00813627  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0081362b  eb08                 jmp 0x813635
// 0081362d  8b542438             mov edx, dword ptr [esp + 0x38]
// 00813631  8954241c             mov dword ptr [esp + 0x1c], edx
// 00813635  8b06                 mov eax, dword ptr [esi]
// 00813637  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0081363a  8bce                 mov ecx, esi
// 0081363c  ffd2                 call edx
// 0081363e  89442428             mov dword ptr [esp + 0x28], eax
// 00813642  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00813648  83f8ff               cmp eax, -1
// 0081364b  750f                 jne 0x81365c
// 0081364d  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00813653  3bcd                 cmp ecx, ebp
// 00813655  7405                 je 0x81365c
// 00813657  e80496ffff           call 0x80cc60
// 0081365c  89442418             mov dword ptr [esp + 0x18], eax
// 00813660  b804000000           mov eax, 4
// 00813665  39442424             cmp dword ptr [esp + 0x24], eax
// 00813669  750a                 jne 0x813675
// 0081366b  39442418             cmp dword ptr [esp + 0x18], eax
// 0081366f  7504                 jne 0x813675
// 00813671  896c2418             mov dword ptr [esp + 0x18], ebp
// 00813675  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0081367b  83f808               cmp eax, 8
// 0081367e  7524                 jne 0x8136a4
// 00813680  39ab90000000         cmp dword ptr [ebx + 0x90], ebp
// 00813686  7504                 jne 0x81368c
// 00813688  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0081368c  83f808               cmp eax, 8
// 0081368f  7513                 jne 0x8136a4
// 00813691  39ac2498000000       cmp dword ptr [esp + 0x98], ebp
// 00813698  750a                 jne 0x8136a4
// 0081369a  8b8310010000         mov eax, dword ptr [ebx + 0x110]
// 008136a0  8944243c             mov dword ptr [esp + 0x3c], eax
// 008136a4  39ac249c000000       cmp dword ptr [esp + 0x9c], ebp
// 008136ab  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 008136b2  0f84e9000000         je 0x8137a1
// 008136b8  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 008136be  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008136c2  03442460             add eax, dword ptr [esp + 0x60]
// 008136c6  8b542468             mov edx, dword ptr [esp + 0x68]
// 008136ca  0344241c             add eax, dword ptr [esp + 0x1c]
// 008136ce  8b3dc81ba400         mov edi, dword ptr [0xa41bc8]
// 008136d4  51                   push ecx
// 008136d5  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008136d9  52                   push edx
// 008136da  51                   push ecx
// 008136db  50                   push eax
// 008136dc  8d542460             lea edx, [esp + 0x60]
// 008136e0  52                   push edx
// 008136e1  ffd7                 call edi
// 008136e3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008136e7  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008136eb  8b442468             mov eax, dword ptr [esp + 0x68]
// 008136ef  8d4c1108             lea ecx, [ecx + edx + 8]
// 008136f3  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008136f7  52                   push edx
// 008136f8  83c0ed               add eax, -0x13
// 008136fb  50                   push eax
// 008136fc  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00813700  50                   push eax
// 00813701  51                   push ecx
// 00813702  8d8c2480000000       lea ecx, [esp + 0x80]
// 00813709  51                   push ecx
// 0081370a  ffd7                 call edi
// 0081370c  bf01000000           mov edi, 1
// 00813711  397c2424             cmp dword ptr [esp + 0x24], edi
// 00813715  7527                 jne 0x81373e
// 00813717  8d942494000000       lea edx, [esp + 0x94]
// 0081371e  52                   push edx
// 0081371f  8bce                 mov ecx, esi
// 00813721  e88a8bffff           call 0x80c2b0
// 00813726  8bc8                 mov ecx, eax
// 00813728  897c2414             mov dword ptr [esp + 0x14], edi
// 0081372c  ff15a826a400         call dword ptr [0xa426a8]
// 00813732  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0081373a  85c0                 test eax, eax
// 0081373c  7508                 jne 0x813746
// 0081373e  c684249800000000     mov byte ptr [esp + 0x98], 0
// 00813746  f644241401           test byte ptr [esp + 0x14], 1
// 0081374b  7412                 je 0x81375f
// 0081374d  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 00813752  8d8c2494000000       lea ecx, [esp + 0x94]
// 00813759  ff15082ea400         call dword ptr [0xa42e08]
// 0081375f  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 00813767  7434                 je 0x81379d
// 00813769  8d842498000000       lea eax, [esp + 0x98]
// 00813770  50                   push eax
// 00813771  8bce                 mov ecx, esi
// 00813773  e8388bffff           call 0x80c2b0
// 00813778  50                   push eax
// 00813779  8d4c2444             lea ecx, [esp + 0x44]
// 0081377d  51                   push ecx
// 0081377e  8bcd                 mov ecx, ebp
// 00813780  e83b80c7ff           call 0x48b7c0
// 00813785  baedffffff           mov edx, 0xffffffed
// 0081378a  2b10                 sub edx, dword ptr [eax]
// 0081378c  8d8c2498000000       lea ecx, [esp + 0x98]
// 00813793  01542458             add dword ptr [esp + 0x58], edx
// 00813797  ff15082ea400         call dword ptr [0xa42e08]
// 0081379d  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008137a1  8b07                 mov eax, dword ptr [edi]
// 008137a3  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 008137a9  8bcf                 mov ecx, edi
// 008137ab  ffd2                 call edx
// 008137ad  8bf8                 mov edi, eax
// 008137af  85ff                 test edi, edi
// 008137b1  750d                 jne 0x8137c0
// 008137b3  8d442420             lea eax, [esp + 0x20]
// 008137b7  50                   push eax
// 008137b8  e883c0ffff           call 0x80f840
// 008137bd  83c404               add esp, 4
// 008137c0  837c243005           cmp dword ptr [esp + 0x30], 5
// 008137c5  752a                 jne 0x8137f1
// 008137c7  8b16                 mov edx, dword ptr [esi]
// 008137c9  8b525c               mov edx, dword ptr [edx + 0x5c]
// 008137cc  8d842494000000       lea eax, [esp + 0x94]
// 008137d3  50                   push eax
// 008137d4  8bce                 mov ecx, esi
// 008137d6  ffd2                 call edx
// 008137d8  834c241402           or dword ptr [esp + 0x14], 2
// 008137dd  8bc8                 mov ecx, eax
// 008137df  ff15b026a400         call dword ptr [0xa426b0]
// 008137e5  c684249800000001     mov byte ptr [esp + 0x98], 1
// 008137ed  84c0                 test al, al
// 008137ef  7408                 je 0x8137f9
// 008137f1  c684249800000000     mov byte ptr [esp + 0x98], 0
// 008137f9  f644241402           test byte ptr [esp + 0x14], 2
// 008137fe  7412                 je 0x813812
// 00813800  83642414fd           and dword ptr [esp + 0x14], 0xfffffffd
// 00813805  8d8c2494000000       lea ecx, [esp + 0x94]
// 0081380c  ff15082ea400         call dword ptr [0xa42e08]
// 00813812  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 0081381a  0f84de020000         je 0x813afe
// 00813820  8d83f8000000         lea eax, [ebx + 0xf8]
// 00813826  50                   push eax
// 00813827  55                   push ebp
// 00813828  8d4c2448             lea ecx, [esp + 0x48]
// 0081382c  e8ef980400           call 0x85d120
// 00813831  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 00813839  c684248800000001     mov byte ptr [esp + 0x88], 1
// 00813841  742a                 je 0x81386d
// 00813843  8b5508               mov edx, dword ptr [ebp + 8]
// 00813846  8d4c2430             lea ecx, [esp + 0x30]
// 0081384a  51                   push ecx
// 0081384b  6a01                 push 1
// 0081384d  686056a600           push 0xa65660
// 00813852  52                   push edx
// 00813853  ff153801a400         call dword ptr [0xa40138]
// 00813859  8b442454             mov eax, dword ptr [esp + 0x54]
// 0081385d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00813861  8d44010a             lea eax, [ecx + eax + 0xa]
// 00813865  8944245c             mov dword ptr [esp + 0x5c], eax
// 00813869  8944247c             mov dword ptr [esp + 0x7c], eax
// 0081386d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00813871  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00813875  8b13                 mov edx, dword ptr [ebx]
// 00813877  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 0081387d  50                   push eax
// 0081387e  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00813885  f7df                 neg edi
// 00813887  51                   push ecx
// 00813888  1bff                 sbb edi, edi
// 0081388a  50                   push eax
// 0081388b  81e700f8ffff         and edi, 0xfffff800
// 00813891  81c700080000         add edi, 0x800
// 00813897  81cf00800000         or edi, 0x8000
// 0081389d  57                   push edi
// 0081389e  8d4c2460             lea ecx, [esp + 0x60]
// 008138a2  51                   push ecx
// 008138a3  8d442434             lea eax, [esp + 0x34]
// 008138a7  50                   push eax
// 008138a8  55                   push ebp
// 008138a9  8bcb                 mov ecx, ebx
// 008138ab  ffd2                 call edx
// 008138ad  837c242401           cmp dword ptr [esp + 0x24], 1
// 008138b2  7528                 jne 0x8138dc
// 008138b4  8d842494000000       lea eax, [esp + 0x94]
// 008138bb  50                   push eax
// 008138bc  8bce                 mov ecx, esi
// 008138be  e8ed89ffff           call 0x80c2b0
// 008138c3  834c241404           or dword ptr [esp + 0x14], 4
// 008138c8  8bc8                 mov ecx, eax
// 008138ca  ff15a826a400         call dword ptr [0xa426a8]
// 008138d0  c684249800000001     mov byte ptr [esp + 0x98], 1
// 008138d8  85c0                 test eax, eax
// 008138da  7508                 jne 0x8138e4
// 008138dc  c684249800000000     mov byte ptr [esp + 0x98], 0
// 008138e4  f644241404           test byte ptr [esp + 0x14], 4
// 008138e9  740d                 je 0x8138f8
// 008138eb  8d8c2494000000       lea ecx, [esp + 0x94]
// 008138f2  ff15082ea400         call dword ptr [0xa42e08]
// 008138f8  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 00813900  744e                 je 0x813950
// 00813902  8d8c2498000000       lea ecx, [esp + 0x98]
// 00813909  51                   push ecx
// 0081390a  8bce                 mov ecx, esi
// 0081390c  e89f89ffff           call 0x80c2b0
// 00813911  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00813915  8b13                 mov edx, dword ptr [ebx]
// 00813917  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 0081391d  51                   push ecx
// 0081391e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00813922  51                   push ecx
// 00813923  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0081392a  51                   push ecx
// 0081392b  6a02                 push 2
// 0081392d  8d8c2480000000       lea ecx, [esp + 0x80]
// 00813934  51                   push ecx
// 00813935  50                   push eax
// 00813936  55                   push ebp
// 00813937  8bcb                 mov ecx, ebx
// 00813939  c68424a400000002     mov byte ptr [esp + 0xa4], 2
// 00813941  ffd2                 call edx
// 00813943  8d8c2498000000       lea ecx, [esp + 0x98]
// 0081394a  ff15082ea400         call dword ptr [0xa42e08]
// 00813950  8d4c2440             lea ecx, [esp + 0x40]
// 00813954  c684248800000000     mov byte ptr [esp + 0x88], 0
// 0081395c  e83f980400           call 0x85d1a0
// 00813961  33ff                 xor edi, edi
// 00813963  39bc249c000000       cmp dword ptr [esp + 0x9c], edi
// 0081396a  0f8485000000         je 0x8139f5
// 00813970  8b442468             mov eax, dword ptr [esp + 0x68]
// 00813974  8b542450             mov edx, dword ptr [esp + 0x50]
// 00813978  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0081397c  83c0f6               add eax, -0xa
// 0081397f  89442448             mov dword ptr [esp + 0x48], eax
// 00813983  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00813987  83c1fe               add ecx, -2
// 0081398a  89542440             mov dword ptr [esp + 0x40], edx
// 0081398e  8b16                 mov edx, dword ptr [esi]
// 00813990  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00813993  8944244c             mov dword ptr [esp + 0x4c], eax
// 00813997  8d84249c000000       lea eax, [esp + 0x9c]
// 0081399e  894c2444             mov dword ptr [esp + 0x44], ecx
// 008139a2  50                   push eax
// 008139a3  8bce                 mov ecx, esi
// 008139a5  ffd2                 call edx
// 008139a7  8bf0                 mov esi, eax
// 008139a9  8b5d00               mov ebx, dword ptr [ebp]
// 008139ac  6810080000           push 0x810
// 008139b1  8d442444             lea eax, [esp + 0x44]
// 008139b5  50                   push eax
// 008139b6  8bce                 mov ecx, esi
// 008139b8  c684249000000003     mov byte ptr [esp + 0x90], 3
// 008139c0  ff15a826a400         call dword ptr [0xa426a8]
// 008139c6  50                   push eax
// 008139c7  8bce                 mov ecx, esi
// 008139c9  ff15c82da400         call dword ptr [0xa42dc8]
// 008139cf  8b5370               mov edx, dword ptr [ebx + 0x70]
// 008139d2  50                   push eax
// 008139d3  8bcd                 mov ecx, ebp
// 008139d5  ffd2                 call edx
// 008139d7  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008139de  ff15082ea400         call dword ptr [0xa42e08]
// 008139e4  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 008139eb  893e                 mov dword ptr [esi], edi
// 008139ed  897e04               mov dword ptr [esi + 4], edi
// 008139f0  e922020000           jmp 0x813c17
// 008139f5  8b06                 mov eax, dword ptr [esi]
// 008139f7  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008139fa  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00813a01  51                   push ecx
// 00813a02  8bce                 mov ecx, esi
// 00813a04  ffd2                 call edx
// 00813a06  50                   push eax
// 00813a07  8d442434             lea eax, [esp + 0x34]
// 00813a0b  50                   push eax
// 00813a0c  8bcd                 mov ecx, ebp
// 00813a0e  e8ad7dc7ff           call 0x48b7c0
// 00813a13  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00813a1a  ff15082ea400         call dword ptr [0xa42e08]
// 00813a20  8b442430             mov eax, dword ptr [esp + 0x30]
// 00813a24  83c014               add eax, 0x14
// 00813a27  99                   cdq 
// 00813a28  2bc2                 sub eax, edx
// 00813a2a  d1f8                 sar eax, 1
// 00813a2c  68741bac00           push 0xac1b74
// 00813a31  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00813a38  897c2464             mov dword ptr [esp + 0x64], edi
// 00813a3c  897c2468             mov dword ptr [esp + 0x68], edi
// 00813a40  8944246c             mov dword ptr [esp + 0x6c], eax
// 00813a44  897c2470             mov dword ptr [esp + 0x70], edi
// 00813a48  ff15002ea400         call dword ptr [0xa42e00]
// 00813a4e  8b7d00               mov edi, dword ptr [ebp]
// 00813a51  6810040000           push 0x410
// 00813a56  8d4c2464             lea ecx, [esp + 0x64]
// 00813a5a  51                   push ecx
// 00813a5b  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00813a62  c684249000000004     mov byte ptr [esp + 0x90], 4
// 00813a6a  ff15a826a400         call dword ptr [0xa426a8]
// 00813a70  50                   push eax
// 00813a71  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00813a78  ff15c82da400         call dword ptr [0xa42dc8]
// 00813a7e  8b5770               mov edx, dword ptr [edi + 0x70]
// 00813a81  50                   push eax
// 00813a82  8bcd                 mov ecx, ebp
// 00813a84  ffd2                 call edx
// 00813a86  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00813a8d  ff15082ea400         call dword ptr [0xa42e08]
// 00813a93  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 00813a99  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00813a9d  2b542464             sub edx, dword ptr [esp + 0x64]
// 00813aa1  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00813aa5  2b542454             sub edx, dword ptr [esp + 0x54]
// 00813aa9  8bc1                 mov eax, ecx
// 00813aab  2b442470             sub eax, dword ptr [esp + 0x70]
// 00813aaf  2b442450             sub eax, dword ptr [esp + 0x50]
// 00813ab3  03442478             add eax, dword ptr [esp + 0x78]
// 00813ab7  03442458             add eax, dword ptr [esp + 0x58]
// 00813abb  8d7c2820             lea edi, [eax + ebp + 0x20]
// 00813abf  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00813ac3  8d440213             lea eax, [edx + eax + 0x13]
// 00813ac7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00813acb  3bd0                 cmp edx, eax
// 00813acd  8994249c000000       mov dword ptr [esp + 0x9c], edx
// 00813ad4  7f07                 jg 0x813add
// 00813ad6  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 00813add  8b442430             mov eax, dword ptr [esp + 0x30]
// 00813ae1  99                   cdq 
// 00813ae2  2bc2                 sub eax, edx
// 00813ae4  d1f8                 sar eax, 1
// 00813ae6  03c1                 add eax, ecx
// 00813ae8  8d442820             lea eax, [eax + ebp + 0x20]
// 00813aec  3bf8                 cmp edi, eax
// 00813aee  7e02                 jle 0x813af2
// 00813af0  8bc7                 mov eax, edi
// 00813af2  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00813af9  e905010000           jmp 0x813c03
// 00813afe  8b442418             mov eax, dword ptr [esp + 0x18]
// 00813b02  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00813b06  8b13                 mov edx, dword ptr [ebx]
// 00813b08  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 00813b0e  50                   push eax
// 00813b0f  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00813b16  f7df                 neg edi
// 00813b18  51                   push ecx
// 00813b19  1bff                 sbb edi, edi
// 00813b1b  50                   push eax
// 00813b1c  81e700f8ffff         and edi, 0xfffff800
// 00813b22  81c700080000         add edi, 0x800
// 00813b28  81cf00800000         or edi, 0x8000
// 00813b2e  57                   push edi
// 00813b2f  8d4c2460             lea ecx, [esp + 0x60]
// 00813b33  51                   push ecx
// 00813b34  8d442434             lea eax, [esp + 0x34]
// 00813b38  50                   push eax
// 00813b39  55                   push ebp
// 00813b3a  8bcb                 mov ecx, ebx
// 00813b3c  ffd2                 call edx
// 00813b3e  837c242401           cmp dword ptr [esp + 0x24], 1
// 00813b43  7528                 jne 0x813b6d
// 00813b45  8d842494000000       lea eax, [esp + 0x94]
// 00813b4c  50                   push eax
// 00813b4d  8bce                 mov ecx, esi
// 00813b4f  e85c87ffff           call 0x80c2b0
// 00813b54  834c241408           or dword ptr [esp + 0x14], 8
// 00813b59  8bc8                 mov ecx, eax
// 00813b5b  ff15a826a400         call dword ptr [0xa426a8]
// 00813b61  c684249800000001     mov byte ptr [esp + 0x98], 1
// 00813b69  85c0                 test eax, eax
// 00813b6b  7508                 jne 0x813b75
// 00813b6d  c684249800000000     mov byte ptr [esp + 0x98], 0
// 00813b75  f644241408           test byte ptr [esp + 0x14], 8
// 00813b7a  740d                 je 0x813b89
// 00813b7c  8d8c2494000000       lea ecx, [esp + 0x94]
// 00813b83  ff15082ea400         call dword ptr [0xa42e08]
// 00813b89  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 00813b91  744e                 je 0x813be1
// 00813b93  8d8c2498000000       lea ecx, [esp + 0x98]
// 00813b9a  51                   push ecx
// 00813b9b  8bce                 mov ecx, esi
// 00813b9d  e80e87ffff           call 0x80c2b0
// 00813ba2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00813ba6  8b13                 mov edx, dword ptr [ebx]
// 00813ba8  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 00813bae  51                   push ecx
// 00813baf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00813bb3  51                   push ecx
// 00813bb4  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00813bbb  51                   push ecx
// 00813bbc  6a02                 push 2
// 00813bbe  8d8c2480000000       lea ecx, [esp + 0x80]
// 00813bc5  51                   push ecx
// 00813bc6  50                   push eax
// 00813bc7  55                   push ebp
// 00813bc8  8bcb                 mov ecx, ebx
// 00813bca  c68424a400000005     mov byte ptr [esp + 0xa4], 5
// 00813bd2  ffd2                 call edx
// 00813bd4  8d8c2498000000       lea ecx, [esp + 0x98]
// 00813bdb  ff15082ea400         call dword ptr [0xa42e08]
// 00813be1  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 00813be7  2b442470             sub eax, dword ptr [esp + 0x70]
// 00813beb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00813bef  2b442450             sub eax, dword ptr [esp + 0x50]
// 00813bf3  03442478             add eax, dword ptr [esp + 0x78]
// 00813bf7  03442458             add eax, dword ptr [esp + 0x58]
// 00813bfb  8d440820             lea eax, [eax + ecx + 0x20]
// 00813bff  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00813c03  6a00                 push 0
// 00813c05  51                   push ecx
// 00813c06  50                   push eax
// 00813c07  56                   push esi
// 00813c08  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 00813c0f  56                   push esi
// 00813c10  8bcb                 mov ecx, ebx
// 00813c12  e8b9c1ffff           call 0x80fdd0
// 00813c17  8d4c2420             lea ecx, [esp + 0x20]
// 00813c1b  ff15082ea400         call dword ptr [0xa42e08]
// 00813c21  8bc6                 mov eax, esi
// 00813c23  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00813c2a  64890d00000000       mov dword ptr fs:[0], ecx
// 00813c31  59                   pop ecx
// 00813c32  5f                   pop edi
// 00813c33  5e                   pop esi
// 00813c34  5d                   pop ebp
// 00813c35  5b                   pop ebx
// 00813c36  83c478               add esp, 0x78
// 00813c39  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlPopupParent@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp