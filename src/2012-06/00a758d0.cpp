// from server: 100% by auto
// roc 2012-06 00a758d0  unit: CXTPRibbonControlTab  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a758d0
//
// 00a758d0  56                   push esi
// 00a758d1  8d442408             lea eax, [esp + 8]
// 00a758d5  50                   push eax
// 00a758d6  8bf1                 mov esi, ecx
// 00a758d8  e8133ff5ff           call 0x9c97f0
// 00a758dd  85c0                 test eax, eax
// 00a758df  7530                 jne 0xa75911
// 00a758e1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a758e5  8b542408             mov edx, dword ptr [esp + 8]
// 00a758e9  51                   push ecx
// 00a758ea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a758ee  83ec10               sub esp, 0x10
// 00a758f1  8bc4                 mov eax, esp
// 00a758f3  8910                 mov dword ptr [eax], edx
// 00a758f5  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a758f9  894804               mov dword ptr [eax + 4], ecx
// 00a758fc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a75900  895008               mov dword ptr [eax + 8], edx
// 00a75903  89480c               mov dword ptr [eax + 0xc], ecx
// 00a75906  8bce                 mov ecx, esi
// 00a75908  e8c3f4f0ff           call 0x984dd0
// 00a7590d  5e                   pop esi
// 00a7590e  c21400               ret 0x14
// 00a75911  684475c100           push 0xc17544
// 00a75916  ff15482bb200         call dword ptr [0xb22b48]
// 00a7591c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a75920  8902                 mov dword ptr [edx], eax
// 00a75922  33c0                 xor eax, eax
// 00a75924  5e                   pop esi
// 00a75925  c21400               ret 0x14
// library xtp-15.2.1/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleDefaultAction@CXTPRibbonControlTab@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonControlTab.cpp
