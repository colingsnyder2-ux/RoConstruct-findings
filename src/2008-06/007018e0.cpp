// roc 2008-06 007018e0  unit: CXTPTabClientWnd  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007018e0
//
// 007018e0  53                   push ebx
// 007018e1  57                   push edi
// 007018e2  8bf9                 mov edi, ecx
// 007018e4  e87ff3f9ff           call 0x6a0c68
// 007018e9  8bd8                 mov ebx, eax
// 007018eb  85db                 test ebx, ebx
// 007018ed  7448                 je 0x701937
// 007018ef  83bfb400000000       cmp dword ptr [edi + 0xb4], 0
// 007018f6  743f                 je 0x701937
// 007018f8  56                   push esi
// 007018f9  53                   push ebx
// 007018fa  e8dff2f9ff           call 0x6a0bde
// 007018ff  8bf0                 mov esi, eax
// 00701901  85f6                 test esi, esi
// 00701903  7431                 je 0x701936
// 00701905  6a00                 push 0
// 00701907  6a00                 push 0
// 00701909  680000c700           push 0xc70000
// 0070190e  8bce                 mov ecx, esi
// 00701910  e8fdf4f9ff           call 0x6a0e12
// 00701915  6a00                 push 0
// 00701917  6a00                 push 0
// 00701919  6800020000           push 0x200
// 0070191e  8bce                 mov ecx, esi
// 00701920  e813f3f9ff           call 0x6a0c38
// 00701925  6a01                 push 1
// 00701927  6a00                 push 0
// 00701929  6a00                 push 0
// 0070192b  6a00                 push 0
// 0070192d  6a00                 push 0
// 0070192f  8bce                 mov ecx, esi
// 00701931  e816f1f9ff           call 0x6a0a4c
// 00701936  5e                   pop esi
// 00701937  8b07                 mov eax, dword ptr [edi]
// 00701939  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 0070193f  8bcf                 mov ecx, edi
// 00701941  ffd2                 call edx
// 00701943  5f                   pop edi
// 00701944  8bc3                 mov eax, ebx
// 00701946  5b                   pop ebx
// 00701947  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMDICreate@CXTPTabClientWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
