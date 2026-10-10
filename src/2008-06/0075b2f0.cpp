// roc 2008-06 0075b2f0  unit: CXTPDockingPaneMiniWnd  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075b2f0
//
// 0075b2f0  8bc1                 mov eax, ecx
// 0075b2f2  83b828ffffff00       cmp dword ptr [eax - 0xd8], 0
// 0075b2f9  56                   push esi
// 0075b2fa  57                   push edi
// 0075b2fb  7533                 jne 0x75b330
// 0075b2fd  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0075b300  8bb008ffffff         mov esi, dword ptr [eax - 0xf8]
// 0075b306  8d8808ffffff         lea ecx, [eax - 0xf8]
// 0075b30c  83c01c               add eax, 0x1c
// 0075b30f  83ec10               sub esp, 0x10
// 0075b312  8bd4                 mov edx, esp
// 0075b314  893a                 mov dword ptr [edx], edi
// 0075b316  8b7804               mov edi, dword ptr [eax + 4]
// 0075b319  897a04               mov dword ptr [edx + 4], edi
// 0075b31c  8b7808               mov edi, dword ptr [eax + 8]
// 0075b31f  8b400c               mov eax, dword ptr [eax + 0xc]
// 0075b322  897a08               mov dword ptr [edx + 8], edi
// 0075b325  89420c               mov dword ptr [edx + 0xc], eax
// 0075b328  8b96a8010000         mov edx, dword ptr [esi + 0x1a8]
// 0075b32e  ffd2                 call edx
// 0075b330  5f                   pop edi
// 0075b331  5e                   pop esi
// 0075b332  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?CreateContainer@CXTPDockingPaneMiniWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp
