// roc 2009-12 008e1230  unit: CXTPOffice2007Image  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1230
//
// 008e1230  6aff                 push -1
// 008e1232  68fb5b9600           push 0x965bfb
// 008e1237  64a100000000         mov eax, dword ptr fs:[0]
// 008e123d  50                   push eax
// 008e123e  83ec08               sub esp, 8
// 008e1241  56                   push esi
// 008e1242  57                   push edi
// 008e1243  a10052b600           mov eax, dword ptr [0xb65200]
// 008e1248  33c4                 xor eax, esp
// 008e124a  50                   push eax
// 008e124b  8d442414             lea eax, [esp + 0x14]
// 008e124f  64a300000000         mov dword ptr fs:[0], eax
// 008e1255  8bf1                 mov esi, ecx
// 008e1257  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008e125f  51                   push ecx
// 008e1260  8d442430             lea eax, [esp + 0x30]
// 008e1264  8bcc                 mov ecx, esp
// 008e1266  89642410             mov dword ptr [esp + 0x10], esp
// 008e126a  50                   push eax
// 008e126b  c744242401000000     mov dword ptr [esp + 0x24], 1
// 008e1273  ff1594de9800         call dword ptr [0x98de94]
// 008e1279  51                   push ecx
// 008e127a  8d542430             lea edx, [esp + 0x30]
// 008e127e  8bcc                 mov ecx, esp
// 008e1280  89642418             mov dword ptr [esp + 0x18], esp
// 008e1284  52                   push edx
// 008e1285  c644242802           mov byte ptr [esp + 0x28], 2
// 008e128a  ff1594de9800         call dword ptr [0x98de94]
// 008e1290  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008e1294  57                   push edi
// 008e1295  8bce                 mov ecx, esi
// 008e1297  c644242801           mov byte ptr [esp + 0x28], 1
// 008e129c  e8dff8ffff           call 0x8e0b80
// 008e12a1  8d4c2428             lea ecx, [esp + 0x28]
// 008e12a5  ff15c0de9800         call dword ptr [0x98dec0]
// 008e12ab  8d4c242c             lea ecx, [esp + 0x2c]
// 008e12af  ff15c0de9800         call dword ptr [0x98dec0]
// 008e12b5  8bc7                 mov eax, edi
// 008e12b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e12bb  64890d00000000       mov dword ptr fs:[0], ecx
// 008e12c2  59                   pop ecx
// 008e12c3  5f                   pop edi
// 008e12c4  5e                   pop esi
// 008e12c5  83c414               add esp, 0x14
// 008e12c8  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetImageString@CXTPOffice2007Images@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp