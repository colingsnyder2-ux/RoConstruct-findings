// roc 2008-06 006dcfd0  unit: CRobloxTreeCtrl  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dcfd0
//
// 006dcfd0  53                   push ebx
// 006dcfd1  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 006dcfd7  56                   push esi
// 006dcfd8  57                   push edi
// 006dcfd9  6a00                 push 0
// 006dcfdb  8bf9                 mov edi, ecx
// 006dcfdd  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dcfe0  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dcfe3  6a00                 push 0
// 006dcfe5  680a110000           push 0x110a
// 006dcfea  50                   push eax
// 006dcfeb  ffd3                 call ebx
// 006dcfed  8bf0                 mov esi, eax
// 006dcfef  85f6                 test esi, esi
// 006dcff1  0f84db000000         je 0x6dd0d2
// 006dcff7  55                   push ebp
// 006dcff8  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006dcffc  8d642400             lea esp, [esp]
// 006dd000  8b442414             mov eax, dword ptr [esp + 0x14]
// 006dd004  3bf0                 cmp esi, eax
// 006dd006  7442                 je 0x6dd04a
// 006dd008  3bf5                 cmp esi, ebp
// 006dd00a  743e                 je 0x6dd04a
// 006dd00c  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006dd011  741b                 je 0x6dd02e
// 006dd013  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006dd016  6a02                 push 2
// 006dd018  56                   push esi
// 006dd019  e8fef20d00           call 0x7bc31c
// 006dd01e  a802                 test al, 2
// 006dd020  740c                 je 0x6dd02e
// 006dd022  6a02                 push 2
// 006dd024  6a00                 push 0
// 006dd026  56                   push esi
// 006dd027  8bcf                 mov ecx, edi
// 006dd029  e8d2f9ffff           call 0x6dca00
// 006dd02e  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dd031  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dd034  56                   push esi
// 006dd035  6a06                 push 6
// 006dd037  680a110000           push 0x110a
// 006dd03c  51                   push ecx
// 006dd03d  ffd3                 call ebx
// 006dd03f  8bf0                 mov esi, eax
// 006dd041  85f6                 test esi, esi
// 006dd043  75bb                 jne 0x6dd000
// 006dd045  e987000000           jmp 0x6dd0d1
// 006dd04a  3bc5                 cmp eax, ebp
// 006dd04c  742e                 je 0x6dd07c
// 006dd04e  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006dd051  6a02                 push 2
// 006dd053  56                   push esi
// 006dd054  e8c3f20d00           call 0x7bc31c
// 006dd059  a802                 test al, 2
// 006dd05b  750c                 jne 0x6dd069
// 006dd05d  6a02                 push 2
// 006dd05f  6a02                 push 2
// 006dd061  56                   push esi
// 006dd062  8bcf                 mov ecx, edi
// 006dd064  e897f9ffff           call 0x6dca00
// 006dd069  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dd06c  8b5020               mov edx, dword ptr [eax + 0x20]
// 006dd06f  56                   push esi
// 006dd070  6a06                 push 6
// 006dd072  680a110000           push 0x110a
// 006dd077  52                   push edx
// 006dd078  ffd3                 call ebx
// 006dd07a  8bf0                 mov esi, eax
// 006dd07c  85f6                 test esi, esi
// 006dd07e  7451                 je 0x6dd0d1
// 006dd080  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006dd083  6a02                 push 2
// 006dd085  56                   push esi
// 006dd086  e891f20d00           call 0x7bc31c
// 006dd08b  a802                 test al, 2
// 006dd08d  750c                 jne 0x6dd09b
// 006dd08f  6a02                 push 2
// 006dd091  6a02                 push 2
// 006dd093  56                   push esi
// 006dd094  8bcf                 mov ecx, edi
// 006dd096  e865f9ffff           call 0x6dca00
// 006dd09b  3b742414             cmp esi, dword ptr [esp + 0x14]
// 006dd09f  741d                 je 0x6dd0be
// 006dd0a1  3bf5                 cmp esi, ebp
// 006dd0a3  7419                 je 0x6dd0be
// 006dd0a5  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dd0a8  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dd0ab  56                   push esi
// 006dd0ac  6a06                 push 6
// 006dd0ae  680a110000           push 0x110a
// 006dd0b3  50                   push eax
// 006dd0b4  ffd3                 call ebx
// 006dd0b6  8bf0                 mov esi, eax
// 006dd0b8  85f6                 test esi, esi
// 006dd0ba  75c4                 jne 0x6dd080
// 006dd0bc  eb13                 jmp 0x6dd0d1
// 006dd0be  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dd0c1  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dd0c4  56                   push esi
// 006dd0c5  6a06                 push 6
// 006dd0c7  680a110000           push 0x110a
// 006dd0cc  51                   push ecx
// 006dd0cd  ffd3                 call ebx
// 006dd0cf  8bf0                 mov esi, eax
// 006dd0d1  5d                   pop ebp
// 006dd0d2  837c241800           cmp dword ptr [esp + 0x18], 0
// 006dd0d7  7439                 je 0x6dd112
// 006dd0d9  85f6                 test esi, esi
// 006dd0db  7435                 je 0x6dd112
// 006dd0dd  8d4900               lea ecx, [ecx]
// 006dd0e0  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006dd0e3  6a02                 push 2
// 006dd0e5  56                   push esi
// 006dd0e6  e831f20d00           call 0x7bc31c
// 006dd0eb  a802                 test al, 2
// 006dd0ed  740c                 je 0x6dd0fb
// 006dd0ef  6a02                 push 2
// 006dd0f1  6a00                 push 0
// 006dd0f3  56                   push esi
// 006dd0f4  8bcf                 mov ecx, edi
// 006dd0f6  e805f9ffff           call 0x6dca00
// 006dd0fb  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dd0fe  8b5020               mov edx, dword ptr [eax + 0x20]
// 006dd101  56                   push esi
// 006dd102  6a06                 push 6
// 006dd104  680a110000           push 0x110a
// 006dd109  52                   push edx
// 006dd10a  ffd3                 call ebx
// 006dd10c  8bf0                 mov esi, eax
// 006dd10e  85f6                 test esi, esi
// 006dd110  75ce                 jne 0x6dd0e0
// 006dd112  5f                   pop edi
// 006dd113  5e                   pop esi
// 006dd114  5b                   pop ebx
// 006dd115  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?SelectItems@CXTTreeBase@@QAEXPAU_TREEITEM@@0H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
