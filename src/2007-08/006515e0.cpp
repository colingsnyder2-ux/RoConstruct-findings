// roc 2007-08 006515e0  unit: CXTPToolBar  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006515e0
//
// 006515e0  53                   push ebx
// 006515e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006515e5  56                   push esi
// 006515e6  8bf1                 mov esi, ecx
// 006515e8  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 006515ef  57                   push edi
// 006515f0  757a                 jne 0x65166c
// 006515f2  83fb09               cmp ebx, 9
// 006515f5  7575                 jne 0x65166c
// 006515f7  8b4620               mov eax, dword ptr [esi + 0x20]
// 006515fa  8b3df8eb7700         mov edi, dword ptr [0x77ebf8]
// 00651600  50                   push eax
// 00651601  ffd7                 call edi
// 00651603  50                   push eax
// 00651604  e8b7ebfdff           call 0x6301c0
// 00651609  85c0                 test eax, eax
// 0065160b  745f                 je 0x65166c
// 0065160d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00651610  51                   push ecx
// 00651611  ffd7                 call edi
// 00651613  50                   push eax
// 00651614  e8a7ebfdff           call 0x6301c0
// 00651619  6a10                 push 0x10
// 0065161b  8bf8                 mov edi, eax
// 0065161d  ff154cec7700         call dword ptr [0x77ec4c]
// 00651623  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00651626  33d2                 xor edx, edx
// 00651628  6685c0               test ax, ax
// 0065162b  0f9cc2               setl dl
// 0065162e  8bc2                 mov eax, edx
// 00651630  50                   push eax
// 00651631  8b4720               mov eax, dword ptr [edi + 0x20]
// 00651634  51                   push ecx
// 00651635  50                   push eax
// 00651636  ff1564ee7700         call dword ptr [0x77ee64]
// 0065163c  50                   push eax
// 0065163d  e87eebfdff           call 0x6301c0
// 00651642  85c0                 test eax, eax
// 00651644  7426                 je 0x65166c
// 00651646  3bc6                 cmp eax, esi
// 00651648  7422                 je 0x65166c
// 0065164a  8bc8                 mov ecx, eax
// 0065164c  e8b3e9fdff           call 0x630004
// 00651651  8b16                 mov edx, dword ptr [esi]
// 00651653  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 00651659  6a00                 push 0
// 0065165b  6a01                 push 1
// 0065165d  6a00                 push 0
// 0065165f  8bce                 mov ecx, esi
// 00651661  ffd0                 call eax
// 00651663  5f                   pop edi
// 00651664  5e                   pop esi
// 00651665  8d43f8               lea eax, [ebx - 8]
// 00651668  5b                   pop ebx
// 00651669  c20800               ret 8
// 0065166c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00651670  51                   push ecx
// 00651671  53                   push ebx
// 00651672  8bce                 mov ecx, esi
// 00651674  e8b75effff           call 0x647530
// 00651679  5f                   pop edi
// 0065167a  5e                   pop esi
// 0065167b  5b                   pop ebx
// 0065167c  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnHookKeyDown@CXTPToolBar@@UAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
