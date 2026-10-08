// from server: 100% by auto
// roc 2012-06 009d4150  unit: CXTPControlSelector  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d4150
//
// 009d4150  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009d4154  56                   push esi
// 009d4155  8b742408             mov esi, dword ptr [esp + 8]
// 009d4159  8d4801               lea ecx, [eax + 1]
// 009d415c  51                   push ecx
// 009d415d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009d4161  8d5101               lea edx, [ecx + 1]
// 009d4164  52                   push edx
// 009d4165  50                   push eax
// 009d4166  51                   push ecx
// 009d4167  8bce                 mov ecx, esi
// 009d4169  e870570c00           call 0xa998de
// 009d416e  8b442410             mov eax, dword ptr [esp + 0x10]
// 009d4172  8d4801               lea ecx, [eax + 1]
// 009d4175  51                   push ecx
// 009d4176  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009d417a  51                   push ecx
// 009d417b  49                   dec ecx
// 009d417c  50                   push eax
// 009d417d  51                   push ecx
// 009d417e  8bce                 mov ecx, esi
// 009d4180  e859570c00           call 0xa998de
// 009d4185  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009d4189  8b442418             mov eax, dword ptr [esp + 0x18]
// 009d418d  50                   push eax
// 009d418e  8d5101               lea edx, [ecx + 1]
// 009d4191  52                   push edx
// 009d4192  48                   dec eax
// 009d4193  50                   push eax
// 009d4194  51                   push ecx
// 009d4195  8bce                 mov ecx, esi
// 009d4197  e842570c00           call 0xa998de
// 009d419c  8b442418             mov eax, dword ptr [esp + 0x18]
// 009d41a0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009d41a4  50                   push eax
// 009d41a5  51                   push ecx
// 009d41a6  48                   dec eax
// 009d41a7  49                   dec ecx
// 009d41a8  50                   push eax
// 009d41a9  51                   push ecx
// 009d41aa  8bce                 mov ecx, esi
// 009d41ac  e82d570c00           call 0xa998de
// 009d41b1  5e                   pop esi
// 009d41b2  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPOffice2003Theme.cpp (function ?ExcludeCorners@CXTPOffice2003Theme@@QAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPOffice2003Theme.cpp
