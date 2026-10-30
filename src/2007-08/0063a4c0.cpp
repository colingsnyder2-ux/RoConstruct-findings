// from server: 100% by colin
// roc 2007-08 0063a4c0  unit: CPatchedControlComboBox  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a4c0
//
// 0063a4c0  6aff                 push -1
// 0063a4c2  687a997300           push 0x73997a
// 0063a4c7  64a100000000         mov eax, dword ptr fs:[0]
// 0063a4cd  50                   push eax
// 0063a4ce  83ec08               sub esp, 8
// 0063a4d1  56                   push esi
// 0063a4d2  57                   push edi
// 0063a4d3  a188518b00           mov eax, dword ptr [0x8b5188]
// 0063a4d8  33c4                 xor eax, esp
// 0063a4da  50                   push eax
// 0063a4db  8d442414             lea eax, [esp + 0x14]
// 0063a4df  64a300000000         mov dword ptr fs:[0], eax
// 0063a4e5  8b742428             mov esi, dword ptr [esp + 0x28]
// 0063a4e9  8bce                 mov ecx, esi
// 0063a4eb  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063a4f3  ff15bcdc7700         call dword ptr [0x77dcbc]
// 0063a4f9  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0063a4fd  50                   push eax
// 0063a4fe  8bcf                 mov ecx, edi
// 0063a500  ff15c0dc7700         call dword ptr [0x77dcc0]
// 0063a506  8a44242c             mov al, byte ptr [esp + 0x2c]
// 0063a50a  6a01                 push 1
// 0063a50c  8d4c2413             lea ecx, [esp + 0x13]
// 0063a510  51                   push ecx
// 0063a511  8bce                 mov ecx, esi
// 0063a513  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0063a51b  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0063a523  88442417             mov byte ptr [esp + 0x17], al
// 0063a527  ff15c8dc7700         call dword ptr [0x77dcc8]
// 0063a52d  50                   push eax
// 0063a52e  8bce                 mov ecx, esi
// 0063a530  ff1598dd7700         call dword ptr [0x77dd98]
// 0063a536  50                   push eax
// 0063a537  57                   push edi
// 0063a538  ff15ccdc7700         call dword ptr [0x77dccc]
// 0063a53e  83c414               add esp, 0x14
// 0063a541  8bc7                 mov eax, edi
// 0063a543  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063a547  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a54e  59                   pop ecx
// 0063a54f  5f                   pop edi
// 0063a550  5e                   pop esi
// 0063a551  83c414               add esp, 0x14
// 0063a554  c3                   ret 
// copied from an identical function in another client (function ??HATL@@YA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@0@ABV10@D@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp