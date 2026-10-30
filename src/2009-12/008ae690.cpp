// roc 2009-12 008ae690  unit: CXTPDockingPaneMiniWnd  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ae690
//
// 008ae690  8bc1                 mov eax, ecx
// 008ae692  83b828ffffff00       cmp dword ptr [eax - 0xd8], 0
// 008ae699  56                   push esi
// 008ae69a  57                   push edi
// 008ae69b  7533                 jne 0x8ae6d0
// 008ae69d  8b781c               mov edi, dword ptr [eax + 0x1c]
// 008ae6a0  8bb008ffffff         mov esi, dword ptr [eax - 0xf8]
// 008ae6a6  8d8808ffffff         lea ecx, [eax - 0xf8]
// 008ae6ac  83c01c               add eax, 0x1c
// 008ae6af  83ec10               sub esp, 0x10
// 008ae6b2  8bd4                 mov edx, esp
// 008ae6b4  893a                 mov dword ptr [edx], edi
// 008ae6b6  8b7804               mov edi, dword ptr [eax + 4]
// 008ae6b9  897a04               mov dword ptr [edx + 4], edi
// 008ae6bc  8b7808               mov edi, dword ptr [eax + 8]
// 008ae6bf  8b400c               mov eax, dword ptr [eax + 0xc]
// 008ae6c2  897a08               mov dword ptr [edx + 8], edi
// 008ae6c5  89420c               mov dword ptr [edx + 0xc], eax
// 008ae6c8  8b96a8010000         mov edx, dword ptr [esi + 0x1a8]
// 008ae6ce  ffd2                 call edx
// 008ae6d0  5f                   pop edi
// 008ae6d1  5e                   pop esi
// 008ae6d2  c3                   ret 
// copied from an identical function in another client (function ?CreateContainer@CXTPDockingPaneMiniWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp