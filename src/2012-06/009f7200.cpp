// roc 2012-06 009f7200  unit: CXTCaption  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f7200
//
// 009f7200  8b442418             mov eax, dword ptr [esp + 0x18]
// 009f7204  8b542414             mov edx, dword ptr [esp + 0x14]
// 009f7208  83ec10               sub esp, 0x10
// 009f720b  55                   push ebp
// 009f720c  56                   push esi
// 009f720d  50                   push eax
// 009f720e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009f7212  8bf1                 mov esi, ecx
// 009f7214  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009f7218  51                   push ecx
// 009f7219  52                   push edx
// 009f721a  0d00000002           or eax, 0x2000000
// 009f721f  50                   push eax
// 009f7220  33ed                 xor ebp, ebp
// 009f7222  55                   push ebp
// 009f7223  8bce                 mov ecx, esi
// 009f7225  e86ebef8ff           call 0x983098
// 009f722a  85c0                 test eax, eax
// 009f722c  7508                 jne 0x9f7236
// 009f722e  5e                   pop esi
// 009f722f  5d                   pop ebp
// 009f7230  83c410               add esp, 0x10
// 009f7233  c21800               ret 0x18
// 009f7236  e81570ffff           call 0x9ee250
// 009f723b  05dc000000           add eax, 0xdc
// 009f7240  7403                 je 0x9f7245
// 009f7242  8b4004               mov eax, dword ptr [eax + 4]
// 009f7245  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009f7248  53                   push ebx
// 009f7249  57                   push edi
// 009f724a  6a01                 push 1
// 009f724c  50                   push eax
// 009f724d  6a30                 push 0x30
// 009f724f  51                   push ecx
// 009f7250  ff15043cb200         call dword ptr [0xb23c04]
// 009f7256  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009f725a  8bc1                 mov eax, ecx
// 009f725c  83e007               and eax, 7
// 009f725f  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 009f7265  f7d0                 not eax
// 009f7267  55                   push ebp
// 009f7268  23c1                 and eax, ecx
// 009f726a  50                   push eax
// 009f726b  55                   push ebp
// 009f726c  8bce                 mov ecx, esi
// 009f726e  e841b4f8ff           call 0x9826b4
// 009f7273  8b542428             mov edx, dword ptr [esp + 0x28]
// 009f7277  8d9ed0000000         lea ebx, [esi + 0xd0]
// 009f727d  52                   push edx
// 009f727e  8bcb                 mov ecx, ebx
// 009f7280  ff157847b200         call dword ptr [0xb24778]
// 009f7286  f686c800000004       test byte ptr [esi + 0xc8], 4
// 009f728d  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 009f7293  6a64                 push 0x64
// 009f7295  8dbedc000000         lea edi, [esi + 0xdc]
// 009f729b  8d4c2414             lea ecx, [esp + 0x14]
// 009f729f  56                   push esi
// 009f72a0  896c2418             mov dword ptr [esp + 0x18], ebp
// 009f72a4  896c241c             mov dword ptr [esp + 0x1c], ebp
// 009f72a8  896c2420             mov dword ptr [esp + 0x20], ebp
// 009f72ac  896c2424             mov dword ptr [esp + 0x24], ebp
// 009f72b0  51                   push ecx
// 009f72b1  7472                 je 0x9f7325
// 009f72b3  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 009f72b9  684b0f0050           push 0x50000f4b
// 009f72be  55                   push ebp
// 009f72bf  8bcf                 mov ecx, edi
// 009f72c1  ffd2                 call edx
// 009f72c3  85c0                 test eax, eax
// 009f72c5  750d                 jne 0x9f72d4
// 009f72c7  5f                   pop edi
// 009f72c8  5b                   pop ebx
// 009f72c9  5e                   pop esi
// 009f72ca  83c8ff               or eax, 0xffffffff
// 009f72cd  5d                   pop ebp
// 009f72ce  83c410               add esp, 0x10
// 009f72d1  c21800               ret 0x18
// 009f72d4  68ff00ff00           push 0xff00ff
// 009f72d9  6a01                 push 1
// 009f72db  6a10                 push 0x10
// 009f72dd  6856240000           push 0x2456
// 009f72e2  8d8ed4000000         lea ecx, [esi + 0xd4]
// 009f72e8  e8b7260a00           call 0xa999a4
// 009f72ed  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 009f72f3  55                   push ebp
// 009f72f4  6a02                 push 2
// 009f72f6  50                   push eax
// 009f72f7  e8d6b0f8ff           call 0x9823d2
// 009f72fc  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 009f7302  8b08                 mov ecx, dword ptr [eax]
// 009f7304  e86712faff           call 0x998570
// 009f7309  8b1f                 mov ebx, dword ptr [edi]
// 009f730b  6a01                 push 1
// 009f730d  55                   push ebp
// 009f730e  b910000000           mov ecx, 0x10
// 009f7313  8d51ff               lea edx, [ecx - 1]
// 009f7316  50                   push eax
// 009f7317  52                   push edx
// 009f7318  8b9358010000         mov edx, dword ptr [ebx + 0x158]
// 009f731e  51                   push ecx
// 009f731f  8bcf                 mov ecx, edi
// 009f7321  ffd2                 call edx
// 009f7323  eb35                 jmp 0x9f735a
// 009f7325  684b0c0000           push 0xc4b
// 009f732a  8bcb                 mov ecx, ebx
// 009f732c  89442448             mov dword ptr [esp + 0x48], eax
// 009f7330  ff159847b200         call dword ptr [0xb24798]
// 009f7336  8b542448             mov edx, dword ptr [esp + 0x48]
// 009f733a  50                   push eax
// 009f733b  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 009f7341  8bcf                 mov ecx, edi
// 009f7343  ffd0                 call eax
// 009f7345  85c0                 test eax, eax
// 009f7347  750a                 jne 0x9f7353
// 009f7349  5f                   pop edi
// 009f734a  5b                   pop ebx
// 009f734b  5e                   pop esi
// 009f734c  5d                   pop ebp
// 009f734d  83c410               add esp, 0x10
// 009f7350  c21800               ret 0x18
// 009f7353  c6868100000001       mov byte ptr [esi + 0x81], 1
// 009f735a  8b17                 mov edx, dword ptr [edi]
// 009f735c  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 009f7362  55                   push ebp
// 009f7363  55                   push ebp
// 009f7364  8bcf                 mov ecx, edi
// 009f7366  89b688010000         mov dword ptr [esi + 0x188], esi
// 009f736c  ffd0                 call eax
// 009f736e  6a23                 push 0x23
// 009f7370  55                   push ebp
// 009f7371  55                   push ebp
// 009f7372  55                   push ebp
// 009f7373  55                   push ebp
// 009f7374  55                   push ebp
// 009f7375  8bce                 mov ecx, esi
// 009f7377  e858b1f8ff           call 0x9824d4
// 009f737c  5f                   pop edi
// 009f737d  5b                   pop ebx
// 009f737e  5e                   pop esi
// 009f737f  b801000000           mov eax, 1
// 009f7384  5d                   pop ebp
// 009f7385  83c410               add esp, 0x10
// 009f7388  c21800               ret 0x18
// copied from an identical function in another client (function ?Create@CXTCaption@@UAEHPAVCWnd@@PBDKKABVCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp