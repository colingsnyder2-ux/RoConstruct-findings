// from server: 100% by auto
// roc 2007-08 00665510  unit: CRobloxTreeCtrl  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00665510
//
// 00665510  53                   push ebx
// 00665511  8b1dd8ec7700         mov ebx, dword ptr [0x77ecd8]
// 00665517  56                   push esi
// 00665518  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066551c  85f6                 test esi, esi
// 0066551e  57                   push edi
// 0066551f  8bf9                 mov edi, ecx
// 00665521  7514                 jne 0x665537
// 00665523  8b4734               mov eax, dword ptr [edi + 0x34]
// 00665526  8b4020               mov eax, dword ptr [eax + 0x20]
// 00665529  6a00                 push 0
// 0066552b  6a00                 push 0
// 0066552d  680a110000           push 0x110a
// 00665532  50                   push eax
// 00665533  ffd3                 call ebx
// 00665535  8bf0                 mov esi, eax
// 00665537  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0066553a  56                   push esi
// 0066553b  e818310d00           call 0x738658
// 00665540  85c0                 test eax, eax
// 00665542  7440                 je 0x665584
// 00665544  8b4734               mov eax, dword ptr [edi + 0x34]
// 00665547  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0066554a  56                   push esi
// 0066554b  6a04                 push 4
// 0066554d  680a110000           push 0x110a
// 00665552  51                   push ecx
// 00665553  ffd3                 call ebx
// 00665555  85c0                 test eax, eax
// 00665557  741e                 je 0x665577
// 00665559  8da42400000000       lea esp, [esp]
// 00665560  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00665563  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00665566  50                   push eax
// 00665567  6a01                 push 1
// 00665569  680a110000           push 0x110a
// 0066556e  52                   push edx
// 0066556f  8bf0                 mov esi, eax
// 00665571  ffd3                 call ebx
// 00665573  85c0                 test eax, eax
// 00665575  75e9                 jne 0x665560
// 00665577  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0066557a  56                   push esi
// 0066557b  e8d8300d00           call 0x738658
// 00665580  85c0                 test eax, eax
// 00665582  75c0                 jne 0x665544
// 00665584  5f                   pop edi
// 00665585  8bc6                 mov eax, esi
// 00665587  5e                   pop esi
// 00665588  5b                   pop ebx
// 00665589  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetLastItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
