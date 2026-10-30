// from server: 100% by auto
// roc 2011-06 008656a0  unit: CXTPTabClientWnd  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008656a0
//
// 008656a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008656a4  56                   push esi
// 008656a5  57                   push edi
// 008656a6  e815680000           call 0x86bec0
// 008656ab  8b3dc019a400         mov edi, dword ptr [0xa419c0]
// 008656b1  6a00                 push 0
// 008656b3  6a00                 push 0
// 008656b5  8bf0                 mov esi, eax
// 008656b7  6860280000           push 0x2860
// 008656bc  56                   push esi
// 008656bd  ffd7                 call edi
// 008656bf  85c0                 test eax, eax
// 008656c1  7541                 jne 0x865704
// 008656c3  50                   push eax
// 008656c4  50                   push eax
// 008656c5  6a7f                 push 0x7f
// 008656c7  56                   push esi
// 008656c8  ffd7                 call edi
// 008656ca  85c0                 test eax, eax
// 008656cc  7536                 jne 0x865704
// 008656ce  50                   push eax
// 008656cf  6a01                 push 1
// 008656d1  6a7f                 push 0x7f
// 008656d3  56                   push esi
// 008656d4  ffd7                 call edi
// 008656d6  85c0                 test eax, eax
// 008656d8  752a                 jne 0x865704
// 008656da  8b3d841aa400         mov edi, dword ptr [0xa41a84]
// 008656e0  6ade                 push -0x22
// 008656e2  56                   push esi
// 008656e3  ffd7                 call edi
// 008656e5  85c0                 test eax, eax
// 008656e7  751b                 jne 0x865704
// 008656e9  6af2                 push -0xe
// 008656eb  56                   push esi
// 008656ec  ffd7                 call edi
// 008656ee  85c0                 test eax, eax
// 008656f0  7512                 jne 0x865704
// 008656f2  e8254cfaff           call 0x80a31c
// 008656f7  68057f0000           push 0x7f05
// 008656fc  6a00                 push 0
// 008656fe  ff15581ca400         call dword ptr [0xa41c58]
// 00865704  5f                   pop edi
// 00865705  5e                   pop esi
// 00865706  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetItemIcon@CXTPTabClientWnd@@MBEPAUHICON__@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
