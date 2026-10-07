// roc 2012-06 009e1b70  unit: CXTPPropertyGrid  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e1b70
//
// 009e1b70  53                   push ebx
// 009e1b71  8b1d503ab200         mov ebx, dword ptr [0xb23a50]
// 009e1b77  56                   push esi
// 009e1b78  57                   push edi
// 009e1b79  8bf9                 mov edi, ecx
// 009e1b7b  8b4720               mov eax, dword ptr [edi + 0x20]
// 009e1b7e  50                   push eax
// 009e1b7f  ffd3                 call ebx
// 009e1b81  50                   push eax
// 009e1b82  e8df0afaff           call 0x982666
// 009e1b87  8bf0                 mov esi, eax
// 009e1b89  85f6                 test esi, esi
// 009e1b8b  7453                 je 0x9e1be0
// 009e1b8d  8bce                 mov ecx, esi
// 009e1b8f  e8447a0b00           call 0xa995d8
// 009e1b94  a900000100           test eax, 0x10000
// 009e1b99  741c                 je 0x9e1bb7
// 009e1b9b  8bce                 mov ecx, esi
// 009e1b9d  e8307a0b00           call 0xa995d2
// 009e1ba2  a900000040           test eax, 0x40000000
// 009e1ba7  740e                 je 0x9e1bb7
// 009e1ba9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009e1bac  51                   push ecx
// 009e1bad  ffd3                 call ebx
// 009e1baf  50                   push eax
// 009e1bb0  e8b10afaff           call 0x982666
// 009e1bb5  8bf0                 mov esi, eax
// 009e1bb7  8b542410             mov edx, dword ptr [esp + 0x10]
// 009e1bbb  8b4720               mov eax, dword ptr [edi + 0x20]
// 009e1bbe  52                   push edx
// 009e1bbf  50                   push eax
// 009e1bc0  8b4620               mov eax, dword ptr [esi + 0x20]
// 009e1bc3  50                   push eax
// 009e1bc4  ff15003db200         call dword ptr [0xb23d00]
// 009e1bca  50                   push eax
// 009e1bcb  e8960afaff           call 0x982666
// 009e1bd0  8bc8                 mov ecx, eax
// 009e1bd2  2bc7                 sub eax, edi
// 009e1bd4  f7d8                 neg eax
// 009e1bd6  5f                   pop edi
// 009e1bd7  1bc0                 sbb eax, eax
// 009e1bd9  5e                   pop esi
// 009e1bda  23c1                 and eax, ecx
// 009e1bdc  5b                   pop ebx
// 009e1bdd  c20400               ret 4
// 009e1be0  5f                   pop edi
// 009e1be1  5e                   pop esi
// 009e1be2  33c0                 xor eax, eax
// 009e1be4  5b                   pop ebx
// 009e1be5  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetNextGridTabItem@CXTPPropertyGrid@@AAEPAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
