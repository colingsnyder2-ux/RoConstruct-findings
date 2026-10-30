// roc 2009-12 0083b690  unit: CXTPToolBar::CControlButtonExpand  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b690
//
// 0083b690  53                   push ebx
// 0083b691  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0083b695  56                   push esi
// 0083b696  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0083b69a  57                   push edi
// 0083b69b  53                   push ebx
// 0083b69c  56                   push esi
// 0083b69d  8bf9                 mov edi, ecx
// 0083b69f  e89c4b0500           call 0x890240
// 0083b6a4  85db                 test ebx, ebx
// 0083b6a6  7431                 je 0x83b6d9
// 0083b6a8  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 0083b6af  7428                 je 0x83b6d9
// 0083b6b1  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0083b6b7  8b01                 mov eax, dword ptr [ecx]
// 0083b6b9  8b9000020000         mov edx, dword ptr [eax + 0x200]
// 0083b6bf  53                   push ebx
// 0083b6c0  ffd2                 call edx
// 0083b6c2  8bf0                 mov esi, eax
// 0083b6c4  56                   push esi
// 0083b6c5  8bcf                 mov ecx, edi
// 0083b6c7  e884ffffff           call 0x83b650
// 0083b6cc  8bce                 mov ecx, esi
// 0083b6ce  e80987fbff           call 0x7f3ddc
// 0083b6d3  5f                   pop edi
// 0083b6d4  5e                   pop esi
// 0083b6d5  5b                   pop ebx
// 0083b6d6  c20800               ret 8
// 0083b6d9  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0083b6df  50                   push eax
// 0083b6e0  8bcf                 mov ecx, edi
// 0083b6e2  e869ffffff           call 0x83b650
// 0083b6e7  5f                   pop edi
// 0083b6e8  5e                   pop esi
// 0083b6e9  5b                   pop ebx
// 0083b6ea  c20800               ret 8
// copied from an identical function in another client (function ?Copy@CXTPControlPopup@@UAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlPopup.cpp