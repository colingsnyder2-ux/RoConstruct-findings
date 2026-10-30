// roc 2011-06 0088f2b0  unit: CXTPOffice2007Theme  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088f2b0
//
// 0088f2b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088f2b4  8b542414             mov edx, dword ptr [esp + 0x14]
// 0088f2b8  53                   push ebx
// 0088f2b9  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0088f2bd  56                   push esi
// 0088f2be  8b742418             mov esi, dword ptr [esp + 0x18]
// 0088f2c2  57                   push edi
// 0088f2c3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0088f2c7  85c0                 test eax, eax
// 0088f2c9  7523                 jne 0x88f2ee
// 0088f2cb  837c241000           cmp dword ptr [esp + 0x10], 0
// 0088f2d0  751c                 jne 0x88f2ee
// 0088f2d2  85ff                 test edi, edi
// 0088f2d4  7418                 je 0x88f2ee
// 0088f2d6  85db                 test ebx, ebx
// 0088f2d8  7514                 jne 0x88f2ee
// 0088f2da  85f6                 test esi, esi
// 0088f2dc  7510                 jne 0x88f2ee
// 0088f2de  85d2                 test edx, edx
// 0088f2e0  750c                 jne 0x88f2ee
// 0088f2e2  8b81f8050000         mov eax, dword ptr [ecx + 0x5f8]
// 0088f2e8  5f                   pop edi
// 0088f2e9  5e                   pop esi
// 0088f2ea  5b                   pop ebx
// 0088f2eb  c21c00               ret 0x1c
// 0088f2ee  55                   push ebp
// 0088f2ef  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0088f2f3  55                   push ebp
// 0088f2f4  50                   push eax
// 0088f2f5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088f2f9  52                   push edx
// 0088f2fa  56                   push esi
// 0088f2fb  57                   push edi
// 0088f2fc  53                   push ebx
// 0088f2fd  50                   push eax
// 0088f2fe  e87d940000           call 0x898780
// 0088f303  5d                   pop ebp
// 0088f304  5f                   pop edi
// 0088f305  5e                   pop esi
// 0088f306  5b                   pop ebx
// 0088f307  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?GetRectangleTextColor@CXTPOffice2007Theme@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
