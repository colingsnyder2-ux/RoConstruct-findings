// roc 2009-06 00756bb0  unit: CRobloxTreeCtrl  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00756bb0
//
// 00756bb0  53                   push ebx
// 00756bb1  8b1d90ee8900         mov ebx, dword ptr [0x89ee90]
// 00756bb7  56                   push esi
// 00756bb8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00756bbc  57                   push edi
// 00756bbd  8bf9                 mov edi, ecx
// 00756bbf  85f6                 test esi, esi
// 00756bc1  7514                 jne 0x756bd7
// 00756bc3  8b4734               mov eax, dword ptr [edi + 0x34]
// 00756bc6  8b4020               mov eax, dword ptr [eax + 0x20]
// 00756bc9  6a00                 push 0
// 00756bcb  6a00                 push 0
// 00756bcd  680a110000           push 0x110a
// 00756bd2  50                   push eax
// 00756bd3  ffd3                 call ebx
// 00756bd5  8bf0                 mov esi, eax
// 00756bd7  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00756bda  56                   push esi
// 00756bdb  e8d8550f00           call 0x84c1b8
// 00756be0  85c0                 test eax, eax
// 00756be2  7440                 je 0x756c24
// 00756be4  8b4734               mov eax, dword ptr [edi + 0x34]
// 00756be7  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00756bea  56                   push esi
// 00756beb  6a04                 push 4
// 00756bed  680a110000           push 0x110a
// 00756bf2  51                   push ecx
// 00756bf3  ffd3                 call ebx
// 00756bf5  85c0                 test eax, eax
// 00756bf7  741e                 je 0x756c17
// 00756bf9  8da42400000000       lea esp, [esp]
// 00756c00  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00756c03  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00756c06  50                   push eax
// 00756c07  6a01                 push 1
// 00756c09  680a110000           push 0x110a
// 00756c0e  52                   push edx
// 00756c0f  8bf0                 mov esi, eax
// 00756c11  ffd3                 call ebx
// 00756c13  85c0                 test eax, eax
// 00756c15  75e9                 jne 0x756c00
// 00756c17  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00756c1a  56                   push esi
// 00756c1b  e898550f00           call 0x84c1b8
// 00756c20  85c0                 test eax, eax
// 00756c22  75c0                 jne 0x756be4
// 00756c24  5f                   pop edi
// 00756c25  8bc6                 mov eax, esi
// 00756c27  5e                   pop esi
// 00756c28  5b                   pop ebx
// 00756c29  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetLastItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
