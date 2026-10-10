// roc 2008-06 00720710  unit: CXTPMenuBar::CControlMDIButton  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720710
//
// 00720710  8b442404             mov eax, dword ptr [esp + 4]
// 00720714  56                   push esi
// 00720715  57                   push edi
// 00720716  50                   push eax
// 00720717  e8c204f8ff           call 0x6a0bde
// 0072071c  50                   push eax
// 0072071d  e8440af8ff           call 0x6a1166
// 00720722  50                   push eax
// 00720723  e8fe04f8ff           call 0x6a0c26
// 00720728  8bf0                 mov esi, eax
// 0072072a  83c408               add esp, 8
// 0072072d  85f6                 test esi, esi
// 0072072f  7417                 je 0x720748
// 00720731  8bce                 mov ecx, esi
// 00720733  e8f602f8ff           call 0x6a0a2e
// 00720738  85c0                 test eax, eax
// 0072073a  740c                 je 0x720748
// 0072073c  8bce                 mov ecx, esi
// 0072073e  e8eb02f8ff           call 0x6a0a2e
// 00720743  8b4054               mov eax, dword ptr [eax + 0x54]
// 00720746  eb02                 jmp 0x72074a
// 00720748  33c0                 xor eax, eax
// 0072074a  50                   push eax
// 0072074b  e8e2bd0900           call 0x7bc532
// 00720750  50                   push eax
// 00720751  e8d004f8ff           call 0x6a0c26
// 00720756  8bf8                 mov edi, eax
// 00720758  83c408               add esp, 8
// 0072075b  85ff                 test edi, edi
// 0072075d  7434                 je 0x720793
// 0072075f  85f6                 test esi, esi
// 00720761  7430                 je 0x720793
// 00720763  53                   push ebx
// 00720764  8b1f                 mov ebx, dword ptr [edi]
// 00720766  8bce                 mov ecx, esi
// 00720768  e8c102f8ff           call 0x6a0a2e
// 0072076d  8b93b8000000         mov edx, dword ptr [ebx + 0xb8]
// 00720773  50                   push eax
// 00720774  8bcf                 mov ecx, edi
// 00720776  ffd2                 call edx
// 00720778  50                   push eax
// 00720779  e80ec10900           call 0x7bc88c
// 0072077e  50                   push eax
// 0072077f  e8a204f8ff           call 0x6a0c26
// 00720784  83c408               add esp, 8
// 00720787  f7d8                 neg eax
// 00720789  5b                   pop ebx
// 0072078a  1bc0                 sbb eax, eax
// 0072078c  5f                   pop edi
// 0072078d  f7d8                 neg eax
// 0072078f  5e                   pop esi
// 00720790  c20400               ret 4
// 00720793  5f                   pop edi
// 00720794  33c0                 xor eax, eax
// 00720796  5e                   pop esi
// 00720797  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPMenuBar.cpp (function ?IsOleDocumentActive@CXTPMenuBar@@ABEHPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp
