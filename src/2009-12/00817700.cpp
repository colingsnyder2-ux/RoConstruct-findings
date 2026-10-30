// roc 2009-12 00817700  unit: MyXTPCommandBars  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00817700
//
// 00817700  56                   push esi
// 00817701  57                   push edi
// 00817702  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00817706  8bf1                 mov esi, ecx
// 00817708  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0081770b  8d44240c             lea eax, [esp + 0xc]
// 0081770f  50                   push eax
// 00817710  57                   push edi
// 00817711  81c18c000000         add ecx, 0x8c
// 00817717  e86452ffff           call 0x80c980
// 0081771c  85c0                 test eax, eax
// 0081771e  7505                 jne 0x817725
// 00817720  5f                   pop edi
// 00817721  5e                   pop esi
// 00817722  c20400               ret 4
// 00817725  8d4c240c             lea ecx, [esp + 0xc]
// 00817729  51                   push ecx
// 0081772a  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0081772d  57                   push edi
// 0081772e  81c1a8000000         add ecx, 0xa8
// 00817734  e84752ffff           call 0x80c980
// 00817739  f7d8                 neg eax
// 0081773b  1bc0                 sbb eax, eax
// 0081773d  5f                   pop edi
// 0081773e  40                   inc eax
// 0081773f  5e                   pop esi
// 00817740  c20400               ret 4
// copied from an identical function in another client (function ?IsCommandHidden@CXTPCommandBars@@UAEHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp