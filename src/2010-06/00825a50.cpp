// roc 2010-06 00825a50  unit: CXTPControlGallery  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00825a50
//
// 00825a50  83ec10               sub esp, 0x10
// 00825a53  56                   push esi
// 00825a54  8bf1                 mov esi, ecx
// 00825a56  8d442404             lea eax, [esp + 4]
// 00825a5a  50                   push eax
// 00825a5b  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 00825a61  e8eafbffff           call 0x825650
// 00825a66  8b442418             mov eax, dword ptr [esp + 0x18]
// 00825a6a  c7400800000000       mov dword ptr [eax + 8], 0
// 00825a71  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00825a77  49                   dec ecx
// 00825a78  33d2                 xor edx, edx
// 00825a7a  85c9                 test ecx, ecx
// 00825a7c  0f9cc2               setl dl
// 00825a7f  4a                   dec edx
// 00825a80  23ca                 and ecx, edx
// 00825a82  8b542410             mov edx, dword ptr [esp + 0x10]
// 00825a86  2b542408             sub edx, dword ptr [esp + 8]
// 00825a8a  89480c               mov dword ptr [eax + 0xc], ecx
// 00825a8d  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 00825a93  894814               mov dword ptr [eax + 0x14], ecx
// 00825a96  895010               mov dword ptr [eax + 0x10], edx
// 00825a99  5e                   pop esi
// 00825a9a  83c410               add esp, 0x10
// 00825a9d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetScrollInfo@CXTPControlGallery@@MAEXPAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
