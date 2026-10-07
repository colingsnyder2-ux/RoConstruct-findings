// roc 2008-06 00739d40  unit: CXTPOffice2007Theme  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00739d40
//
// 00739d40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00739d44  56                   push esi
// 00739d45  8b742408             mov esi, dword ptr [esp + 8]
// 00739d49  8d4801               lea ecx, [eax + 1]
// 00739d4c  51                   push ecx
// 00739d4d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00739d51  8d5101               lea edx, [ecx + 1]
// 00739d54  52                   push edx
// 00739d55  50                   push eax
// 00739d56  51                   push ecx
// 00739d57  8bce                 mov ecx, esi
// 00739d59  e8da270800           call 0x7bc538
// 00739d5e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00739d62  8d4801               lea ecx, [eax + 1]
// 00739d65  51                   push ecx
// 00739d66  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00739d6a  51                   push ecx
// 00739d6b  49                   dec ecx
// 00739d6c  50                   push eax
// 00739d6d  51                   push ecx
// 00739d6e  8bce                 mov ecx, esi
// 00739d70  e8c3270800           call 0x7bc538
// 00739d75  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00739d79  8b442418             mov eax, dword ptr [esp + 0x18]
// 00739d7d  50                   push eax
// 00739d7e  8d5101               lea edx, [ecx + 1]
// 00739d81  52                   push edx
// 00739d82  48                   dec eax
// 00739d83  50                   push eax
// 00739d84  51                   push ecx
// 00739d85  8bce                 mov ecx, esi
// 00739d87  e8ac270800           call 0x7bc538
// 00739d8c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00739d90  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00739d94  50                   push eax
// 00739d95  51                   push ecx
// 00739d96  48                   dec eax
// 00739d97  49                   dec ecx
// 00739d98  50                   push eax
// 00739d99  51                   push ecx
// 00739d9a  8bce                 mov ecx, esi
// 00739d9c  e897270800           call 0x7bc538
// 00739da1  5e                   pop esi
// 00739da2  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?ExcludeCorners@CXTPOffice2003Theme@XTPPaintThemes@@QAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
