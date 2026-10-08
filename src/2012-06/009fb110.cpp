// roc 2012-06 009fb110  unit: CXTPControlGallery  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fb110
//
// 009fb110  83ec10               sub esp, 0x10
// 009fb113  56                   push esi
// 009fb114  8bf1                 mov esi, ecx
// 009fb116  8d442404             lea eax, [esp + 4]
// 009fb11a  50                   push eax
// 009fb11b  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 009fb121  e8cafbffff           call 0x9facf0
// 009fb126  8b442418             mov eax, dword ptr [esp + 0x18]
// 009fb12a  c7400800000000       mov dword ptr [eax + 8], 0
// 009fb131  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 009fb137  49                   dec ecx
// 009fb138  33d2                 xor edx, edx
// 009fb13a  85c9                 test ecx, ecx
// 009fb13c  0f9cc2               setl dl
// 009fb13f  4a                   dec edx
// 009fb140  23ca                 and ecx, edx
// 009fb142  8b542410             mov edx, dword ptr [esp + 0x10]
// 009fb146  2b542408             sub edx, dword ptr [esp + 8]
// 009fb14a  89480c               mov dword ptr [eax + 0xc], ecx
// 009fb14d  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 009fb153  894814               mov dword ptr [eax + 0x14], ecx
// 009fb156  895010               mov dword ptr [eax + 0x10], edx
// 009fb159  5e                   pop esi
// 009fb15a  83c410               add esp, 0x10
// 009fb15d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetScrollInfo@CXTPControlGallery@@MAEXPAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
