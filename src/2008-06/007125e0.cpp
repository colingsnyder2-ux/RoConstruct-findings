// from server: 100% by tester
// roc 2008-06 007125e0  unit: CXTPPropertyGridItemConstraint  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007125e0
//
// 007125e0  53                   push ebx
// 007125e1  55                   push ebp
// 007125e2  56                   push esi
// 007125e3  57                   push edi
// 007125e4  8bf9                 mov edi, ecx
// 007125e6  33f6                 xor esi, esi
// 007125e8  397728               cmp dword ptr [edi + 0x28], esi
// 007125eb  7e33                 jle 0x712620
// 007125ed  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007125f1  56                   push esi
// 007125f2  8d442418             lea eax, [esp + 0x18]
// 007125f6  50                   push eax
// 007125f7  8bcf                 mov ecx, edi
// 007125f9  e842ffffff           call 0x712540
// 007125fe  55                   push ebp
// 007125ff  8bc8                 mov ecx, eax
// 00712601  ff1528368000         call dword ptr [0x803628]
// 00712607  85c0                 test eax, eax
// 00712609  8d4c2414             lea ecx, [esp + 0x14]
// 0071260d  0f94c3               sete bl
// 00712610  ff15143f8000         call dword ptr [0x803f14]
// 00712616  84db                 test bl, bl
// 00712618  7510                 jne 0x71262a
// 0071261a  46                   inc esi
// 0071261b  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0071261e  7cd1                 jl 0x7125f1
// 00712620  5f                   pop edi
// 00712621  5e                   pop esi
// 00712622  5d                   pop ebp
// 00712623  83c8ff               or eax, 0xffffffff
// 00712626  5b                   pop ebx
// 00712627  c20400               ret 4
// 0071262a  5f                   pop edi
// 0071262b  8bc6                 mov eax, esi
// 0071262d  5e                   pop esi
// 0071262e  5d                   pop ebp
// 0071262f  5b                   pop ebx
// 00712630  c20400               ret 4

// RTM desktop manifest: 5f23cab0a07143b351dd962ac48278660cc3d9364f7ff11eb6cdb03260bb4dbc
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridItem.cpp
