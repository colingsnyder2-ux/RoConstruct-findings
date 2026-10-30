// roc 2009-12 008b1db0  unit: CXTPDockingPaneTabbedContainer  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1db0
//
// 008b1db0  83ec10               sub esp, 0x10
// 008b1db3  55                   push ebp
// 008b1db4  56                   push esi
// 008b1db5  57                   push edi
// 008b1db6  8bf1                 mov esi, ecx
// 008b1db8  33ff                 xor edi, edi
// 008b1dba  8d4e54               lea ecx, [esi + 0x54]
// 008b1dbd  897c240c             mov dword ptr [esp + 0xc], edi
// 008b1dc1  897c2410             mov dword ptr [esp + 0x10], edi
// 008b1dc5  c7442414e8030000     mov dword ptr [esp + 0x14], 0x3e8
// 008b1dcd  c7442418e8030000     mov dword ptr [esp + 0x18], 0x3e8
// 008b1dd5  e876eaffff           call 0x8b0850
// 008b1dda  8b10                 mov edx, dword ptr [eax]
// 008b1ddc  8d4c240c             lea ecx, [esp + 0xc]
// 008b1de0  397c2424             cmp dword ptr [esp + 0x24], edi
// 008b1de4  740b                 je 0x8b1df1
// 008b1de6  8b5270               mov edx, dword ptr [edx + 0x70]
// 008b1de9  51                   push ecx
// 008b1dea  56                   push esi
// 008b1deb  8bc8                 mov ecx, eax
// 008b1ded  ffd2                 call edx
// 008b1def  eb0a                 jmp 0x8b1dfb
// 008b1df1  8b526c               mov edx, dword ptr [edx + 0x6c]
// 008b1df4  57                   push edi
// 008b1df5  51                   push ecx
// 008b1df6  56                   push esi
// 008b1df7  8bc8                 mov ecx, eax
// 008b1df9  ffd2                 call edx
// 008b1dfb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008b1dff  8b742414             mov esi, dword ptr [esp + 0x14]
// 008b1e03  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b1e07  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008b1e0b  8bd1                 mov edx, ecx
// 008b1e0d  2bd6                 sub edx, esi
// 008b1e0f  81c2e8030000         add edx, 0x3e8
// 008b1e15  015018               add dword ptr [eax + 0x18], edx
// 008b1e18  8b542410             mov edx, dword ptr [esp + 0x10]
// 008b1e1c  8bea                 mov ebp, edx
// 008b1e1e  2bef                 sub ebp, edi
// 008b1e20  2bce                 sub ecx, esi
// 008b1e22  2bd7                 sub edx, edi
// 008b1e24  81c5e8030000         add ebp, 0x3e8
// 008b1e2a  01681c               add dword ptr [eax + 0x1c], ebp
// 008b1e2d  5f                   pop edi
// 008b1e2e  81c1e8030000         add ecx, 0x3e8
// 008b1e34  014820               add dword ptr [eax + 0x20], ecx
// 008b1e37  81c2e8030000         add edx, 0x3e8
// 008b1e3d  015024               add dword ptr [eax + 0x24], edx
// 008b1e40  5e                   pop esi
// 008b1e41  5d                   pop ebp
// 008b1e42  83c410               add esp, 0x10
// 008b1e45  c20800               ret 8
// copied from an identical function in another client (function ?AdjustMinMaxInfoClientRect@CXTPDockingPaneTabbedContainer@@IBEXPAUtagMINMAXINFO@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp