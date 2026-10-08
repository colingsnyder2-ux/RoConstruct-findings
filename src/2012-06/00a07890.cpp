// roc 2012-06 00a07890  unit: CXTPOffice2007Theme  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a07890
//
// 00a07890  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a07894  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a07898  53                   push ebx
// 00a07899  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00a0789d  56                   push esi
// 00a0789e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a078a2  57                   push edi
// 00a078a3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a078a7  85c0                 test eax, eax
// 00a078a9  7523                 jne 0xa078ce
// 00a078ab  837c241000           cmp dword ptr [esp + 0x10], 0
// 00a078b0  751c                 jne 0xa078ce
// 00a078b2  85ff                 test edi, edi
// 00a078b4  7418                 je 0xa078ce
// 00a078b6  85db                 test ebx, ebx
// 00a078b8  7514                 jne 0xa078ce
// 00a078ba  85f6                 test esi, esi
// 00a078bc  7510                 jne 0xa078ce
// 00a078be  85d2                 test edx, edx
// 00a078c0  750c                 jne 0xa078ce
// 00a078c2  8b81f8050000         mov eax, dword ptr [ecx + 0x5f8]
// 00a078c8  5f                   pop edi
// 00a078c9  5e                   pop esi
// 00a078ca  5b                   pop ebx
// 00a078cb  c21c00               ret 0x1c
// 00a078ce  55                   push ebp
// 00a078cf  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a078d3  55                   push ebp
// 00a078d4  50                   push eax
// 00a078d5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a078d9  52                   push edx
// 00a078da  56                   push esi
// 00a078db  57                   push edi
// 00a078dc  53                   push ebx
// 00a078dd  50                   push eax
// 00a078de  e87d940000           call 0xa10d60
// 00a078e3  5d                   pop ebp
// 00a078e4  5f                   pop edi
// 00a078e5  5e                   pop esi
// 00a078e6  5b                   pop ebx
// 00a078e7  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?GetRectangleTextColor@CXTPOffice2007Theme@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
