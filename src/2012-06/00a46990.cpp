// roc 2012-06 00a46990  unit: CXTPDockingPaneContext  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a46990
//
// 00a46990  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a46994  8b01                 mov eax, dword ptr [ecx]
// 00a46996  8b5018               mov edx, dword ptr [eax + 0x18]
// 00a46999  56                   push esi
// 00a4699a  ffd2                 call edx
// 00a4699c  8bf0                 mov esi, eax
// 00a4699e  85f6                 test esi, esi
// 00a469a0  747e                 je 0xa46a20
// 00a469a2  e84914ffff           call 0xa37df0
// 00a469a7  50                   push eax
// 00a469a8  8bce                 mov ecx, esi
// 00a469aa  e8e7bcf3ff           call 0x982696
// 00a469af  85c0                 test eax, eax
// 00a469b1  746d                 je 0xa46a20
// 00a469b3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a469b7  8b01                 mov eax, dword ptr [ecx]
// 00a469b9  8b5018               mov edx, dword ptr [eax + 0x18]
// 00a469bc  53                   push ebx
// 00a469bd  ffd2                 call edx
// 00a469bf  8bd8                 mov ebx, eax
// 00a469c1  85db                 test ebx, ebx
// 00a469c3  7454                 je 0xa46a19
// 00a469c5  e82614ffff           call 0xa37df0
// 00a469ca  50                   push eax
// 00a469cb  8bcb                 mov ecx, ebx
// 00a469cd  e8c4bcf3ff           call 0x982696
// 00a469d2  85c0                 test eax, eax
// 00a469d4  7443                 je 0xa46a19
// 00a469d6  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a469d9  57                   push edi
// 00a469da  8b3d403bb200         mov edi, dword ptr [0xb23b40]
// 00a469e0  6a02                 push 2
// 00a469e2  50                   push eax
// 00a469e3  ffd7                 call edi
// 00a469e5  8bf0                 mov esi, eax
// 00a469e7  85f6                 test esi, esi
// 00a469e9  741b                 je 0xa46a06
// 00a469eb  eb03                 jmp 0xa469f0
// 00a469ed  8d4900               lea ecx, [ecx]
// 00a469f0  8bcb                 mov ecx, ebx
// 00a469f2  e8c9e89cff           call 0x4152c0
// 00a469f7  3bf0                 cmp esi, eax
// 00a469f9  7416                 je 0xa46a11
// 00a469fb  6a02                 push 2
// 00a469fd  56                   push esi
// 00a469fe  ffd7                 call edi
// 00a46a00  8bf0                 mov esi, eax
// 00a46a02  85f6                 test esi, esi
// 00a46a04  75ea                 jne 0xa469f0
// 00a46a06  5f                   pop edi
// 00a46a07  5b                   pop ebx
// 00a46a08  b801000000           mov eax, 1
// 00a46a0d  5e                   pop esi
// 00a46a0e  c20800               ret 8
// 00a46a11  5f                   pop edi
// 00a46a12  5b                   pop ebx
// 00a46a13  33c0                 xor eax, eax
// 00a46a15  5e                   pop esi
// 00a46a16  c20800               ret 8
// 00a46a19  5b                   pop ebx
// 00a46a1a  33c0                 xor eax, eax
// 00a46a1c  5e                   pop esi
// 00a46a1d  c20800               ret 8
// 00a46a20  b801000000           mov eax, 1
// 00a46a25  5e                   pop esi
// 00a46a26  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPaneContext.cpp (function ?IsBehind@CXTPDockingPaneContext@@IAEHPAVCXTPDockingPaneBase@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp
