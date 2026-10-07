// roc 2012-06 0046f6b0  unit: CRobloxApp  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046f6b0
//
// 0046f6b0  8b01                 mov eax, dword ptr [ecx]
// 0046f6b2  83e810               sub eax, 0x10
// 0046f6b5  8d480c               lea ecx, [eax + 0xc]
// 0046f6b8  83caff               or edx, 0xffffffff
// 0046f6bb  f00fc111             lock xadd dword ptr [ecx], edx
// 0046f6bf  4a                   dec edx
// 0046f6c0  85d2                 test edx, edx
// 0046f6c2  7f0a                 jg 0x46f6ce
// 0046f6c4  8b08                 mov ecx, dword ptr [eax]
// 0046f6c6  8b11                 mov edx, dword ptr [ecx]
// 0046f6c8  50                   push eax
// 0046f6c9  8b4204               mov eax, dword ptr [edx + 4]
// 0046f6cc  ffd0                 call eax
// 0046f6ce  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??1?$CSimpleStringT@D$0A@@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
