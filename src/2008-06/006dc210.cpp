// roc 2008-06 006dc210  unit: CXTTreeBase  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dc210
//
// 006dc210  53                   push ebx
// 006dc211  56                   push esi
// 006dc212  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006dc216  57                   push edi
// 006dc217  8bf9                 mov edi, ecx
// 006dc219  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006dc21c  56                   push esi
// 006dc21d  e818010e00           call 0x7bc33a
// 006dc222  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 006dc228  85c0                 test eax, eax
// 006dc22a  7415                 je 0x6dc241
// 006dc22c  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dc22f  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dc232  56                   push esi
// 006dc233  6a04                 push 4
// 006dc235  680a110000           push 0x110a
// 006dc23a  50                   push eax
// 006dc23b  ffd3                 call ebx
// 006dc23d  85c0                 test eax, eax
// 006dc23f  7549                 jne 0x6dc28a
// 006dc241  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dc244  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dc247  56                   push esi
// 006dc248  6a01                 push 1
// 006dc24a  680a110000           push 0x110a
// 006dc24f  51                   push ecx
// 006dc250  ffd3                 call ebx
// 006dc252  85c0                 test eax, eax
// 006dc254  7534                 jne 0x6dc28a
// 006dc256  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dc259  8b5020               mov edx, dword ptr [eax + 0x20]
// 006dc25c  56                   push esi
// 006dc25d  6a03                 push 3
// 006dc25f  680a110000           push 0x110a
// 006dc264  52                   push edx
// 006dc265  ffd3                 call ebx
// 006dc267  8bf0                 mov esi, eax
// 006dc269  85f6                 test esi, esi
// 006dc26b  741b                 je 0x6dc288
// 006dc26d  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dc270  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dc273  56                   push esi
// 006dc274  6a01                 push 1
// 006dc276  680a110000           push 0x110a
// 006dc27b  50                   push eax
// 006dc27c  ffd3                 call ebx
// 006dc27e  85c0                 test eax, eax
// 006dc280  74d4                 je 0x6dc256
// 006dc282  5f                   pop edi
// 006dc283  5e                   pop esi
// 006dc284  5b                   pop ebx
// 006dc285  c20400               ret 4
// 006dc288  33c0                 xor eax, eax
// 006dc28a  5f                   pop edi
// 006dc28b  5e                   pop esi
// 006dc28c  5b                   pop ebx
// 006dc28d  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetNextItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
