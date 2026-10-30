// from server: 100% by auto
// roc 2012-06 009fcaf0  unit: CXTPControlGallery::UGALLERYITEM_POSITION::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fcaf0
//
// 009fcaf0  56                   push esi
// 009fcaf1  57                   push edi
// 009fcaf2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009fcaf6  8b4718               mov eax, dword ptr [edi + 0x18]
// 009fcaf9  f7d0                 not eax
// 009fcafb  8bf1                 mov esi, ecx
// 009fcafd  a801                 test al, 1
// 009fcaff  741e                 je 0x9fcb1f
// 009fcb01  8b4e08               mov ecx, dword ptr [esi + 8]
// 009fcb04  51                   push ecx
// 009fcb05  8bcf                 mov ecx, edi
// 009fcb07  e87261f8ff           call 0x982c7e
// 009fcb0c  8b5608               mov edx, dword ptr [esi + 8]
// 009fcb0f  8b4604               mov eax, dword ptr [esi + 4]
// 009fcb12  52                   push edx
// 009fcb13  50                   push eax
// 009fcb14  57                   push edi
// 009fcb15  e8c6dbffff           call 0x9fa6e0
// 009fcb1a  5f                   pop edi
// 009fcb1b  5e                   pop esi
// 009fcb1c  c20400               ret 4
// 009fcb1f  8bcf                 mov ecx, edi
// 009fcb21  e85261f8ff           call 0x982c78
// 009fcb26  6aff                 push -1
// 009fcb28  50                   push eax
// 009fcb29  8bce                 mov ecx, esi
// 009fcb2b  e800daffff           call 0x9fa530
// 009fcb30  8b5608               mov edx, dword ptr [esi + 8]
// 009fcb33  8b4604               mov eax, dword ptr [esi + 4]
// 009fcb36  52                   push edx
// 009fcb37  50                   push eax
// 009fcb38  57                   push edi
// 009fcb39  e8a2dbffff           call 0x9fa6e0
// 009fcb3e  5f                   pop edi
// 009fcb3f  5e                   pop esi
// 009fcb40  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?Serialize@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
