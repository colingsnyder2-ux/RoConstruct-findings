// from server: 100% by auto
// roc 2012-06 00994b90  unit: CRgn  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00994b90
//
// 00994b90  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00994b93  85c0                 test eax, eax
// 00994b95  750a                 jne 0x994ba1
// 00994b97  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00994b9a  50                   push eax
// 00994b9b  ff15503ab200         call dword ptr [0xb23a50]
// 00994ba1  50                   push eax
// 00994ba2  e8bfdafeff           call 0x982666
// 00994ba7  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPDatePickerControl.cpp (function ?GetOwner@CWnd@@QBEPAV1@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPDatePickerControl.cpp
