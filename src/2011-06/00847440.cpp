// roc 2011-06 00847440  unit: CRobloxTreeCtrl  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847440
//
// 00847440  53                   push ebx
// 00847441  8b1dc019a400         mov ebx, dword ptr [0xa419c0]
// 00847447  56                   push esi
// 00847448  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0084744c  57                   push edi
// 0084744d  8bf9                 mov edi, ecx
// 0084744f  85f6                 test esi, esi
// 00847451  7514                 jne 0x847467
// 00847453  8b4734               mov eax, dword ptr [edi + 0x34]
// 00847456  8b4020               mov eax, dword ptr [eax + 0x20]
// 00847459  6a00                 push 0
// 0084745b  6a00                 push 0
// 0084745d  680a110000           push 0x110a
// 00847462  50                   push eax
// 00847463  ffd3                 call ebx
// 00847465  8bf0                 mov esi, eax
// 00847467  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0084746a  56                   push esi
// 0084746b  e806541800           call 0x9cc876
// 00847470  85c0                 test eax, eax
// 00847472  7440                 je 0x8474b4
// 00847474  8b4734               mov eax, dword ptr [edi + 0x34]
// 00847477  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0084747a  56                   push esi
// 0084747b  6a04                 push 4
// 0084747d  680a110000           push 0x110a
// 00847482  51                   push ecx
// 00847483  ffd3                 call ebx
// 00847485  85c0                 test eax, eax
// 00847487  741e                 je 0x8474a7
// 00847489  8da42400000000       lea esp, [esp]
// 00847490  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00847493  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00847496  50                   push eax
// 00847497  6a01                 push 1
// 00847499  680a110000           push 0x110a
// 0084749e  52                   push edx
// 0084749f  8bf0                 mov esi, eax
// 008474a1  ffd3                 call ebx
// 008474a3  85c0                 test eax, eax
// 008474a5  75e9                 jne 0x847490
// 008474a7  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008474aa  56                   push esi
// 008474ab  e8c6531800           call 0x9cc876
// 008474b0  85c0                 test eax, eax
// 008474b2  75c0                 jne 0x847474
// 008474b4  5f                   pop edi
// 008474b5  8bc6                 mov eax, esi
// 008474b7  5e                   pop esi
// 008474b8  5b                   pop ebx
// 008474b9  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetLastItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
