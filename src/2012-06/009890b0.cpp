// roc 2012-06 009890b0  unit: CXTPPaintManager  size: 561 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009890b0
//
// 009890b0  83ec18               sub esp, 0x18
// 009890b3  53                   push ebx
// 009890b4  55                   push ebp
// 009890b5  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 009890b9  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 009890bf  56                   push esi
// 009890c0  57                   push edi
// 009890c1  8bf9                 mov edi, ecx
// 009890c3  897c2414             mov dword ptr [esp + 0x14], edi
// 009890c7  83f8ff               cmp eax, -1
// 009890ca  750f                 jne 0x9890db
// 009890cc  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 009890d2  85c9                 test ecx, ecx
// 009890d4  7405                 je 0x9890db
// 009890d6  e845beffff           call 0x984f20
// 009890db  85c0                 test eax, eax
// 009890dd  750d                 jne 0x9890ec
// 009890df  398724010000         cmp dword ptr [edi + 0x124], eax
// 009890e5  7405                 je 0x9890ec
// 009890e7  8d7001               lea esi, [eax + 1]
// 009890ea  eb02                 jmp 0x9890ee
// 009890ec  33f6                 xor esi, esi
// 009890ee  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 009890f4  8b01                 mov eax, dword ptr [ecx]
// 009890f6  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 009890fc  ffd2                 call edx
// 009890fe  89442410             mov dword ptr [esp + 0x10], eax
// 00989102  8b8760010000         mov eax, dword ptr [edi + 0x160]
// 00989108  83f8ff               cmp eax, -1
// 0098910b  7e04                 jle 0x989111
// 0098910d  89442410             mov dword ptr [esp + 0x10], eax
// 00989111  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00989115  33c0                 xor eax, eax
// 00989117  39442450             cmp dword ptr [esp + 0x50], eax
// 0098911b  0f95c0               setne al
// 0098911e  83c820               or eax, 0x20
// 00989121  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 00989126  8bf8                 mov edi, eax
// 00989128  0f85eb000000         jne 0x989219
// 0098912e  85f6                 test esi, esi
// 00989130  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00989134  0f848f000000         je 0x9891c9
// 0098913a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0098913d  51                   push ecx
// 0098913e  ff15ac20b200         call dword ptr [0xb220ac]
// 00989144  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00989148  8b16                 mov edx, dword ptr [esi]
// 0098914a  6a14                 push 0x14
// 0098914c  8be8                 mov ebp, eax
// 0098914e  e83de7ffff           call 0x987890
// 00989153  50                   push eax
// 00989154  8b4238               mov eax, dword ptr [edx + 0x38]
// 00989157  8bce                 mov ecx, esi
// 00989159  ffd0                 call eax
// 0098915b  8b542440             mov edx, dword ptr [esp + 0x40]
// 0098915f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00989163  8b442444             mov eax, dword ptr [esp + 0x44]
// 00989167  6a01                 push 1
// 00989169  89542420             mov dword ptr [esp + 0x20], edx
// 0098916d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00989171  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00989175  6a01                 push 1
// 00989177  8d542420             lea edx, [esp + 0x20]
// 0098917b  52                   push edx
// 0098917c  8944242c             mov dword ptr [esp + 0x2c], eax
// 00989180  894c2430             mov dword ptr [esp + 0x30], ecx
// 00989184  ff15f43ab200         call dword ptr [0xb23af4]
// 0098918a  8b06                 mov eax, dword ptr [esi]
// 0098918c  8bcf                 mov ecx, edi
// 0098918e  81c904080000         or ecx, 0x804
// 00989194  51                   push ecx
// 00989195  8d54241c             lea edx, [esp + 0x1c]
// 00989199  52                   push edx
// 0098919a  8bcb                 mov ecx, ebx
// 0098919c  89442440             mov dword ptr [esp + 0x40], eax
// 009891a0  ff155846b200         call dword ptr [0xb24658]
// 009891a6  50                   push eax
// 009891a7  8bcb                 mov ecx, ebx
// 009891a9  ff159847b200         call dword ptr [0xb24798]
// 009891af  50                   push eax
// 009891b0  8b442448             mov eax, dword ptr [esp + 0x48]
// 009891b4  8b5070               mov edx, dword ptr [eax + 0x70]
// 009891b7  8bce                 mov ecx, esi
// 009891b9  ffd2                 call edx
// 009891bb  8b06                 mov eax, dword ptr [esi]
// 009891bd  8b5038               mov edx, dword ptr [eax + 0x38]
// 009891c0  55                   push ebp
// 009891c1  8bce                 mov ecx, esi
// 009891c3  ffd2                 call edx
// 009891c5  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 009891c9  8bcd                 mov ecx, ebp
// 009891cb  e890910700           call 0xa02360
// 009891d0  837c241000           cmp dword ptr [esp + 0x10], 0
// 009891d5  50                   push eax
// 009891d6  7421                 je 0x9891f9
// 009891d8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 009891dc  83cf04               or edi, 4
// 009891df  57                   push edi
// 009891e0  8d442444             lea eax, [esp + 0x44]
// 009891e4  50                   push eax
// 009891e5  51                   push ecx
// 009891e6  56                   push esi
// 009891e7  e864fcffff           call 0x988e50
// 009891ec  83c414               add esp, 0x14
// 009891ef  5f                   pop edi
// 009891f0  5e                   pop esi
// 009891f1  5d                   pop ebp
// 009891f2  5b                   pop ebx
// 009891f3  83c418               add esp, 0x18
// 009891f6  c22800               ret 0x28
// 009891f9  81cf04080000         or edi, 0x804
// 009891ff  57                   push edi
// 00989200  8d542444             lea edx, [esp + 0x44]
// 00989204  52                   push edx
// 00989205  53                   push ebx
// 00989206  56                   push esi
// 00989207  e844fcffff           call 0x988e50
// 0098920c  83c414               add esp, 0x14
// 0098920f  5f                   pop edi
// 00989210  5e                   pop esi
// 00989211  5d                   pop ebp
// 00989212  5b                   pop ebx
// 00989213  83c418               add esp, 0x18
// 00989216  c22800               ret 0x28
// 00989219  85f6                 test esi, esi
// 0098921b  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0098921f  0f848b000000         je 0x9892b0
// 00989225  8b4608               mov eax, dword ptr [esi + 8]
// 00989228  50                   push eax
// 00989229  ff15ac20b200         call dword ptr [0xb220ac]
// 0098922f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00989233  8b16                 mov edx, dword ptr [esi]
// 00989235  6a14                 push 0x14
// 00989237  8be8                 mov ebp, eax
// 00989239  e852e6ffff           call 0x987890
// 0098923e  50                   push eax
// 0098923f  8b4238               mov eax, dword ptr [edx + 0x38]
// 00989242  8bce                 mov ecx, esi
// 00989244  ffd0                 call eax
// 00989246  8b542440             mov edx, dword ptr [esp + 0x40]
// 0098924a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0098924e  8b442444             mov eax, dword ptr [esp + 0x44]
// 00989252  6a01                 push 1
// 00989254  89542420             mov dword ptr [esp + 0x20], edx
// 00989258  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0098925c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00989260  6a01                 push 1
// 00989262  8d542420             lea edx, [esp + 0x20]
// 00989266  52                   push edx
// 00989267  8944242c             mov dword ptr [esp + 0x2c], eax
// 0098926b  894c2430             mov dword ptr [esp + 0x30], ecx
// 0098926f  ff15f43ab200         call dword ptr [0xb23af4]
// 00989275  8b06                 mov eax, dword ptr [esi]
// 00989277  8bcf                 mov ecx, edi
// 00989279  81c900090000         or ecx, 0x900
// 0098927f  51                   push ecx
// 00989280  8d54241c             lea edx, [esp + 0x1c]
// 00989284  52                   push edx
// 00989285  8bcb                 mov ecx, ebx
// 00989287  89442438             mov dword ptr [esp + 0x38], eax
// 0098928b  ff155846b200         call dword ptr [0xb24658]
// 00989291  50                   push eax
// 00989292  8bcb                 mov ecx, ebx
// 00989294  ff159847b200         call dword ptr [0xb24798]
// 0098929a  50                   push eax
// 0098929b  8b442440             mov eax, dword ptr [esp + 0x40]
// 0098929f  8b5070               mov edx, dword ptr [eax + 0x70]
// 009892a2  8bce                 mov ecx, esi
// 009892a4  ffd2                 call edx
// 009892a6  8b06                 mov eax, dword ptr [esi]
// 009892a8  8b5038               mov edx, dword ptr [eax + 0x38]
// 009892ab  55                   push ebp
// 009892ac  8bce                 mov ecx, esi
// 009892ae  ffd2                 call edx
// 009892b0  8b2e                 mov ebp, dword ptr [esi]
// 009892b2  81cf00090000         or edi, 0x900
// 009892b8  57                   push edi
// 009892b9  8d442440             lea eax, [esp + 0x40]
// 009892bd  50                   push eax
// 009892be  8bcb                 mov ecx, ebx
// 009892c0  ff155846b200         call dword ptr [0xb24658]
// 009892c6  50                   push eax
// 009892c7  8bcb                 mov ecx, ebx
// 009892c9  ff159847b200         call dword ptr [0xb24798]
// 009892cf  8b5570               mov edx, dword ptr [ebp + 0x70]
// 009892d2  50                   push eax
// 009892d3  8bce                 mov ecx, esi
// 009892d5  ffd2                 call edx
// 009892d7  5f                   pop edi
// 009892d8  5e                   pop esi
// 009892d9  5d                   pop ebp
// 009892da  5b                   pop ebx
// 009892db  83c418               add esp, 0x18
// 009892de  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawControlText3@CXTPPaintManager@@IAEXPAVCDC@@PAVCXTPControl@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@2VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp