// roc 2011-06 00865e30  unit: CXTPTabClientWnd  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00865e30
//
// 00865e30  56                   push esi
// 00865e31  8bf1                 mov esi, ecx
// 00865e33  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00865e3a  57                   push edi
// 00865e3b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00865e3f  7455                 je 0x865e96
// 00865e41  8b4704               mov eax, dword ptr [edi + 4]
// 00865e44  3d01020000           cmp eax, 0x201
// 00865e49  741c                 je 0x865e67
// 00865e4b  3d04020000           cmp eax, 0x204
// 00865e50  7415                 je 0x865e67
// 00865e52  3d07020000           cmp eax, 0x207
// 00865e57  740e                 je 0x865e67
// 00865e59  3d03020000           cmp eax, 0x203
// 00865e5e  7407                 je 0x865e67
// 00865e60  3d06020000           cmp eax, 0x206
// 00865e65  752f                 jne 0x865e96
// 00865e67  8b0f                 mov ecx, dword ptr [edi]
// 00865e69  3b4e20               cmp ecx, dword ptr [esi + 0x20]
// 00865e6c  7528                 jne 0x865e96
// 00865e6e  8b570c               mov edx, dword ptr [edi + 0xc]
// 00865e71  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00865e77  52                   push edx
// 00865e78  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00865e7b  50                   push eax
// 00865e7c  6868280000           push 0x2868
// 00865e81  52                   push edx
// 00865e82  ff15c019a400         call dword ptr [0xa419c0]
// 00865e88  85c0                 test eax, eax
// 00865e8a  740a                 je 0x865e96
// 00865e8c  5f                   pop edi
// 00865e8d  b801000000           mov eax, 1
// 00865e92  5e                   pop esi
// 00865e93  c20400               ret 4
// 00865e96  57                   push edi
// 00865e97  8bce                 mov ecx, esi
// 00865e99  e8c047faff           call 0x80a65e
// 00865e9e  5f                   pop edi
// 00865e9f  5e                   pop esi
// 00865ea0  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?PreTranslateMessage@CXTPTabClientWnd@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
