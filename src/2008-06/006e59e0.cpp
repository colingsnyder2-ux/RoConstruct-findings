// roc 2008-06 006e59e0  unit: CXTPDockingPaneManager  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e59e0
//
// 006e59e0  56                   push esi
// 006e59e1  8b742408             mov esi, dword ptr [esp + 8]
// 006e59e5  57                   push edi
// 006e59e6  8bf9                 mov edi, ecx
// 006e59e8  85f6                 test esi, esi
// 006e59ea  7439                 je 0x6e5a25
// 006e59ec  8d4604               lea eax, [esi + 4]
// 006e59ef  50                   push eax
// 006e59f0  ff15b0218000         call dword ptr [0x8021b0]
// 006e59f6  8b17                 mov edx, dword ptr [edi]
// 006e59f8  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 006e59fe  56                   push esi
// 006e59ff  6a03                 push 3
// 006e5a01  8bcf                 mov ecx, edi
// 006e5a03  ffd0                 call eax
// 006e5a05  83f8ff               cmp eax, -1
// 006e5a08  7414                 je 0x6e5a1e
// 006e5a0a  837e3000             cmp dword ptr [esi + 0x30], 0
// 006e5a0e  740e                 je 0x6e5a1e
// 006e5a10  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006e5a13  8b11                 mov edx, dword ptr [ecx]
// 006e5a15  8d4620               lea eax, [esi + 0x20]
// 006e5a18  50                   push eax
// 006e5a19  8b4248               mov eax, dword ptr [edx + 0x48]
// 006e5a1c  ffd0                 call eax
// 006e5a1e  8bce                 mov ecx, esi
// 006e5a20  e8bfb1fbff           call 0x6a0be4
// 006e5a25  5f                   pop edi
// 006e5a26  5e                   pop esi
// 006e5a27  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneManager.cpp (function ?ClosePane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp
