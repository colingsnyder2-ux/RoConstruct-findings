// from server: 100% by auto
// roc 2012-06 009c1370  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1370
//
// 009c1370  83ec10               sub esp, 0x10
// 009c1373  57                   push edi
// 009c1374  8bf9                 mov edi, ecx
// 009c1376  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c1379  e86013fcff           call 0x9826de
// 009c137e  837f0400             cmp dword ptr [edi + 4], 0
// 009c1382  744c                 je 0x9c13d0
// 009c1384  56                   push esi
// 009c1385  8bcf                 mov ecx, edi
// 009c1387  e864f0ffff           call 0x9c03f0
// 009c138c  8bf0                 mov esi, eax
// 009c138e  85f6                 test esi, esi
// 009c1390  743d                 je 0x9c13cf
// 009c1392  53                   push ebx
// 009c1393  8b1dec3bb200         mov ebx, dword ptr [0xb23bec]
// 009c1399  8da42400000000       lea esp, [esp]
// 009c13a0  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c13a3  6a01                 push 1
// 009c13a5  8d442410             lea eax, [esp + 0x10]
// 009c13a9  50                   push eax
// 009c13aa  56                   push esi
// 009c13ab  e8c416fcff           call 0x982a74
// 009c13b0  8b5734               mov edx, dword ptr [edi + 0x34]
// 009c13b3  8b4220               mov eax, dword ptr [edx + 0x20]
// 009c13b6  6a01                 push 1
// 009c13b8  8d4c2410             lea ecx, [esp + 0x10]
// 009c13bc  51                   push ecx
// 009c13bd  50                   push eax
// 009c13be  ffd3                 call ebx
// 009c13c0  56                   push esi
// 009c13c1  8bcf                 mov ecx, edi
// 009c13c3  e878f0ffff           call 0x9c0440
// 009c13c8  8bf0                 mov esi, eax
// 009c13ca  85f6                 test esi, esi
// 009c13cc  75d2                 jne 0x9c13a0
// 009c13ce  5b                   pop ebx
// 009c13cf  5e                   pop esi
// 009c13d0  5f                   pop edi
// 009c13d1  83c410               add esp, 0x10
// 009c13d4  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnKillFocus@CXTPTreeBase@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
