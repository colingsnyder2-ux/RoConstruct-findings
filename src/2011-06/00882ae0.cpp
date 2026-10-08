// roc 2011-06 00882ae0  unit: CXTPControlGallery  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00882ae0
//
// 00882ae0  83ec10               sub esp, 0x10
// 00882ae3  56                   push esi
// 00882ae4  8bf1                 mov esi, ecx
// 00882ae6  8d442404             lea eax, [esp + 4]
// 00882aea  50                   push eax
// 00882aeb  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 00882af1  e8eafbffff           call 0x8826e0
// 00882af6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00882afa  c7400800000000       mov dword ptr [eax + 8], 0
// 00882b01  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00882b07  49                   dec ecx
// 00882b08  33d2                 xor edx, edx
// 00882b0a  85c9                 test ecx, ecx
// 00882b0c  0f9cc2               setl dl
// 00882b0f  4a                   dec edx
// 00882b10  23ca                 and ecx, edx
// 00882b12  8b542410             mov edx, dword ptr [esp + 0x10]
// 00882b16  2b542408             sub edx, dword ptr [esp + 8]
// 00882b1a  89480c               mov dword ptr [eax + 0xc], ecx
// 00882b1d  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 00882b23  894814               mov dword ptr [eax + 0x14], ecx
// 00882b26  895010               mov dword ptr [eax + 0x10], edx
// 00882b29  5e                   pop esi
// 00882b2a  83c410               add esp, 0x10
// 00882b2d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetScrollInfo@CXTPControlGallery@@MAEXPAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
