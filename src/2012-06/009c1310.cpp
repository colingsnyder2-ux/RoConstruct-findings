// roc 2012-06 009c1310  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1310
//
// 009c1310  83ec10               sub esp, 0x10
// 009c1313  57                   push edi
// 009c1314  8bf9                 mov edi, ecx
// 009c1316  837f0400             cmp dword ptr [edi + 4], 0
// 009c131a  7444                 je 0x9c1360
// 009c131c  56                   push esi
// 009c131d  e8cef0ffff           call 0x9c03f0
// 009c1322  8bf0                 mov esi, eax
// 009c1324  85f6                 test esi, esi
// 009c1326  7437                 je 0x9c135f
// 009c1328  53                   push ebx
// 009c1329  8b1dec3bb200         mov ebx, dword ptr [0xb23bec]
// 009c132f  90                   nop 
// 009c1330  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c1333  6a01                 push 1
// 009c1335  8d442410             lea eax, [esp + 0x10]
// 009c1339  50                   push eax
// 009c133a  56                   push esi
// 009c133b  e83417fcff           call 0x982a74
// 009c1340  8b5734               mov edx, dword ptr [edi + 0x34]
// 009c1343  8b4220               mov eax, dword ptr [edx + 0x20]
// 009c1346  6a01                 push 1
// 009c1348  8d4c2410             lea ecx, [esp + 0x10]
// 009c134c  51                   push ecx
// 009c134d  50                   push eax
// 009c134e  ffd3                 call ebx
// 009c1350  56                   push esi
// 009c1351  8bcf                 mov ecx, edi
// 009c1353  e8e8f0ffff           call 0x9c0440
// 009c1358  8bf0                 mov esi, eax
// 009c135a  85f6                 test esi, esi
// 009c135c  75d2                 jne 0x9c1330
// 009c135e  5b                   pop ebx
// 009c135f  5e                   pop esi
// 009c1360  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c1363  e87613fcff           call 0x9826de
// 009c1368  5f                   pop edi
// 009c1369  83c410               add esp, 0x10
// 009c136c  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnSetFocus@CXTPTreeBase@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
