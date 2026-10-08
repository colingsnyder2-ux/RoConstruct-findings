// from server: 100% by auto
// roc 2012-06 009c05b0  unit: CRobloxTreeCtrl  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c05b0
//
// 009c05b0  53                   push ebx
// 009c05b1  8b1d043cb200         mov ebx, dword ptr [0xb23c04]
// 009c05b7  56                   push esi
// 009c05b8  57                   push edi
// 009c05b9  6a00                 push 0
// 009c05bb  8bf9                 mov edi, ecx
// 009c05bd  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c05c0  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c05c3  6a00                 push 0
// 009c05c5  680a110000           push 0x110a
// 009c05ca  50                   push eax
// 009c05cb  ffd3                 call ebx
// 009c05cd  8bf0                 mov esi, eax
// 009c05cf  85f6                 test esi, esi
// 009c05d1  0f84db000000         je 0x9c06b2
// 009c05d7  55                   push ebp
// 009c05d8  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 009c05dc  8d642400             lea esp, [esp]
// 009c05e0  8b442414             mov eax, dword ptr [esp + 0x14]
// 009c05e4  3bf0                 cmp esi, eax
// 009c05e6  7442                 je 0x9c062a
// 009c05e8  3bf5                 cmp esi, ebp
// 009c05ea  743e                 je 0x9c062a
// 009c05ec  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 009c05f1  741b                 je 0x9c060e
// 009c05f3  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c05f6  6a02                 push 2
// 009c05f8  56                   push esi
// 009c05f9  e814920d00           call 0xa99812
// 009c05fe  a802                 test al, 2
// 009c0600  740c                 je 0x9c060e
// 009c0602  6a02                 push 2
// 009c0604  6a00                 push 0
// 009c0606  56                   push esi
// 009c0607  8bcf                 mov ecx, edi
// 009c0609  e8d2f9ffff           call 0x9bffe0
// 009c060e  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c0611  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c0614  56                   push esi
// 009c0615  6a06                 push 6
// 009c0617  680a110000           push 0x110a
// 009c061c  51                   push ecx
// 009c061d  ffd3                 call ebx
// 009c061f  8bf0                 mov esi, eax
// 009c0621  85f6                 test esi, esi
// 009c0623  75bb                 jne 0x9c05e0
// 009c0625  e987000000           jmp 0x9c06b1
// 009c062a  3bc5                 cmp eax, ebp
// 009c062c  742e                 je 0x9c065c
// 009c062e  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c0631  6a02                 push 2
// 009c0633  56                   push esi
// 009c0634  e8d9910d00           call 0xa99812
// 009c0639  a802                 test al, 2
// 009c063b  750c                 jne 0x9c0649
// 009c063d  6a02                 push 2
// 009c063f  6a02                 push 2
// 009c0641  56                   push esi
// 009c0642  8bcf                 mov ecx, edi
// 009c0644  e897f9ffff           call 0x9bffe0
// 009c0649  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c064c  8b5020               mov edx, dword ptr [eax + 0x20]
// 009c064f  56                   push esi
// 009c0650  6a06                 push 6
// 009c0652  680a110000           push 0x110a
// 009c0657  52                   push edx
// 009c0658  ffd3                 call ebx
// 009c065a  8bf0                 mov esi, eax
// 009c065c  85f6                 test esi, esi
// 009c065e  7451                 je 0x9c06b1
// 009c0660  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c0663  6a02                 push 2
// 009c0665  56                   push esi
// 009c0666  e8a7910d00           call 0xa99812
// 009c066b  a802                 test al, 2
// 009c066d  750c                 jne 0x9c067b
// 009c066f  6a02                 push 2
// 009c0671  6a02                 push 2
// 009c0673  56                   push esi
// 009c0674  8bcf                 mov ecx, edi
// 009c0676  e865f9ffff           call 0x9bffe0
// 009c067b  3b742414             cmp esi, dword ptr [esp + 0x14]
// 009c067f  741d                 je 0x9c069e
// 009c0681  3bf5                 cmp esi, ebp
// 009c0683  7419                 je 0x9c069e
// 009c0685  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c0688  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c068b  56                   push esi
// 009c068c  6a06                 push 6
// 009c068e  680a110000           push 0x110a
// 009c0693  50                   push eax
// 009c0694  ffd3                 call ebx
// 009c0696  8bf0                 mov esi, eax
// 009c0698  85f6                 test esi, esi
// 009c069a  75c4                 jne 0x9c0660
// 009c069c  eb13                 jmp 0x9c06b1
// 009c069e  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c06a1  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c06a4  56                   push esi
// 009c06a5  6a06                 push 6
// 009c06a7  680a110000           push 0x110a
// 009c06ac  51                   push ecx
// 009c06ad  ffd3                 call ebx
// 009c06af  8bf0                 mov esi, eax
// 009c06b1  5d                   pop ebp
// 009c06b2  837c241800           cmp dword ptr [esp + 0x18], 0
// 009c06b7  7439                 je 0x9c06f2
// 009c06b9  85f6                 test esi, esi
// 009c06bb  7435                 je 0x9c06f2
// 009c06bd  8d4900               lea ecx, [ecx]
// 009c06c0  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c06c3  6a02                 push 2
// 009c06c5  56                   push esi
// 009c06c6  e847910d00           call 0xa99812
// 009c06cb  a802                 test al, 2
// 009c06cd  740c                 je 0x9c06db
// 009c06cf  6a02                 push 2
// 009c06d1  6a00                 push 0
// 009c06d3  56                   push esi
// 009c06d4  8bcf                 mov ecx, edi
// 009c06d6  e805f9ffff           call 0x9bffe0
// 009c06db  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c06de  8b5020               mov edx, dword ptr [eax + 0x20]
// 009c06e1  56                   push esi
// 009c06e2  6a06                 push 6
// 009c06e4  680a110000           push 0x110a
// 009c06e9  52                   push edx
// 009c06ea  ffd3                 call ebx
// 009c06ec  8bf0                 mov esi, eax
// 009c06ee  85f6                 test esi, esi
// 009c06f0  75ce                 jne 0x9c06c0
// 009c06f2  5f                   pop edi
// 009c06f3  5e                   pop esi
// 009c06f4  5b                   pop ebx
// 009c06f5  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?SelectItems@CXTPTreeBase@@QAEXPAU_TREEITEM@@0H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
