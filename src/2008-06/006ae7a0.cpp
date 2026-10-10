// roc 2008-06 006ae7a0  unit: CXTPPaintManager  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae7a0
//
// 006ae7a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ae7a4  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 006ae7aa  83ec10               sub esp, 0x10
// 006ae7ad  56                   push esi
// 006ae7ae  8b742424             mov esi, dword ptr [esp + 0x24]
// 006ae7b2  56                   push esi
// 006ae7b3  50                   push eax
// 006ae7b4  83fa06               cmp edx, 6
// 006ae7b7  751a                 jne 0x6ae7d3
// 006ae7b9  8b442424             mov eax, dword ptr [esp + 0x24]
// 006ae7bd  8b11                 mov edx, dword ptr [ecx]
// 006ae7bf  8b742420             mov esi, dword ptr [esp + 0x20]
// 006ae7c3  8b526c               mov edx, dword ptr [edx + 0x6c]
// 006ae7c6  50                   push eax
// 006ae7c7  56                   push esi
// 006ae7c8  ffd2                 call edx
// 006ae7ca  8bc6                 mov eax, esi
// 006ae7cc  5e                   pop esi
// 006ae7cd  83c410               add esp, 0x10
// 006ae7d0  c21000               ret 0x10
// 006ae7d3  83fa05               cmp edx, 5
// 006ae7d6  751a                 jne 0x6ae7f2
// 006ae7d8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006ae7dc  8b11                 mov edx, dword ptr [ecx]
// 006ae7de  8b742420             mov esi, dword ptr [esp + 0x20]
// 006ae7e2  8b5264               mov edx, dword ptr [edx + 0x64]
// 006ae7e5  50                   push eax
// 006ae7e6  56                   push esi
// 006ae7e7  ffd2                 call edx
// 006ae7e9  8bc6                 mov eax, esi
// 006ae7eb  5e                   pop esi
// 006ae7ec  83c410               add esp, 0x10
// 006ae7ef  c21000               ret 0x10
// 006ae7f2  8b9000010000         mov edx, dword ptr [eax + 0x100]
// 006ae7f8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006ae7fc  83baf800000002       cmp dword ptr [edx + 0xf8], 2
// 006ae803  8b11                 mov edx, dword ptr [ecx]
// 006ae805  50                   push eax
// 006ae806  7509                 jne 0x6ae811
// 006ae808  8b5258               mov edx, dword ptr [edx + 0x58]
// 006ae80b  8d442410             lea eax, [esp + 0x10]
// 006ae80f  eb07                 jmp 0x6ae818
// 006ae811  8b525c               mov edx, dword ptr [edx + 0x5c]
// 006ae814  8d442418             lea eax, [esp + 0x18]
// 006ae818  50                   push eax
// 006ae819  ffd2                 call edx
// 006ae81b  8b10                 mov edx, dword ptr [eax]
// 006ae81d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ae821  8911                 mov dword ptr [ecx], edx
// 006ae823  8b4004               mov eax, dword ptr [eax + 4]
// 006ae826  894104               mov dword ptr [ecx + 4], eax
// 006ae829  8bc1                 mov eax, ecx
// 006ae82b  5e                   pop esi
// 006ae82c  83c410               add esp, 0x10
// 006ae82f  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControl@CXTPPaintManager@@QAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp
