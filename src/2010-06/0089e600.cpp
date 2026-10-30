// roc 2010-06 0089e600  unit: CXTPRibbonGroupControlPopup  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089e600
//
// 0089e600  8b442404             mov eax, dword ptr [esp + 4]
// 0089e604  57                   push edi
// 0089e605  8bf9                 mov edi, ecx
// 0089e607  85c0                 test eax, eax
// 0089e609  7c3f                 jl 0x89e64a
// 0089e60b  3b474c               cmp eax, dword ptr [edi + 0x4c]
// 0089e60e  7d3a                 jge 0x89e64a
// 0089e610  3b474c               cmp eax, dword ptr [edi + 0x4c]
// 0089e613  8d4f44               lea ecx, [edi + 0x44]
// 0089e616  7d36                 jge 0x89e64e
// 0089e618  8b5104               mov edx, dword ptr [ecx + 4]
// 0089e61b  56                   push esi
// 0089e61c  8b3482               mov esi, dword ptr [edx + eax*4]
// 0089e61f  6a01                 push 1
// 0089e621  50                   push eax
// 0089e622  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 0089e62c  e80fa4f1ff           call 0x7b8a40
// 0089e631  8b475c               mov eax, dword ptr [edi + 0x5c]
// 0089e634  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 0089e63a  8b11                 mov edx, dword ptr [ecx]
// 0089e63c  8b4258               mov eax, dword ptr [edx + 0x58]
// 0089e63f  56                   push esi
// 0089e640  ffd0                 call eax
// 0089e642  8bce                 mov ecx, esi
// 0089e644  e8d398f0ff           call 0x7a7f1c
// 0089e649  5e                   pop esi
// 0089e64a  5f                   pop edi
// 0089e64b  c20400               ret 4
// 0089e64e  e8f995f0ff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAt@CXTPRibbonGroup@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp