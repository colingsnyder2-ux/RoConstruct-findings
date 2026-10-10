// roc 2012-06 00a37fc0  unit: CXTPDockingPaneMiniWnd  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a37fc0
//
// 00a37fc0  8bc1                 mov eax, ecx
// 00a37fc2  83b828ffffff00       cmp dword ptr [eax - 0xd8], 0
// 00a37fc9  56                   push esi
// 00a37fca  57                   push edi
// 00a37fcb  7533                 jne 0xa38000
// 00a37fcd  8b781c               mov edi, dword ptr [eax + 0x1c]
// 00a37fd0  8bb008ffffff         mov esi, dword ptr [eax - 0xf8]
// 00a37fd6  8d8808ffffff         lea ecx, [eax - 0xf8]
// 00a37fdc  83c01c               add eax, 0x1c
// 00a37fdf  83ec10               sub esp, 0x10
// 00a37fe2  8bd4                 mov edx, esp
// 00a37fe4  893a                 mov dword ptr [edx], edi
// 00a37fe6  8b7804               mov edi, dword ptr [eax + 4]
// 00a37fe9  897a04               mov dword ptr [edx + 4], edi
// 00a37fec  8b7808               mov edi, dword ptr [eax + 8]
// 00a37fef  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a37ff2  897a08               mov dword ptr [edx + 8], edi
// 00a37ff5  89420c               mov dword ptr [edx + 0xc], eax
// 00a37ff8  8b96a8010000         mov edx, dword ptr [esi + 0x1a8]
// 00a37ffe  ffd2                 call edx
// 00a38000  5f                   pop edi
// 00a38001  5e                   pop esi
// 00a38002  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?CreateContainer@CXTPDockingPaneMiniWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp
