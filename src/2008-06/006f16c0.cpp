// roc 2008-06 006f16c0  unit: CXTPPopupBar::CControlExpandButton  size: 331 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f16c0
//
// 006f16c0  53                   push ebx
// 006f16c1  55                   push ebp
// 006f16c2  56                   push esi
// 006f16c3  57                   push edi
// 006f16c4  8bf1                 mov esi, ecx
// 006f16c6  e8f53cfcff           call 0x6b53c0
// 006f16cb  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 006f16d1  c706148b8500         mov dword ptr [esi], 0x858b14
// 006f16d7  c74654048b8500       mov dword ptr [esi + 0x54], 0x858b04
// 006f16de  c7465ca48a8500       mov dword ptr [esi + 0x5c], 0x858aa4
// 006f16e5  ff15043f8000         call dword ptr [0x803f04]
// 006f16eb  8b2d7c2c8000         mov ebp, dword ptr [0x802c7c]
// 006f16f1  8d9e24020000         lea ebx, [esi + 0x224]
// 006f16f7  53                   push ebx
// 006f16f8  897314               mov dword ptr [ebx + 0x14], esi
// 006f16fb  c7431889130000       mov dword ptr [ebx + 0x18], 0x1389
// 006f1702  ffd5                 call ebp
// 006f1704  33ff                 xor edi, edi
// 006f1706  897b10               mov dword ptr [ebx + 0x10], edi
// 006f1709  8d9e40020000         lea ebx, [esi + 0x240]
// 006f170f  53                   push ebx
// 006f1710  897314               mov dword ptr [ebx + 0x14], esi
// 006f1713  c743188a130000       mov dword ptr [ebx + 0x18], 0x138a
// 006f171a  ffd5                 call ebp
// 006f171c  897b10               mov dword ptr [ebx + 0x10], edi
// 006f171f  89be20020000         mov dword ptr [esi + 0x220], edi
// 006f1725  89be1c020000         mov dword ptr [esi + 0x21c], edi
// 006f172b  89be18020000         mov dword ptr [esi + 0x218], edi
// 006f1731  33c0                 xor eax, eax
// 006f1733  898684010000         mov dword ptr [esi + 0x184], eax
// 006f1739  8d868c010000         lea eax, [esi + 0x18c]
// 006f173f  33c9                 xor ecx, ecx
// 006f1741  50                   push eax
// 006f1742  c786f800000002000000 mov dword ptr [esi + 0xf8], 2
// 006f174c  c7860001000005000000 mov dword ptr [esi + 0x100], 5
// 006f1756  89be80010000         mov dword ptr [esi + 0x180], edi
// 006f175c  898e88010000         mov dword ptr [esi + 0x188], ecx
// 006f1762  ffd5                 call ebp
// 006f1764  8d8eb4010000         lea ecx, [esi + 0x1b4]
// 006f176a  51                   push ecx
// 006f176b  ffd5                 call ebp
// 006f176d  8d96c4010000         lea edx, [esi + 0x1c4]
// 006f1773  52                   push edx
// 006f1774  ffd5                 call ebp
// 006f1776  b802000000           mov eax, 2
// 006f177b  898600020000         mov dword ptr [esi + 0x200], eax
// 006f1781  b904000000           mov ecx, 4
// 006f1786  8bd0                 mov edx, eax
// 006f1788  898e04020000         mov dword ptr [esi + 0x204], ecx
// 006f178e  8bd9                 mov ebx, ecx
// 006f1790  33c0                 xor eax, eax
// 006f1792  89bed4010000         mov dword ptr [esi + 0x1d4], edi
// 006f1798  89be9c010000         mov dword ptr [esi + 0x19c], edi
// 006f179e  89bea0010000         mov dword ptr [esi + 0x1a0], edi
// 006f17a4  89beb0010000         mov dword ptr [esi + 0x1b0], edi
// 006f17aa  89bee0010000         mov dword ptr [esi + 0x1e0], edi
// 006f17b0  89bef4010000         mov dword ptr [esi + 0x1f4], edi
// 006f17b6  89bef8010000         mov dword ptr [esi + 0x1f8], edi
// 006f17bc  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 006f17c2  89bec8000000         mov dword ptr [esi + 0xc8], edi
// 006f17c8  89be10020000         mov dword ptr [esi + 0x210], edi
// 006f17ce  89beec010000         mov dword ptr [esi + 0x1ec], edi
// 006f17d4  89bedc010000         mov dword ptr [esi + 0x1dc], edi
// 006f17da  89be14020000         mov dword ptr [esi + 0x214], edi
// 006f17e0  5f                   pop edi
// 006f17e1  899608020000         mov dword ptr [esi + 0x208], edx
// 006f17e7  33c9                 xor ecx, ecx
// 006f17e9  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 006f17ef  899e0c020000         mov dword ptr [esi + 0x20c], ebx
// 006f17f5  c786fc01000001000000 mov dword ptr [esi + 0x1fc], 1
// 006f17ff  898ee8010000         mov dword ptr [esi + 0x1e8], ecx
// 006f1805  8bc6                 mov eax, esi
// 006f1807  5e                   pop esi
// 006f1808  5d                   pop ebp
// 006f1809  5b                   pop ebx
// 006f180a  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ??0CXTPPopupBar@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
