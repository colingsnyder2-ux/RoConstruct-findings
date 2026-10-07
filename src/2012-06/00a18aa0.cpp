// roc 2012-06 00a18aa0  unit: UtagACCEL::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a18aa0
//
// 00a18aa0  56                   push esi
// 00a18aa1  57                   push edi
// 00a18aa2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a18aa6  8b4718               mov eax, dword ptr [edi + 0x18]
// 00a18aa9  f7d0                 not eax
// 00a18aab  8bf1                 mov esi, ecx
// 00a18aad  a801                 test al, 1
// 00a18aaf  741e                 je 0xa18acf
// 00a18ab1  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a18ab4  51                   push ecx
// 00a18ab5  8bcf                 mov ecx, edi
// 00a18ab7  e8c2a1f6ff           call 0x982c7e
// 00a18abc  8b5608               mov edx, dword ptr [esi + 8]
// 00a18abf  8b4604               mov eax, dword ptr [esi + 4]
// 00a18ac2  52                   push edx
// 00a18ac3  50                   push eax
// 00a18ac4  57                   push edi
// 00a18ac5  e856f9ffff           call 0xa18420
// 00a18aca  5f                   pop edi
// 00a18acb  5e                   pop esi
// 00a18acc  c20400               ret 4
// 00a18acf  8bcf                 mov ecx, edi
// 00a18ad1  e8a2a1f6ff           call 0x982c78
// 00a18ad6  6aff                 push -1
// 00a18ad8  50                   push eax
// 00a18ad9  8bce                 mov ecx, esi
// 00a18adb  e890f1ffff           call 0xa17c70
// 00a18ae0  8b5608               mov edx, dword ptr [esi + 8]
// 00a18ae3  8b4604               mov eax, dword ptr [esi + 4]
// 00a18ae6  52                   push edx
// 00a18ae7  50                   push eax
// 00a18ae8  57                   push edi
// 00a18ae9  e832f9ffff           call 0xa18420
// 00a18aee  5f                   pop edi
// 00a18aef  5e                   pop esi
// 00a18af0  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?Serialize@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
