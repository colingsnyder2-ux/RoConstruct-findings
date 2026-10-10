// roc 2008-06 0072ec10  unit: CXTPControlGallery  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072ec10
//
// 0072ec10  8b442404             mov eax, dword ptr [esp + 4]
// 0072ec14  83ec10               sub esp, 0x10
// 0072ec17  85c0                 test eax, eax
// 0072ec19  752a                 jne 0x72ec45
// 0072ec1b  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 0072ec21  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 0072ec27  890424               mov dword ptr [esp], eax
// 0072ec2a  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 0072ec30  89542404             mov dword ptr [esp + 4], edx
// 0072ec34  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 0072ec3a  89442408             mov dword ptr [esp + 8], eax
// 0072ec3e  8954240c             mov dword ptr [esp + 0xc], edx
// 0072ec42  8d0424               lea eax, [esp]
// 0072ec45  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0072ec4b  8b11                 mov edx, dword ptr [ecx]
// 0072ec4d  56                   push esi
// 0072ec4e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0072ec52  56                   push esi
// 0072ec53  50                   push eax
// 0072ec54  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 0072ec5a  ffd0                 call eax
// 0072ec5c  5e                   pop esi
// 0072ec5d  83c410               add esp, 0x10
// 0072ec60  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlGallery.cpp (function ?InvalidateItems@CXTPControlGallery@@QAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp
