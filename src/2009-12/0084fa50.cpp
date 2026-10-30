// roc 2009-12 0084fa50  unit: CXTPPropertyGrid  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084fa50
//
// 0084fa50  83ec10               sub esp, 0x10
// 0084fa53  56                   push esi
// 0084fa54  57                   push edi
// 0084fa55  8bf9                 mov edi, ecx
// 0084fa57  8d4c2408             lea ecx, [esp + 8]
// 0084fa5b  e8d0b7ffff           call 0x84b230
// 0084fa60  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0084fa64  85f6                 test esi, esi
// 0084fa66  7513                 jne 0x84fa7b
// 0084fa68  8bb758010000         mov esi, dword ptr [edi + 0x158]
// 0084fa6e  f7de                 neg esi
// 0084fa70  1bf6                 sbb esi, esi
// 0084fa72  83e610               and esi, 0x10
// 0084fa75  81c610010000         add esi, 0x110
// 0084fa7b  8bc6                 mov eax, esi
// 0084fa7d  c1e805               shr eax, 5
// 0084fa80  83e001               and eax, 1
// 0084fa83  8bcf                 mov ecx, edi
// 0084fa85  898758010000         mov dword ptr [edi + 0x158], eax
// 0084fa8b  e8f0dfffff           call 0x84da80
// 0084fa90  8b10                 mov edx, dword ptr [eax]
// 0084fa92  8b5260               mov edx, dword ptr [edx + 0x60]
// 0084fa95  6a00                 push 0
// 0084fa97  6a00                 push 0
// 0084fa99  57                   push edi
// 0084fa9a  8d4c2414             lea ecx, [esp + 0x14]
// 0084fa9e  51                   push ecx
// 0084fa9f  81ce01002156         or esi, 0x56210001
// 0084faa5  56                   push esi
// 0084faa6  6a00                 push 0
// 0084faa8  6888269f00           push 0x9f2688
// 0084faad  6a00                 push 0
// 0084faaf  8bc8                 mov ecx, eax
// 0084fab1  ffd2                 call edx
// 0084fab3  85c0                 test eax, eax
// 0084fab5  7508                 jne 0x84fabf
// 0084fab7  5f                   pop edi
// 0084fab8  5e                   pop esi
// 0084fab9  83c410               add esp, 0x10
// 0084fabc  c20400               ret 4
// 0084fabf  8bcf                 mov ecx, edi
// 0084fac1  e8badfffff           call 0x84da80
// 0084fac6  8bc8                 mov ecx, eax
// 0084fac8  e8338a0100           call 0x868500
// 0084facd  8bcf                 mov ecx, edi
// 0084facf  e88cfcffff           call 0x84f760
// 0084fad4  5f                   pop edi
// 0084fad5  b801000000           mov eax, 1
// 0084fada  5e                   pop esi
// 0084fadb  83c410               add esp, 0x10
// 0084fade  c20400               ret 4
// copied from an identical function in another client (function ?CreateGridView@CXTPPropertyGrid@@IAEHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp