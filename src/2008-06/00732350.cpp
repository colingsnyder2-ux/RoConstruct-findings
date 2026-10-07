// roc 2008-06 00732350  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00732350
//
// 00732350  56                   push esi
// 00732351  57                   push edi
// 00732352  8bf9                 mov edi, ecx
// 00732354  8d44240c             lea eax, [esp + 0xc]
// 00732358  50                   push eax
// 00732359  8db7c0000000         lea esi, [edi + 0xc0]
// 0073235f  56                   push esi
// 00732360  ff15682c8000         call dword ptr [0x802c68]
// 00732366  85c0                 test eax, eax
// 00732368  7522                 jne 0x73238c
// 0073236a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073236e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00732372  8b442414             mov eax, dword ptr [esp + 0x14]
// 00732376  890e                 mov dword ptr [esi], ecx
// 00732378  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073237c  895604               mov dword ptr [esi + 4], edx
// 0073237f  894608               mov dword ptr [esi + 8], eax
// 00732382  894e0c               mov dword ptr [esi + 0xc], ecx
// 00732385  8bcf                 mov ecx, edi
// 00732387  e864eaffff           call 0x730df0
// 0073238c  5f                   pop edi
// 0073238d  5e                   pop esi
// 0073238e  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetRect@CXTPControlGallery@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
