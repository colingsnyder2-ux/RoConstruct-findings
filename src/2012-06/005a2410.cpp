// roc 2012-06 005a2410  unit: RBX::Network::ClientReplicator  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a2410
//
// 005a2410  83ec10               sub esp, 0x10
// 005a2413  33c0                 xor eax, eax
// 005a2415  890424               mov dword ptr [esp], eax
// 005a2418  89442404             mov dword ptr [esp + 4], eax
// 005a241c  89442408             mov dword ptr [esp + 8], eax
// 005a2420  8944240c             mov dword ptr [esp + 0xc], eax
// 005a2424  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a2428  56                   push esi
// 005a2429  50                   push eax
// 005a242a  ff15103eb200         call dword ptr [0xb23e10]
// 005a2430  6a00                 push 0
// 005a2432  6a02                 push 2
// 005a2434  6a02                 push 2
// 005a2436  6689442412           mov word ptr [esp + 0x12], ax
// 005a243b  ff15243eb200         call dword ptr [0xb23e24]
// 005a2441  8bf0                 mov esi, eax
// 005a2443  83feff               cmp esi, -1
// 005a2446  7507                 jne 0x5a244f
// 005a2448  b001                 mov al, 1
// 005a244a  5e                   pop esi
// 005a244b  83c410               add esp, 0x10
// 005a244e  c3                   ret 
// 005a244f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a2453  b902000000           mov ecx, 2
// 005a2458  66894c2404           mov word ptr [esp + 4], cx
// 005a245d  85c0                 test eax, eax
// 005a245f  7412                 je 0x5a2473
// 005a2461  803800               cmp byte ptr [eax], 0
// 005a2464  740d                 je 0x5a2473
// 005a2466  50                   push eax
// 005a2467  ff15503eb200         call dword ptr [0xb23e50]
// 005a246d  89442408             mov dword ptr [esp + 8], eax
// 005a2471  eb08                 jmp 0x5a247b
// 005a2473  c744240800000000     mov dword ptr [esp + 8], 0
// 005a247b  57                   push edi
// 005a247c  6a10                 push 0x10
// 005a247e  8d54240c             lea edx, [esp + 0xc]
// 005a2482  52                   push edx
// 005a2483  56                   push esi
// 005a2484  ff15203eb200         call dword ptr [0xb23e20]
// 005a248a  56                   push esi
// 005a248b  8bf8                 mov edi, eax
// 005a248d  ff151c3eb200         call dword ptr [0xb23e1c]
// 005a2493  33c0                 xor eax, eax
// 005a2495  83ffff               cmp edi, -1
// 005a2498  5f                   pop edi
// 005a2499  0f9ec0               setle al
// 005a249c  5e                   pop esi
// 005a249d  83c410               add esp, 0x10
// 005a24a0  c3                   ret 
// library rbx2016-raknet/SocketLayer.cpp (function ?IsPortInUse_Old@SocketLayer@RakNet@@SA_NGPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SocketLayer.cpp
