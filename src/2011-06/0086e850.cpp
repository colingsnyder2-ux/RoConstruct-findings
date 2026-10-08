// roc 2011-06 0086e850  unit: CXTPDockingPane  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e850
//
// 0086e850  56                   push esi
// 0086e851  57                   push edi
// 0086e852  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0086e856  8bf1                 mov esi, ecx
// 0086e858  85ff                 test edi, edi
// 0086e85a  7471                 je 0x86e8cd
// 0086e85c  8b4720               mov eax, dword ptr [edi + 0x20]
// 0086e85f  53                   push ebx
// 0086e860  8d5e20               lea ebx, [esi + 0x20]
// 0086e863  8bcb                 mov ecx, ebx
// 0086e865  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 0086e86b  e8f0340500           call 0x8c1d60
// 0086e870  8bc8                 mov ecx, eax
// 0086e872  e8890dfeff           call 0x84f600
// 0086e877  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0086e87a  85c9                 test ecx, ecx
// 0086e87c  7415                 je 0x86e893
// 0086e87e  8b01                 mov eax, dword ptr [ecx]
// 0086e880  8b5020               mov edx, dword ptr [eax + 0x20]
// 0086e883  ffd2                 call edx
// 0086e885  50                   push eax
// 0086e886  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0086e88c  50                   push eax
// 0086e88d  ff15a01aa400         call dword ptr [0xa41aa0]
// 0086e893  8bcb                 mov ecx, ebx
// 0086e895  e8c6340500           call 0x8c1d60
// 0086e89a  83b84401000000       cmp dword ptr [eax + 0x144], 0
// 0086e8a1  5b                   pop ebx
// 0086e8a2  7429                 je 0x86e8cd
// 0086e8a4  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0086e8a7  6a00                 push 0
// 0086e8a9  6a00                 push 0
// 0086e8ab  6864030000           push 0x364
// 0086e8b0  51                   push ecx
// 0086e8b1  ff15c019a400         call dword ptr [0xa419c0]
// 0086e8b7  8b5720               mov edx, dword ptr [edi + 0x20]
// 0086e8ba  6a01                 push 1
// 0086e8bc  6a01                 push 1
// 0086e8be  6a00                 push 0
// 0086e8c0  6a00                 push 0
// 0086e8c2  6864030000           push 0x364
// 0086e8c7  52                   push edx
// 0086e8c8  e845e01500           call 0x9cc912
// 0086e8cd  5f                   pop edi
// 0086e8ce  5e                   pop esi
// 0086e8cf  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Attach@CXTPDockingPane@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
