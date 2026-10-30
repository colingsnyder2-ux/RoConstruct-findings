// roc 2009-12 00809610  unit: CXTPCommandBar  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00809610
//
// 00809610  83ec08               sub esp, 8
// 00809613  53                   push ebx
// 00809614  55                   push ebp
// 00809615  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00809619  56                   push esi
// 0080961a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0080961e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00809621  2b4604               sub eax, dword ptr [esi + 4]
// 00809624  57                   push edi
// 00809625  894c2414             mov dword ptr [esp + 0x14], ecx
// 00809629  8b4e08               mov ecx, dword ptr [esi + 8]
// 0080962c  2b0e                 sub ecx, dword ptr [esi]
// 0080962e  33ff                 xor edi, edi
// 00809630  57                   push edi
// 00809631  50                   push eax
// 00809632  51                   push ecx
// 00809633  55                   push ebp
// 00809634  897c2420             mov dword ptr [esp + 0x20], edi
// 00809638  e803f5ffff           call 0x808b40
// 0080963d  8bd8                 mov ebx, eax
// 0080963f  83c410               add esp, 0x10
// 00809642  895c2420             mov dword ptr [esp + 0x20], ebx
// 00809646  85db                 test ebx, ebx
// 00809648  0f84b9000000         je 0x809707
// 0080964e  55                   push ebp
// 0080964f  ff1554b19800         call dword ptr [0x98b154]
// 00809655  8bf8                 mov edi, eax
// 00809657  85ff                 test edi, edi
// 00809659  0f8493000000         je 0x8096f2
// 0080965f  53                   push ebx
// 00809660  57                   push edi
// 00809661  ff154cb19800         call dword ptr [0x98b14c]
// 00809667  8b5604               mov edx, dword ptr [esi + 4]
// 0080966a  8b1e                 mov ebx, dword ptr [esi]
// 0080966c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0080966f  682000cc00           push 0xcc0020
// 00809674  52                   push edx
// 00809675  53                   push ebx
// 00809676  89442428             mov dword ptr [esp + 0x28], eax
// 0080967a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0080967d  55                   push ebp
// 0080967e  2bc2                 sub eax, edx
// 00809680  50                   push eax
// 00809681  2bcb                 sub ecx, ebx
// 00809683  8b1d48b19800         mov ebx, dword ptr [0x98b148]
// 00809689  51                   push ecx
// 0080968a  6a00                 push 0
// 0080968c  6a00                 push 0
// 0080968e  57                   push edi
// 0080968f  ffd3                 call ebx
// 00809691  85c0                 test eax, eax
// 00809693  7442                 je 0x8096d7
// 00809695  8b442428             mov eax, dword ptr [esp + 0x28]
// 00809699  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080969d  8b542420             mov edx, dword ptr [esp + 0x20]
// 008096a1  6aff                 push -1
// 008096a3  50                   push eax
// 008096a4  51                   push ecx
// 008096a5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008096a9  52                   push edx
// 008096aa  e8e1fbffff           call 0x809290
// 008096af  89442410             mov dword ptr [esp + 0x10], eax
// 008096b3  85c0                 test eax, eax
// 008096b5  7420                 je 0x8096d7
// 008096b7  8b4604               mov eax, dword ptr [esi + 4]
// 008096ba  8b560c               mov edx, dword ptr [esi + 0xc]
// 008096bd  8b0e                 mov ecx, dword ptr [esi]
// 008096bf  682000cc00           push 0xcc0020
// 008096c4  6a00                 push 0
// 008096c6  6a00                 push 0
// 008096c8  57                   push edi
// 008096c9  2bd0                 sub edx, eax
// 008096cb  52                   push edx
// 008096cc  8b5608               mov edx, dword ptr [esi + 8]
// 008096cf  2bd1                 sub edx, ecx
// 008096d1  52                   push edx
// 008096d2  50                   push eax
// 008096d3  51                   push ecx
// 008096d4  55                   push ebp
// 008096d5  ffd3                 call ebx
// 008096d7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008096db  85c0                 test eax, eax
// 008096dd  7408                 je 0x8096e7
// 008096df  50                   push eax
// 008096e0  57                   push edi
// 008096e1  ff154cb19800         call dword ptr [0x98b14c]
// 008096e7  57                   push edi
// 008096e8  ff1540b19800         call dword ptr [0x98b140]
// 008096ee  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008096f2  53                   push ebx
// 008096f3  ff153cb19800         call dword ptr [0x98b13c]
// 008096f9  8b442410             mov eax, dword ptr [esp + 0x10]
// 008096fd  5f                   pop edi
// 008096fe  5e                   pop esi
// 008096ff  5d                   pop ebp
// 00809700  5b                   pop ebx
// 00809701  83c408               add esp, 8
// 00809704  c21000               ret 0x10
// 00809707  8bc7                 mov eax, edi
// 00809709  5f                   pop edi
// 0080970a  5e                   pop esi
// 0080970b  5d                   pop ebp
// 0080970c  5b                   pop ebx
// 0080970d  83c408               add esp, 8
// 00809710  c21000               ret 0x10
// copied from an identical function in another client (function ?DisableBitmap@CXTPImageManager@@QAEHPAUHDC__@@ABVCRect@@KK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp