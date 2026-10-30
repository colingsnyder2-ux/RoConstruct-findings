// roc 2011-06 00870360  unit: CXTSplitterWnd  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00870360
//
// 00870360  83ec10               sub esp, 0x10
// 00870363  53                   push ebx
// 00870364  55                   push ebp
// 00870365  56                   push esi
// 00870366  57                   push edi
// 00870367  8be9                 mov ebp, ecx
// 00870369  e882ecffff           call 0x86eff0
// 0087036e  8b7814               mov edi, dword ptr [eax + 0x14]
// 00870371  8bcd                 mov ecx, ebp
// 00870373  e878ecffff           call 0x86eff0
// 00870378  8b742424             mov esi, dword ptr [esp + 0x24]
// 0087037c  8b5818               mov ebx, dword ptr [eax + 0x18]
// 0087037f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00870383  85f6                 test esi, esi
// 00870385  7518                 jne 0x87039f
// 00870387  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0087038a  6a41                 push 0x41
// 0087038c  56                   push esi
// 0087038d  50                   push eax
// 0087038e  51                   push ecx
// 0087038f  ff15b41aa400         call dword ptr [0xa41ab4]
// 00870395  5f                   pop edi
// 00870396  5e                   pop esi
// 00870397  5d                   pop ebp
// 00870398  5b                   pop ebx
// 00870399  83c410               add esp, 0x10
// 0087039c  c20c00               ret 0xc
// 0087039f  8b10                 mov edx, dword ptr [eax]
// 008703a1  8b4804               mov ecx, dword ptr [eax + 4]
// 008703a4  89542410             mov dword ptr [esp + 0x10], edx
// 008703a8  8b5008               mov edx, dword ptr [eax + 8]
// 008703ab  8b400c               mov eax, dword ptr [eax + 0xc]
// 008703ae  8944241c             mov dword ptr [esp + 0x1c], eax
// 008703b2  8b442428             mov eax, dword ptr [esp + 0x28]
// 008703b6  894c2414             mov dword ptr [esp + 0x14], ecx
// 008703ba  89542418             mov dword ptr [esp + 0x18], edx
// 008703be  85c0                 test eax, eax
// 008703c0  0f84db000000         je 0x8704a1
// 008703c6  83f803               cmp eax, 3
// 008703c9  0f8575010000         jne 0x870544
// 008703cf  83bd0401000000       cmp dword ptr [ebp + 0x104], 0
// 008703d6  7478                 je 0x870450
// 008703d8  f6850801000004       test byte ptr [ebp + 0x108], 4
// 008703df  57                   push edi
// 008703e0  8d4c2414             lea ecx, [esp + 0x14]
// 008703e4  57                   push edi
// 008703e5  51                   push ecx
// 008703e6  8bce                 mov ecx, esi
// 008703e8  753a                 jne 0x870424
// 008703ea  e82baaf9ff           call 0x80ae1a
// 008703ef  6aff                 push -1
// 008703f1  6aff                 push -1
// 008703f3  8d542418             lea edx, [esp + 0x18]
// 008703f7  52                   push edx
// 008703f8  ff15e41ba400         call dword ptr [0xa41be4]
// 008703fe  e8dd4ffdff           call 0x8453e0
// 00870403  6a14                 push 0x14
// 00870405  8bc8                 mov ecx, eax
// 00870407  e8a447fdff           call 0x844bb0
// 0087040c  50                   push eax
// 0087040d  53                   push ebx
// 0087040e  8d442418             lea eax, [esp + 0x18]
// 00870412  50                   push eax
// 00870413  8bce                 mov ecx, esi
// 00870415  e800aaf9ff           call 0x80ae1a
// 0087041a  5f                   pop edi
// 0087041b  5e                   pop esi
// 0087041c  5d                   pop ebp
// 0087041d  5b                   pop ebx
// 0087041e  83c410               add esp, 0x10
// 00870421  c20c00               ret 0xc
// 00870424  e8f1a9f9ff           call 0x80ae1a
// 00870429  6aff                 push -1
// 0087042b  6aff                 push -1
// 0087042d  8d542418             lea edx, [esp + 0x18]
// 00870431  52                   push edx
// 00870432  ff15e41ba400         call dword ptr [0xa41be4]
// 00870438  57                   push edi
// 00870439  57                   push edi
// 0087043a  8d442418             lea eax, [esp + 0x18]
// 0087043e  50                   push eax
// 0087043f  8bce                 mov ecx, esi
// 00870441  e8d4a9f9ff           call 0x80ae1a
// 00870446  5f                   pop edi
// 00870447  5e                   pop esi
// 00870448  5d                   pop ebp
// 00870449  5b                   pop ebx
// 0087044a  83c410               add esp, 0x10
// 0087044d  c20c00               ret 0xc
// 00870450  e88b4ffdff           call 0x8453e0
// 00870455  6a14                 push 0x14
// 00870457  8bc8                 mov ecx, eax
// 00870459  e85247fdff           call 0x844bb0
// 0087045e  50                   push eax
// 0087045f  53                   push ebx
// 00870460  8d4c2418             lea ecx, [esp + 0x18]
// 00870464  51                   push ecx
// 00870465  8bce                 mov ecx, esi
// 00870467  e8aea9f9ff           call 0x80ae1a
// 0087046c  6aff                 push -1
// 0087046e  6aff                 push -1
// 00870470  8d542418             lea edx, [esp + 0x18]
// 00870474  52                   push edx
// 00870475  ff15e41ba400         call dword ptr [0xa41be4]
// 0087047b  e8604ffdff           call 0x8453e0
// 00870480  6a06                 push 6
// 00870482  8bc8                 mov ecx, eax
// 00870484  e82747fdff           call 0x844bb0
// 00870489  57                   push edi
// 0087048a  50                   push eax
// 0087048b  8d442418             lea eax, [esp + 0x18]
// 0087048f  50                   push eax
// 00870490  8bce                 mov ecx, esi
// 00870492  e883a9f9ff           call 0x80ae1a
// 00870497  5f                   pop edi
// 00870498  5e                   pop esi
// 00870499  5d                   pop ebp
// 0087049a  5b                   pop ebx
// 0087049b  83c410               add esp, 0x10
// 0087049e  c20c00               ret 0xc
// 008704a1  83bd0401000000       cmp dword ptr [ebp + 0x104], 0
// 008704a8  7446                 je 0x8704f0
// 008704aa  57                   push edi
// 008704ab  57                   push edi
// 008704ac  8d4c2418             lea ecx, [esp + 0x18]
// 008704b0  51                   push ecx
// 008704b1  8bce                 mov ecx, esi
// 008704b3  e862a9f9ff           call 0x80ae1a
// 008704b8  8b2de41ba400         mov ebp, dword ptr [0xa41be4]
// 008704be  6aff                 push -1
// 008704c0  6aff                 push -1
// 008704c2  8d542418             lea edx, [esp + 0x18]
// 008704c6  52                   push edx
// 008704c7  ffd5                 call ebp
// 008704c9  e8124ffdff           call 0x8453e0
// 008704ce  6a14                 push 0x14
// 008704d0  8bc8                 mov ecx, eax
// 008704d2  e8d946fdff           call 0x844bb0
// 008704d7  53                   push ebx
// 008704d8  50                   push eax
// 008704d9  8d442418             lea eax, [esp + 0x18]
// 008704dd  50                   push eax
// 008704de  8bce                 mov ecx, esi
// 008704e0  e835a9f9ff           call 0x80ae1a
// 008704e5  6aff                 push -1
// 008704e7  6aff                 push -1
// 008704e9  8d4c2418             lea ecx, [esp + 0x18]
// 008704ed  51                   push ecx
// 008704ee  eb52                 jmp 0x870542
// 008704f0  e8eb4efdff           call 0x8453e0
// 008704f5  6a06                 push 6
// 008704f7  8bc8                 mov ecx, eax
// 008704f9  e8b246fdff           call 0x844bb0
// 008704fe  50                   push eax
// 008704ff  57                   push edi
// 00870500  8d542418             lea edx, [esp + 0x18]
// 00870504  52                   push edx
// 00870505  8bce                 mov ecx, esi
// 00870507  e80ea9f9ff           call 0x80ae1a
// 0087050c  8b2de41ba400         mov ebp, dword ptr [0xa41be4]
// 00870512  6aff                 push -1
// 00870514  6aff                 push -1
// 00870516  8d442418             lea eax, [esp + 0x18]
// 0087051a  50                   push eax
// 0087051b  ffd5                 call ebp
// 0087051d  e8be4efdff           call 0x8453e0
// 00870522  6a14                 push 0x14
// 00870524  8bc8                 mov ecx, eax
// 00870526  e88546fdff           call 0x844bb0
// 0087052b  53                   push ebx
// 0087052c  50                   push eax
// 0087052d  8d4c2418             lea ecx, [esp + 0x18]
// 00870531  51                   push ecx
// 00870532  8bce                 mov ecx, esi
// 00870534  e8e1a8f9ff           call 0x80ae1a
// 00870539  6aff                 push -1
// 0087053b  6aff                 push -1
// 0087053d  8d542418             lea edx, [esp + 0x18]
// 00870541  52                   push edx
// 00870542  ffd5                 call ebp
// 00870544  57                   push edi
// 00870545  8d442414             lea eax, [esp + 0x14]
// 00870549  50                   push eax
// 0087054a  8bce                 mov ecx, esi
// 0087054c  e8cfa8f9ff           call 0x80ae20
// 00870551  5f                   pop edi
// 00870552  5e                   pop esi
// 00870553  5d                   pop ebp
// 00870554  5b                   pop ebx
// 00870555  83c410               add esp, 0x10
// 00870558  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnDrawSplitter@CXTSplitterWnd@@MAEXPAVCDC@@W4ESplitType@CSplitterWnd@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1