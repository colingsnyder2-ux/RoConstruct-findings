// roc 2009-12 0081d560  unit: CXTPReportControl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081d560
//
// 0081d560  8b442404             mov eax, dword ptr [esp + 4]
// 0081d564  56                   push esi
// 0081d565  8bf1                 mov esi, ecx
// 0081d567  85c0                 test eax, eax
// 0081d569  7d02                 jge 0x81d56d
// 0081d56b  33c0                 xor eax, eax
// 0081d56d  3b860c010000         cmp eax, dword ptr [esi + 0x10c]
// 0081d573  7425                 je 0x81d59a
// 0081d575  83be1801000000       cmp dword ptr [esi + 0x118], 0
// 0081d57c  89860c010000         mov dword ptr [esi + 0x10c], eax
// 0081d582  750a                 jne 0x81d58e
// 0081d584  6a01                 push 1
// 0081d586  50                   push eax
// 0081d587  6a00                 push 0
// 0081d589  e8e2901000           call 0x926670
// 0081d58e  8b06                 mov eax, dword ptr [esi]
// 0081d590  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 0081d596  8bce                 mov ecx, esi
// 0081d598  ffd2                 call edx
// 0081d59a  5e                   pop esi
// 0081d59b  c20400               ret 4
// copied from an identical function in another client (function ?SetLeftOffset@CXTPReportControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp