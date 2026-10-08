// from server: 100% by auto
// roc 2012-06 009bf7f0  unit: CXTTreeBase  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf7f0
//
// 009bf7f0  53                   push ebx
// 009bf7f1  56                   push esi
// 009bf7f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009bf7f6  57                   push edi
// 009bf7f7  8bf9                 mov edi, ecx
// 009bf7f9  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009bf7fc  56                   push esi
// 009bf7fd  e82ea00d00           call 0xa99830
// 009bf802  8b1d043cb200         mov ebx, dword ptr [0xb23c04]
// 009bf808  85c0                 test eax, eax
// 009bf80a  7415                 je 0x9bf821
// 009bf80c  8b4734               mov eax, dword ptr [edi + 0x34]
// 009bf80f  8b4020               mov eax, dword ptr [eax + 0x20]
// 009bf812  56                   push esi
// 009bf813  6a04                 push 4
// 009bf815  680a110000           push 0x110a
// 009bf81a  50                   push eax
// 009bf81b  ffd3                 call ebx
// 009bf81d  85c0                 test eax, eax
// 009bf81f  7549                 jne 0x9bf86a
// 009bf821  8b4734               mov eax, dword ptr [edi + 0x34]
// 009bf824  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009bf827  56                   push esi
// 009bf828  6a01                 push 1
// 009bf82a  680a110000           push 0x110a
// 009bf82f  51                   push ecx
// 009bf830  ffd3                 call ebx
// 009bf832  85c0                 test eax, eax
// 009bf834  7534                 jne 0x9bf86a
// 009bf836  8b4734               mov eax, dword ptr [edi + 0x34]
// 009bf839  8b5020               mov edx, dword ptr [eax + 0x20]
// 009bf83c  56                   push esi
// 009bf83d  6a03                 push 3
// 009bf83f  680a110000           push 0x110a
// 009bf844  52                   push edx
// 009bf845  ffd3                 call ebx
// 009bf847  8bf0                 mov esi, eax
// 009bf849  85f6                 test esi, esi
// 009bf84b  741b                 je 0x9bf868
// 009bf84d  8b4734               mov eax, dword ptr [edi + 0x34]
// 009bf850  8b4020               mov eax, dword ptr [eax + 0x20]
// 009bf853  56                   push esi
// 009bf854  6a01                 push 1
// 009bf856  680a110000           push 0x110a
// 009bf85b  50                   push eax
// 009bf85c  ffd3                 call ebx
// 009bf85e  85c0                 test eax, eax
// 009bf860  74d4                 je 0x9bf836
// 009bf862  5f                   pop edi
// 009bf863  5e                   pop esi
// 009bf864  5b                   pop ebx
// 009bf865  c20400               ret 4
// 009bf868  33c0                 xor eax, eax
// 009bf86a  5f                   pop edi
// 009bf86b  5e                   pop esi
// 009bf86c  5b                   pop ebx
// 009bf86d  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetNextItem@CXTPTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
