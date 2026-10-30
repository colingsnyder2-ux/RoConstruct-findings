// roc 2009-06 0080ecd0  unit: CXTPRibbonGroupControlPopup  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080ecd0
//
// 0080ecd0  8b442404             mov eax, dword ptr [esp + 4]
// 0080ecd4  57                   push edi
// 0080ecd5  8bf9                 mov edi, ecx
// 0080ecd7  85c0                 test eax, eax
// 0080ecd9  7c3f                 jl 0x80ed1a
// 0080ecdb  3b474c               cmp eax, dword ptr [edi + 0x4c]
// 0080ecde  7d3a                 jge 0x80ed1a
// 0080ece0  3b474c               cmp eax, dword ptr [edi + 0x4c]
// 0080ece3  8d4f44               lea ecx, [edi + 0x44]
// 0080ece6  7d36                 jge 0x80ed1e
// 0080ece8  8b5104               mov edx, dword ptr [ecx + 4]
// 0080eceb  56                   push esi
// 0080ecec  8b3482               mov esi, dword ptr [edx + eax*4]
// 0080ecef  6a01                 push 1
// 0080ecf1  50                   push eax
// 0080ecf2  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 0080ecfc  e85f39f4ff           call 0x752660
// 0080ed01  8b475c               mov eax, dword ptr [edi + 0x5c]
// 0080ed04  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 0080ed0a  8b11                 mov edx, dword ptr [ecx]
// 0080ed0c  8b4258               mov eax, dword ptr [edx + 0x58]
// 0080ed0f  56                   push esi
// 0080ed10  ffd0                 call eax
// 0080ed12  8bce                 mov ecx, esi
// 0080ed14  e88fa2f0ff           call 0x718fa8
// 0080ed19  5e                   pop esi
// 0080ed1a  5f                   pop edi
// 0080ed1b  c20400               ret 4
// 0080ed1e  e8c19ff0ff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAt@CXTPRibbonGroup@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp