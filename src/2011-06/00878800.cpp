// roc 2011-06 00878800  unit: CXTPPropertyGridView  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878800
//
// 00878800  53                   push ebx
// 00878801  55                   push ebp
// 00878802  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00878806  56                   push esi
// 00878807  8bf1                 mov esi, ecx
// 00878809  57                   push edi
// 0087880a  8d86e8000000         lea eax, [esi + 0xe8]
// 00878810  33ff                 xor edi, edi
// 00878812  3bc7                 cmp eax, edi
// 00878814  7436                 je 0x87884c
// 00878816  397820               cmp dword ptr [eax + 0x20], edi
// 00878819  7431                 je 0x87884c
// 0087881b  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 00878821  50                   push eax
// 00878822  ff15201ca400         call dword ptr [0xa41c20]
// 00878828  85c0                 test eax, eax
// 0087882a  7420                 je 0x87884c
// 0087882c  393df08bd100         cmp dword ptr [0xd18bf0], edi
// 00878832  7518                 jne 0x87884c
// 00878834  55                   push ebp
// 00878835  8bce                 mov ecx, esi
// 00878837  c705f08bd10001000000 mov dword ptr [0xd18bf0], 1
// 00878841  e8aaf6ffff           call 0x877ef0
// 00878846  893df08bd100         mov dword ptr [0xd18bf0], edi
// 0087884c  81fda3020000         cmp ebp, 0x2a3
// 00878852  751a                 jne 0x87886e
// 00878854  39be58010000         cmp dword ptr [esi + 0x158], edi
// 0087885a  7412                 je 0x87886e
// 0087885c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0087885f  57                   push edi
// 00878860  57                   push edi
// 00878861  51                   push ecx
// 00878862  89be58010000         mov dword ptr [esi + 0x158], edi
// 00878868  ff15ec19a400         call dword ptr [0xa419ec]
// 0087886e  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 00878874  8b8a6c010000         mov ecx, dword ptr [edx + 0x16c]
// 0087887a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0087887e  3bcf                 cmp ecx, edi
// 00878880  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00878884  7409                 je 0x87888f
// 00878886  57                   push edi
// 00878887  53                   push ebx
// 00878888  55                   push ebp
// 00878889  56                   push esi
// 0087888a  e821c4ffff           call 0x874cb0
// 0087888f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00878893  50                   push eax
// 00878894  57                   push edi
// 00878895  53                   push ebx
// 00878896  55                   push ebp
// 00878897  8bce                 mov ecx, esi
// 00878899  e83a19f9ff           call 0x80a1d8
// 0087889e  5f                   pop edi
// 0087889f  5e                   pop esi
// 008788a0  5d                   pop ebp
// 008788a1  5b                   pop ebx
// 008788a2  c21000               ret 0x10
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnWndMsg@CXTPPropertyGridView@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
