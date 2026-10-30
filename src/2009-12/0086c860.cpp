// roc 2009-12 0086c860  unit: CSelectionCaption  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c860
//
// 0086c860  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086c864  8b542414             mov edx, dword ptr [esp + 0x14]
// 0086c868  83ec10               sub esp, 0x10
// 0086c86b  55                   push ebp
// 0086c86c  56                   push esi
// 0086c86d  50                   push eax
// 0086c86e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0086c872  8bf1                 mov esi, ecx
// 0086c874  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0086c878  51                   push ecx
// 0086c879  52                   push edx
// 0086c87a  0d00000002           or eax, 0x2000000
// 0086c87f  50                   push eax
// 0086c880  33ed                 xor ebp, ebp
// 0086c882  55                   push ebp
// 0086c883  8bce                 mov ecx, esi
// 0086c885  e8487ff8ff           call 0x7f47d2
// 0086c88a  85c0                 test eax, eax
// 0086c88c  7508                 jne 0x86c896
// 0086c88e  5e                   pop esi
// 0086c88f  5d                   pop ebp
// 0086c890  83c410               add esp, 0x10
// 0086c893  c21800               ret 0x18
// 0086c896  e8457cffff           call 0x8644e0
// 0086c89b  05dc000000           add eax, 0xdc
// 0086c8a0  7403                 je 0x86c8a5
// 0086c8a2  8b4004               mov eax, dword ptr [eax + 4]
// 0086c8a5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086c8a8  53                   push ebx
// 0086c8a9  57                   push edi
// 0086c8aa  6a01                 push 1
// 0086c8ac  50                   push eax
// 0086c8ad  6a30                 push 0x30
// 0086c8af  51                   push ecx
// 0086c8b0  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0086c8b6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0086c8ba  8bc1                 mov eax, ecx
// 0086c8bc  83e007               and eax, 7
// 0086c8bf  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 0086c8c5  f7d0                 not eax
// 0086c8c7  55                   push ebp
// 0086c8c8  23c1                 and eax, ecx
// 0086c8ca  50                   push eax
// 0086c8cb  55                   push ebp
// 0086c8cc  8bce                 mov ecx, esi
// 0086c8ce  e82d75f8ff           call 0x7f3e00
// 0086c8d3  8b542428             mov edx, dword ptr [esp + 0x28]
// 0086c8d7  8d9ed0000000         lea ebx, [esi + 0xd0]
// 0086c8dd  52                   push edx
// 0086c8de  8bcb                 mov ecx, ebx
// 0086c8e0  ff155cde9800         call dword ptr [0x98de5c]
// 0086c8e6  f686c800000004       test byte ptr [esi + 0xc8], 4
// 0086c8ed  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0086c8f3  6a64                 push 0x64
// 0086c8f5  8dbedc000000         lea edi, [esi + 0xdc]
// 0086c8fb  8d4c2414             lea ecx, [esp + 0x14]
// 0086c8ff  56                   push esi
// 0086c900  896c2418             mov dword ptr [esp + 0x18], ebp
// 0086c904  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0086c908  896c2420             mov dword ptr [esp + 0x20], ebp
// 0086c90c  896c2424             mov dword ptr [esp + 0x24], ebp
// 0086c910  51                   push ecx
// 0086c911  7472                 je 0x86c985
// 0086c913  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 0086c919  684b0f0050           push 0x50000f4b
// 0086c91e  55                   push ebp
// 0086c91f  8bcf                 mov ecx, edi
// 0086c921  ffd2                 call edx
// 0086c923  85c0                 test eax, eax
// 0086c925  750d                 jne 0x86c934
// 0086c927  5f                   pop edi
// 0086c928  5b                   pop ebx
// 0086c929  5e                   pop esi
// 0086c92a  83c8ff               or eax, 0xffffffff
// 0086c92d  5d                   pop ebp
// 0086c92e  83c410               add esp, 0x10
// 0086c931  c21800               ret 0x18
// 0086c934  68ff00ff00           push 0xff00ff
// 0086c939  6a01                 push 1
// 0086c93b  6a10                 push 0x10
// 0086c93d  6856240000           push 0x2456
// 0086c942  8d8ed4000000         lea ecx, [esi + 0xd4]
// 0086c948  e873a10b00           call 0x926ac0
// 0086c94d  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0086c953  55                   push ebp
// 0086c954  6a02                 push 2
// 0086c956  50                   push eax
// 0086c957  e8c271f8ff           call 0x7f3b1e
// 0086c95c  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0086c962  8b08                 mov ecx, dword ptr [eax]
// 0086c964  e897d0f9ff           call 0x809a00
// 0086c969  8b1f                 mov ebx, dword ptr [edi]
// 0086c96b  6a01                 push 1
// 0086c96d  55                   push ebp
// 0086c96e  b910000000           mov ecx, 0x10
// 0086c973  8d51ff               lea edx, [ecx - 1]
// 0086c976  50                   push eax
// 0086c977  52                   push edx
// 0086c978  8b9358010000         mov edx, dword ptr [ebx + 0x158]
// 0086c97e  51                   push ecx
// 0086c97f  8bcf                 mov ecx, edi
// 0086c981  ffd2                 call edx
// 0086c983  eb35                 jmp 0x86c9ba
// 0086c985  684b0c0000           push 0xc4b
// 0086c98a  8bcb                 mov ecx, ebx
// 0086c98c  89442448             mov dword ptr [esp + 0x48], eax
// 0086c990  ff1580de9800         call dword ptr [0x98de80]
// 0086c996  8b542448             mov edx, dword ptr [esp + 0x48]
// 0086c99a  50                   push eax
// 0086c99b  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 0086c9a1  8bcf                 mov ecx, edi
// 0086c9a3  ffd0                 call eax
// 0086c9a5  85c0                 test eax, eax
// 0086c9a7  750a                 jne 0x86c9b3
// 0086c9a9  5f                   pop edi
// 0086c9aa  5b                   pop ebx
// 0086c9ab  5e                   pop esi
// 0086c9ac  5d                   pop ebp
// 0086c9ad  83c410               add esp, 0x10
// 0086c9b0  c21800               ret 0x18
// 0086c9b3  c6868100000001       mov byte ptr [esi + 0x81], 1
// 0086c9ba  8b17                 mov edx, dword ptr [edi]
// 0086c9bc  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 0086c9c2  55                   push ebp
// 0086c9c3  55                   push ebp
// 0086c9c4  8bcf                 mov ecx, edi
// 0086c9c6  89b688010000         mov dword ptr [esi + 0x188], esi
// 0086c9cc  ffd0                 call eax
// 0086c9ce  6a23                 push 0x23
// 0086c9d0  55                   push ebp
// 0086c9d1  55                   push ebp
// 0086c9d2  55                   push ebp
// 0086c9d3  55                   push ebp
// 0086c9d4  55                   push ebp
// 0086c9d5  8bce                 mov ecx, esi
// 0086c9d7  e85072f8ff           call 0x7f3c2c
// 0086c9dc  5f                   pop edi
// 0086c9dd  5b                   pop ebx
// 0086c9de  5e                   pop esi
// 0086c9df  b801000000           mov eax, 1
// 0086c9e4  5d                   pop ebp
// 0086c9e5  83c410               add esp, 0x10
// 0086c9e8  c21800               ret 0x18
// copied from an identical function in another client (function ?Create@CXTCaption@@UAEHPAVCWnd@@PBDKKABVCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp