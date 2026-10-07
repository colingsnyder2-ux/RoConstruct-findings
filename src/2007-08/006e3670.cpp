// roc 2007-08 006e3670  unit: CXTColorBase  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e3670
//
// 006e3670  51                   push ecx
// 006e3671  53                   push ebx
// 006e3672  56                   push esi
// 006e3673  8d7120               lea esi, [ecx + 0x20]
// 006e3676  57                   push edi
// 006e3677  8bce                 mov ecx, esi
// 006e3679  e8e2aef7ff           call 0x65e560
// 006e367e  85c0                 test eax, eax
// 006e3680  8944240c             mov dword ptr [esp + 0xc], eax
// 006e3684  7426                 je 0x6e36ac
// 006e3686  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006e368a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006e368e  8bff                 mov edi, edi
// 006e3690  3bc7                 cmp eax, edi
// 006e3692  7418                 je 0x6e36ac
// 006e3694  8d44240c             lea eax, [esp + 0xc]
// 006e3698  50                   push eax
// 006e3699  8bce                 mov ecx, esi
// 006e369b  e8c0c30300           call 0x71fa60
// 006e36a0  3bc3                 cmp eax, ebx
// 006e36a2  7411                 je 0x6e36b5
// 006e36a4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e36a8  85c0                 test eax, eax
// 006e36aa  75e4                 jne 0x6e3690
// 006e36ac  5f                   pop edi
// 006e36ad  5e                   pop esi
// 006e36ae  33c0                 xor eax, eax
// 006e36b0  5b                   pop ebx
// 006e36b1  59                   pop ecx
// 006e36b2  c20800               ret 8
// 006e36b5  5f                   pop edi
// 006e36b6  5e                   pop esi
// 006e36b7  b801000000           mov eax, 1
// 006e36bc  5b                   pop ebx
// 006e36bd  59                   pop ecx
// 006e36be  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_Before@CXTPDockingPaneSplitterContainer@@ABEHPBVCXTPDockingPaneBase@@PAU__POSITION@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
