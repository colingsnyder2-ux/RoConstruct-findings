// from server: 100% by auto
// roc 2008-06 006cf050  unit: VCXTPReportRow::?$CXTPSmartPtrInternalT  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cf050
//
// 006cf050  56                   push esi
// 006cf051  8bf1                 mov esi, ecx
// 006cf053  8b4e04               mov ecx, dword ptr [esi + 4]
// 006cf056  c7069c3b8500         mov dword ptr [esi], 0x853b9c
// 006cf05c  85c9                 test ecx, ecx
// 006cf05e  7405                 je 0x6cf065
// 006cf060  e87f1bfdff           call 0x6a0be4
// 006cf065  f644240801           test byte ptr [esp + 8], 1
// 006cf06a  7409                 je 0x6cf075
// 006cf06c  56                   push esi
// 006cf06d  e80816fdff           call 0x6a067a
// 006cf072  83c404               add esp, 4
// 006cf075  8bc6                 mov eax, esi
// 006cf077  5e                   pop esi
// 006cf078  c20400               ret 4
// library xtp-11.2.2/Source\Calendar\XTPCalendarControl.cpp (function ??_G?$CXTPSmartPtrInternalT@VCXTPCalendarRecurrencePattern@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarControl.cpp
