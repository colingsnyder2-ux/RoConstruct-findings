// roc 2009-12 008aafc0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aafc0
//
// 008aafc0  56                   push esi
// 008aafc1  57                   push edi
// 008aafc2  8bf9                 mov edi, ecx
// 008aafc4  8b87b0000000         mov eax, dword ptr [edi + 0xb0]
// 008aafca  33f6                 xor esi, esi
// 008aafcc  397008               cmp dword ptr [eax + 8], esi
// 008aafcf  7e31                 jle 0x8ab002
// 008aafd1  85f6                 test esi, esi
// 008aafd3  7c3c                 jl 0x8ab011
// 008aafd5  3b7008               cmp esi, dword ptr [eax + 8]
// 008aafd8  7d37                 jge 0x8ab011
// 008aafda  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008aafde  8b4004               mov eax, dword ptr [eax + 4]
// 008aafe1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008aafe5  51                   push ecx
// 008aafe6  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008aafe9  8d04b0               lea eax, [eax + esi*4]
// 008aafec  52                   push edx
// 008aafed  e89e460200           call 0x8cf690
// 008aaff2  85c0                 test eax, eax
// 008aaff4  7513                 jne 0x8ab009
// 008aaff6  8b87b0000000         mov eax, dword ptr [edi + 0xb0]
// 008aaffc  46                   inc esi
// 008aaffd  3b7008               cmp esi, dword ptr [eax + 8]
// 008ab000  7ccf                 jl 0x8aafd1
// 008ab002  5f                   pop edi
// 008ab003  33c0                 xor eax, eax
// 008ab005  5e                   pop esi
// 008ab006  c20800               ret 8
// 008ab009  8b4040               mov eax, dword ptr [eax + 0x40]
// 008ab00c  5f                   pop edi
// 008ab00d  5e                   pop esi
// 008ab00e  c20800               ret 8
// 008ab011  e8f68af4ff           call 0x7f3b0c
// copied from an identical function in another client (function ?HitTest@CXTPDockingPaneAutoHidePanel@@QBEPAVCXTPDockingPane@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp