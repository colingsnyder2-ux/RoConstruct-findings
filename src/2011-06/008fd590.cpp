// from server: 100% by auto
// roc 2011-06 008fd590  unit: CXTPRibbonControlTab  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fd590
//
// 008fd590  56                   push esi
// 008fd591  8d442408             lea eax, [esp + 8]
// 008fd595  50                   push eax
// 008fd596  8bf1                 mov esi, ecx
// 008fd598  e8933df5ff           call 0x851330
// 008fd59d  85c0                 test eax, eax
// 008fd59f  7530                 jne 0x8fd5d1
// 008fd5a1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008fd5a5  8b542408             mov edx, dword ptr [esp + 8]
// 008fd5a9  51                   push ecx
// 008fd5aa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008fd5ae  83ec10               sub esp, 0x10
// 008fd5b1  8bc4                 mov eax, esp
// 008fd5b3  8910                 mov dword ptr [eax], edx
// 008fd5b5  8b542424             mov edx, dword ptr [esp + 0x24]
// 008fd5b9  894804               mov dword ptr [eax + 4], ecx
// 008fd5bc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008fd5c0  895008               mov dword ptr [eax + 8], edx
// 008fd5c3  89480c               mov dword ptr [eax + 0xc], ecx
// 008fd5c6  8bce                 mov ecx, esi
// 008fd5c8  e853f5f0ff           call 0x80cb20
// 008fd5cd  5e                   pop esi
// 008fd5ce  c21400               ret 0x14
// 008fd5d1  6874c3ac00           push 0xacc374
// 008fd5d6  ff15bc0aa400         call dword ptr [0xa40abc]
// 008fd5dc  8b542418             mov edx, dword ptr [esp + 0x18]
// 008fd5e0  8902                 mov dword ptr [edx], eax
// 008fd5e2  33c0                 xor eax, eax
// 008fd5e4  5e                   pop esi
// 008fd5e5  c21400               ret 0x14
// library xtp-15.2.1/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleDefaultAction@CXTPRibbonControlTab@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonControlTab.cpp
