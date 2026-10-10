// roc 2008-06 006ee220  unit: CXTPPopupBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee220
//
// 006ee220  56                   push esi
// 006ee221  57                   push edi
// 006ee222  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006ee226  8bf1                 mov esi, ecx
// 006ee228  85ff                 test edi, edi
// 006ee22a  750b                 jne 0x6ee237
// 006ee22c  89beb0010000         mov dword ptr [esi + 0x1b0], edi
// 006ee232  5f                   pop edi
// 006ee233  5e                   pop esi
// 006ee234  c20c00               ret 0xc
// 006ee237  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ee23b  50                   push eax
// 006ee23c  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 006ee242  c786b001000001000000 mov dword ptr [esi + 0x1b0], 1
// 006ee24c  ff15b83e8000         call dword ptr [0x803eb8]
// 006ee252  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ee256  89bef4010000         mov dword ptr [esi + 0x1f4], edi
// 006ee25c  5f                   pop edi
// 006ee25d  898ef8010000         mov dword ptr [esi + 0x1f8], ecx
// 006ee263  5e                   pop esi
// 006ee264  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?SetTearOffPopup@CXTPPopupBar@@QAEXPBDIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
