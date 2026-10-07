// roc 2012-06 00999f10  unit: HH::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00999f10
//
// 00999f10  56                   push esi
// 00999f11  57                   push edi
// 00999f12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00999f16  8b4718               mov eax, dword ptr [edi + 0x18]
// 00999f19  f7d0                 not eax
// 00999f1b  8bf1                 mov esi, ecx
// 00999f1d  a801                 test al, 1
// 00999f1f  741e                 je 0x999f3f
// 00999f21  8b4e08               mov ecx, dword ptr [esi + 8]
// 00999f24  51                   push ecx
// 00999f25  8bcf                 mov ecx, edi
// 00999f27  e8528dfeff           call 0x982c7e
// 00999f2c  8b5608               mov edx, dword ptr [esi + 8]
// 00999f2f  8b4604               mov eax, dword ptr [esi + 4]
// 00999f32  52                   push edx
// 00999f33  50                   push eax
// 00999f34  57                   push edi
// 00999f35  e8c6fd0a00           call 0xa49d00
// 00999f3a  5f                   pop edi
// 00999f3b  5e                   pop esi
// 00999f3c  c20400               ret 4
// 00999f3f  8bcf                 mov ecx, edi
// 00999f41  e8328dfeff           call 0x982c78
// 00999f46  6aff                 push -1
// 00999f48  50                   push eax
// 00999f49  8bce                 mov ecx, esi
// 00999f4b  e810e3ffff           call 0x998260
// 00999f50  8b5608               mov edx, dword ptr [esi + 8]
// 00999f53  8b4604               mov eax, dword ptr [esi + 4]
// 00999f56  52                   push edx
// 00999f57  50                   push eax
// 00999f58  57                   push edi
// 00999f59  e8a2fd0a00           call 0xa49d00
// 00999f5e  5f                   pop edi
// 00999f5f  5e                   pop esi
// 00999f60  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?Serialize@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
