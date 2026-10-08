// from server: 100% by auto
// roc 2008-06 0072f240  unit: CXTPControlGallery  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072f240
//
// 0072f240  83ec10               sub esp, 0x10
// 0072f243  56                   push esi
// 0072f244  8bf1                 mov esi, ecx
// 0072f246  8d442404             lea eax, [esp + 4]
// 0072f24a  50                   push eax
// 0072f24b  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 0072f251  e8eafbffff           call 0x72ee40
// 0072f256  8b442418             mov eax, dword ptr [esp + 0x18]
// 0072f25a  c7400800000000       mov dword ptr [eax + 8], 0
// 0072f261  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0072f267  49                   dec ecx
// 0072f268  33d2                 xor edx, edx
// 0072f26a  85c9                 test ecx, ecx
// 0072f26c  0f9cc2               setl dl
// 0072f26f  4a                   dec edx
// 0072f270  23ca                 and ecx, edx
// 0072f272  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072f276  2b542408             sub edx, dword ptr [esp + 8]
// 0072f27a  89480c               mov dword ptr [eax + 0xc], ecx
// 0072f27d  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 0072f283  894814               mov dword ptr [eax + 0x14], ecx
// 0072f286  895010               mov dword ptr [eax + 0x10], edx
// 0072f289  5e                   pop esi
// 0072f28a  83c410               add esp, 0x10
// 0072f28d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetScrollInfo@CXTPControlGallery@@MAEXPAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
