// roc 2012-06 0046e5e0  unit: CBrowserDocManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046e5e0
//
// 0046e5e0  8b542404             mov edx, dword ptr [esp + 4]
// 0046e5e4  56                   push esi
// 0046e5e5  8bf1                 mov esi, ecx
// 0046e5e7  8b06                 mov eax, dword ptr [esi]
// 0046e5e9  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 0046e5ec  83e810               sub eax, 0x10
// 0046e5ef  395008               cmp dword ptr [eax + 8], edx
// 0046e5f2  7d15                 jge 0x46e609
// 0046e5f4  85d2                 test edx, edx
// 0046e5f6  7e11                 jle 0x46e609
// 0046e5f8  57                   push edi
// 0046e5f9  8b39                 mov edi, dword ptr [ecx]
// 0046e5fb  6a01                 push 1
// 0046e5fd  52                   push edx
// 0046e5fe  50                   push eax
// 0046e5ff  8b4708               mov eax, dword ptr [edi + 8]
// 0046e602  ffd0                 call eax
// 0046e604  5f                   pop edi
// 0046e605  85c0                 test eax, eax
// 0046e607  7505                 jne 0x46e60e
// 0046e609  e882f3ffff           call 0x46d990
// 0046e60e  83c010               add eax, 0x10
// 0046e611  8906                 mov dword ptr [esi], eax
// 0046e613  5e                   pop esi
// 0046e614  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?Reallocate@?$CSimpleStringT@D$0A@@ATL@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
