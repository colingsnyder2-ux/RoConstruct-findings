// from server: 100% by auto
// roc 2008-06 007571c0  unit: CXTPDockingPaneAutoHideWnd  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007571c0
//
// 007571c0  56                   push esi
// 007571c1  57                   push edi
// 007571c2  8bf1                 mov esi, ecx
// 007571c4  e8d7f5ffff           call 0x7567a0
// 007571c9  8bb8cc000000         mov edi, dword ptr [eax + 0xcc]
// 007571cf  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007571d5  50                   push eax
// 007571d6  8bce                 mov ecx, esi
// 007571d8  e8c3f5ffff           call 0x7567a0
// 007571dd  8bc8                 mov ecx, eax
// 007571df  e8ccdef8ff           call 0x6e50b0
// 007571e4  83f803               cmp eax, 3
// 007571e7  772d                 ja 0x757216
// 007571e9  ff2485b4727500       jmp dword ptr [eax*4 + 0x7572b4]
// 007571f0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007571f4  894c240c             mov dword ptr [esp + 0xc], ecx
// 007571f8  eb1c                 jmp 0x757216
// 007571fa  8b542424             mov edx, dword ptr [esp + 0x24]
// 007571fe  89542414             mov dword ptr [esp + 0x14], edx
// 00757202  eb12                 jmp 0x757216
// 00757204  8b442420             mov eax, dword ptr [esp + 0x20]
// 00757208  89442410             mov dword ptr [esp + 0x10], eax
// 0075720c  eb08                 jmp 0x757216
// 0075720e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00757212  894c2418             mov dword ptr [esp + 0x18], ecx
// 00757216  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 0075721d  8b96f8000000         mov edx, dword ptr [esi + 0xf8]
// 00757223  8b8aa4010000         mov ecx, dword ptr [edx + 0x1a4]
// 00757229  750d                 jne 0x757238
// 0075722b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0075722f  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00757233  894124               mov dword ptr [ecx + 0x24], eax
// 00757236  eb0b                 jmp 0x757243
// 00757238  8b442418             mov eax, dword ptr [esp + 0x18]
// 0075723c  2b442410             sub eax, dword ptr [esp + 0x10]
// 00757240  894128               mov dword ptr [ecx + 0x28], eax
// 00757243  8d54240c             lea edx, [esp + 0xc]
// 00757247  52                   push edx
// 00757248  8bcf                 mov ecx, edi
// 0075724a  e84da2f4ff           call 0x6a149c
// 0075724f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00757253  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00757257  8b542414             mov edx, dword ptr [esp + 0x14]
// 0075725b  898614010000         mov dword ptr [esi + 0x114], eax
// 00757261  8b442418             mov eax, dword ptr [esp + 0x18]
// 00757265  898e18010000         mov dword ptr [esi + 0x118], ecx
// 0075726b  89961c010000         mov dword ptr [esi + 0x11c], edx
// 00757271  898620010000         mov dword ptr [esi + 0x120], eax
// 00757277  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0075727d  8b9620010000         mov edx, dword ptr [esi + 0x120]
// 00757283  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 00757289  6a01                 push 1
// 0075728b  2bd0                 sub edx, eax
// 0075728d  52                   push edx
// 0075728e  8b961c010000         mov edx, dword ptr [esi + 0x11c]
// 00757294  2bd1                 sub edx, ecx
// 00757296  52                   push edx
// 00757297  50                   push eax
// 00757298  51                   push ecx
// 00757299  8bce                 mov ecx, esi
// 0075729b  e8ac97f4ff           call 0x6a0a4c
// 007572a0  8b4620               mov eax, dword ptr [esi + 0x20]
// 007572a3  6a00                 push 0
// 007572a5  6a00                 push 0
// 007572a7  50                   push eax
// 007572a8  ff15182e8000         call dword ptr [0x802e18]
// 007572ae  5f                   pop edi
// 007572af  5e                   pop esi
// 007572b0  c22000               ret 0x20
// 007572b3  90                   nop 
// library xtp-11.2.2-lib-strlen/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?Reposition@CXTPDockingPaneAutoHideWnd@@AAEXVCRect@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
