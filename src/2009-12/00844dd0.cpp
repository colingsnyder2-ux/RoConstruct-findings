// roc 2009-12 00844dd0  unit: CXTPPopupBar::CControlExpandButton  size: 331 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00844dd0
//
// 00844dd0  53                   push ebx
// 00844dd1  55                   push ebp
// 00844dd2  56                   push esi
// 00844dd3  57                   push edi
// 00844dd4  8bf1                 mov esi, ecx
// 00844dd6  e895fcfbff           call 0x804a70
// 00844ddb  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00844de1  c70614a09f00         mov dword ptr [esi], 0x9fa014
// 00844de7  c7465404a09f00       mov dword ptr [esi + 0x54], 0x9fa004
// 00844dee  c7465ca49f9f00       mov dword ptr [esi + 0x5c], 0x9f9fa4
// 00844df5  ff1574de9800         call dword ptr [0x98de74]
// 00844dfb  8b2d9cca9800         mov ebp, dword ptr [0x98ca9c]
// 00844e01  8d9e24020000         lea ebx, [esi + 0x224]
// 00844e07  53                   push ebx
// 00844e08  897314               mov dword ptr [ebx + 0x14], esi
// 00844e0b  c7431889130000       mov dword ptr [ebx + 0x18], 0x1389
// 00844e12  ffd5                 call ebp
// 00844e14  33ff                 xor edi, edi
// 00844e16  897b10               mov dword ptr [ebx + 0x10], edi
// 00844e19  8d9e40020000         lea ebx, [esi + 0x240]
// 00844e1f  53                   push ebx
// 00844e20  897314               mov dword ptr [ebx + 0x14], esi
// 00844e23  c743188a130000       mov dword ptr [ebx + 0x18], 0x138a
// 00844e2a  ffd5                 call ebp
// 00844e2c  897b10               mov dword ptr [ebx + 0x10], edi
// 00844e2f  89be20020000         mov dword ptr [esi + 0x220], edi
// 00844e35  89be1c020000         mov dword ptr [esi + 0x21c], edi
// 00844e3b  89be18020000         mov dword ptr [esi + 0x218], edi
// 00844e41  33c0                 xor eax, eax
// 00844e43  898684010000         mov dword ptr [esi + 0x184], eax
// 00844e49  8d868c010000         lea eax, [esi + 0x18c]
// 00844e4f  33c9                 xor ecx, ecx
// 00844e51  50                   push eax
// 00844e52  c786f800000002000000 mov dword ptr [esi + 0xf8], 2
// 00844e5c  c7860001000005000000 mov dword ptr [esi + 0x100], 5
// 00844e66  89be80010000         mov dword ptr [esi + 0x180], edi
// 00844e6c  898e88010000         mov dword ptr [esi + 0x188], ecx
// 00844e72  ffd5                 call ebp
// 00844e74  8d8eb4010000         lea ecx, [esi + 0x1b4]
// 00844e7a  51                   push ecx
// 00844e7b  ffd5                 call ebp
// 00844e7d  8d96c4010000         lea edx, [esi + 0x1c4]
// 00844e83  52                   push edx
// 00844e84  ffd5                 call ebp
// 00844e86  b802000000           mov eax, 2
// 00844e8b  898600020000         mov dword ptr [esi + 0x200], eax
// 00844e91  b904000000           mov ecx, 4
// 00844e96  8bd0                 mov edx, eax
// 00844e98  898e04020000         mov dword ptr [esi + 0x204], ecx
// 00844e9e  8bd9                 mov ebx, ecx
// 00844ea0  33c0                 xor eax, eax
// 00844ea2  89bed4010000         mov dword ptr [esi + 0x1d4], edi
// 00844ea8  89be9c010000         mov dword ptr [esi + 0x19c], edi
// 00844eae  89bea0010000         mov dword ptr [esi + 0x1a0], edi
// 00844eb4  89beb0010000         mov dword ptr [esi + 0x1b0], edi
// 00844eba  89bee0010000         mov dword ptr [esi + 0x1e0], edi
// 00844ec0  89bef4010000         mov dword ptr [esi + 0x1f4], edi
// 00844ec6  89bef8010000         mov dword ptr [esi + 0x1f8], edi
// 00844ecc  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 00844ed2  89bec8000000         mov dword ptr [esi + 0xc8], edi
// 00844ed8  89be10020000         mov dword ptr [esi + 0x210], edi
// 00844ede  89beec010000         mov dword ptr [esi + 0x1ec], edi
// 00844ee4  89bedc010000         mov dword ptr [esi + 0x1dc], edi
// 00844eea  89be14020000         mov dword ptr [esi + 0x214], edi
// 00844ef0  5f                   pop edi
// 00844ef1  899608020000         mov dword ptr [esi + 0x208], edx
// 00844ef7  33c9                 xor ecx, ecx
// 00844ef9  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 00844eff  899e0c020000         mov dword ptr [esi + 0x20c], ebx
// 00844f05  c786fc01000001000000 mov dword ptr [esi + 0x1fc], 1
// 00844f0f  898ee8010000         mov dword ptr [esi + 0x1e8], ecx
// 00844f15  8bc6                 mov eax, esi
// 00844f17  5e                   pop esi
// 00844f18  5d                   pop ebp
// 00844f19  5b                   pop ebx
// 00844f1a  c3                   ret 
// copied from an identical function in another client (function ??0CXTPPopupBar@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp