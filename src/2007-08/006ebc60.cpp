// roc 2007-08 006ebc60  unit: CXTPDockingPanePaintManager  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ebc60
//
// 006ebc60  83ec10               sub esp, 0x10
// 006ebc63  56                   push esi
// 006ebc64  8b742418             mov esi, dword ptr [esp + 0x18]
// 006ebc68  8d442404             lea eax, [esp + 4]
// 006ebc6c  56                   push esi
// 006ebc6d  50                   push eax
// 006ebc6e  e83d65f8ff           call 0x6721b0
// 006ebc73  8bc8                 mov ecx, eax
// 006ebc75  e84660f8ff           call 0x671cc0
// 006ebc7a  8b442404             mov eax, dword ptr [esp + 4]
// 006ebc7e  3906                 cmp dword ptr [esi], eax
// 006ebc80  7d02                 jge 0x6ebc84
// 006ebc82  8906                 mov dword ptr [esi], eax
// 006ebc84  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ebc88  3906                 cmp dword ptr [esi], eax
// 006ebc8a  7e02                 jle 0x6ebc8e
// 006ebc8c  8906                 mov dword ptr [esi], eax
// 006ebc8e  8b442408             mov eax, dword ptr [esp + 8]
// 006ebc92  394604               cmp dword ptr [esi + 4], eax
// 006ebc95  7d03                 jge 0x6ebc9a
// 006ebc97  894604               mov dword ptr [esi + 4], eax
// 006ebc9a  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ebc9e  394604               cmp dword ptr [esi + 4], eax
// 006ebca1  7e03                 jle 0x6ebca6
// 006ebca3  894604               mov dword ptr [esi + 4], eax
// 006ebca6  5e                   pop esi
// 006ebca7  83c410               add esp, 0x10
// 006ebcaa  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ?AdjustCursor@CXTPDockingPaneContext@@KAXAAVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
