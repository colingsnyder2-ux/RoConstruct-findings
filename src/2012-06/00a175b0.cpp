// roc 2012-06 00a175b0  unit: VCRect::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a175b0
//
// 00a175b0  56                   push esi
// 00a175b1  57                   push edi
// 00a175b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a175b6  8b4718               mov eax, dword ptr [edi + 0x18]
// 00a175b9  f7d0                 not eax
// 00a175bb  8bf1                 mov esi, ecx
// 00a175bd  a801                 test al, 1
// 00a175bf  741e                 je 0xa175df
// 00a175c1  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a175c4  51                   push ecx
// 00a175c5  8bcf                 mov ecx, edi
// 00a175c7  e8b2b6f6ff           call 0x982c7e
// 00a175cc  8b5608               mov edx, dword ptr [esi + 8]
// 00a175cf  8b4604               mov eax, dword ptr [esi + 4]
// 00a175d2  52                   push edx
// 00a175d3  50                   push eax
// 00a175d4  57                   push edi
// 00a175d5  e8c658fcff           call 0x9dcea0
// 00a175da  5f                   pop edi
// 00a175db  5e                   pop esi
// 00a175dc  c20400               ret 4
// 00a175df  8bcf                 mov ecx, edi
// 00a175e1  e892b6f6ff           call 0x982c78
// 00a175e6  6aff                 push -1
// 00a175e8  50                   push eax
// 00a175e9  8bce                 mov ecx, esi
// 00a175eb  e81057fcff           call 0x9dcd00
// 00a175f0  8b5608               mov edx, dword ptr [esi + 8]
// 00a175f3  8b4604               mov eax, dword ptr [esi + 4]
// 00a175f6  52                   push edx
// 00a175f7  50                   push eax
// 00a175f8  57                   push edi
// 00a175f9  e8a258fcff           call 0x9dcea0
// 00a175fe  5f                   pop edi
// 00a175ff  5e                   pop esi
// 00a17600  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?Serialize@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
