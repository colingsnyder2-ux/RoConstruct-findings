// roc 2012-06 009bf8c0  unit: CRobloxTreeCtrl  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf8c0
//
// 009bf8c0  53                   push ebx
// 009bf8c1  8b1d043cb200         mov ebx, dword ptr [0xb23c04]
// 009bf8c7  56                   push esi
// 009bf8c8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009bf8cc  57                   push edi
// 009bf8cd  8bf9                 mov edi, ecx
// 009bf8cf  85f6                 test esi, esi
// 009bf8d1  7514                 jne 0x9bf8e7
// 009bf8d3  8b4734               mov eax, dword ptr [edi + 0x34]
// 009bf8d6  8b4020               mov eax, dword ptr [eax + 0x20]
// 009bf8d9  6a00                 push 0
// 009bf8db  6a00                 push 0
// 009bf8dd  680a110000           push 0x110a
// 009bf8e2  50                   push eax
// 009bf8e3  ffd3                 call ebx
// 009bf8e5  8bf0                 mov esi, eax
// 009bf8e7  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009bf8ea  56                   push esi
// 009bf8eb  e8409f0d00           call 0xa99830
// 009bf8f0  85c0                 test eax, eax
// 009bf8f2  7440                 je 0x9bf934
// 009bf8f4  8b4734               mov eax, dword ptr [edi + 0x34]
// 009bf8f7  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009bf8fa  56                   push esi
// 009bf8fb  6a04                 push 4
// 009bf8fd  680a110000           push 0x110a
// 009bf902  51                   push ecx
// 009bf903  ffd3                 call ebx
// 009bf905  85c0                 test eax, eax
// 009bf907  741e                 je 0x9bf927
// 009bf909  8da42400000000       lea esp, [esp]
// 009bf910  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009bf913  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009bf916  50                   push eax
// 009bf917  6a01                 push 1
// 009bf919  680a110000           push 0x110a
// 009bf91e  52                   push edx
// 009bf91f  8bf0                 mov esi, eax
// 009bf921  ffd3                 call ebx
// 009bf923  85c0                 test eax, eax
// 009bf925  75e9                 jne 0x9bf910
// 009bf927  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009bf92a  56                   push esi
// 009bf92b  e8009f0d00           call 0xa99830
// 009bf930  85c0                 test eax, eax
// 009bf932  75c0                 jne 0x9bf8f4
// 009bf934  5f                   pop edi
// 009bf935  8bc6                 mov eax, esi
// 009bf937  5e                   pop esi
// 009bf938  5b                   pop ebx
// 009bf939  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetLastItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
