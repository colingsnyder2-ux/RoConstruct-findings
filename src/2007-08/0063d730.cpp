// roc 2007-08 0063d730  unit: CXTPPaintManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063d730
//
// 0063d730  8b01                 mov eax, dword ptr [ecx]
// 0063d732  56                   push esi
// 0063d733  8b742408             mov esi, dword ptr [esp + 8]
// 0063d737  8906                 mov dword ptr [esi], eax
// 0063d739  8b5104               mov edx, dword ptr [ecx + 4]
// 0063d73c  895604               mov dword ptr [esi + 4], edx
// 0063d73f  8b4108               mov eax, dword ptr [ecx + 8]
// 0063d742  8b542410             mov edx, dword ptr [esp + 0x10]
// 0063d746  894608               mov dword ptr [esi + 8], eax
// 0063d749  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063d74d  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0063d750  52                   push edx
// 0063d751  50                   push eax
// 0063d752  56                   push esi
// 0063d753  894e0c               mov dword ptr [esi + 0xc], ecx
// 0063d756  ff15d8ed7700         call dword ptr [0x77edd8]
// 0063d75c  8bc6                 mov eax, esi
// 0063d75e  5e                   pop esi
// 0063d75f  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ??HCRect@@QBE?AV0@UtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
