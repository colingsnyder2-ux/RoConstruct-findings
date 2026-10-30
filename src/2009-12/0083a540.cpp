// roc 2009-12 0083a540  unit: CXTPDockingPaneManager  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083a540
//
// 0083a540  83ec10               sub esp, 0x10
// 0083a543  56                   push esi
// 0083a544  57                   push edi
// 0083a545  8bf9                 mov edi, ecx
// 0083a547  8b8fd0000000         mov ecx, dword ptr [edi + 0xd0]
// 0083a54d  8b07                 mov eax, dword ptr [edi]
// 0083a54f  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 0083a555  51                   push ecx
// 0083a556  6a00                 push 0
// 0083a558  8bcf                 mov ecx, edi
// 0083a55a  ffd2                 call edx
// 0083a55c  85c0                 test eax, eax
// 0083a55e  7407                 je 0x83a567
// 0083a560  8d70e0               lea esi, [eax - 0x20]
// 0083a563  85f6                 test esi, esi
// 0083a565  750a                 jne 0x83a571
// 0083a567  33c0                 xor eax, eax
// 0083a569  5f                   pop edi
// 0083a56a  5e                   pop esi
// 0083a56b  83c410               add esp, 0x10
// 0083a56e  c21c00               ret 0x1c
// 0083a571  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083a575  50                   push eax
// 0083a576  8bce                 mov ecx, esi
// 0083a578  e863210200           call 0x85c6e0
// 0083a57d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0083a581  8b542424             mov edx, dword ptr [esp + 0x24]
// 0083a585  83ec10               sub esp, 0x10
// 0083a588  8bc4                 mov eax, esp
// 0083a58a  8908                 mov dword ptr [eax], ecx
// 0083a58c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0083a590  895004               mov dword ptr [eax + 4], edx
// 0083a593  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0083a597  894808               mov dword ptr [eax + 8], ecx
// 0083a59a  8bce                 mov ecx, esi
// 0083a59c  89500c               mov dword ptr [eax + 0xc], edx
// 0083a59f  e87c290200           call 0x85cf20
// 0083a5a4  8d442408             lea eax, [esp + 8]
// 0083a5a8  50                   push eax
// 0083a5a9  8bcf                 mov ecx, edi
// 0083a5ab  8974240c             mov dword ptr [esp + 0xc], esi
// 0083a5af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0083a5b7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0083a5bf  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0083a5c7  e8b4e0ffff           call 0x838680
// 0083a5cc  8bc8                 mov ecx, eax
// 0083a5ce  e83dfcffff           call 0x83a210
// 0083a5d3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0083a5d7  8b542430             mov edx, dword ptr [esp + 0x30]
// 0083a5db  51                   push ecx
// 0083a5dc  8d4620               lea eax, [esi + 0x20]
// 0083a5df  52                   push edx
// 0083a5e0  50                   push eax
// 0083a5e1  8bcf                 mov ecx, edi
// 0083a5e3  e888f3ffff           call 0x839970
// 0083a5e8  8bcf                 mov ecx, edi
// 0083a5ea  e821e4ffff           call 0x838a10
// 0083a5ef  5f                   pop edi
// 0083a5f0  8bc6                 mov eax, esi
// 0083a5f2  5e                   pop esi
// 0083a5f3  83c410               add esp, 0x10
// 0083a5f6  c21c00               ret 0x1c
// copied from an identical function in another client (function ?CreatePane@CXTPDockingPaneManager@@QAEPAVCXTPDockingPane@@IVCRect@@W4XTPDockingPaneDirection@@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp