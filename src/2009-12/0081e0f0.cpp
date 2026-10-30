// roc 2009-12 0081e0f0  unit: CXTPReportControl  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e0f0
//
// 0081e0f0  83ec34               sub esp, 0x34
// 0081e0f3  56                   push esi
// 0081e0f4  8bf1                 mov esi, ecx
// 0081e0f6  57                   push edi
// 0081e0f7  8dbe44020000         lea edi, [esi + 0x244]
// 0081e0fd  8bcf                 mov ecx, edi
// 0081e0ff  e81ceb0000           call 0x82cc20
// 0081e104  85c0                 test eax, eax
// 0081e106  7514                 jne 0x81e11c
// 0081e108  8b06                 mov eax, dword ptr [esi]
// 0081e10a  8b9014020000         mov edx, dword ptr [eax + 0x214]
// 0081e110  8bce                 mov ecx, esi
// 0081e112  ffd2                 call edx
// 0081e114  5f                   pop edi
// 0081e115  5e                   pop esi
// 0081e116  83c434               add esp, 0x34
// 0081e119  c21000               ret 0x10
// 0081e11c  8b07                 mov eax, dword ptr [edi]
// 0081e11e  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0081e121  53                   push ebx
// 0081e122  55                   push ebp
// 0081e123  6a00                 push 0
// 0081e125  8bcf                 mov ecx, edi
// 0081e127  ffd2                 call edx
// 0081e129  8b2f                 mov ebp, dword ptr [edi]
// 0081e12b  8bcf                 mov ecx, edi
// 0081e12d  8bd8                 mov ebx, eax
// 0081e12f  e8ecea0000           call 0x82cc20
// 0081e134  48                   dec eax
// 0081e135  50                   push eax
// 0081e136  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 0081e139  8bcf                 mov ecx, edi
// 0081e13b  ffd0                 call eax
// 0081e13d  89442410             mov dword ptr [esp + 0x10], eax
// 0081e141  85db                 test ebx, ebx
// 0081e143  0f84eb000000         je 0x81e234
// 0081e149  85c0                 test eax, eax
// 0081e14b  0f84e3000000         je 0x81e234
// 0081e151  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 0081e157  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 0081e15d  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0081e163  8b3d5cca9800         mov edi, dword ptr [0x98ca5c]
// 0081e169  894c2414             mov dword ptr [esp + 0x14], ecx
// 0081e16d  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 0081e173  89542418             mov dword ptr [esp + 0x18], edx
// 0081e177  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 0081e17d  894c2420             mov dword ptr [esp + 0x20], ecx
// 0081e181  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 0081e187  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081e18b  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0081e191  89542424             mov dword ptr [esp + 0x24], edx
// 0081e195  8b969c000000         mov edx, dword ptr [esi + 0x9c]
// 0081e19b  89442428             mov dword ptr [esp + 0x28], eax
// 0081e19f  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0081e1a3  83c014               add eax, 0x14
// 0081e1a6  8bca                 mov ecx, edx
// 0081e1a8  89542430             mov dword ptr [esp + 0x30], edx
// 0081e1ac  8b542454             mov edx, dword ptr [esp + 0x54]
// 0081e1b0  83e914               sub ecx, 0x14
// 0081e1b3  89442420             mov dword ptr [esp + 0x20], eax
// 0081e1b7  8b442450             mov eax, dword ptr [esp + 0x50]
// 0081e1bb  52                   push edx
// 0081e1bc  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0081e1c0  50                   push eax
// 0081e1c1  8d4c241c             lea ecx, [esp + 0x1c]
// 0081e1c5  51                   push ecx
// 0081e1c6  ffd7                 call edi
// 0081e1c8  85c0                 test eax, eax
// 0081e1ca  7405                 je 0x81e1d1
// 0081e1cc  83cfff               or edi, 0xffffffff
// 0081e1cf  eb1a                 jmp 0x81e1eb
// 0081e1d1  8b542454             mov edx, dword ptr [esp + 0x54]
// 0081e1d5  8b442450             mov eax, dword ptr [esp + 0x50]
// 0081e1d9  52                   push edx
// 0081e1da  50                   push eax
// 0081e1db  8d4c242c             lea ecx, [esp + 0x2c]
// 0081e1df  51                   push ecx
// 0081e1e0  ffd7                 call edi
// 0081e1e2  85c0                 test eax, eax
// 0081e1e4  744e                 je 0x81e234
// 0081e1e6  bf01000000           mov edi, 1
// 0081e1eb  83be9802000000       cmp dword ptr [esi + 0x298], 0
// 0081e1f2  7424                 je 0x81e218
// 0081e1f4  83ff01               cmp edi, 1
// 0081e1f7  750d                 jne 0x81e206
// 0081e1f9  8b542454             mov edx, dword ptr [esp + 0x54]
// 0081e1fd  2b54244c             sub edx, dword ptr [esp + 0x4c]
// 0081e201  83fa03               cmp edx, 3
// 0081e204  eb10                 jmp 0x81e216
// 0081e206  83ffff               cmp edi, -1
// 0081e209  750d                 jne 0x81e218
// 0081e20b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0081e20f  2b442454             sub eax, dword ptr [esp + 0x54]
// 0081e213  83f803               cmp eax, 3
// 0081e216  7c1c                 jl 0x81e234
// 0081e218  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0081e21e  8b9e08010000         mov ebx, dword ptr [esi + 0x108]
// 0081e224  e8f7e90000           call 0x82cc20
// 0081e229  8be8                 mov ebp, eax
// 0081e22b  83ffff               cmp edi, -1
// 0081e22e  751a                 jne 0x81e24a
// 0081e230  85db                 test ebx, ebx
// 0081e232  7f48                 jg 0x81e27c
// 0081e234  8b16                 mov edx, dword ptr [esi]
// 0081e236  8b8214020000         mov eax, dword ptr [edx + 0x214]
// 0081e23c  8bce                 mov ecx, esi
// 0081e23e  ffd0                 call eax
// 0081e240  5d                   pop ebp
// 0081e241  5b                   pop ebx
// 0081e242  5f                   pop edi
// 0081e243  5e                   pop esi
// 0081e244  83c434               add esp, 0x34
// 0081e247  c21000               ret 0x10
// 0081e24a  83ff01               cmp edi, 1
// 0081e24d  75e5                 jne 0x81e234
// 0081e24f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081e253  8b11                 mov edx, dword ptr [ecx]
// 0081e255  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0081e258  ffd0                 call eax
// 0081e25a  3bc5                 cmp eax, ebp
// 0081e25c  7c1e                 jl 0x81e27c
// 0081e25e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081e262  8b11                 mov edx, dword ptr [ecx]
// 0081e264  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 0081e26a  8d442434             lea eax, [esp + 0x34]
// 0081e26e  50                   push eax
// 0081e26f  ffd2                 call edx
// 0081e271  8b400c               mov eax, dword ptr [eax + 0xc]
// 0081e274  3b869c000000         cmp eax, dword ptr [esi + 0x9c]
// 0081e27a  7eb8                 jle 0x81e234
// 0081e27c  03df                 add ebx, edi
// 0081e27e  53                   push ebx
// 0081e27f  8bce                 mov ecx, esi
// 0081e281  e81af3ffff           call 0x81d5a0
// 0081e286  8b16                 mov edx, dword ptr [esi]
// 0081e288  8b8210020000         mov eax, dword ptr [edx + 0x210]
// 0081e28e  8bce                 mov ecx, esi
// 0081e290  ffd0                 call eax
// 0081e292  5d                   pop ebp
// 0081e293  5b                   pop ebx
// 0081e294  5f                   pop edi
// 0081e295  5e                   pop esi
// 0081e296  83c434               add esp, 0x34
// 0081e299  c21000               ret 0x10
// copied from an identical function in another client (function ?DoAutoVertScrollIfNeed@CXTPReportControl@@MAEXVCPoint@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp