// roc 2009-12 007f9390  unit: CPatchedControlComboBox  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9390
//
// 007f9390  6aff                 push -1
// 007f9392  68d40d9600           push 0x960dd4
// 007f9397  64a100000000         mov eax, dword ptr fs:[0]
// 007f939d  50                   push eax
// 007f939e  83ec0c               sub esp, 0xc
// 007f93a1  53                   push ebx
// 007f93a2  56                   push esi
// 007f93a3  57                   push edi
// 007f93a4  a10052b600           mov eax, dword ptr [0xb65200]
// 007f93a9  33c4                 xor eax, esp
// 007f93ab  50                   push eax
// 007f93ac  8d44241c             lea eax, [esp + 0x1c]
// 007f93b0  64a300000000         mov dword ptr fs:[0], eax
// 007f93b6  8bf1                 mov esi, ecx
// 007f93b8  8dbea8010000         lea edi, [esi + 0x1a8]
// 007f93be  33db                 xor ebx, ebx
// 007f93c0  8bcf                 mov ecx, edi
// 007f93c2  895c2410             mov dword ptr [esp + 0x10], ebx
// 007f93c6  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007f93cc  84c0                 test al, al
// 007f93ce  7504                 jne 0x7f93d4
// 007f93d0  8bc7                 mov eax, edi
// 007f93d2  eb3f                 jmp 0x7f9413
// 007f93d4  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007f93da  3bcb                 cmp ecx, ebx
// 007f93dc  7415                 je 0x7f93f3
// 007f93de  8d442418             lea eax, [esp + 0x18]
// 007f93e2  50                   push eax
// 007f93e3  e848faffff           call 0x7f8e30
// 007f93e8  895c2424             mov dword ptr [esp + 0x24], ebx
// 007f93ec  bb01000000           mov ebx, 1
// 007f93f1  eb1c                 jmp 0x7f940f
// 007f93f3  6856fd9900           push 0x99fd56
// 007f93f8  8d4c2418             lea ecx, [esp + 0x18]
// 007f93fc  ff15b8de9800         call dword ptr [0x98deb8]
// 007f9402  c744242401000000     mov dword ptr [esp + 0x24], 1
// 007f940a  bb02000000           mov ebx, 2
// 007f940f  895c2410             mov dword ptr [esp + 0x10], ebx
// 007f9413  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007f9417  50                   push eax
// 007f9418  8bce                 mov ecx, esi
// 007f941a  ff1594de9800         call dword ptr [0x98de94]
// 007f9420  83cb04               or ebx, 4
// 007f9423  f6c302               test bl, 2
// 007f9426  740d                 je 0x7f9435
// 007f9428  8d4c2414             lea ecx, [esp + 0x14]
// 007f942c  83e3fd               and ebx, 0xfffffffd
// 007f942f  ff15c0de9800         call dword ptr [0x98dec0]
// 007f9435  f6c301               test bl, 1
// 007f9438  740a                 je 0x7f9444
// 007f943a  8d4c2418             lea ecx, [esp + 0x18]
// 007f943e  ff15c0de9800         call dword ptr [0x98dec0]
// 007f9444  8bc6                 mov eax, esi
// 007f9446  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f944a  64890d00000000       mov dword ptr fs:[0], ecx
// 007f9451  59                   pop ecx
// 007f9452  5f                   pop edi
// 007f9453  5e                   pop esi
// 007f9454  5b                   pop ebx
// 007f9455  83c418               add esp, 0x18
// 007f9458  c20400               ret 4
// copied from an identical function in another client (function ?GetEditHint@CXTPControlComboBox@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp