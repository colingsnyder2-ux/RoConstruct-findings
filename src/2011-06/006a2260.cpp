// roc 2011-06 006a2260  unit: RBX::Assembly  size: 463 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a2260
//
// 006a2260  51                   push ecx
// 006a2261  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a2265  53                   push ebx
// 006a2266  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006a226a  55                   push ebp
// 006a226b  56                   push esi
// 006a226c  57                   push edi
// 006a226d  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006a2271  8bc1                 mov eax, ecx
// 006a2273  2bc7                 sub eax, edi
// 006a2275  c1f802               sar eax, 2
// 006a2278  99                   cdq 
// 006a2279  2bc2                 sub eax, edx
// 006a227b  53                   push ebx
// 006a227c  d1f8                 sar eax, 1
// 006a227e  83c1fc               add ecx, -4
// 006a2281  51                   push ecx
// 006a2282  8d3487               lea esi, [edi + eax*4]
// 006a2285  56                   push esi
// 006a2286  57                   push edi
// 006a2287  e884fcffff           call 0x6a1f10
// 006a228c  83c410               add esp, 0x10
// 006a228f  8d6e04               lea ebp, [esi + 4]
// 006a2292  3bfe                 cmp edi, esi
// 006a2294  7327                 jae 0x6a22bd
// 006a2296  8b06                 mov eax, dword ptr [esi]
// 006a2298  8b4efc               mov ecx, dword ptr [esi - 4]
// 006a229b  50                   push eax
// 006a229c  51                   push ecx
// 006a229d  ffd3                 call ebx
// 006a229f  83c408               add esp, 8
// 006a22a2  84c0                 test al, al
// 006a22a4  7517                 jne 0x6a22bd
// 006a22a6  8b56fc               mov edx, dword ptr [esi - 4]
// 006a22a9  8b06                 mov eax, dword ptr [esi]
// 006a22ab  52                   push edx
// 006a22ac  50                   push eax
// 006a22ad  ffd3                 call ebx
// 006a22af  83c408               add esp, 8
// 006a22b2  84c0                 test al, al
// 006a22b4  7507                 jne 0x6a22bd
// 006a22b6  83c6fc               add esi, -4
// 006a22b9  3bfe                 cmp edi, esi
// 006a22bb  72d9                 jb 0x6a2296
// 006a22bd  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006a22c1  3bef                 cmp ebp, edi
// 006a22c3  7327                 jae 0x6a22ec
// 006a22c5  8b0e                 mov ecx, dword ptr [esi]
// 006a22c7  8b5500               mov edx, dword ptr [ebp]
// 006a22ca  51                   push ecx
// 006a22cb  52                   push edx
// 006a22cc  ffd3                 call ebx
// 006a22ce  83c408               add esp, 8
// 006a22d1  84c0                 test al, al
// 006a22d3  7517                 jne 0x6a22ec
// 006a22d5  8b4500               mov eax, dword ptr [ebp]
// 006a22d8  8b0e                 mov ecx, dword ptr [esi]
// 006a22da  50                   push eax
// 006a22db  51                   push ecx
// 006a22dc  ffd3                 call ebx
// 006a22de  83c408               add esp, 8
// 006a22e1  84c0                 test al, al
// 006a22e3  7507                 jne 0x6a22ec
// 006a22e5  83c504               add ebp, 4
// 006a22e8  3bef                 cmp ebp, edi
// 006a22ea  72d9                 jb 0x6a22c5
// 006a22ec  8bde                 mov ebx, esi
// 006a22ee  8bfd                 mov edi, ebp
// 006a22f0  895c2410             mov dword ptr [esp + 0x10], ebx
// 006a22f4  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 006a22f8  7342                 jae 0x6a233c
// 006a22fa  8d9b00000000         lea ebx, [ebx]
// 006a2300  8b17                 mov edx, dword ptr [edi]
// 006a2302  8b06                 mov eax, dword ptr [esi]
// 006a2304  52                   push edx
// 006a2305  50                   push eax
// 006a2306  ff54242c             call dword ptr [esp + 0x2c]
// 006a230a  83c408               add esp, 8
// 006a230d  84c0                 test al, al
// 006a230f  7522                 jne 0x6a2333
// 006a2311  8b0e                 mov ecx, dword ptr [esi]
// 006a2313  8b17                 mov edx, dword ptr [edi]
// 006a2315  51                   push ecx
// 006a2316  52                   push edx
// 006a2317  ff54242c             call dword ptr [esp + 0x2c]
// 006a231b  83c408               add esp, 8
// 006a231e  84c0                 test al, al
// 006a2320  751a                 jne 0x6a233c
// 006a2322  8bc5                 mov eax, ebp
// 006a2324  83c504               add ebp, 4
// 006a2327  3bc7                 cmp eax, edi
// 006a2329  7408                 je 0x6a2333
// 006a232b  8b17                 mov edx, dword ptr [edi]
// 006a232d  8b08                 mov ecx, dword ptr [eax]
// 006a232f  8910                 mov dword ptr [eax], edx
// 006a2331  890f                 mov dword ptr [edi], ecx
// 006a2333  83c704               add edi, 4
// 006a2336  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 006a233a  72c4                 jb 0x6a2300
// 006a233c  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 006a2340  7650                 jbe 0x6a2392
// 006a2342  83c3fc               add ebx, -4
// 006a2345  8b06                 mov eax, dword ptr [esi]
// 006a2347  8b0b                 mov ecx, dword ptr [ebx]
// 006a2349  50                   push eax
// 006a234a  51                   push ecx
// 006a234b  ff54242c             call dword ptr [esp + 0x2c]
// 006a234f  83c408               add esp, 8
// 006a2352  84c0                 test al, al
// 006a2354  7520                 jne 0x6a2376
// 006a2356  8b13                 mov edx, dword ptr [ebx]
// 006a2358  8b06                 mov eax, dword ptr [esi]
// 006a235a  52                   push edx
// 006a235b  50                   push eax
// 006a235c  ff54242c             call dword ptr [esp + 0x2c]
// 006a2360  83c408               add esp, 8
// 006a2363  84c0                 test al, al
// 006a2365  7523                 jne 0x6a238a
// 006a2367  83ee04               sub esi, 4
// 006a236a  3bf3                 cmp esi, ebx
// 006a236c  7408                 je 0x6a2376
// 006a236e  8b0b                 mov ecx, dword ptr [ebx]
// 006a2370  8b06                 mov eax, dword ptr [esi]
// 006a2372  890e                 mov dword ptr [esi], ecx
// 006a2374  8903                 mov dword ptr [ebx], eax
// 006a2376  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a237a  83e804               sub eax, 4
// 006a237d  83eb04               sub ebx, 4
// 006a2380  89442410             mov dword ptr [esp + 0x10], eax
// 006a2384  3944241c             cmp dword ptr [esp + 0x1c], eax
// 006a2388  72bb                 jb 0x6a2345
// 006a238a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006a238e  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 006a2392  7542                 jne 0x6a23d6
// 006a2394  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 006a2398  0f8482000000         je 0x6a2420
// 006a239e  3bef                 cmp ebp, edi
// 006a23a0  740e                 je 0x6a23b0
// 006a23a2  3bf5                 cmp esi, ebp
// 006a23a4  740a                 je 0x6a23b0
// 006a23a6  8b5500               mov edx, dword ptr [ebp]
// 006a23a9  8b06                 mov eax, dword ptr [esi]
// 006a23ab  8916                 mov dword ptr [esi], edx
// 006a23ad  894500               mov dword ptr [ebp], eax
// 006a23b0  8bc7                 mov eax, edi
// 006a23b2  8bce                 mov ecx, esi
// 006a23b4  83c504               add ebp, 4
// 006a23b7  83c604               add esi, 4
// 006a23ba  83c704               add edi, 4
// 006a23bd  3bc8                 cmp ecx, eax
// 006a23bf  0f842fffffff         je 0x6a22f4
// 006a23c5  8b18                 mov ebx, dword ptr [eax]
// 006a23c7  8b11                 mov edx, dword ptr [ecx]
// 006a23c9  8919                 mov dword ptr [ecx], ebx
// 006a23cb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006a23cf  8910                 mov dword ptr [eax], edx
// 006a23d1  e91effffff           jmp 0x6a22f4
// 006a23d6  83eb04               sub ebx, 4
// 006a23d9  895c2410             mov dword ptr [esp + 0x10], ebx
// 006a23dd  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 006a23e1  7529                 jne 0x6a240c
// 006a23e3  83ee04               sub esi, 4
// 006a23e6  3bde                 cmp ebx, esi
// 006a23e8  7408                 je 0x6a23f2
// 006a23ea  8b0e                 mov ecx, dword ptr [esi]
// 006a23ec  8b03                 mov eax, dword ptr [ebx]
// 006a23ee  890b                 mov dword ptr [ebx], ecx
// 006a23f0  8906                 mov dword ptr [esi], eax
// 006a23f2  83ed04               sub ebp, 4
// 006a23f5  3bf5                 cmp esi, ebp
// 006a23f7  0f84f7feffff         je 0x6a22f4
// 006a23fd  8b5500               mov edx, dword ptr [ebp]
// 006a2400  8b06                 mov eax, dword ptr [esi]
// 006a2402  8916                 mov dword ptr [esi], edx
// 006a2404  894500               mov dword ptr [ebp], eax
// 006a2407  e9e8feffff           jmp 0x6a22f4
// 006a240c  3bfb                 cmp edi, ebx
// 006a240e  7408                 je 0x6a2418
// 006a2410  8b0b                 mov ecx, dword ptr [ebx]
// 006a2412  8b07                 mov eax, dword ptr [edi]
// 006a2414  890f                 mov dword ptr [edi], ecx
// 006a2416  8903                 mov dword ptr [ebx], eax
// 006a2418  83c704               add edi, 4
// 006a241b  e9d4feffff           jmp 0x6a22f4
// 006a2420  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a2424  5f                   pop edi
// 006a2425  8930                 mov dword ptr [eax], esi
// 006a2427  5e                   pop esi
// 006a2428  896804               mov dword ptr [eax + 4], ebp
// 006a242b  5d                   pop ebp
// 006a242c  5b                   pop ebx
// 006a242d  59                   pop ecx
// 006a242e  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Unguarded_partition@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YA?AU?$pair@PAPAVMotorJoint@RBX@@PAPAV12@@0@PAPAVMotorJoint@RBX@@0P6A_NPBV23@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
