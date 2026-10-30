// roc 2009-06 007a3de0  unit: CXTPOffice2007Theme  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a3de0
//
// 007a3de0  8b442418             mov eax, dword ptr [esp + 0x18]
// 007a3de4  8b542414             mov edx, dword ptr [esp + 0x14]
// 007a3de8  53                   push ebx
// 007a3de9  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007a3ded  56                   push esi
// 007a3dee  8b742418             mov esi, dword ptr [esp + 0x18]
// 007a3df2  57                   push edi
// 007a3df3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007a3df7  85c0                 test eax, eax
// 007a3df9  7523                 jne 0x7a3e1e
// 007a3dfb  837c241000           cmp dword ptr [esp + 0x10], 0
// 007a3e00  751c                 jne 0x7a3e1e
// 007a3e02  85ff                 test edi, edi
// 007a3e04  7418                 je 0x7a3e1e
// 007a3e06  85db                 test ebx, ebx
// 007a3e08  7514                 jne 0x7a3e1e
// 007a3e0a  85f6                 test esi, esi
// 007a3e0c  7510                 jne 0x7a3e1e
// 007a3e0e  85d2                 test edx, edx
// 007a3e10  750c                 jne 0x7a3e1e
// 007a3e12  8b81f8050000         mov eax, dword ptr [ecx + 0x5f8]
// 007a3e18  5f                   pop edi
// 007a3e19  5e                   pop esi
// 007a3e1a  5b                   pop ebx
// 007a3e1b  c21c00               ret 0x1c
// 007a3e1e  55                   push ebp
// 007a3e1f  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007a3e23  55                   push ebp
// 007a3e24  50                   push eax
// 007a3e25  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007a3e29  52                   push edx
// 007a3e2a  56                   push esi
// 007a3e2b  57                   push edi
// 007a3e2c  53                   push ebx
// 007a3e2d  50                   push eax
// 007a3e2e  e8fd940000           call 0x7ad330
// 007a3e33  5d                   pop ebp
// 007a3e34  5f                   pop edi
// 007a3e35  5e                   pop esi
// 007a3e36  5b                   pop ebx
// 007a3e37  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?GetRectangleTextColor@CXTPOffice2007Theme@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
