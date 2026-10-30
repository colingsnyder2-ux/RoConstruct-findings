// from server: 100% by auto
// roc 2012-06 00448c10  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00448c10
//
// 00448c10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00448c14  8b542408             mov edx, dword ptr [esp + 8]
// 00448c18  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00448c1b  50                   push eax
// 00448c1c  8b442408             mov eax, dword ptr [esp + 8]
// 00448c20  52                   push edx
// 00448c21  50                   push eax
// 00448c22  51                   push ecx
// 00448c23  ff15043cb200         call dword ptr [0xb23c04]
// 00448c29  c20c00               ret 0xc
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?SetTimer@CWnd@@QAEIIIP6GXPAUHWND__@@IIK@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
