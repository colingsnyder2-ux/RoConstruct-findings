// roc 2009-12 00863130  unit: CXTPToolTipContext::COffice2007ToolTip  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00863130
//
// 00863130  6aff                 push -1
// 00863132  6896ea9500           push 0x95ea96
// 00863137  64a100000000         mov eax, dword ptr fs:[0]
// 0086313d  50                   push eax
// 0086313e  83ec08               sub esp, 8
// 00863141  53                   push ebx
// 00863142  56                   push esi
// 00863143  57                   push edi
// 00863144  a10052b600           mov eax, dword ptr [0xb65200]
// 00863149  33c4                 xor eax, esp
// 0086314b  50                   push eax
// 0086314c  8d442418             lea eax, [esp + 0x18]
// 00863150  64a300000000         mov dword ptr fs:[0], eax
// 00863156  51                   push ecx
// 00863157  8bcc                 mov ecx, esp
// 00863159  89642414             mov dword ptr [esp + 0x14], esp
// 0086315d  68bce49f00           push 0x9fe4bc
// 00863162  ff15b8de9800         call dword ptr [0x98deb8]
// 00863168  51                   push ecx
// 00863169  8bcc                 mov ecx, esp
// 0086316b  8964241c             mov dword ptr [esp + 0x1c], esp
// 0086316f  68b8589b00           push 0x9b58b8
// 00863174  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0086317c  ff15b8de9800         call dword ptr [0x98deb8]
// 00863182  c644242801           mov byte ptr [esp + 0x28], 1
// 00863187  e874e60700           call 0x8e1800
// 0086318c  8bc8                 mov ecx, eax
// 0086318e  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00863196  e865df0700           call 0x8e1100
// 0086319b  51                   push ecx
// 0086319c  8bcc                 mov ecx, esp
// 0086319e  89642418             mov dword ptr [esp + 0x18], esp
// 008631a2  68b0e49f00           push 0x9fe4b0
// 008631a7  8bf8                 mov edi, eax
// 008631a9  ff15b8de9800         call dword ptr [0x98deb8]
// 008631af  51                   push ecx
// 008631b0  8bcc                 mov ecx, esp
// 008631b2  89642418             mov dword ptr [esp + 0x18], esp
// 008631b6  68b8589b00           push 0x9b58b8
// 008631bb  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 008631c3  ff15b8de9800         call dword ptr [0x98deb8]
// 008631c9  c644242803           mov byte ptr [esp + 0x28], 3
// 008631ce  e82de60700           call 0x8e1800
// 008631d3  8bc8                 mov ecx, eax
// 008631d5  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 008631dd  e81edf0700           call 0x8e1100
// 008631e2  51                   push ecx
// 008631e3  8bcc                 mov ecx, esp
// 008631e5  89642418             mov dword ptr [esp + 0x18], esp
// 008631e9  68a0e49f00           push 0x9fe4a0
// 008631ee  8bd8                 mov ebx, eax
// 008631f0  ff15b8de9800         call dword ptr [0x98deb8]
// 008631f6  51                   push ecx
// 008631f7  8bcc                 mov ecx, esp
// 008631f9  89642418             mov dword ptr [esp + 0x18], esp
// 008631fd  68b8589b00           push 0x9b58b8
// 00863202  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 0086320a  ff15b8de9800         call dword ptr [0x98deb8]
// 00863210  c644242805           mov byte ptr [esp + 0x28], 5
// 00863215  e8e6e50700           call 0x8e1800
// 0086321a  8bc8                 mov ecx, eax
// 0086321c  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00863224  e8d7de0700           call 0x8e1100
// 00863229  8bf0                 mov esi, eax
// 0086322b  83ffff               cmp edi, -1
// 0086322e  7505                 jne 0x863235
// 00863230  bfffffff00           mov edi, 0xffffff
// 00863235  83fbff               cmp ebx, -1
// 00863238  7505                 jne 0x86323f
// 0086323a  bbc9d9ef00           mov ebx, 0xefd9c9
// 0086323f  83feff               cmp esi, -1
// 00863242  7505                 jne 0x863249
// 00863244  be76767600           mov esi, 0x767676
// 00863249  6a00                 push 0
// 0086324b  53                   push ebx
// 0086324c  57                   push edi
// 0086324d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00863251  8d44243c             lea eax, [esp + 0x3c]
// 00863255  50                   push eax
// 00863256  57                   push edi
// 00863257  e844a0feff           call 0x84d2a0
// 0086325c  8bc8                 mov ecx, eax
// 0086325e  e86da0feff           call 0x84d2d0
// 00863263  56                   push esi
// 00863264  56                   push esi
// 00863265  8d4c2438             lea ecx, [esp + 0x38]
// 00863269  51                   push ecx
// 0086326a  8bcf                 mov ecx, edi
// 0086326c  e88713f9ff           call 0x7f45f8
// 00863271  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00863275  64890d00000000       mov dword ptr fs:[0], ecx
// 0086327c  59                   pop ecx
// 0086327d  5f                   pop edi
// 0086327e  5e                   pop esi
// 0086327f  5b                   pop ebx
// 00863280  83c414               add esp, 0x14
// 00863283  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawBackground@COffice2007ToolTip@CXTPToolTipContext@@UAEXPAVCDC@@PAUTOOLITEM@CXTPToolTipContextToolTip@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp