// roc 2008-06 006fd910  unit: CXTCaptionButtonTheme  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd910
//
// 006fd910  8b442404             mov eax, dword ptr [esp + 4]
// 006fd914  56                   push esi
// 006fd915  50                   push eax
// 006fd916  8bf1                 mov esi, ecx
// 006fd918  ff15b0288000         call dword ptr [0x8028b0]
// 006fd91e  83c404               add esp, 4
// 006fd921  85c0                 test eax, eax
// 006fd923  750a                 jne 0x6fd92f
// 006fd925  680e000780           push 0x8007000e
// 006fd92a  e8d136d0ff           call 0x401000
// 006fd92f  8906                 mov dword ptr [esi], eax
// 006fd931  5e                   pop esi
// 006fd932  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Calendar\XTPCalendarThemeOffice2007.cpp (function ?AllocateHeap@?$CTempBuffer@D$0IA@VCCRTAllocator@ATL@@@ATL@@AAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Calendar/XTPCalendarThemeOffice2007.cpp
