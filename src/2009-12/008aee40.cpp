// roc 2009-12 008aee40  unit: CXTPDockingPaneMiniWnd  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aee40
//
// 008aee40  57                   push edi
// 008aee41  8bf9                 mov edi, ecx
// 008aee43  e8b8f8ffff           call 0x8ae700
// 008aee48  85c0                 test eax, eax
// 008aee4a  7430                 je 0x8aee7c
// 008aee4c  56                   push esi
// 008aee4d  8b742410             mov esi, dword ptr [esp + 0x10]
// 008aee51  830603               add dword ptr [esi], 3
// 008aee54  83460403             add dword ptr [esi + 4], 3
// 008aee58  b8fdffffff           mov eax, 0xfffffffd
// 008aee5d  014608               add dword ptr [esi + 8], eax
// 008aee60  01460c               add dword ptr [esi + 0xc], eax
// 008aee63  8d8ff8000000         lea ecx, [edi + 0xf8]
// 008aee69  e8e2190000           call 0x8b0850
// 008aee6e  8b4078               mov eax, dword ptr [eax + 0x78]
// 008aee71  83c002               add eax, 2
// 008aee74  014604               add dword ptr [esi + 4], eax
// 008aee77  5e                   pop esi
// 008aee78  5f                   pop edi
// 008aee79  c20800               ret 8
// 008aee7c  8bcf                 mov ecx, edi
// 008aee7e  e8ad4ff4ff           call 0x7f3e30
// 008aee83  5f                   pop edi
// 008aee84  c20800               ret 8
// copied from an identical function in another client (function ?OnNcCalcSize@CXTPDockingPaneMiniWnd@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp