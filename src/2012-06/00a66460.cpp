// roc 2012-06 00a66460  unit: CXTPOffice2007Image  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a66460
//
// 00a66460  6aff                 push -1
// 00a66462  684b82ae00           push 0xae824b
// 00a66467  64a100000000         mov eax, dword ptr fs:[0]
// 00a6646d  50                   push eax
// 00a6646e  83ec08               sub esp, 8
// 00a66471  56                   push esi
// 00a66472  57                   push edi
// 00a66473  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a66478  33c4                 xor eax, esp
// 00a6647a  50                   push eax
// 00a6647b  8d442414             lea eax, [esp + 0x14]
// 00a6647f  64a300000000         mov dword ptr fs:[0], eax
// 00a66485  8bf1                 mov esi, ecx
// 00a66487  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00a6648f  51                   push ecx
// 00a66490  8d442430             lea eax, [esp + 0x30]
// 00a66494  8bcc                 mov ecx, esp
// 00a66496  89642410             mov dword ptr [esp + 0x10], esp
// 00a6649a  50                   push eax
// 00a6649b  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00a664a3  ff158047b200         call dword ptr [0xb24780]
// 00a664a9  51                   push ecx
// 00a664aa  8d542430             lea edx, [esp + 0x30]
// 00a664ae  8bcc                 mov ecx, esp
// 00a664b0  89642418             mov dword ptr [esp + 0x18], esp
// 00a664b4  52                   push edx
// 00a664b5  c644242802           mov byte ptr [esp + 0x28], 2
// 00a664ba  ff158047b200         call dword ptr [0xb24780]
// 00a664c0  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00a664c4  57                   push edi
// 00a664c5  8bce                 mov ecx, esi
// 00a664c7  c644242801           mov byte ptr [esp + 0x28], 1
// 00a664cc  e8dff8ffff           call 0xa65db0
// 00a664d1  8d4c2428             lea ecx, [esp + 0x28]
// 00a664d5  ff15d047b200         call dword ptr [0xb247d0]
// 00a664db  8d4c242c             lea ecx, [esp + 0x2c]
// 00a664df  ff15d047b200         call dword ptr [0xb247d0]
// 00a664e5  8bc7                 mov eax, edi
// 00a664e7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a664eb  64890d00000000       mov dword ptr fs:[0], ecx
// 00a664f2  59                   pop ecx
// 00a664f3  5f                   pop edi
// 00a664f4  5e                   pop esi
// 00a664f5  83c414               add esp, 0x14
// 00a664f8  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetImageString@CXTPOffice2007Images@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp