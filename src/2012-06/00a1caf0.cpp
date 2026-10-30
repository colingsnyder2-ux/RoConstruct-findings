// roc 2012-06 00a1caf0  unit: CXTPMenuBar::CControlMDIButton  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1caf0
//
// 00a1caf0  8b442404             mov eax, dword ptr [esp + 4]
// 00a1caf4  56                   push esi
// 00a1caf5  57                   push edi
// 00a1caf6  50                   push eax
// 00a1caf7  e86a5bf6ff           call 0x982666
// 00a1cafc  50                   push eax
// 00a1cafd  e8decb0700           call 0xa996e0
// 00a1cb02  50                   push eax
// 00a1cb03  e8de59f6ff           call 0x9824e6
// 00a1cb08  8bf0                 mov esi, eax
// 00a1cb0a  83c408               add esp, 8
// 00a1cb0d  85f6                 test esi, esi
// 00a1cb0f  7417                 je 0xa1cb28
// 00a1cb11  8bce                 mov ecx, esi
// 00a1cb13  e89259f6ff           call 0x9824aa
// 00a1cb18  85c0                 test eax, eax
// 00a1cb1a  740c                 je 0xa1cb28
// 00a1cb1c  8bce                 mov ecx, esi
// 00a1cb1e  e88759f6ff           call 0x9824aa
// 00a1cb23  8b4054               mov eax, dword ptr [eax + 0x54]
// 00a1cb26  eb02                 jmp 0xa1cb2a
// 00a1cb28  33c0                 xor eax, eax
// 00a1cb2a  50                   push eax
// 00a1cb2b  e8a8cd0700           call 0xa998d8
// 00a1cb30  50                   push eax
// 00a1cb31  e8b059f6ff           call 0x9824e6
// 00a1cb36  8bf8                 mov edi, eax
// 00a1cb38  83c408               add esp, 8
// 00a1cb3b  85ff                 test edi, edi
// 00a1cb3d  7434                 je 0xa1cb73
// 00a1cb3f  85f6                 test esi, esi
// 00a1cb41  7430                 je 0xa1cb73
// 00a1cb43  53                   push ebx
// 00a1cb44  8b1f                 mov ebx, dword ptr [edi]
// 00a1cb46  8bce                 mov ecx, esi
// 00a1cb48  e85d59f6ff           call 0x9824aa
// 00a1cb4d  8b93b8000000         mov edx, dword ptr [ebx + 0xb8]
// 00a1cb53  50                   push eax
// 00a1cb54  8bcf                 mov ecx, edi
// 00a1cb56  ffd2                 call edx
// 00a1cb58  50                   push eax
// 00a1cb59  e888d10700           call 0xa99ce6
// 00a1cb5e  50                   push eax
// 00a1cb5f  e88259f6ff           call 0x9824e6
// 00a1cb64  83c408               add esp, 8
// 00a1cb67  f7d8                 neg eax
// 00a1cb69  5b                   pop ebx
// 00a1cb6a  1bc0                 sbb eax, eax
// 00a1cb6c  5f                   pop edi
// 00a1cb6d  f7d8                 neg eax
// 00a1cb6f  5e                   pop esi
// 00a1cb70  c20400               ret 4
// 00a1cb73  5f                   pop edi
// 00a1cb74  33c0                 xor eax, eax
// 00a1cb76  5e                   pop esi
// 00a1cb77  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPMenuBar.cpp (function ?IsOleDocumentActive@CXTPMenuBar@@ABEHPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPMenuBar.cpp
