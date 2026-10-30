// roc 2011-06 008ee080  unit: CXTPOffice2007Image  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ee080
//
// 008ee080  6aff                 push -1
// 008ee082  681be6a000           push 0xa0e61b
// 008ee087  64a100000000         mov eax, dword ptr fs:[0]
// 008ee08d  50                   push eax
// 008ee08e  83ec08               sub esp, 8
// 008ee091  56                   push esi
// 008ee092  57                   push edi
// 008ee093  a12058c900           mov eax, dword ptr [0xc95820]
// 008ee098  33c4                 xor eax, esp
// 008ee09a  50                   push eax
// 008ee09b  8d442414             lea eax, [esp + 0x14]
// 008ee09f  64a300000000         mov dword ptr fs:[0], eax
// 008ee0a5  8bf1                 mov esi, ecx
// 008ee0a7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008ee0af  51                   push ecx
// 008ee0b0  8d442430             lea eax, [esp + 0x30]
// 008ee0b4  8bcc                 mov ecx, esp
// 008ee0b6  89642410             mov dword ptr [esp + 0x10], esp
// 008ee0ba  50                   push eax
// 008ee0bb  c744242401000000     mov dword ptr [esp + 0x24], 1
// 008ee0c3  ff15e42da400         call dword ptr [0xa42de4]
// 008ee0c9  51                   push ecx
// 008ee0ca  8d542430             lea edx, [esp + 0x30]
// 008ee0ce  8bcc                 mov ecx, esp
// 008ee0d0  89642418             mov dword ptr [esp + 0x18], esp
// 008ee0d4  52                   push edx
// 008ee0d5  c644242802           mov byte ptr [esp + 0x28], 2
// 008ee0da  ff15e42da400         call dword ptr [0xa42de4]
// 008ee0e0  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008ee0e4  57                   push edi
// 008ee0e5  8bce                 mov ecx, esi
// 008ee0e7  c644242801           mov byte ptr [esp + 0x28], 1
// 008ee0ec  e8dff8ffff           call 0x8ed9d0
// 008ee0f1  8d4c2428             lea ecx, [esp + 0x28]
// 008ee0f5  ff15082ea400         call dword ptr [0xa42e08]
// 008ee0fb  8d4c242c             lea ecx, [esp + 0x2c]
// 008ee0ff  ff15082ea400         call dword ptr [0xa42e08]
// 008ee105  8bc7                 mov eax, edi
// 008ee107  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ee10b  64890d00000000       mov dword ptr fs:[0], ecx
// 008ee112  59                   pop ecx
// 008ee113  5f                   pop edi
// 008ee114  5e                   pop esi
// 008ee115  83c414               add esp, 0x14
// 008ee118  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetImageString@CXTPOffice2007Images@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp