// roc 2007-03 006f38b0  unit: seg_006f0000  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f38b0
//
// 006f38b0  6aff                 push -1
// 006f38b2  689ba57600           push 0x76a59b
// 006f38b7  64a100000000         mov eax, dword ptr fs:[0]
// 006f38bd  50                   push eax
// 006f38be  83ec08               sub esp, 8
// 006f38c1  56                   push esi
// 006f38c2  57                   push edi
// 006f38c3  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 006f38c8  33c4                 xor eax, esp
// 006f38ca  50                   push eax
// 006f38cb  8d442414             lea eax, [esp + 0x14]
// 006f38cf  64a300000000         mov dword ptr fs:[0], eax
// 006f38d5  8bf1                 mov esi, ecx
// 006f38d7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006f38df  51                   push ecx
// 006f38e0  8d442430             lea eax, [esp + 0x30]
// 006f38e4  8bcc                 mov ecx, esp
// 006f38e6  89642410             mov dword ptr [esp + 0x10], esp
// 006f38ea  50                   push eax
// 006f38eb  c744242401000000     mov dword ptr [esp + 0x24], 1
// 006f38f3  ff152cdd7700         call dword ptr [0x77dd2c]
// 006f38f9  51                   push ecx
// 006f38fa  8d542430             lea edx, [esp + 0x30]
// 006f38fe  8bcc                 mov ecx, esp
// 006f3900  89642418             mov dword ptr [esp + 0x18], esp
// 006f3904  52                   push edx
// 006f3905  c644242802           mov byte ptr [esp + 0x28], 2
// 006f390a  ff152cdd7700         call dword ptr [0x77dd2c]
// 006f3910  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006f3914  57                   push edi
// 006f3915  8bce                 mov ecx, esi
// 006f3917  c644242801           mov byte ptr [esp + 0x28], 1
// 006f391c  e8dff8ffff           call 0x6f3200
// 006f3921  8d4c2428             lea ecx, [esp + 0x28]
// 006f3925  ff1578dd7700         call dword ptr [0x77dd78]
// 006f392b  8d4c242c             lea ecx, [esp + 0x2c]
// 006f392f  ff1578dd7700         call dword ptr [0x77dd78]
// 006f3935  8bc7                 mov eax, edi
// 006f3937  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f393b  64890d00000000       mov dword ptr fs:[0], ecx
// 006f3942  59                   pop ecx
// 006f3943  5f                   pop edi
// 006f3944  5e                   pop esi
// 006f3945  83c414               add esp, 0x14
// 006f3948  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetImageString@CXTPOffice2007Images@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp