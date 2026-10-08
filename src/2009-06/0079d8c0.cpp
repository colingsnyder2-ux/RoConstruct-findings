// roc 2009-06 0079d8c0  unit: CXTPControlGallery  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079d8c0
//
// 0079d8c0  83ec10               sub esp, 0x10
// 0079d8c3  56                   push esi
// 0079d8c4  8bf1                 mov esi, ecx
// 0079d8c6  8d442404             lea eax, [esp + 4]
// 0079d8ca  50                   push eax
// 0079d8cb  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 0079d8d1  e8eafbffff           call 0x79d4c0
// 0079d8d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079d8da  c7400800000000       mov dword ptr [eax + 8], 0
// 0079d8e1  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0079d8e7  49                   dec ecx
// 0079d8e8  33d2                 xor edx, edx
// 0079d8ea  85c9                 test ecx, ecx
// 0079d8ec  0f9cc2               setl dl
// 0079d8ef  4a                   dec edx
// 0079d8f0  23ca                 and ecx, edx
// 0079d8f2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0079d8f6  2b542408             sub edx, dword ptr [esp + 8]
// 0079d8fa  89480c               mov dword ptr [eax + 0xc], ecx
// 0079d8fd  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 0079d903  894814               mov dword ptr [eax + 0x14], ecx
// 0079d906  895010               mov dword ptr [eax + 0x10], edx
// 0079d909  5e                   pop esi
// 0079d90a  83c410               add esp, 0x10
// 0079d90d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetScrollInfo@CXTPControlGallery@@MAEXPAUtagSCROLLINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
