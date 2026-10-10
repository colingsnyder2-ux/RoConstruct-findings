// roc 2008-06 006ca0f0  unit: CXTPReportControl  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ca0f0
//
// 006ca0f0  8b442404             mov eax, dword ptr [esp + 4]
// 006ca0f4  56                   push esi
// 006ca0f5  8bf1                 mov esi, ecx
// 006ca0f7  3b8608010000         cmp eax, dword ptr [esi + 0x108]
// 006ca0fd  7422                 je 0x6ca121
// 006ca0ff  85c0                 test eax, eax
// 006ca101  7d02                 jge 0x6ca105
// 006ca103  33c0                 xor eax, eax
// 006ca105  6a01                 push 1
// 006ca107  50                   push eax
// 006ca108  6a01                 push 1
// 006ca10a  898608010000         mov dword ptr [esi + 0x108], eax
// 006ca110  e80b210f00           call 0x7bc220
// 006ca115  8b06                 mov eax, dword ptr [esi]
// 006ca117  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 006ca11d  8bce                 mov ecx, esi
// 006ca11f  ffd2                 call edx
// 006ca121  5e                   pop esi
// 006ca122  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?SetTopRow@CXTPReportControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
