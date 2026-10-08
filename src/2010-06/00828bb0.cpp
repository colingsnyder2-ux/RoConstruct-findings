// roc 2010-06 00828bb0  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00828bb0
//
// 00828bb0  56                   push esi
// 00828bb1  57                   push edi
// 00828bb2  8bf9                 mov edi, ecx
// 00828bb4  8d44240c             lea eax, [esp + 0xc]
// 00828bb8  50                   push eax
// 00828bb9  8db7c0000000         lea esi, [edi + 0xc0]
// 00828bbf  56                   push esi
// 00828bc0  ff1518ba9e00         call dword ptr [0x9eba18]
// 00828bc6  85c0                 test eax, eax
// 00828bc8  7522                 jne 0x828bec
// 00828bca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00828bce  8b542410             mov edx, dword ptr [esp + 0x10]
// 00828bd2  8b442414             mov eax, dword ptr [esp + 0x14]
// 00828bd6  890e                 mov dword ptr [esi], ecx
// 00828bd8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00828bdc  895604               mov dword ptr [esi + 4], edx
// 00828bdf  894608               mov dword ptr [esi + 8], eax
// 00828be2  894e0c               mov dword ptr [esi + 0xc], ecx
// 00828be5  8bcf                 mov ecx, edi
// 00828be7  e864eaffff           call 0x827650
// 00828bec  5f                   pop edi
// 00828bed  5e                   pop esi
// 00828bee  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetRect@CXTPControlGallery@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
