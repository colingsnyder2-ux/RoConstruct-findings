// from server: 100% by auto
// roc 2008-06 00757980  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00757980
//
// 00757980  e8abeeffff           call 0x756830
// 00757985  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 0075798b  83f803               cmp eax, 3
// 0075798e  7719                 ja 0x7579a9
// 00757990  ff2485ac797500       jmp dword ptr [eax*4 + 0x7579ac]
// 00757997  b803000000           mov eax, 3
// 0075799c  c3                   ret 
// 0075799d  b801000000           mov eax, 1
// 007579a2  c3                   ret 
// 007579a3  b802000000           mov eax, 2
// 007579a8  c3                   ret 
// 007579a9  33c0                 xor eax, eax
// 007579ab  c3                   ret 
// 007579ac  97                   xchg edi, eax
// 007579ad  7975                 jns 0x757a24
// 007579af  009d797500a3         add byte ptr [ebp - 0x5cff8a87], bl
// 007579b5  7975                 jns 0x757a2c
// library xtp-11.2.2-lib-strlen/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetPosition@CAutoHidePanelTabManager@CXTPDockingPaneAutoHidePanel@@UBE?AW4XTPTabPosition@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
