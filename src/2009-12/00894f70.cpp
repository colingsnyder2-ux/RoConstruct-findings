// roc 2009-12 00894f70  unit: CXTPRibbonBar  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894f70
//
// 00894f70  8b542410             mov edx, dword ptr [esp + 0x10]
// 00894f74  8b442414             mov eax, dword ptr [esp + 0x14]
// 00894f78  83ec10               sub esp, 0x10
// 00894f7b  56                   push esi
// 00894f7c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00894f80  57                   push edi
// 00894f81  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00894f85  89b1ec010000         mov dword ptr [ecx + 0x1ec], esi
// 00894f8b  89b9f0010000         mov dword ptr [ecx + 0x1f0], edi
// 00894f91  8991f4010000         mov dword ptr [ecx + 0x1f4], edx
// 00894f97  8981f8010000         mov dword ptr [ecx + 0x1f8], eax
// 00894f9d  e83efdffff           call 0x894ce0
// 00894fa2  85c0                 test eax, eax
// 00894fa4  7438                 je 0x894fde
// 00894fa6  8d4e04               lea ecx, [esi + 4]
// 00894fa9  894c2408             mov dword ptr [esp + 8], ecx
// 00894fad  8d4c2408             lea ecx, [esp + 8]
// 00894fb1  51                   push ecx
// 00894fb2  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 00894fb8  6a40                 push 0x40
// 00894fba  2bd6                 sub edx, esi
// 00894fbc  52                   push edx
// 00894fbd  8b542428             mov edx, dword ptr [esp + 0x28]
// 00894fc1  83c703               add edi, 3
// 00894fc4  52                   push edx
// 00894fc5  897c241c             mov dword ptr [esp + 0x1c], edi
// 00894fc9  c744242006000000     mov dword ptr [esp + 0x20], 6
// 00894fd1  c744242403000000     mov dword ptr [esp + 0x24], 3
// 00894fd9  e8c2900500           call 0x8ee0a0
// 00894fde  5f                   pop edi
// 00894fdf  5e                   pop esi
// 00894fe0  83c410               add esp, 0x10
// 00894fe3  c21400               ret 0x14
// copied from an identical function in another client (function ?RepositionGroups@CXTPRibbonBar@@QAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp