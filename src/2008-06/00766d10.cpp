// roc 2008-06 00766d10  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00766d10
//
// 00766d10  83b91c02000000       cmp dword ptr [ecx + 0x21c], 0
// 00766d17  8b442418             mov eax, dword ptr [esp + 0x18]
// 00766d1b  7417                 je 0x766d34
// 00766d1d  83b92002000000       cmp dword ptr [ecx + 0x220], 0
// 00766d24  7408                 je 0x766d2e
// 00766d26  8b5060               mov edx, dword ptr [eax + 0x60]
// 00766d29  394204               cmp dword ptr [edx + 4], eax
// 00766d2c  7406                 je 0x766d34
// 00766d2e  83c8ff               or eax, 0xffffffff
// 00766d31  c21800               ret 0x18
// 00766d34  8b542408             mov edx, dword ptr [esp + 8]
// 00766d38  50                   push eax
// 00766d39  83ec10               sub esp, 0x10
// 00766d3c  83b91802000000       cmp dword ptr [ecx + 0x218], 0
// 00766d43  8bc4                 mov eax, esp
// 00766d45  8910                 mov dword ptr [eax], edx
// 00766d47  8b542420             mov edx, dword ptr [esp + 0x20]
// 00766d4b  895004               mov dword ptr [eax + 4], edx
// 00766d4e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00766d52  895008               mov dword ptr [eax + 8], edx
// 00766d55  8b542428             mov edx, dword ptr [esp + 0x28]
// 00766d59  89500c               mov dword ptr [eax + 0xc], edx
// 00766d5c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00766d60  50                   push eax
// 00766d61  7408                 je 0x766d6b
// 00766d63  e878640300           call 0x79d1e0
// 00766d68  c21800               ret 0x18
// 00766d6b  e880580300           call 0x79c5f0
// 00766d70  c21800               ret 0x18
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?FillPropertyButton@CColorSetWhidbey@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
