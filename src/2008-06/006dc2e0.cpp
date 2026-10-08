// from server: 100% by auto
// roc 2008-06 006dc2e0  unit: CRobloxTreeCtrl  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dc2e0
//
// 006dc2e0  53                   push ebx
// 006dc2e1  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 006dc2e7  56                   push esi
// 006dc2e8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006dc2ec  57                   push edi
// 006dc2ed  8bf9                 mov edi, ecx
// 006dc2ef  85f6                 test esi, esi
// 006dc2f1  7514                 jne 0x6dc307
// 006dc2f3  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dc2f6  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dc2f9  6a00                 push 0
// 006dc2fb  6a00                 push 0
// 006dc2fd  680a110000           push 0x110a
// 006dc302  50                   push eax
// 006dc303  ffd3                 call ebx
// 006dc305  8bf0                 mov esi, eax
// 006dc307  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006dc30a  56                   push esi
// 006dc30b  e82a000e00           call 0x7bc33a
// 006dc310  85c0                 test eax, eax
// 006dc312  7440                 je 0x6dc354
// 006dc314  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dc317  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dc31a  56                   push esi
// 006dc31b  6a04                 push 4
// 006dc31d  680a110000           push 0x110a
// 006dc322  51                   push ecx
// 006dc323  ffd3                 call ebx
// 006dc325  85c0                 test eax, eax
// 006dc327  741e                 je 0x6dc347
// 006dc329  8da42400000000       lea esp, [esp]
// 006dc330  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006dc333  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006dc336  50                   push eax
// 006dc337  6a01                 push 1
// 006dc339  680a110000           push 0x110a
// 006dc33e  52                   push edx
// 006dc33f  8bf0                 mov esi, eax
// 006dc341  ffd3                 call ebx
// 006dc343  85c0                 test eax, eax
// 006dc345  75e9                 jne 0x6dc330
// 006dc347  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006dc34a  56                   push esi
// 006dc34b  e8eaff0d00           call 0x7bc33a
// 006dc350  85c0                 test eax, eax
// 006dc352  75c0                 jne 0x6dc314
// 006dc354  5f                   pop edi
// 006dc355  8bc6                 mov eax, esi
// 006dc357  5e                   pop esi
// 006dc358  5b                   pop ebx
// 006dc359  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetLastItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
