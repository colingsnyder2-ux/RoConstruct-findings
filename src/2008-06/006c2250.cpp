// roc 2008-06 006c2250  unit: CXTPToolBar::CControlButtonExpand  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c2250
//
// 006c2250  8b442404             mov eax, dword ptr [esp + 4]
// 006c2254  83ec1c               sub esp, 0x1c
// 006c2257  55                   push ebp
// 006c2258  56                   push esi
// 006c2259  8bf1                 mov esi, ecx
// 006c225b  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 006c2261  33ed                 xor ebp, ebp
// 006c2263  898674010000         mov dword ptr [esi + 0x174], eax
// 006c2269  3bc5                 cmp eax, ebp
// 006c226b  0f8485010000         je 0x6c23f6
// 006c2271  3bcd                 cmp ecx, ebp
// 006c2273  7405                 je 0x6c227a
// 006c2275  e86ae9fdff           call 0x6a0be4
// 006c227a  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006c2280  89ae78010000         mov dword ptr [esi + 0x178], ebp
// 006c2286  e83557ffff           call 0x6b79c0
// 006c228b  3bc5                 cmp eax, ebp
// 006c228d  7458                 je 0x6c22e7
// 006c228f  8b5020               mov edx, dword ptr [eax + 0x20]
// 006c2292  33c9                 xor ecx, ecx
// 006c2294  894c2410             mov dword ptr [esp + 0x10], ecx
// 006c2298  894c2408             mov dword ptr [esp + 8], ecx
// 006c229c  894c240c             mov dword ptr [esp + 0xc], ecx
// 006c22a0  894c2414             mov dword ptr [esp + 0x14], ecx
// 006c22a4  894c2418             mov dword ptr [esp + 0x18], ecx
// 006c22a8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006c22ac  894c2420             mov dword ptr [esp + 0x20], ecx
// 006c22b0  8d4c2408             lea ecx, [esp + 8]
// 006c22b4  51                   push ecx
// 006c22b5  55                   push ebp
// 006c22b6  6861280000           push 0x2861
// 006c22bb  52                   push edx
// 006c22bc  c744242001000000     mov dword ptr [esp + 0x20], 1
// 006c22c4  ff15142e8000         call dword ptr [0x802e14]
// 006c22ca  85c0                 test eax, eax
// 006c22cc  7419                 je 0x6c22e7
// 006c22ce  8b442408             mov eax, dword ptr [esp + 8]
// 006c22d2  50                   push eax
// 006c22d3  e8e8be0200           call 0x6ee1c0
// 006c22d8  50                   push eax
// 006c22d9  e848e9fdff           call 0x6a0c26
// 006c22de  83c408               add esp, 8
// 006c22e1  898678010000         mov dword ptr [esi + 0x178], eax
// 006c22e7  39ae78010000         cmp dword ptr [esi + 0x178], ebp
// 006c22ed  751a                 jne 0x6c2309
// 006c22ef  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006c22f5  e8162bffff           call 0x6b4e10
// 006c22fa  50                   push eax
// 006c22fb  e820c40200           call 0x6ee720
// 006c2300  83c404               add esp, 4
// 006c2303  898678010000         mov dword ptr [esi + 0x178], eax
// 006c2309  53                   push ebx
// 006c230a  57                   push edi
// 006c230b  8bbe78010000         mov edi, dword ptr [esi + 0x178]
// 006c2311  8b17                 mov edx, dword ptr [edi]
// 006c2313  8b8298010000         mov eax, dword ptr [edx + 0x198]
// 006c2319  8bcf                 mov ecx, edi
// 006c231b  ffd0                 call eax
// 006c231d  85c0                 test eax, eax
// 006c231f  7506                 jne 0x6c2327
// 006c2321  89af38010000         mov dword ptr [edi + 0x138], ebp
// 006c2327  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006c232d  e8de2affff           call 0x6b4e10
// 006c2332  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006c2338  8bd8                 mov ebx, eax
// 006c233a  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 006c2340  50                   push eax
// 006c2341  3bdd                 cmp ebx, ebp
// 006c2343  747a                 je 0x6c23bf
// 006c2345  8b13                 mov edx, dword ptr [ebx]
// 006c2347  8b5270               mov edx, dword ptr [edx + 0x70]
// 006c234a  51                   push ecx
// 006c234b  8bcb                 mov ecx, ebx
// 006c234d  ffd2                 call edx
// 006c234f  8b4374               mov eax, dword ptr [ebx + 0x74]
// 006c2352  396838               cmp dword ptr [eax + 0x38], ebp
// 006c2355  7505                 jne 0x6c235c
// 006c2357  396b60               cmp dword ptr [ebx + 0x60], ebp
// 006c235a  7468                 je 0x6c23c4
// 006c235c  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 006c2362  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 006c2368  55                   push ebp
// 006c2369  6aff                 push -1
// 006c236b  55                   push ebp
// 006c236c  68a2230000           push 0x23a2
// 006c2371  6a02                 push 2
// 006c2373  e8c8260300           call 0x6f4a40
// 006c2378  8bf8                 mov edi, eax
// 006c237a  6a08                 push 8
// 006c237c  8bcf                 mov ecx, edi
// 006c237e  e8dd8ffeff           call 0x6ab360
// 006c2383  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 006c2389  8b2f                 mov ebp, dword ptr [edi]
// 006c238b  e81038ffff           call 0x6b5ba0
// 006c2390  33d2                 xor edx, edx
// 006c2392  83f801               cmp eax, 1
// 006c2395  8b4564               mov eax, dword ptr [ebp + 0x64]
// 006c2398  0f9fc2               setg dl
// 006c239b  8bcf                 mov ecx, edi
// 006c239d  52                   push edx
// 006c239e  ffd0                 call eax
// 006c23a0  8b17                 mov edx, dword ptr [edi]
// 006c23a2  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 006c23a8  8b2b                 mov ebp, dword ptr [ebx]
// 006c23aa  8bcf                 mov ecx, edi
// 006c23ac  ffd0                 call eax
// 006c23ae  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006c23b4  8b5574               mov edx, dword ptr [ebp + 0x74]
// 006c23b7  50                   push eax
// 006c23b8  51                   push ecx
// 006c23b9  8bcb                 mov ecx, ebx
// 006c23bb  ffd2                 call edx
// 006c23bd  eb05                 jmp 0x6c23c4
// 006c23bf  e85c09feff           call 0x6a2d20
// 006c23c4  8b16                 mov edx, dword ptr [esi]
// 006c23c6  8b426c               mov eax, dword ptr [edx + 0x6c]
// 006c23c9  8bce                 mov ecx, esi
// 006c23cb  ffd0                 call eax
// 006c23cd  5f                   pop edi
// 006c23ce  5b                   pop ebx
// 006c23cf  83f802               cmp eax, 2
// 006c23d2  7409                 je 0x6c23dd
// 006c23d4  83f803               cmp eax, 3
// 006c23d7  7404                 je 0x6c23dd
// 006c23d9  33c0                 xor eax, eax
// 006c23db  eb05                 jmp 0x6c23e2
// 006c23dd  b801000000           mov eax, 1
// 006c23e2  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 006c23e8  8b11                 mov edx, dword ptr [ecx]
// 006c23ea  50                   push eax
// 006c23eb  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 006c23f1  56                   push esi
// 006c23f2  ffd0                 call eax
// 006c23f4  eb12                 jmp 0x6c2408
// 006c23f6  3bcd                 cmp ecx, ebp
// 006c23f8  740e                 je 0x6c2408
// 006c23fa  8b11                 mov edx, dword ptr [ecx]
// 006c23fc  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 006c2402  55                   push ebp
// 006c2403  6a01                 push 1
// 006c2405  55                   push ebp
// 006c2406  ffd0                 call eax
// 006c2408  6a01                 push 1
// 006c240a  8bce                 mov ecx, esi
// 006c240c  e8bf94feff           call 0x6ab8d0
// 006c2411  5e                   pop esi
// 006c2412  b801000000           mov eax, 1
// 006c2417  5d                   pop ebp
// 006c2418  83c41c               add esp, 0x1c
// 006c241b  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?OnSetPopup@CControlButtonExpand@CXTPToolBar@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
