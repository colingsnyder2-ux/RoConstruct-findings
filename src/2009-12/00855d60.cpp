// roc 2009-12 00855d60  unit: CXTPTabClientWnd::CSingleWorkspace  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00855d60
//
// 00855d60  83ec20               sub esp, 0x20
// 00855d63  8b442424             mov eax, dword ptr [esp + 0x24]
// 00855d67  53                   push ebx
// 00855d68  55                   push ebp
// 00855d69  56                   push esi
// 00855d6a  57                   push edi
// 00855d6b  50                   push eax
// 00855d6c  8bf1                 mov esi, ecx
// 00855d6e  e8bd060d00           call 0x926430
// 00855d73  8bf8                 mov edi, eax
// 00855d75  897c2434             mov dword ptr [esp + 0x34], edi
// 00855d79  85ff                 test edi, edi
// 00855d7b  747f                 je 0x855dfc
// 00855d7d  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00855d83  85c0                 test eax, eax
// 00855d85  7427                 je 0x855dae
// 00855d87  8b5020               mov edx, dword ptr [eax + 0x20]
// 00855d8a  8d4c2420             lea ecx, [esp + 0x20]
// 00855d8e  51                   push ecx
// 00855d8f  52                   push edx
// 00855d90  ff1570cc9800         call dword ptr [0x98cc70]
// 00855d96  8d442420             lea eax, [esp + 0x20]
// 00855d9a  50                   push eax
// 00855d9b  8bce                 mov ecx, esi
// 00855d9d  e836eaf9ff           call 0x7f47d8
// 00855da2  8d4c2420             lea ecx, [esp + 0x20]
// 00855da6  51                   push ecx
// 00855da7  8bcf                 mov ecx, edi
// 00855da9  e8060d0d00           call 0x926ab4
// 00855dae  56                   push esi
// 00855daf  8d4c2414             lea ecx, [esp + 0x14]
// 00855db3  e81855ffff           call 0x84b2d0
// 00855db8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00855dbc  8b4658               mov eax, dword ptr [esi + 0x58]
// 00855dbf  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00855dc3  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00855dc7  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00855dcb  83c658               add esi, 0x58
// 00855dce  8954242c             mov dword ptr [esp + 0x2c], edx
// 00855dd2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00855dd5  8bce                 mov ecx, esi
// 00855dd7  ffd2                 call edx
// 00855dd9  83ec10               sub esp, 0x10
// 00855ddc  8bd4                 mov edx, esp
// 00855dde  893a                 mov dword ptr [edx], edi
// 00855de0  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00855de4  895a04               mov dword ptr [edx + 4], ebx
// 00855de7  896a08               mov dword ptr [edx + 8], ebp
// 00855dea  897a0c               mov dword ptr [edx + 0xc], edi
// 00855ded  8b542444             mov edx, dword ptr [esp + 0x44]
// 00855df1  8bc8                 mov ecx, eax
// 00855df3  8b00                 mov eax, dword ptr [eax]
// 00855df5  8b4058               mov eax, dword ptr [eax + 0x58]
// 00855df8  52                   push edx
// 00855df9  56                   push esi
// 00855dfa  ffd0                 call eax
// 00855dfc  5f                   pop edi
// 00855dfd  5e                   pop esi
// 00855dfe  5d                   pop ebp
// 00855dff  b801000000           mov eax, 1
// 00855e04  5b                   pop ebx
// 00855e05  83c420               add esp, 0x20
// 00855e08  c20800               ret 8
// copied from an identical function in another client (function ?OnPrintClient@CSingleWorkspace@CXTPTabClientWnd@@QAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp