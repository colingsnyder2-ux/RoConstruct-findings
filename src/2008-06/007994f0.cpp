// from server: 100% by auto
// roc 2008-06 007994f0  unit: CXTPRibbonControlTab  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007994f0
//
// 007994f0  56                   push esi
// 007994f1  8d442408             lea eax, [esp + 8]
// 007994f5  50                   push eax
// 007994f6  8bf1                 mov esi, ecx
// 007994f8  e8a3edf4ff           call 0x6e82a0
// 007994fd  85c0                 test eax, eax
// 007994ff  7530                 jne 0x799531
// 00799501  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00799505  8b542408             mov edx, dword ptr [esp + 8]
// 00799509  51                   push ecx
// 0079950a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079950e  83ec10               sub esp, 0x10
// 00799511  8bc4                 mov eax, esp
// 00799513  8910                 mov dword ptr [eax], edx
// 00799515  8b542424             mov edx, dword ptr [esp + 0x24]
// 00799519  894804               mov dword ptr [eax + 4], ecx
// 0079951c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00799520  895008               mov dword ptr [eax + 8], edx
// 00799523  89480c               mov dword ptr [eax + 0xc], ecx
// 00799526  8bce                 mov ecx, esi
// 00799528  e84321f1ff           call 0x6ab670
// 0079952d  5e                   pop esi
// 0079952e  c21400               ret 0x14
// 00799531  6814c08500           push 0x85c014
// 00799536  ff1500298000         call dword ptr [0x802900]
// 0079953c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00799540  8902                 mov dword ptr [edx], eax
// 00799542  33c0                 xor eax, eax
// 00799544  5e                   pop esi
// 00799545  c21400               ret 0x14
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleDefaultAction@CXTPRibbonControlTab@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
