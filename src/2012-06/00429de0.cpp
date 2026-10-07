// roc 2012-06 00429de0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00429de0
//
// 00429de0  8b4108               mov eax, dword ptr [ecx + 8]
// 00429de3  0301                 add eax, dword ptr [ecx]
// 00429de5  56                   push esi
// 00429de6  8b742408             mov esi, dword ptr [esp + 8]
// 00429dea  99                   cdq 
// 00429deb  2bc2                 sub eax, edx
// 00429ded  d1f8                 sar eax, 1
// 00429def  8906                 mov dword ptr [esi], eax
// 00429df1  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00429df4  034104               add eax, dword ptr [ecx + 4]
// 00429df7  99                   cdq 
// 00429df8  2bc2                 sub eax, edx
// 00429dfa  d1f8                 sar eax, 1
// 00429dfc  894604               mov dword ptr [esi + 4], eax
// 00429dff  8bc6                 mov eax, esi
// 00429e01  5e                   pop esi
// 00429e02  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?CenterPoint@CRect@@QBE?AVCPoint@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
