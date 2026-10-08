// roc 2012-06 00a685c0  unit: CXTShadowWnd  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a685c0
//
// 00a685c0  83ec30               sub esp, 0x30
// 00a685c3  53                   push ebx
// 00a685c4  8bd9                 mov ebx, ecx
// 00a685c6  53                   push ebx
// 00a685c7  8d4c2408             lea ecx, [esp + 8]
// 00a685cb  e870cbf6ff           call 0x9d5140
// 00a685d0  8d442438             lea eax, [esp + 0x38]
// 00a685d4  50                   push eax
// 00a685d5  8d4c2408             lea ecx, [esp + 8]
// 00a685d9  51                   push ecx
// 00a685da  8d54241c             lea edx, [esp + 0x1c]
// 00a685de  52                   push edx
// 00a685df  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a685e5  85c0                 test eax, eax
// 00a685e7  7473                 je 0xa6865c
// 00a685e9  56                   push esi
// 00a685ea  57                   push edi
// 00a685eb  53                   push ebx
// 00a685ec  8d4c2430             lea ecx, [esp + 0x30]
// 00a685f0  e8abcbf6ff           call 0x9d51a0
// 00a685f5  8b3d2c21b200         mov edi, dword ptr [0xb2212c]
// 00a685fb  8d44242c             lea eax, [esp + 0x2c]
// 00a685ff  50                   push eax
// 00a68600  ffd7                 call edi
// 00a68602  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a68606  8bf0                 mov esi, eax
// 00a68608  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a6860c  f7d9                 neg ecx
// 00a6860e  51                   push ecx
// 00a6860f  f7d8                 neg eax
// 00a68611  50                   push eax
// 00a68612  8d4c2424             lea ecx, [esp + 0x24]
// 00a68616  51                   push ecx
// 00a68617  ff15f43ab200         call dword ptr [0xb23af4]
// 00a6861d  8d54241c             lea edx, [esp + 0x1c]
// 00a68621  52                   push edx
// 00a68622  ffd7                 call edi
// 00a68624  6a04                 push 4
// 00a68626  8bf8                 mov edi, eax
// 00a68628  57                   push edi
// 00a68629  56                   push esi
// 00a6862a  56                   push esi
// 00a6862b  ff151421b200         call dword ptr [0xb22114]
// 00a68631  57                   push edi
// 00a68632  8b3d7021b200         mov edi, dword ptr [0xb22170]
// 00a68638  ffd7                 call edi
// 00a6863a  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00a6863d  6a00                 push 0
// 00a6863f  56                   push esi
// 00a68640  50                   push eax
// 00a68641  ff15983cb200         call dword ptr [0xb23c98]
// 00a68647  85c0                 test eax, eax
// 00a68649  7503                 jne 0xa6864e
// 00a6864b  56                   push esi
// 00a6864c  ffd7                 call edi
// 00a6864e  5f                   pop edi
// 00a6864f  5e                   pop esi
// 00a68650  b801000000           mov eax, 1
// 00a68655  5b                   pop ebx
// 00a68656  83c430               add esp, 0x30
// 00a68659  c21000               ret 0x10
// 00a6865c  b801000000           mov eax, 1
// 00a68661  5b                   pop ebx
// 00a68662  83c430               add esp, 0x30
// 00a68665  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?ExcludeRect@CXTShadowWnd@@IAEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
