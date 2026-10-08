// from server: 100% by auto
// roc 2008-06 00702210  unit: CXTPTabClientWnd::CSingleWorkspace  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00702210
//
// 00702210  53                   push ebx
// 00702211  55                   push ebp
// 00702212  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00702216  56                   push esi
// 00702217  8b7504               mov esi, dword ptr [ebp + 4]
// 0070221a  8bd9                 mov ebx, ecx
// 0070221c  81fe01020000         cmp esi, 0x201
// 00702222  7420                 je 0x702244
// 00702224  81fe04020000         cmp esi, 0x204
// 0070222a  7418                 je 0x702244
// 0070222c  81fe07020000         cmp esi, 0x207
// 00702232  7410                 je 0x702244
// 00702234  81fe03020000         cmp esi, 0x203
// 0070223a  7408                 je 0x702244
// 0070223c  81fe06020000         cmp esi, 0x206
// 00702242  752a                 jne 0x70226e
// 00702244  57                   push edi
// 00702245  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00702248  e827e7f9ff           call 0x6a0974
// 0070224d  8b4020               mov eax, dword ptr [eax + 0x20]
// 00702250  57                   push edi
// 00702251  56                   push esi
// 00702252  6868280000           push 0x2868
// 00702257  50                   push eax
// 00702258  ff15142e8000         call dword ptr [0x802e14]
// 0070225e  5f                   pop edi
// 0070225f  85c0                 test eax, eax
// 00702261  740b                 je 0x70226e
// 00702263  5e                   pop esi
// 00702264  5d                   pop ebp
// 00702265  b801000000           mov eax, 1
// 0070226a  5b                   pop ebx
// 0070226b  c20400               ret 4
// 0070226e  55                   push ebp
// 0070226f  8bcb                 mov ecx, ebx
// 00702271  e822eaf9ff           call 0x6a0c98
// 00702276  5e                   pop esi
// 00702277  5d                   pop ebp
// 00702278  5b                   pop ebx
// 00702279  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?PreTranslateMessage@CSingleWorkspace@CXTPTabClientWnd@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
