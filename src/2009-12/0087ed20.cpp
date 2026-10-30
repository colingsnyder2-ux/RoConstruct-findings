// roc 2009-12 0087ed20  unit: CXTPOffice2007Theme  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087ed20
//
// 0087ed20  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087ed24  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087ed28  53                   push ebx
// 0087ed29  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0087ed2d  56                   push esi
// 0087ed2e  8b742418             mov esi, dword ptr [esp + 0x18]
// 0087ed32  57                   push edi
// 0087ed33  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0087ed37  85c0                 test eax, eax
// 0087ed39  7523                 jne 0x87ed5e
// 0087ed3b  837c241000           cmp dword ptr [esp + 0x10], 0
// 0087ed40  751c                 jne 0x87ed5e
// 0087ed42  85ff                 test edi, edi
// 0087ed44  7418                 je 0x87ed5e
// 0087ed46  85db                 test ebx, ebx
// 0087ed48  7514                 jne 0x87ed5e
// 0087ed4a  85f6                 test esi, esi
// 0087ed4c  7510                 jne 0x87ed5e
// 0087ed4e  85d2                 test edx, edx
// 0087ed50  750c                 jne 0x87ed5e
// 0087ed52  8b81f8050000         mov eax, dword ptr [ecx + 0x5f8]
// 0087ed58  5f                   pop edi
// 0087ed59  5e                   pop esi
// 0087ed5a  5b                   pop ebx
// 0087ed5b  c21c00               ret 0x1c
// 0087ed5e  55                   push ebp
// 0087ed5f  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0087ed63  55                   push ebp
// 0087ed64  50                   push eax
// 0087ed65  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087ed69  52                   push edx
// 0087ed6a  56                   push esi
// 0087ed6b  57                   push edi
// 0087ed6c  53                   push ebx
// 0087ed6d  50                   push eax
// 0087ed6e  e87d940000           call 0x8881f0
// 0087ed73  5d                   pop ebp
// 0087ed74  5f                   pop edi
// 0087ed75  5e                   pop esi
// 0087ed76  5b                   pop ebx
// 0087ed77  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?GetRectangleTextColor@CXTPOffice2007Theme@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
