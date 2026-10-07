// roc 2007-08 006b7580  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b7580
//
// 006b7580  56                   push esi
// 006b7581  57                   push edi
// 006b7582  8bf9                 mov edi, ecx
// 006b7584  8d44240c             lea eax, [esp + 0xc]
// 006b7588  50                   push eax
// 006b7589  8db7c0000000         lea esi, [edi + 0xc0]
// 006b758f  56                   push esi
// 006b7590  ff1528ee7700         call dword ptr [0x77ee28]
// 006b7596  85c0                 test eax, eax
// 006b7598  7522                 jne 0x6b75bc
// 006b759a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b759e  8b542410             mov edx, dword ptr [esp + 0x10]
// 006b75a2  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b75a6  890e                 mov dword ptr [esi], ecx
// 006b75a8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b75ac  895604               mov dword ptr [esi + 4], edx
// 006b75af  894608               mov dword ptr [esi + 8], eax
// 006b75b2  894e0c               mov dword ptr [esi + 0xc], ecx
// 006b75b5  8bcf                 mov ecx, edi
// 006b75b7  e8c4ebffff           call 0x6b6180
// 006b75bc  5f                   pop edi
// 006b75bd  5e                   pop esi
// 006b75be  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlGallery.cpp (function ?SetRect@CXTPControlGallery@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlGallery.cpp
