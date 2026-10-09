// roc 2007-03 006cc5b0  unit: seg_006c0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cc5b0
//
// 006cc5b0  51                   push ecx
// 006cc5b1  53                   push ebx
// 006cc5b2  56                   push esi
// 006cc5b3  8d7120               lea esi, [ecx + 0x20]
// 006cc5b6  57                   push edi
// 006cc5b7  8bce                 mov ecx, esi
// 006cc5b9  e832f1f9ff           call 0x66b6f0
// 006cc5be  85c0                 test eax, eax
// 006cc5c0  8944240c             mov dword ptr [esp + 0xc], eax
// 006cc5c4  7426                 je 0x6cc5ec
// 006cc5c6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006cc5ca  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006cc5ce  8bff                 mov edi, edi
// 006cc5d0  3bc7                 cmp eax, edi
// 006cc5d2  7418                 je 0x6cc5ec
// 006cc5d4  8d44240c             lea eax, [esp + 0xc]
// 006cc5d8  50                   push eax
// 006cc5d9  8bce                 mov ecx, esi
// 006cc5db  e8408c0400           call 0x715220
// 006cc5e0  3bc3                 cmp eax, ebx
// 006cc5e2  7411                 je 0x6cc5f5
// 006cc5e4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006cc5e8  85c0                 test eax, eax
// 006cc5ea  75e4                 jne 0x6cc5d0
// 006cc5ec  5f                   pop edi
// 006cc5ed  5e                   pop esi
// 006cc5ee  33c0                 xor eax, eax
// 006cc5f0  5b                   pop ebx
// 006cc5f1  59                   pop ecx
// 006cc5f2  c20800               ret 8
// 006cc5f5  5f                   pop edi
// 006cc5f6  5e                   pop esi
// 006cc5f7  b801000000           mov eax, 1
// 006cc5fc  5b                   pop ebx
// 006cc5fd  59                   pop ecx
// 006cc5fe  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_Before@CXTPDockingPaneSplitterContainer@@ABEHPBVCXTPDockingPaneBase@@PAU__POSITION@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
