// from server: 100% by auto
// roc 2007-08 007177c0  unit: CXTPRibbonControlTab  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007177c0
//
// 007177c0  56                   push esi
// 007177c1  8d442408             lea eax, [esp + 8]
// 007177c5  50                   push eax
// 007177c6  8bf1                 mov esi, ecx
// 007177c8  e8039cf5ff           call 0x6713d0
// 007177cd  85c0                 test eax, eax
// 007177cf  7530                 jne 0x717801
// 007177d1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007177d5  8b542408             mov edx, dword ptr [esp + 8]
// 007177d9  51                   push ecx
// 007177da  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007177de  83ec10               sub esp, 0x10
// 007177e1  8bc4                 mov eax, esp
// 007177e3  8910                 mov dword ptr [eax], edx
// 007177e5  8b542424             mov edx, dword ptr [esp + 0x24]
// 007177e9  894804               mov dword ptr [eax + 4], ecx
// 007177ec  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007177f0  895008               mov dword ptr [eax + 8], edx
// 007177f3  89480c               mov dword ptr [eax + 0xc], ecx
// 007177f6  8bce                 mov ecx, esi
// 007177f8  e8532cf2ff           call 0x63a450
// 007177fd  5e                   pop esi
// 007177fe  c21400               ret 0x14
// 00717801  6884057d00           push 0x7d0584
// 00717806  ff15f4e97700         call dword ptr [0x77e9f4]
// 0071780c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00717810  8902                 mov dword ptr [edx], eax
// 00717812  33c0                 xor eax, eax
// 00717814  5e                   pop esi
// 00717815  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleDefaultAction@CXTPRibbonControlTab@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonControlTab.cpp
