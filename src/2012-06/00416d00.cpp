// from server: 100% by auto
// roc 2012-06 00416d00  unit: boost::bad_weak_ptr  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00416d00
//
// 00416d00  8b442404             mov eax, dword ptr [esp + 4]
// 00416d04  85c0                 test eax, eax
// 00416d06  7515                 jne 0x416d1d
// 00416d08  8b542408             mov edx, dword ptr [esp + 8]
// 00416d0c  52                   push edx
// 00416d0d  50                   push eax
// 00416d0e  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00416d11  6a30                 push 0x30
// 00416d13  50                   push eax
// 00416d14  ff15043cb200         call dword ptr [0xb23c04]
// 00416d1a  c20800               ret 8
// 00416d1d  8b542408             mov edx, dword ptr [esp + 8]
// 00416d21  8b4004               mov eax, dword ptr [eax + 4]
// 00416d24  52                   push edx
// 00416d25  50                   push eax
// 00416d26  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00416d29  6a30                 push 0x30
// 00416d2b  50                   push eax
// 00416d2c  ff15043cb200         call dword ptr [0xb23c04]
// 00416d32  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarEventPropertiesDlg.cpp (function ?SetFont@CWnd@@QAEXPAVCFont@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEventPropertiesDlg.cpp
