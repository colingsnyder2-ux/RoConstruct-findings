// roc 2009-12 0042b210  unit: CMainFrame  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042b210
//
// 0042b210  53                   push ebx
// 0042b211  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0042b215  55                   push ebp
// 0042b216  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0042b21a  56                   push esi
// 0042b21b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0042b21f  8d863ddcffff         lea eax, [esi - 0x23c3]
// 0042b225  57                   push edi
// 0042b226  8bf9                 mov edi, ecx
// 0042b228  83f803               cmp eax, 3
// 0042b22b  7731                 ja 0x42b25e
// 0042b22d  8b8fe8000000         mov ecx, dword ptr [edi + 0xe8]
// 0042b233  51                   push ecx
// 0042b234  e8a7903c00           call 0x7f42e0
// 0042b239  85c0                 test eax, eax
// 0042b23b  7421                 je 0x42b25e
// 0042b23d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042b241  8b10                 mov edx, dword ptr [eax]
// 0042b243  8b5214               mov edx, dword ptr [edx + 0x14]
// 0042b246  53                   push ebx
// 0042b247  55                   push ebp
// 0042b248  51                   push ecx
// 0042b249  56                   push esi
// 0042b24a  8bc8                 mov ecx, eax
// 0042b24c  ffd2                 call edx
// 0042b24e  85c0                 test eax, eax
// 0042b250  740c                 je 0x42b25e
// 0042b252  5f                   pop edi
// 0042b253  5e                   pop esi
// 0042b254  5d                   pop ebp
// 0042b255  b801000000           mov eax, 1
// 0042b25a  5b                   pop ebx
// 0042b25b  c21000               ret 0x10
// 0042b25e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0042b262  53                   push ebx
// 0042b263  55                   push ebp
// 0042b264  50                   push eax
// 0042b265  56                   push esi
// 0042b266  8bcf                 mov ecx, edi
// 0042b268  e807903c00           call 0x7f4274
// 0042b26d  5f                   pop edi
// 0042b26e  5e                   pop esi
// 0042b26f  5d                   pop ebp
// 0042b270  5b                   pop ebx
// 0042b271  c21000               ret 0x10
// copied from an identical function in another client (function ?OnCmdMsg@CXTPMDIFrameWnd@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPFrameWnd.cpp