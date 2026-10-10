// roc 2008-06 007531c0  unit: CXTPReportTip  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007531c0
//
// 007531c0  8b442404             mov eax, dword ptr [esp + 4]
// 007531c4  83e800               sub eax, 0
// 007531c7  56                   push esi
// 007531c8  8bf1                 mov esi, ecx
// 007531ca  0f8480000000         je 0x753250
// 007531d0  83e801               sub eax, 1
// 007531d3  7444                 je 0x753219
// 007531d5  83e801               sub eax, 1
// 007531d8  0f8594000000         jne 0x753272
// 007531de  8b4620               mov eax, dword ptr [esi + 0x20]
// 007531e1  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 007531e7  85c9                 test ecx, ecx
// 007531e9  0f8483000000         je 0x753272
// 007531ef  e85c6ef8ff           call 0x6da050
// 007531f4  85c0                 test eax, eax
// 007531f6  7e7a                 jle 0x753272
// 007531f8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007531fb  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00753201  8b11                 mov edx, dword ptr [ecx]
// 00753203  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00753206  6a00                 push 0
// 00753208  6a00                 push 0
// 0075320a  ffd0                 call eax
// 0075320c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075320f  50                   push eax
// 00753210  e83bf2f7ff           call 0x6d2450
// 00753215  5e                   pop esi
// 00753216  c20400               ret 4
// 00753219  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075321c  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 00753222  85c9                 test ecx, ecx
// 00753224  744c                 je 0x753272
// 00753226  e8256ef8ff           call 0x6da050
// 0075322b  85c0                 test eax, eax
// 0075322d  7e43                 jle 0x753272
// 0075322f  8b5620               mov edx, dword ptr [esi + 0x20]
// 00753232  8b8af8000000         mov ecx, dword ptr [edx + 0xf8]
// 00753238  8b01                 mov eax, dword ptr [ecx]
// 0075323a  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0075323d  6a00                 push 0
// 0075323f  6a00                 push 0
// 00753241  ffd2                 call edx
// 00753243  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00753246  50                   push eax
// 00753247  e804f2f7ff           call 0x6d2450
// 0075324c  5e                   pop esi
// 0075324d  c20400               ret 4
// 00753250  8b4620               mov eax, dword ptr [esi + 0x20]
// 00753253  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00753259  8b11                 mov edx, dword ptr [ecx]
// 0075325b  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 00753261  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00753264  6a00                 push 0
// 00753266  50                   push eax
// 00753267  ffd2                 call edx
// 00753269  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075326c  50                   push eax
// 0075326d  e8def1f7ff           call 0x6d2450
// 00753272  5e                   pop esi
// 00753273  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportNavigator.cpp (function ?MoveFirstVisibleRow@CXTPReportNavigator@@IAEXW4XTPReportRowType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp
