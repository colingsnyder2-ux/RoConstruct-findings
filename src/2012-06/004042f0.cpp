// roc 2012-06 004042f0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004042f0
//
// 004042f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004042f4  8b542408             mov edx, dword ptr [esp + 8]
// 004042f8  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004042fb  50                   push eax
// 004042fc  8b442408             mov eax, dword ptr [esp + 8]
// 00404300  52                   push edx
// 00404301  50                   push eax
// 00404302  51                   push ecx
// 00404303  ff15243cb200         call dword ptr [0xb23c24]
// 00404309  c20c00               ret 0xc
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?SetTimer@CWnd@@QAEIIIP6GXPAUHWND__@@IIK@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
