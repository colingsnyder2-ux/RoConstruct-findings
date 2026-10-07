// roc 2011-06 0085bd70  unit: CXTPControlSelector  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085bd70
//
// 0085bd70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085bd74  56                   push esi
// 0085bd75  8b742408             mov esi, dword ptr [esp + 8]
// 0085bd79  8d4801               lea ecx, [eax + 1]
// 0085bd7c  51                   push ecx
// 0085bd7d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085bd81  8d5101               lea edx, [ecx + 1]
// 0085bd84  52                   push edx
// 0085bd85  50                   push eax
// 0085bd86  51                   push ecx
// 0085bd87  8bce                 mov ecx, esi
// 0085bd89  e8a20b1700           call 0x9cc930
// 0085bd8e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085bd92  8d4801               lea ecx, [eax + 1]
// 0085bd95  51                   push ecx
// 0085bd96  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085bd9a  51                   push ecx
// 0085bd9b  49                   dec ecx
// 0085bd9c  50                   push eax
// 0085bd9d  51                   push ecx
// 0085bd9e  8bce                 mov ecx, esi
// 0085bda0  e88b0b1700           call 0x9cc930
// 0085bda5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085bda9  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085bdad  50                   push eax
// 0085bdae  8d5101               lea edx, [ecx + 1]
// 0085bdb1  52                   push edx
// 0085bdb2  48                   dec eax
// 0085bdb3  50                   push eax
// 0085bdb4  51                   push ecx
// 0085bdb5  8bce                 mov ecx, esi
// 0085bdb7  e8740b1700           call 0x9cc930
// 0085bdbc  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085bdc0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085bdc4  50                   push eax
// 0085bdc5  51                   push ecx
// 0085bdc6  48                   dec eax
// 0085bdc7  49                   dec ecx
// 0085bdc8  50                   push eax
// 0085bdc9  51                   push ecx
// 0085bdca  8bce                 mov ecx, esi
// 0085bdcc  e85f0b1700           call 0x9cc930
// 0085bdd1  5e                   pop esi
// 0085bdd2  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPOffice2003Theme.cpp (function ?ExcludeCorners@CXTPOffice2003Theme@@QAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPOffice2003Theme.cpp
