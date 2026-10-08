// roc 2011-06 00827630  unit: CXTPToolBar  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00827630
//
// 00827630  83ec10               sub esp, 0x10
// 00827633  8b442414             mov eax, dword ptr [esp + 0x14]
// 00827637  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0082763b  56                   push esi
// 0082763c  57                   push edi
// 0082763d  8bf1                 mov esi, ecx
// 0082763f  33ff                 xor edi, edi
// 00827641  57                   push edi
// 00827642  8bc8                 mov ecx, eax
// 00827644  52                   push edx
// 00827645  81e1ffff4000         and ecx, 0x40ffff
// 0082764b  898ef0000000         mov dword ptr [esi + 0xf0], ecx
// 00827651  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00827655  51                   push ecx
// 00827656  8d542414             lea edx, [esp + 0x14]
// 0082765a  52                   push edx
// 0082765b  250000bfff           and eax, 0xffbf0000
// 00827660  0d00000006           or eax, 0x6000000
// 00827665  50                   push eax
// 00827666  57                   push edi
// 00827667  683c37ac00           push 0xac373c
// 0082766c  57                   push edi
// 0082766d  8bce                 mov ecx, esi
// 0082766f  897c2428             mov dword ptr [esp + 0x28], edi
// 00827673  897c242c             mov dword ptr [esp + 0x2c], edi
// 00827677  897c2430             mov dword ptr [esp + 0x30], edi
// 0082767b  897c2434             mov dword ptr [esp + 0x34], edi
// 0082767f  e84c2afeff           call 0x80a0d0
// 00827684  85c0                 test eax, eax
// 00827686  7508                 jne 0x827690
// 00827688  5f                   pop edi
// 00827689  5e                   pop esi
// 0082768a  83c410               add esp, 0x10
// 0082768d  c20c00               ret 0xc
// 00827690  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00827696  89be00010000         mov dword ptr [esi + 0x100], edi
// 0082769c  3bcf                 cmp ecx, edi
// 0082769e  740e                 je 0x8276ae
// 008276a0  8b01                 mov eax, dword ptr [ecx]
// 008276a2  8b10                 mov edx, dword ptr [eax]
// 008276a4  6a01                 push 1
// 008276a6  ffd2                 call edx
// 008276a8  89be84010000         mov dword ptr [esi + 0x184], edi
// 008276ae  83a6ec000000c0       and dword ptr [esi + 0xec], 0xffffffc0
// 008276b5  f686f000000010       test byte ptr [esi + 0xf0], 0x10
// 008276bc  7411                 je 0x8276cf
// 008276be  39be04010000         cmp dword ptr [esi + 0x104], edi
// 008276c4  7509                 jne 0x8276cf
// 008276c6  6a01                 push 1
// 008276c8  8bce                 mov ecx, esi
// 008276ca  e86d4f1a00           call 0x9cc63c
// 008276cf  5f                   pop edi
// 008276d0  b801000000           mov eax, 1
// 008276d5  5e                   pop esi
// 008276d6  83c410               add esp, 0x10
// 008276d9  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?CreateToolBar@CXTPToolBar@@QAEHKPAVCWnd@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
