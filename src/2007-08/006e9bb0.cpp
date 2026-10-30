// from server: 100% by auto
// roc 2007-08 006e9bb0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e9bb0
//
// 006e9bb0  83b91c02000000       cmp dword ptr [ecx + 0x21c], 0
// 006e9bb7  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e9bbb  7417                 je 0x6e9bd4
// 006e9bbd  83b92002000000       cmp dword ptr [ecx + 0x220], 0
// 006e9bc4  7408                 je 0x6e9bce
// 006e9bc6  8b5060               mov edx, dword ptr [eax + 0x60]
// 006e9bc9  394204               cmp dword ptr [edx + 4], eax
// 006e9bcc  7406                 je 0x6e9bd4
// 006e9bce  83c8ff               or eax, 0xffffffff
// 006e9bd1  c21800               ret 0x18
// 006e9bd4  8b542408             mov edx, dword ptr [esp + 8]
// 006e9bd8  50                   push eax
// 006e9bd9  83ec10               sub esp, 0x10
// 006e9bdc  83b91802000000       cmp dword ptr [ecx + 0x218], 0
// 006e9be3  8bc4                 mov eax, esp
// 006e9be5  8910                 mov dword ptr [eax], edx
// 006e9be7  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e9beb  895004               mov dword ptr [eax + 4], edx
// 006e9bee  8b542424             mov edx, dword ptr [esp + 0x24]
// 006e9bf2  895008               mov dword ptr [eax + 8], edx
// 006e9bf5  8b542428             mov edx, dword ptr [esp + 0x28]
// 006e9bf9  89500c               mov dword ptr [eax + 0xc], edx
// 006e9bfc  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e9c00  50                   push eax
// 006e9c01  7408                 je 0x6e9c0b
// 006e9c03  e8d8280300           call 0x71c4e0
// 006e9c08  c21800               ret 0x18
// 006e9c0b  e8f01c0300           call 0x71b900
// 006e9c10  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?FillPropertyButton@CColorSetWhidbey@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
