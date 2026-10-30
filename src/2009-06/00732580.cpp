// roc 2009-06 00732580  unit: CXTPCommandBar  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00732580
//
// 00732580  83ec08               sub esp, 8
// 00732583  53                   push ebx
// 00732584  55                   push ebp
// 00732585  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00732589  56                   push esi
// 0073258a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0073258e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00732591  2b4604               sub eax, dword ptr [esi + 4]
// 00732594  57                   push edi
// 00732595  894c2414             mov dword ptr [esp + 0x14], ecx
// 00732599  8b4e08               mov ecx, dword ptr [esi + 8]
// 0073259c  2b0e                 sub ecx, dword ptr [esi]
// 0073259e  33ff                 xor edi, edi
// 007325a0  57                   push edi
// 007325a1  50                   push eax
// 007325a2  51                   push ecx
// 007325a3  55                   push ebp
// 007325a4  897c2420             mov dword ptr [esp + 0x20], edi
// 007325a8  e813f4ffff           call 0x7319c0
// 007325ad  8bd8                 mov ebx, eax
// 007325af  83c410               add esp, 0x10
// 007325b2  895c2420             mov dword ptr [esp + 0x20], ebx
// 007325b6  85db                 test ebx, ebx
// 007325b8  0f84b6000000         je 0x732674
// 007325be  55                   push ebp
// 007325bf  ff1520e18900         call dword ptr [0x89e120]
// 007325c5  8bf8                 mov edi, eax
// 007325c7  85ff                 test edi, edi
// 007325c9  0f8490000000         je 0x73265f
// 007325cf  53                   push ebx
// 007325d0  57                   push edi
// 007325d1  ff1524e18900         call dword ptr [0x89e124]
// 007325d7  8b5604               mov edx, dword ptr [esi + 4]
// 007325da  8b1e                 mov ebx, dword ptr [esi]
// 007325dc  8b4e08               mov ecx, dword ptr [esi + 8]
// 007325df  682000cc00           push 0xcc0020
// 007325e4  52                   push edx
// 007325e5  53                   push ebx
// 007325e6  89442428             mov dword ptr [esp + 0x28], eax
// 007325ea  8b460c               mov eax, dword ptr [esi + 0xc]
// 007325ed  55                   push ebp
// 007325ee  2bc2                 sub eax, edx
// 007325f0  50                   push eax
// 007325f1  2bcb                 sub ecx, ebx
// 007325f3  8b1de0e08900         mov ebx, dword ptr [0x89e0e0]
// 007325f9  51                   push ecx
// 007325fa  6a00                 push 0
// 007325fc  6a00                 push 0
// 007325fe  57                   push edi
// 007325ff  ffd3                 call ebx
// 00732601  85c0                 test eax, eax
// 00732603  743f                 je 0x732644
// 00732605  8b442424             mov eax, dword ptr [esp + 0x24]
// 00732609  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073260d  50                   push eax
// 0073260e  6aff                 push -1
// 00732610  6aff                 push -1
// 00732612  51                   push ecx
// 00732613  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00732617  e8d4faffff           call 0x7320f0
// 0073261c  89442410             mov dword ptr [esp + 0x10], eax
// 00732620  85c0                 test eax, eax
// 00732622  7420                 je 0x732644
// 00732624  8b4604               mov eax, dword ptr [esi + 4]
// 00732627  8b560c               mov edx, dword ptr [esi + 0xc]
// 0073262a  8b0e                 mov ecx, dword ptr [esi]
// 0073262c  682000cc00           push 0xcc0020
// 00732631  6a00                 push 0
// 00732633  6a00                 push 0
// 00732635  57                   push edi
// 00732636  2bd0                 sub edx, eax
// 00732638  52                   push edx
// 00732639  8b5608               mov edx, dword ptr [esi + 8]
// 0073263c  2bd1                 sub edx, ecx
// 0073263e  52                   push edx
// 0073263f  50                   push eax
// 00732640  51                   push ecx
// 00732641  55                   push ebp
// 00732642  ffd3                 call ebx
// 00732644  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00732648  85c0                 test eax, eax
// 0073264a  7408                 je 0x732654
// 0073264c  50                   push eax
// 0073264d  57                   push edi
// 0073264e  ff1524e18900         call dword ptr [0x89e124]
// 00732654  57                   push edi
// 00732655  ff152ce18900         call dword ptr [0x89e12c]
// 0073265b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0073265f  53                   push ebx
// 00732660  ff1560e18900         call dword ptr [0x89e160]
// 00732666  8b442410             mov eax, dword ptr [esp + 0x10]
// 0073266a  5f                   pop edi
// 0073266b  5e                   pop esi
// 0073266c  5d                   pop ebp
// 0073266d  5b                   pop ebx
// 0073266e  83c408               add esp, 8
// 00732671  c20c00               ret 0xc
// 00732674  8bc7                 mov eax, edi
// 00732676  5f                   pop edi
// 00732677  5e                   pop esi
// 00732678  5d                   pop ebp
// 00732679  5b                   pop ebx
// 0073267a  83c408               add esp, 8
// 0073267d  c20c00               ret 0xc
// copied from an identical function in another client (function ?BlackWhiteBitmap@CXTPImageManager@@QAEHPAUHDC__@@ABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp