// roc 2011-06 008d91a0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 568 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d91a0
//
// 008d91a0  53                   push ebx
// 008d91a1  8bd9                 mov ebx, ecx
// 008d91a3  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 008d91a6  83783c00             cmp dword ptr [eax + 0x3c], 0
// 008d91aa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d91ae  0f85a9000000         jne 0x8d925d
// 008d91b4  83e901               sub ecx, 1
// 008d91b7  0f8486000000         je 0x8d9243
// 008d91bd  83e901               sub ecx, 1
// 008d91c0  7445                 je 0x8d9207
// 008d91c2  83e901               sub ecx, 1
// 008d91c5  0f85f9010000         jne 0x8d93c4
// 008d91cb  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d91d1  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008d91d4  83c008               add eax, 8
// 008d91d7  83f9ff               cmp ecx, -1
// 008d91da  7516                 jne 0x8d91f2
// 008d91dc  8b4004               mov eax, dword ptr [eax + 4]
// 008d91df  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008d91e3  50                   push eax
// 008d91e4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d91e8  50                   push eax
// 008d91e9  e8321cf3ff           call 0x80ae20
// 008d91ee  5b                   pop ebx
// 008d91ef  c20c00               ret 0xc
// 008d91f2  8bc1                 mov eax, ecx
// 008d91f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008d91f8  50                   push eax
// 008d91f9  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d91fd  50                   push eax
// 008d91fe  e81d1cf3ff           call 0x80ae20
// 008d9203  5b                   pop ebx
// 008d9204  c20c00               ret 0xc
// 008d9207  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d920d  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008d9210  83c008               add eax, 8
// 008d9213  83f9ff               cmp ecx, -1
// 008d9216  7516                 jne 0x8d922e
// 008d9218  8b4004               mov eax, dword ptr [eax + 4]
// 008d921b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d921f  50                   push eax
// 008d9220  51                   push ecx
// 008d9221  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d9225  e8f61bf3ff           call 0x80ae20
// 008d922a  5b                   pop ebx
// 008d922b  c20c00               ret 0xc
// 008d922e  8bc1                 mov eax, ecx
// 008d9230  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d9234  50                   push eax
// 008d9235  51                   push ecx
// 008d9236  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d923a  e8e11bf3ff           call 0x80ae20
// 008d923f  5b                   pop ebx
// 008d9240  c20c00               ret 0xc
// 008d9243  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d9247  834004fe             add dword ptr [eax + 4], -2
// 008d924b  8300fe               add dword ptr [eax], -2
// 008d924e  b902000000           mov ecx, 2
// 008d9253  014808               add dword ptr [eax + 8], ecx
// 008d9256  01480c               add dword ptr [eax + 0xc], ecx
// 008d9259  5b                   pop ebx
// 008d925a  c20c00               ret 0xc
// 008d925d  83f903               cmp ecx, 3
// 008d9260  0f875e010000         ja 0x8d93c4
// 008d9266  56                   push esi
// 008d9267  57                   push edi
// 008d9268  ff248dc8938d00       jmp dword ptr [ecx*4 + 0x8d93c8]
// 008d926f  e86cc1f6ff           call 0x8453e0
// 008d9274  6a0f                 push 0xf
// 008d9276  8bc8                 mov ecx, eax
// 008d9278  e833b9f6ff           call 0x844bb0
// 008d927d  8bf8                 mov edi, eax
// 008d927f  e85cc1f6ff           call 0x8453e0
// 008d9284  6a0f                 push 0xf
// 008d9286  8bc8                 mov ecx, eax
// 008d9288  e823b9f6ff           call 0x844bb0
// 008d928d  8b742414             mov esi, dword ptr [esp + 0x14]
// 008d9291  8b560c               mov edx, dword ptr [esi + 0xc]
// 008d9294  2b5604               sub edx, dword ptr [esi + 4]
// 008d9297  57                   push edi
// 008d9298  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008d929c  50                   push eax
// 008d929d  8b4608               mov eax, dword ptr [esi + 8]
// 008d92a0  2b06                 sub eax, dword ptr [esi]
// 008d92a2  4a                   dec edx
// 008d92a3  52                   push edx
// 008d92a4  83e802               sub eax, 2
// 008d92a7  50                   push eax
// 008d92a8  6a00                 push 0
// 008d92aa  6a01                 push 1
// 008d92ac  8bcf                 mov ecx, edi
// 008d92ae  e8493a0f00           call 0x9cccfc
// 008d92b3  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 008d92b6  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d92bc  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d92bf  83f9ff               cmp ecx, -1
// 008d92c2  7503                 jne 0x8d92c7
// 008d92c4  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d92c7  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d92ca  83faff               cmp edx, -1
// 008d92cd  7505                 jne 0x8d92d4
// 008d92cf  8b4048               mov eax, dword ptr [eax + 0x48]
// 008d92d2  eb02                 jmp 0x8d92d6
// 008d92d4  8bc2                 mov eax, edx
// 008d92d6  8b560c               mov edx, dword ptr [esi + 0xc]
// 008d92d9  2b5604               sub edx, dword ptr [esi + 4]
// 008d92dc  51                   push ecx
// 008d92dd  50                   push eax
// 008d92de  8b4608               mov eax, dword ptr [esi + 8]
// 008d92e1  2b06                 sub eax, dword ptr [esi]
// 008d92e3  52                   push edx
// 008d92e4  50                   push eax
// 008d92e5  6a00                 push 0
// 008d92e7  6a00                 push 0
// 008d92e9  8bcf                 mov ecx, edi
// 008d92eb  e80c3a0f00           call 0x9cccfc
// 008d92f0  5f                   pop edi
// 008d92f1  5e                   pop esi
// 008d92f2  5b                   pop ebx
// 008d92f3  c20c00               ret 0xc
// 008d92f6  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d92fa  ff4804               dec dword ptr [eax + 4]
// 008d92fd  5f                   pop edi
// 008d92fe  5e                   pop esi
// 008d92ff  5b                   pop ebx
// 008d9300  c20c00               ret 0xc
// 008d9303  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d9309  8b4858               mov ecx, dword ptr [eax + 0x58]
// 008d930c  83c050               add eax, 0x50
// 008d930f  83f9ff               cmp ecx, -1
// 008d9312  7505                 jne 0x8d9319
// 008d9314  8b4004               mov eax, dword ptr [eax + 4]
// 008d9317  eb02                 jmp 0x8d931b
// 008d9319  8bc1                 mov eax, ecx
// 008d931b  8b742414             mov esi, dword ptr [esp + 0x14]
// 008d931f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008d9323  50                   push eax
// 008d9324  56                   push esi
// 008d9325  8bcf                 mov ecx, edi
// 008d9327  e8f41af3ff           call 0x80ae20
// 008d932c  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 008d932f  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d9335  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d9338  83c044               add eax, 0x44
// 008d933b  83f9ff               cmp ecx, -1
// 008d933e  7505                 jne 0x8d9345
// 008d9340  8b4004               mov eax, dword ptr [eax + 4]
// 008d9343  eb02                 jmp 0x8d9347
// 008d9345  8bc1                 mov eax, ecx
// 008d9347  8b5604               mov edx, dword ptr [esi + 4]
// 008d934a  8b4e08               mov ecx, dword ptr [esi + 8]
// 008d934d  50                   push eax
// 008d934e  8b460c               mov eax, dword ptr [esi + 0xc]
// 008d9351  2bc2                 sub eax, edx
// 008d9353  50                   push eax
// 008d9354  6a01                 push 1
// 008d9356  49                   dec ecx
// 008d9357  52                   push edx
// 008d9358  51                   push ecx
// 008d9359  8bcf                 mov ecx, edi
// 008d935b  e876320f00           call 0x9cc5d6
// 008d9360  5f                   pop edi
// 008d9361  5e                   pop esi
// 008d9362  5b                   pop ebx
// 008d9363  c20c00               ret 0xc
// 008d9366  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d936c  8b4858               mov ecx, dword ptr [eax + 0x58]
// 008d936f  83c050               add eax, 0x50
// 008d9372  83f9ff               cmp ecx, -1
// 008d9375  7505                 jne 0x8d937c
// 008d9377  8b4004               mov eax, dword ptr [eax + 4]
// 008d937a  eb02                 jmp 0x8d937e
// 008d937c  8bc1                 mov eax, ecx
// 008d937e  8b742414             mov esi, dword ptr [esp + 0x14]
// 008d9382  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008d9386  50                   push eax
// 008d9387  56                   push esi
// 008d9388  8bcf                 mov ecx, edi
// 008d938a  e8911af3ff           call 0x80ae20
// 008d938f  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 008d9392  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008d9398  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d939b  83c044               add eax, 0x44
// 008d939e  83f9ff               cmp ecx, -1
// 008d93a1  7505                 jne 0x8d93a8
// 008d93a3  8b4004               mov eax, dword ptr [eax + 4]
// 008d93a6  eb02                 jmp 0x8d93aa
// 008d93a8  8bc1                 mov eax, ecx
// 008d93aa  8b16                 mov edx, dword ptr [esi]
// 008d93ac  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008d93af  50                   push eax
// 008d93b0  8b4608               mov eax, dword ptr [esi + 8]
// 008d93b3  6a01                 push 1
// 008d93b5  2bc2                 sub eax, edx
// 008d93b7  50                   push eax
// 008d93b8  49                   dec ecx
// 008d93b9  51                   push ecx
// 008d93ba  52                   push edx
// 008d93bb  8bcf                 mov ecx, edi
// 008d93bd  e814320f00           call 0x9cc5d6
// 008d93c2  5f                   pop edi
// 008d93c3  5e                   pop esi
// 008d93c4  5b                   pop ebx
// 008d93c5  c20c00               ret 0xc
// 008d93c8  6f                   outsd dx, dword ptr [esi]
// 008d93c9  92                   xchg edx, eax
// 008d93ca  8d00                 lea eax, [eax]
// 008d93cc  f6928d000393         not byte ptr [edx - 0x6cfcff73]
// 008d93d2  8d00                 lea eax, [eax]
// 008d93d4  6693                 xchg bx, ax
// 008d93d6  8d00                 lea eax, [eax]
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawWorkspacePart@CAppearanceSet@CXTPTabPaintManager@@UAEXPAVCDC@@PAUtagRECT@@W4XTPTabWorkspacePart@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
