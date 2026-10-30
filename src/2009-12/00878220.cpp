// roc 2009-12 00878220  unit: CXTPControlGallery  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878220
//
// 00878220  8b442404             mov eax, dword ptr [esp + 4]
// 00878224  83ec10               sub esp, 0x10
// 00878227  85c0                 test eax, eax
// 00878229  752a                 jne 0x878255
// 0087822b  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00878231  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 00878237  890424               mov dword ptr [esp], eax
// 0087823a  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 00878240  89542404             mov dword ptr [esp + 4], edx
// 00878244  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 0087824a  89442408             mov dword ptr [esp + 8], eax
// 0087824e  8954240c             mov dword ptr [esp + 0xc], edx
// 00878252  8d0424               lea eax, [esp]
// 00878255  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0087825b  8b11                 mov edx, dword ptr [ecx]
// 0087825d  56                   push esi
// 0087825e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00878262  56                   push esi
// 00878263  50                   push eax
// 00878264  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 0087826a  ffd0                 call eax
// 0087826c  5e                   pop esi
// 0087826d  83c410               add esp, 0x10
// 00878270  c20800               ret 8
// copied from an identical function in another client (function ?InvalidateItems@CXTPControlGallery@@QAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp