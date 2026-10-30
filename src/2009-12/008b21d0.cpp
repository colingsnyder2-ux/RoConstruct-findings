// roc 2009-12 008b21d0  unit: CXTPDockingPaneTabbedContainer  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b21d0
//
// 008b21d0  53                   push ebx
// 008b21d1  56                   push esi
// 008b21d2  8bf1                 mov esi, ecx
// 008b21d4  8d5eac               lea ebx, [esi - 0x54]
// 008b21d7  85db                 test ebx, ebx
// 008b21d9  0f84e4000000         je 0x8b22c3
// 008b21df  837b2000             cmp dword ptr [ebx + 0x20], 0
// 008b21e3  0f84da000000         je 0x8b22c3
// 008b21e9  8b06                 mov eax, dword ptr [esi]
// 008b21eb  8b5014               mov edx, dword ptr [eax + 0x14]
// 008b21ee  ffd2                 call edx
// 008b21f0  85c0                 test eax, eax
// 008b21f2  0f85cb000000         jne 0x8b22c3
// 008b21f8  57                   push edi
// 008b21f9  ff15eccb9800         call dword ptr [0x98cbec]
// 008b21ff  50                   push eax
// 008b2200  e82519f4ff           call 0x7f3b2a
// 008b2205  8bf8                 mov edi, eax
// 008b2207  85ff                 test edi, edi
// 008b2209  7444                 je 0x8b224f
// 008b220b  837f2000             cmp dword ptr [edi + 0x20], 0
// 008b220f  743e                 je 0x8b224f
// 008b2211  8d46ac               lea eax, [esi - 0x54]
// 008b2214  3bf8                 cmp edi, eax
// 008b2216  7430                 je 0x8b2248
// 008b2218  57                   push edi
// 008b2219  8bcb                 mov ecx, ebx
// 008b221b  e88035faff           call 0x8557a0
// 008b2220  85c0                 test eax, eax
// 008b2222  7524                 jne 0x8b2248
// 008b2224  8bcf                 mov ecx, edi
// 008b2226  e8b540f5ff           call 0x8062e0
// 008b222b  85c0                 test eax, eax
// 008b222d  7420                 je 0x8b224f
// 008b222f  83782000             cmp dword ptr [eax + 0x20], 0
// 008b2233  741a                 je 0x8b224f
// 008b2235  8bcf                 mov ecx, edi
// 008b2237  e8a440f5ff           call 0x8062e0
// 008b223c  50                   push eax
// 008b223d  8bcb                 mov ecx, ebx
// 008b223f  e85c35faff           call 0x8557a0
// 008b2244  85c0                 test eax, eax
// 008b2246  7407                 je 0x8b224f
// 008b2248  bf01000000           mov edi, 1
// 008b224d  eb02                 jmp 0x8b2251
// 008b224f  33ff                 xor edi, edi
// 008b2251  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 008b2257  3bf8                 cmp edi, eax
// 008b2259  7433                 je 0x8b228e
// 008b225b  8bce                 mov ecx, esi
// 008b225d  89be40010000         mov dword ptr [esi + 0x140], edi
// 008b2263  e8d8e5ffff           call 0x8b0840
// 008b2268  8b8e50010000         mov ecx, dword ptr [esi + 0x150]
// 008b226e  8b10                 mov edx, dword ptr [eax]
// 008b2270  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 008b2276  51                   push ecx
// 008b2277  57                   push edi
// 008b2278  8bc8                 mov ecx, eax
// 008b227a  ffd2                 call edx
// 008b227c  8b46cc               mov eax, dword ptr [esi - 0x34]
// 008b227f  6a00                 push 0
// 008b2281  6a00                 push 0
// 008b2283  50                   push eax
// 008b2284  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008b228a  5f                   pop edi
// 008b228b  5e                   pop esi
// 008b228c  5b                   pop ebx
// 008b228d  c3                   ret 
// 008b228e  85c0                 test eax, eax
// 008b2290  7430                 je 0x8b22c2
// 008b2292  8bce                 mov ecx, esi
// 008b2294  e8a7e5ffff           call 0x8b0840
// 008b2299  8b88d8000000         mov ecx, dword ptr [eax + 0xd8]
// 008b229f  3b8e50010000         cmp ecx, dword ptr [esi + 0x150]
// 008b22a5  741b                 je 0x8b22c2
// 008b22a7  8bce                 mov ecx, esi
// 008b22a9  e892e5ffff           call 0x8b0840
// 008b22ae  8b8e50010000         mov ecx, dword ptr [esi + 0x150]
// 008b22b4  8b10                 mov edx, dword ptr [eax]
// 008b22b6  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 008b22bc  51                   push ecx
// 008b22bd  57                   push edi
// 008b22be  8bc8                 mov ecx, eax
// 008b22c0  ffd2                 call edx
// 008b22c2  5f                   pop edi
// 008b22c3  5e                   pop esi
// 008b22c4  5b                   pop ebx
// 008b22c5  c3                   ret 
// copied from an identical function in another client (function ?OnFocusChanged@CXTPDockingPaneTabbedContainer@@MAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp