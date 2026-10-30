// from server: 100% by auto
// roc 2012-06 009ddcb0  unit: CXTPTabClientWnd  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ddcb0
//
// 009ddcb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009ddcb4  56                   push esi
// 009ddcb5  57                   push edi
// 009ddcb6  e8f565fdff           call 0x9b42b0
// 009ddcbb  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 009ddcc1  6a00                 push 0
// 009ddcc3  6a00                 push 0
// 009ddcc5  8bf0                 mov esi, eax
// 009ddcc7  6860280000           push 0x2860
// 009ddccc  56                   push esi
// 009ddccd  ffd7                 call edi
// 009ddccf  85c0                 test eax, eax
// 009ddcd1  7541                 jne 0x9ddd14
// 009ddcd3  50                   push eax
// 009ddcd4  50                   push eax
// 009ddcd5  6a7f                 push 0x7f
// 009ddcd7  56                   push esi
// 009ddcd8  ffd7                 call edi
// 009ddcda  85c0                 test eax, eax
// 009ddcdc  7536                 jne 0x9ddd14
// 009ddcde  50                   push eax
// 009ddcdf  6a01                 push 1
// 009ddce1  6a7f                 push 0x7f
// 009ddce3  56                   push esi
// 009ddce4  ffd7                 call edi
// 009ddce6  85c0                 test eax, eax
// 009ddce8  752a                 jne 0x9ddd14
// 009ddcea  8b3d903cb200         mov edi, dword ptr [0xb23c90]
// 009ddcf0  6ade                 push -0x22
// 009ddcf2  56                   push esi
// 009ddcf3  ffd7                 call edi
// 009ddcf5  85c0                 test eax, eax
// 009ddcf7  751b                 jne 0x9ddd14
// 009ddcf9  6af2                 push -0xe
// 009ddcfb  56                   push esi
// 009ddcfc  ffd7                 call edi
// 009ddcfe  85c0                 test eax, eax
// 009ddd00  7512                 jne 0x9ddd14
// 009ddd02  e8cb46faff           call 0x9823d2
// 009ddd07  68057f0000           push 0x7f05
// 009ddd0c  6a00                 push 0
// 009ddd0e  ff15fc3ab200         call dword ptr [0xb23afc]
// 009ddd14  5f                   pop edi
// 009ddd15  5e                   pop esi
// 009ddd16  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetItemIcon@CXTPTabClientWnd@@MBEPAUHICON__@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
