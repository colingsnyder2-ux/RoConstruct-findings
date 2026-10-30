// roc 2009-12 00878850  unit: CXTPControlGallery  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878850
//
// 00878850  83ec10               sub esp, 0x10
// 00878853  56                   push esi
// 00878854  8bf1                 mov esi, ecx
// 00878856  8d442404             lea eax, [esp + 4]
// 0087885a  50                   push eax
// 0087885b  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 00878861  e8eafbffff           call 0x878450
// 00878866  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087886a  c7400800000000       mov dword ptr [eax + 8], 0
// 00878871  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00878877  49                   dec ecx
// 00878878  33d2                 xor edx, edx
// 0087887a  85c9                 test ecx, ecx
// 0087887c  0f9cc2               setl dl
// 0087887f  4a                   dec edx
// 00878880  23ca                 and ecx, edx
// 00878882  8b542410             mov edx, dword ptr [esp + 0x10]
// 00878886  2b542408             sub edx, dword ptr [esp + 8]
// 0087888a  89480c               mov dword ptr [eax + 0xc], ecx
// 0087888d  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 00878893  894814               mov dword ptr [eax + 0x14], ecx
// 00878896  895010               mov dword ptr [eax + 0x10], edx
// 00878899  5e                   pop esi
// 0087889a  83c410               add esp, 0x10
// 0087889d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetScrollInfo@CXTPControlGallery@@MAEXPAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
