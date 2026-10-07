// roc 2008-06 00735710  unit: CXTPOffice2007Theme  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00735710
//
// 00735710  8b442418             mov eax, dword ptr [esp + 0x18]
// 00735714  8b542414             mov edx, dword ptr [esp + 0x14]
// 00735718  53                   push ebx
// 00735719  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0073571d  56                   push esi
// 0073571e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00735722  57                   push edi
// 00735723  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00735727  85c0                 test eax, eax
// 00735729  7523                 jne 0x73574e
// 0073572b  837c241000           cmp dword ptr [esp + 0x10], 0
// 00735730  751c                 jne 0x73574e
// 00735732  85ff                 test edi, edi
// 00735734  7418                 je 0x73574e
// 00735736  85db                 test ebx, ebx
// 00735738  7514                 jne 0x73574e
// 0073573a  85f6                 test esi, esi
// 0073573c  7510                 jne 0x73574e
// 0073573e  85d2                 test edx, edx
// 00735740  750c                 jne 0x73574e
// 00735742  8b81f8050000         mov eax, dword ptr [ecx + 0x5f8]
// 00735748  5f                   pop edi
// 00735749  5e                   pop esi
// 0073574a  5b                   pop ebx
// 0073574b  c21c00               ret 0x1c
// 0073574e  55                   push ebp
// 0073574f  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00735753  55                   push ebp
// 00735754  50                   push eax
// 00735755  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00735759  52                   push edx
// 0073575a  56                   push esi
// 0073575b  57                   push edi
// 0073575c  53                   push ebx
// 0073575d  50                   push eax
// 0073575e  e8fd940000           call 0x73ec60
// 00735763  5d                   pop ebp
// 00735764  5f                   pop edi
// 00735765  5e                   pop esi
// 00735766  5b                   pop ebx
// 00735767  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?GetRectangleTextColor@CXTPOffice2007Theme@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
