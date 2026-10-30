// roc 2009-12 00878810  unit: CXTPControlGallery  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878810
//
// 00878810  51                   push ecx
// 00878811  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00878815  56                   push esi
// 00878816  50                   push eax
// 00878817  c744240800000000     mov dword ptr [esp + 8], 0
// 0087881f  e8dcf9ffff           call 0x878200
// 00878824  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00878828  85c0                 test eax, eax
// 0087882a  740f                 je 0x87883b
// 0087882c  56                   push esi
// 0087882d  8bc8                 mov ecx, eax
// 0087882f  e8aceaffff           call 0x8772e0
// 00878834  8bc6                 mov eax, esi
// 00878836  5e                   pop esi
// 00878837  59                   pop ecx
// 00878838  c20800               ret 8
// 0087883b  6856fd9900           push 0x99fd56
// 00878840  8bce                 mov ecx, esi
// 00878842  ff15b8de9800         call dword ptr [0x98deb8]
// 00878848  8bc6                 mov eax, esi
// 0087884a  5e                   pop esi
// 0087884b  59                   pop ecx
// 0087884c  c20800               ret 8
// copied from an identical function in another client (function ?GetItemCaption@CXTPControlGallery@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp