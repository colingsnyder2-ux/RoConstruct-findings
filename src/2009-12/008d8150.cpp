// roc 2009-12 008d8150  unit: CXTPTabPaintManager::CAppearanceSetExcel  size: 1908 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d8150
//
// 008d8150  83ec34               sub esp, 0x34
// 008d8153  53                   push ebx
// 008d8154  55                   push ebp
// 008d8155  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008d8159  8b5548               mov edx, dword ptr [ebp + 0x48]
// 008d815c  8bc1                 mov eax, ecx
// 008d815e  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 008d8161  894c240c             mov dword ptr [esp + 0xc], ecx
// 008d8165  8b4d4c               mov ecx, dword ptr [ebp + 0x4c]
// 008d8168  89542410             mov dword ptr [esp + 0x10], edx
// 008d816c  8b5550               mov edx, dword ptr [ebp + 0x50]
// 008d816f  894c2414             mov dword ptr [esp + 0x14], ecx
// 008d8173  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008d8176  56                   push esi
// 008d8177  8954241c             mov dword ptr [esp + 0x1c], edx
// 008d817b  57                   push edi
// 008d817c  89442410             mov dword ptr [esp + 0x10], eax
// 008d8180  396904               cmp dword ptr [ecx + 4], ebp
// 008d8183  7511                 jne 0x8d8196
// 008d8185  8b401c               mov eax, dword ptr [eax + 0x1c]
// 008d8188  8bb0e4000000         mov esi, dword ptr [eax + 0xe4]
// 008d818e  81c674010000         add esi, 0x174
// 008d8194  eb0f                 jmp 0x8d81a5
// 008d8196  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008d8199  8bb2e4000000         mov esi, dword ptr [edx + 0xe4]
// 008d819f  81c6bc010000         add esi, 0x1bc
// 008d81a5  8b01                 mov eax, dword ptr [ecx]
// 008d81a7  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d81aa  ffd2                 call edx
// 008d81ac  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008d81b0  83f803               cmp eax, 3
// 008d81b3  0f87c3060000         ja 0x8d887c
// 008d81b9  ff2485b4888d00       jmp dword ptr [eax*4 + 0x8d88b4]
// 008d81c0  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d81c4  48                   dec eax
// 008d81c5  89442420             mov dword ptr [esp + 0x20], eax
// 008d81c9  2b442418             sub eax, dword ptr [esp + 0x18]
// 008d81cd  6a00                 push 0
// 008d81cf  99                   cdq 
// 008d81d0  2bc2                 sub eax, edx
// 008d81d2  8bd8                 mov ebx, eax
// 008d81d4  d1fb                 sar ebx, 1
// 008d81d6  8bc3                 mov eax, ebx
// 008d81d8  99                   cdq 
// 008d81d9  2bc2                 sub eax, edx
// 008d81db  d1f8                 sar eax, 1
// 008d81dd  f7d8                 neg eax
// 008d81df  50                   push eax
// 008d81e0  8d44241c             lea eax, [esp + 0x1c]
// 008d81e4  50                   push eax
// 008d81e5  ff156ccc9800         call dword ptr [0x98cc6c]
// 008d81eb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d81ef  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d81f3  894c2428             mov dword ptr [esp + 0x28], ecx
// 008d81f7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d81fb  2bc8                 sub ecx, eax
// 008d81fd  8bd3                 mov edx, ebx
// 008d81ff  f7da                 neg edx
// 008d8201  03d2                 add edx, edx
// 008d8203  2bcb                 sub ecx, ebx
// 008d8205  89542430             mov dword ptr [esp + 0x30], edx
// 008d8209  894c2434             mov dword ptr [esp + 0x34], ecx
// 008d820d  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008d8210  89442424             mov dword ptr [esp + 0x24], eax
// 008d8214  8b01                 mov eax, dword ptr [ecx]
// 008d8216  8d141b               lea edx, [ebx + ebx]
// 008d8219  89542440             mov dword ptr [esp + 0x40], edx
// 008d821d  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d8220  6a00                 push 0
// 008d8222  895c2430             mov dword ptr [esp + 0x30], ebx
// 008d8226  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008d822e  895c2440             mov dword ptr [esp + 0x40], ebx
// 008d8232  ffd2                 call edx
// 008d8234  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d8238  50                   push eax
// 008d8239  6a04                 push 4
// 008d823b  8d442430             lea eax, [esp + 0x30]
// 008d823f  50                   push eax
// 008d8240  55                   push ebp
// 008d8241  57                   push edi
// 008d8242  e849c6ffff           call 0x8d4890
// 008d8247  8944244c             mov dword ptr [esp + 0x4c], eax
// 008d824b  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008d824e  83f8ff               cmp eax, -1
// 008d8251  7503                 jne 0x8d8256
// 008d8253  8b4628               mov eax, dword ptr [esi + 0x28]
// 008d8256  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d825a  51                   push ecx
// 008d825b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d825f  8d541901             lea edx, [ecx + ebx + 1]
// 008d8263  52                   push edx
// 008d8264  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d8268  4a                   dec edx
// 008d8269  52                   push edx
// 008d826a  41                   inc ecx
// 008d826b  51                   push ecx
// 008d826c  50                   push eax
// 008d826d  57                   push edi
// 008d826e  e8cdc1ffff           call 0x8d4440
// 008d8273  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008d8276  83c418               add esp, 0x18
// 008d8279  83f8ff               cmp eax, -1
// 008d827c  7505                 jne 0x8d8283
// 008d827e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008d8281  eb02                 jmp 0x8d8285
// 008d8283  8bc8                 mov ecx, eax
// 008d8285  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d8289  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d828d  40                   inc eax
// 008d828e  50                   push eax
// 008d828f  52                   push edx
// 008d8290  50                   push eax
// 008d8291  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d8295  03c3                 add eax, ebx
// 008d8297  50                   push eax
// 008d8298  51                   push ecx
// 008d8299  57                   push edi
// 008d829a  e8a1c1ffff           call 0x8d4440
// 008d829f  8b4638               mov eax, dword ptr [esi + 0x38]
// 008d82a2  83c418               add esp, 0x18
// 008d82a5  83f8ff               cmp eax, -1
// 008d82a8  7503                 jne 0x8d82ad
// 008d82aa  8b4634               mov eax, dword ptr [esi + 0x34]
// 008d82ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d82b1  51                   push ecx
// 008d82b2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d82b6  8d5419ff             lea edx, [ecx + ebx - 1]
// 008d82ba  52                   push edx
// 008d82bb  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d82bf  52                   push edx
// 008d82c0  49                   dec ecx
// 008d82c1  51                   push ecx
// 008d82c2  50                   push eax
// 008d82c3  57                   push edi
// 008d82c4  e877c1ffff           call 0x8d4440
// 008d82c9  8b4608               mov eax, dword ptr [esi + 8]
// 008d82cc  83c418               add esp, 0x18
// 008d82cf  83f8ff               cmp eax, -1
// 008d82d2  7505                 jne 0x8d82d9
// 008d82d4  8b4e04               mov ecx, dword ptr [esi + 4]
// 008d82d7  eb02                 jmp 0x8d82db
// 008d82d9  8bc8                 mov ecx, eax
// 008d82db  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d82df  50                   push eax
// 008d82e0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d82e4  8d1418               lea edx, [eax + ebx]
// 008d82e7  52                   push edx
// 008d82e8  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d82ec  4a                   dec edx
// 008d82ed  52                   push edx
// 008d82ee  50                   push eax
// 008d82ef  51                   push ecx
// 008d82f0  57                   push edi
// 008d82f1  e84ac1ffff           call 0x8d4440
// 008d82f6  8b4608               mov eax, dword ptr [esi + 8]
// 008d82f9  83c418               add esp, 0x18
// 008d82fc  83f8ff               cmp eax, -1
// 008d82ff  7503                 jne 0x8d8304
// 008d8301  8b4604               mov eax, dword ptr [esi + 4]
// 008d8304  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d8308  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d830c  51                   push ecx
// 008d830d  52                   push edx
// 008d830e  51                   push ecx
// 008d830f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d8313  03cb                 add ecx, ebx
// 008d8315  51                   push ecx
// 008d8316  50                   push eax
// 008d8317  57                   push edi
// 008d8318  e823c1ffff           call 0x8d4440
// 008d831d  8b4620               mov eax, dword ptr [esi + 0x20]
// 008d8320  83c418               add esp, 0x18
// 008d8323  83f8ff               cmp eax, -1
// 008d8326  7503                 jne 0x8d832b
// 008d8328  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d832b  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d832f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d8333  52                   push edx
// 008d8334  8d1419               lea edx, [ecx + ebx]
// 008d8337  52                   push edx
// 008d8338  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d833c  52                   push edx
// 008d833d  51                   push ecx
// 008d833e  50                   push eax
// 008d833f  57                   push edi
// 008d8340  e8fbc0ffff           call 0x8d4440
// 008d8345  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008d8348  83c418               add esp, 0x18
// 008d834b  396804               cmp dword ptr [eax + 4], ebp
// 008d834e  0f8528050000         jne 0x8d887c
// 008d8354  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d8358  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d835c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008d8360  51                   push ecx
// 008d8361  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d8365  2bd0                 sub edx, eax
// 008d8367  03d3                 add edx, ebx
// 008d8369  52                   push edx
// 008d836a  51                   push ecx
// 008d836b  50                   push eax
// 008d836c  57                   push edi
// 008d836d  e8febaffff           call 0x8d3e70
// 008d8372  e902050000           jmp 0x8d8879
// 008d8377  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d837b  48                   dec eax
// 008d837c  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d8380  2b442414             sub eax, dword ptr [esp + 0x14]
// 008d8384  99                   cdq 
// 008d8385  2bc2                 sub eax, edx
// 008d8387  8bd8                 mov ebx, eax
// 008d8389  d1fb                 sar ebx, 1
// 008d838b  8bc3                 mov eax, ebx
// 008d838d  99                   cdq 
// 008d838e  2bc2                 sub eax, edx
// 008d8390  d1f8                 sar eax, 1
// 008d8392  f7d8                 neg eax
// 008d8394  50                   push eax
// 008d8395  6a00                 push 0
// 008d8397  8d54241c             lea edx, [esp + 0x1c]
// 008d839b  52                   push edx
// 008d839c  ff156ccc9800         call dword ptr [0x98cc6c]
// 008d83a2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d83a6  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d83aa  89442424             mov dword ptr [esp + 0x24], eax
// 008d83ae  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d83b2  8bcb                 mov ecx, ebx
// 008d83b4  f7d9                 neg ecx
// 008d83b6  03c9                 add ecx, ecx
// 008d83b8  2bd3                 sub edx, ebx
// 008d83ba  2bd0                 sub edx, eax
// 008d83bc  89442428             mov dword ptr [esp + 0x28], eax
// 008d83c0  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008d83c4  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008d83c7  89542438             mov dword ptr [esp + 0x38], edx
// 008d83cb  8b11                 mov edx, dword ptr [ecx]
// 008d83cd  8d041b               lea eax, [ebx + ebx]
// 008d83d0  8944243c             mov dword ptr [esp + 0x3c], eax
// 008d83d4  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d83d7  6a00                 push 0
// 008d83d9  895c2434             mov dword ptr [esp + 0x34], ebx
// 008d83dd  c744243800000000     mov dword ptr [esp + 0x38], 0
// 008d83e5  895c2444             mov dword ptr [esp + 0x44], ebx
// 008d83e9  ffd0                 call eax
// 008d83eb  50                   push eax
// 008d83ec  6a04                 push 4
// 008d83ee  8d4c2430             lea ecx, [esp + 0x30]
// 008d83f2  51                   push ecx
// 008d83f3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d83f7  55                   push ebp
// 008d83f8  57                   push edi
// 008d83f9  e892c4ffff           call 0x8d4890
// 008d83fe  8944244c             mov dword ptr [esp + 0x4c], eax
// 008d8402  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008d8405  83f8ff               cmp eax, -1
// 008d8408  7503                 jne 0x8d840d
// 008d840a  8b4628               mov eax, dword ptr [esi + 0x28]
// 008d840d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d8411  8d540b01             lea edx, [ebx + ecx + 1]
// 008d8415  52                   push edx
// 008d8416  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d841a  52                   push edx
// 008d841b  41                   inc ecx
// 008d841c  51                   push ecx
// 008d841d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d8421  49                   dec ecx
// 008d8422  51                   push ecx
// 008d8423  50                   push eax
// 008d8424  57                   push edi
// 008d8425  e816c0ffff           call 0x8d4440
// 008d842a  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008d842d  83c418               add esp, 0x18
// 008d8430  83f8ff               cmp eax, -1
// 008d8433  7505                 jne 0x8d843a
// 008d8435  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008d8438  eb02                 jmp 0x8d843c
// 008d843a  8bc8                 mov ecx, eax
// 008d843c  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d8440  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d8444  52                   push edx
// 008d8445  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d8449  40                   inc eax
// 008d844a  50                   push eax
// 008d844b  03d3                 add edx, ebx
// 008d844d  52                   push edx
// 008d844e  50                   push eax
// 008d844f  51                   push ecx
// 008d8450  57                   push edi
// 008d8451  e8eabfffff           call 0x8d4440
// 008d8456  8b4638               mov eax, dword ptr [esi + 0x38]
// 008d8459  83c418               add esp, 0x18
// 008d845c  83f8ff               cmp eax, -1
// 008d845f  7503                 jne 0x8d8464
// 008d8461  8b4634               mov eax, dword ptr [esi + 0x34]
// 008d8464  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d8468  8d540bff             lea edx, [ebx + ecx - 1]
// 008d846c  52                   push edx
// 008d846d  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d8471  52                   push edx
// 008d8472  49                   dec ecx
// 008d8473  51                   push ecx
// 008d8474  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d8478  51                   push ecx
// 008d8479  50                   push eax
// 008d847a  57                   push edi
// 008d847b  e8c0bfffff           call 0x8d4440
// 008d8480  8b4608               mov eax, dword ptr [esi + 8]
// 008d8483  83c418               add esp, 0x18
// 008d8486  83f8ff               cmp eax, -1
// 008d8489  7505                 jne 0x8d8490
// 008d848b  8b4e04               mov ecx, dword ptr [esi + 4]
// 008d848e  eb02                 jmp 0x8d8492
// 008d8490  8bc8                 mov ecx, eax
// 008d8492  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d8496  8d1403               lea edx, [ebx + eax]
// 008d8499  52                   push edx
// 008d849a  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d849e  52                   push edx
// 008d849f  50                   push eax
// 008d84a0  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d84a4  48                   dec eax
// 008d84a5  50                   push eax
// 008d84a6  51                   push ecx
// 008d84a7  57                   push edi
// 008d84a8  e893bfffff           call 0x8d4440
// 008d84ad  8b4608               mov eax, dword ptr [esi + 8]
// 008d84b0  83c418               add esp, 0x18
// 008d84b3  83f8ff               cmp eax, -1
// 008d84b6  7503                 jne 0x8d84bb
// 008d84b8  8b4604               mov eax, dword ptr [esi + 4]
// 008d84bb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d84bf  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d84c3  51                   push ecx
// 008d84c4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d84c8  51                   push ecx
// 008d84c9  03d3                 add edx, ebx
// 008d84cb  52                   push edx
// 008d84cc  51                   push ecx
// 008d84cd  50                   push eax
// 008d84ce  57                   push edi
// 008d84cf  e86cbfffff           call 0x8d4440
// 008d84d4  8b4620               mov eax, dword ptr [esi + 0x20]
// 008d84d7  83c418               add esp, 0x18
// 008d84da  83f8ff               cmp eax, -1
// 008d84dd  7503                 jne 0x8d84e2
// 008d84df  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d84e2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d84e6  8d140b               lea edx, [ebx + ecx]
// 008d84e9  52                   push edx
// 008d84ea  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d84ee  52                   push edx
// 008d84ef  51                   push ecx
// 008d84f0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d84f4  51                   push ecx
// 008d84f5  50                   push eax
// 008d84f6  57                   push edi
// 008d84f7  e844bfffff           call 0x8d4440
// 008d84fc  8b5560               mov edx, dword ptr [ebp + 0x60]
// 008d84ff  83c418               add esp, 0x18
// 008d8502  396a04               cmp dword ptr [edx + 4], ebp
// 008d8505  0f8571030000         jne 0x8d887c
// 008d850b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d850f  e94d030000           jmp 0x8d8861
// 008d8514  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d8518  48                   dec eax
// 008d8519  89442420             mov dword ptr [esp + 0x20], eax
// 008d851d  2b442418             sub eax, dword ptr [esp + 0x18]
// 008d8521  6a00                 push 0
// 008d8523  99                   cdq 
// 008d8524  2bc2                 sub eax, edx
// 008d8526  8bd8                 mov ebx, eax
// 008d8528  d1fb                 sar ebx, 1
// 008d852a  8bc3                 mov eax, ebx
// 008d852c  99                   cdq 
// 008d852d  2bc2                 sub eax, edx
// 008d852f  d1f8                 sar eax, 1
// 008d8531  f7d8                 neg eax
// 008d8533  50                   push eax
// 008d8534  8d54241c             lea edx, [esp + 0x1c]
// 008d8538  52                   push edx
// 008d8539  ff156ccc9800         call dword ptr [0x98cc6c]
// 008d853f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d8543  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d8547  41                   inc ecx
// 008d8548  894c2428             mov dword ptr [esp + 0x28], ecx
// 008d854c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d8550  8d141b               lea edx, [ebx + ebx]
// 008d8553  89542430             mov dword ptr [esp + 0x30], edx
// 008d8557  2bcb                 sub ecx, ebx
// 008d8559  2bc8                 sub ecx, eax
// 008d855b  8bd3                 mov edx, ebx
// 008d855d  f7da                 neg edx
// 008d855f  894c2434             mov dword ptr [esp + 0x34], ecx
// 008d8563  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008d8566  03d2                 add edx, edx
// 008d8568  89442424             mov dword ptr [esp + 0x24], eax
// 008d856c  8b01                 mov eax, dword ptr [ecx]
// 008d856e  89542440             mov dword ptr [esp + 0x40], edx
// 008d8572  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d8575  6a00                 push 0
// 008d8577  895c2430             mov dword ptr [esp + 0x30], ebx
// 008d857b  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008d8583  895c2440             mov dword ptr [esp + 0x40], ebx
// 008d8587  ffd2                 call edx
// 008d8589  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d858d  50                   push eax
// 008d858e  6a04                 push 4
// 008d8590  8d442430             lea eax, [esp + 0x30]
// 008d8594  50                   push eax
// 008d8595  55                   push ebp
// 008d8596  57                   push edi
// 008d8597  e8f4c2ffff           call 0x8d4890
// 008d859c  8944244c             mov dword ptr [esp + 0x4c], eax
// 008d85a0  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008d85a3  83f8ff               cmp eax, -1
// 008d85a6  7503                 jne 0x8d85ab
// 008d85a8  8b4628               mov eax, dword ptr [esi + 0x28]
// 008d85ab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d85af  51                   push ecx
// 008d85b0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d85b4  8d540b01             lea edx, [ebx + ecx + 1]
// 008d85b8  52                   push edx
// 008d85b9  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d85bd  42                   inc edx
// 008d85be  52                   push edx
// 008d85bf  41                   inc ecx
// 008d85c0  51                   push ecx
// 008d85c1  50                   push eax
// 008d85c2  57                   push edi
// 008d85c3  e878beffff           call 0x8d4440
// 008d85c8  8b4644               mov eax, dword ptr [esi + 0x44]
// 008d85cb  83c418               add esp, 0x18
// 008d85ce  83f8ff               cmp eax, -1
// 008d85d1  7505                 jne 0x8d85d8
// 008d85d3  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 008d85d6  eb02                 jmp 0x8d85da
// 008d85d8  8bc8                 mov ecx, eax
// 008d85da  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d85de  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d85e2  48                   dec eax
// 008d85e3  50                   push eax
// 008d85e4  52                   push edx
// 008d85e5  50                   push eax
// 008d85e6  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d85ea  8d1403               lea edx, [ebx + eax]
// 008d85ed  52                   push edx
// 008d85ee  51                   push ecx
// 008d85ef  57                   push edi
// 008d85f0  e84bbeffff           call 0x8d4440
// 008d85f5  8b4638               mov eax, dword ptr [esi + 0x38]
// 008d85f8  83c418               add esp, 0x18
// 008d85fb  83f8ff               cmp eax, -1
// 008d85fe  7503                 jne 0x8d8603
// 008d8600  8b4634               mov eax, dword ptr [esi + 0x34]
// 008d8603  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d8607  51                   push ecx
// 008d8608  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d860c  8d540bff             lea edx, [ebx + ecx - 1]
// 008d8610  52                   push edx
// 008d8611  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d8615  52                   push edx
// 008d8616  49                   dec ecx
// 008d8617  51                   push ecx
// 008d8618  50                   push eax
// 008d8619  57                   push edi
// 008d861a  e821beffff           call 0x8d4440
// 008d861f  8b4608               mov eax, dword ptr [esi + 8]
// 008d8622  83c418               add esp, 0x18
// 008d8625  83f8ff               cmp eax, -1
// 008d8628  7505                 jne 0x8d862f
// 008d862a  8b4e04               mov ecx, dword ptr [esi + 4]
// 008d862d  eb02                 jmp 0x8d8631
// 008d862f  8bc8                 mov ecx, eax
// 008d8631  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d8635  50                   push eax
// 008d8636  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d863a  8d1403               lea edx, [ebx + eax]
// 008d863d  52                   push edx
// 008d863e  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d8642  42                   inc edx
// 008d8643  52                   push edx
// 008d8644  50                   push eax
// 008d8645  51                   push ecx
// 008d8646  57                   push edi
// 008d8647  e8f4bdffff           call 0x8d4440
// 008d864c  8b4614               mov eax, dword ptr [esi + 0x14]
// 008d864f  83c418               add esp, 0x18
// 008d8652  83f8ff               cmp eax, -1
// 008d8655  7503                 jne 0x8d865a
// 008d8657  8b4610               mov eax, dword ptr [esi + 0x10]
// 008d865a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d865e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d8662  51                   push ecx
// 008d8663  52                   push edx
// 008d8664  51                   push ecx
// 008d8665  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d8669  8d140b               lea edx, [ebx + ecx]
// 008d866c  52                   push edx
// 008d866d  50                   push eax
// 008d866e  57                   push edi
// 008d866f  e8ccbdffff           call 0x8d4440
// 008d8674  8b4620               mov eax, dword ptr [esi + 0x20]
// 008d8677  83c418               add esp, 0x18
// 008d867a  83f8ff               cmp eax, -1
// 008d867d  7503                 jne 0x8d8682
// 008d867f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d8682  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d8686  51                   push ecx
// 008d8687  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d868b  8d140b               lea edx, [ebx + ecx]
// 008d868e  52                   push edx
// 008d868f  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d8693  52                   push edx
// 008d8694  51                   push ecx
// 008d8695  50                   push eax
// 008d8696  57                   push edi
// 008d8697  e8a4bdffff           call 0x8d4440
// 008d869c  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008d869f  83c418               add esp, 0x18
// 008d86a2  396804               cmp dword ptr [eax + 4], ebp
// 008d86a5  0f85d1010000         jne 0x8d887c
// 008d86ab  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d86af  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008d86b3  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d86b7  51                   push ecx
// 008d86b8  2bd8                 sub ebx, eax
// 008d86ba  035c2420             add ebx, dword ptr [esp + 0x20]
// 008d86be  53                   push ebx
// 008d86bf  52                   push edx
// 008d86c0  50                   push eax
// 008d86c1  57                   push edi
// 008d86c2  e8a9b7ffff           call 0x8d3e70
// 008d86c7  e9ad010000           jmp 0x8d8879
// 008d86cc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d86d0  48                   dec eax
// 008d86d1  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d86d5  2b442414             sub eax, dword ptr [esp + 0x14]
// 008d86d9  99                   cdq 
// 008d86da  2bc2                 sub eax, edx
// 008d86dc  8bd8                 mov ebx, eax
// 008d86de  d1fb                 sar ebx, 1
// 008d86e0  8bc3                 mov eax, ebx
// 008d86e2  99                   cdq 
// 008d86e3  2bc2                 sub eax, edx
// 008d86e5  d1f8                 sar eax, 1
// 008d86e7  f7d8                 neg eax
// 008d86e9  50                   push eax
// 008d86ea  6a00                 push 0
// 008d86ec  8d44241c             lea eax, [esp + 0x1c]
// 008d86f0  50                   push eax
// 008d86f1  ff156ccc9800         call dword ptr [0x98cc6c]
// 008d86f7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d86fb  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d86ff  41                   inc ecx
// 008d8700  894c2424             mov dword ptr [esp + 0x24], ecx
// 008d8704  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d8708  8d141b               lea edx, [ebx + ebx]
// 008d870b  8954242c             mov dword ptr [esp + 0x2c], edx
// 008d870f  2bcb                 sub ecx, ebx
// 008d8711  2bc8                 sub ecx, eax
// 008d8713  8bd3                 mov edx, ebx
// 008d8715  f7da                 neg edx
// 008d8717  894c2438             mov dword ptr [esp + 0x38], ecx
// 008d871b  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008d871e  03d2                 add edx, edx
// 008d8720  89442428             mov dword ptr [esp + 0x28], eax
// 008d8724  8b01                 mov eax, dword ptr [ecx]
// 008d8726  8954243c             mov dword ptr [esp + 0x3c], edx
// 008d872a  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d872d  6a00                 push 0
// 008d872f  895c2434             mov dword ptr [esp + 0x34], ebx
// 008d8733  c744243800000000     mov dword ptr [esp + 0x38], 0
// 008d873b  895c2444             mov dword ptr [esp + 0x44], ebx
// 008d873f  ffd2                 call edx
// 008d8741  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d8745  50                   push eax
// 008d8746  6a04                 push 4
// 008d8748  8d442430             lea eax, [esp + 0x30]
// 008d874c  50                   push eax
// 008d874d  55                   push ebp
// 008d874e  57                   push edi
// 008d874f  e83cc1ffff           call 0x8d4890
// 008d8754  8944244c             mov dword ptr [esp + 0x4c], eax
// 008d8758  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008d875b  83f8ff               cmp eax, -1
// 008d875e  7503                 jne 0x8d8763
// 008d8760  8b4628               mov eax, dword ptr [esi + 0x28]
// 008d8763  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d8767  8d540b01             lea edx, [ebx + ecx + 1]
// 008d876b  52                   push edx
// 008d876c  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d8770  52                   push edx
// 008d8771  41                   inc ecx
// 008d8772  51                   push ecx
// 008d8773  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d8777  41                   inc ecx
// 008d8778  51                   push ecx
// 008d8779  50                   push eax
// 008d877a  57                   push edi
// 008d877b  e8c0bcffff           call 0x8d4440
// 008d8780  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008d8783  83c418               add esp, 0x18
// 008d8786  83f8ff               cmp eax, -1
// 008d8789  7505                 jne 0x8d8790
// 008d878b  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008d878e  eb02                 jmp 0x8d8792
// 008d8790  8bc8                 mov ecx, eax
// 008d8792  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d8796  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d879a  52                   push edx
// 008d879b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d879f  48                   dec eax
// 008d87a0  50                   push eax
// 008d87a1  03d3                 add edx, ebx
// 008d87a3  52                   push edx
// 008d87a4  50                   push eax
// 008d87a5  51                   push ecx
// 008d87a6  57                   push edi
// 008d87a7  e894bcffff           call 0x8d4440
// 008d87ac  8b4638               mov eax, dword ptr [esi + 0x38]
// 008d87af  83c418               add esp, 0x18
// 008d87b2  83f8ff               cmp eax, -1
// 008d87b5  7503                 jne 0x8d87ba
// 008d87b7  8b4634               mov eax, dword ptr [esi + 0x34]
// 008d87ba  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d87be  8d540bff             lea edx, [ebx + ecx - 1]
// 008d87c2  52                   push edx
// 008d87c3  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d87c7  52                   push edx
// 008d87c8  49                   dec ecx
// 008d87c9  51                   push ecx
// 008d87ca  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d87ce  51                   push ecx
// 008d87cf  50                   push eax
// 008d87d0  57                   push edi
// 008d87d1  e86abcffff           call 0x8d4440
// 008d87d6  8b4608               mov eax, dword ptr [esi + 8]
// 008d87d9  83c418               add esp, 0x18
// 008d87dc  83f8ff               cmp eax, -1
// 008d87df  7505                 jne 0x8d87e6
// 008d87e1  8b4e04               mov ecx, dword ptr [esi + 4]
// 008d87e4  eb02                 jmp 0x8d87e8
// 008d87e6  8bc8                 mov ecx, eax
// 008d87e8  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d87ec  8d1403               lea edx, [ebx + eax]
// 008d87ef  52                   push edx
// 008d87f0  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d87f4  52                   push edx
// 008d87f5  50                   push eax
// 008d87f6  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d87fa  40                   inc eax
// 008d87fb  50                   push eax
// 008d87fc  51                   push ecx
// 008d87fd  57                   push edi
// 008d87fe  e83dbcffff           call 0x8d4440
// 008d8803  8b4608               mov eax, dword ptr [esi + 8]
// 008d8806  83c418               add esp, 0x18
// 008d8809  83f8ff               cmp eax, -1
// 008d880c  7503                 jne 0x8d8811
// 008d880e  8b4604               mov eax, dword ptr [esi + 4]
// 008d8811  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d8815  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d8819  51                   push ecx
// 008d881a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d881e  51                   push ecx
// 008d881f  03d3                 add edx, ebx
// 008d8821  52                   push edx
// 008d8822  51                   push ecx
// 008d8823  50                   push eax
// 008d8824  57                   push edi
// 008d8825  e816bcffff           call 0x8d4440
// 008d882a  8b4620               mov eax, dword ptr [esi + 0x20]
// 008d882d  83c418               add esp, 0x18
// 008d8830  83f8ff               cmp eax, -1
// 008d8833  7503                 jne 0x8d8838
// 008d8835  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d8838  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d883c  8d140b               lea edx, [ebx + ecx]
// 008d883f  52                   push edx
// 008d8840  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d8844  52                   push edx
// 008d8845  51                   push ecx
// 008d8846  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d884a  51                   push ecx
// 008d884b  50                   push eax
// 008d884c  57                   push edi
// 008d884d  e8eebbffff           call 0x8d4440
// 008d8852  8b5560               mov edx, dword ptr [ebp + 0x60]
// 008d8855  83c418               add esp, 0x18
// 008d8858  396a04               cmp dword ptr [edx + 4], ebp
// 008d885b  751f                 jne 0x8d887c
// 008d885d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d8861  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008d8865  50                   push eax
// 008d8866  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d886a  2bd8                 sub ebx, eax
// 008d886c  035c2424             add ebx, dword ptr [esp + 0x24]
// 008d8870  53                   push ebx
// 008d8871  50                   push eax
// 008d8872  51                   push ecx
// 008d8873  57                   push edi
// 008d8874  e8c7b5ffff           call 0x8d3e40
// 008d8879  83c414               add esp, 0x14
// 008d887c  8b7544               mov esi, dword ptr [ebp + 0x44]
// 008d887f  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d8883  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 008d8886  8b11                 mov edx, dword ptr [ecx]
// 008d8888  6a01                 push 1
// 008d888a  83ec10               sub esp, 0x10
// 008d888d  8bc4                 mov eax, esp
// 008d888f  8930                 mov dword ptr [eax], esi
// 008d8891  8b7548               mov esi, dword ptr [ebp + 0x48]
// 008d8894  897004               mov dword ptr [eax + 4], esi
// 008d8897  8b754c               mov esi, dword ptr [ebp + 0x4c]
// 008d889a  897008               mov dword ptr [eax + 8], esi
// 008d889d  8b7550               mov esi, dword ptr [ebp + 0x50]
// 008d88a0  55                   push ebp
// 008d88a1  89700c               mov dword ptr [eax + 0xc], esi
// 008d88a4  8b4268               mov eax, dword ptr [edx + 0x68]
// 008d88a7  57                   push edi
// 008d88a8  ffd0                 call eax
// 008d88aa  5f                   pop edi
// 008d88ab  5e                   pop esi
// 008d88ac  5d                   pop ebp
// 008d88ad  5b                   pop ebx
// 008d88ae  83c434               add esp, 0x34
// 008d88b1  c20800               ret 8
// 008d88b4  c0818d0077838d       rol byte ptr [ecx - 0x7c88ff73], 0x8d
// 008d88bb  0014858d00cc86       add byte ptr [eax*4 - 0x7933ff73], dl
// 008d88c2  8d00                 lea eax, [eax]
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetExcel@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp