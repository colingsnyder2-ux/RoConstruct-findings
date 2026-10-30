// roc 2009-12 008ba530  unit: XTPDockingPanePaintThemes::CXTPDockingPaneVisualStudio2005SecondTheme  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ba530
//
// 008ba530  6aff                 push -1
// 008ba532  6818309600           push 0x963018
// 008ba537  64a100000000         mov eax, dword ptr fs:[0]
// 008ba53d  50                   push eax
// 008ba53e  83ec1c               sub esp, 0x1c
// 008ba541  56                   push esi
// 008ba542  a10052b600           mov eax, dword ptr [0xb65200]
// 008ba547  33c4                 xor eax, esp
// 008ba549  50                   push eax
// 008ba54a  8d442424             lea eax, [esp + 0x24]
// 008ba54e  64a300000000         mov dword ptr fs:[0], eax
// 008ba554  8b742434             mov esi, dword ptr [esp + 0x34]
// 008ba558  8b4618               mov eax, dword ptr [esi + 0x18]
// 008ba55b  83f801               cmp eax, 1
// 008ba55e  7517                 jne 0x8ba577
// 008ba560  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 008ba566  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ba56a  64890d00000000       mov dword ptr fs:[0], ecx
// 008ba571  59                   pop ecx
// 008ba572  5e                   pop esi
// 008ba573  83c428               add esp, 0x28
// 008ba576  c3                   ret 
// 008ba577  83f803               cmp eax, 3
// 008ba57a  0f8587000000         jne 0x8ba607
// 008ba580  6a0a                 push 0xa
// 008ba582  8d4c240c             lea ecx, [esp + 0xc]
// 008ba586  e835f1f7ff           call 0x8396c0
// 008ba58b  8b06                 mov eax, dword ptr [esi]
// 008ba58d  8b500c               mov edx, dword ptr [eax + 0xc]
// 008ba590  8d4c2408             lea ecx, [esp + 8]
// 008ba594  51                   push ecx
// 008ba595  6a01                 push 1
// 008ba597  8bce                 mov ecx, esi
// 008ba599  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008ba5a1  ffd2                 call edx
// 008ba5a3  837c241401           cmp dword ptr [esp + 0x14], 1
// 008ba5a8  754c                 jne 0x8ba5f6
// 008ba5aa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008ba5ae  33c9                 xor ecx, ecx
// 008ba5b0  85c0                 test eax, eax
// 008ba5b2  0f95c1               setne cl
// 008ba5b5  85c9                 test ecx, ecx
// 008ba5b7  7505                 jne 0x8ba5be
// 008ba5b9  e84e95f3ff           call 0x7f3b0c
// 008ba5be  8b4008               mov eax, dword ptr [eax + 8]
// 008ba5c1  85c0                 test eax, eax
// 008ba5c3  7405                 je 0x8ba5ca
// 008ba5c5  83c0ac               add eax, -0x54
// 008ba5c8  eb02                 jmp 0x8ba5cc
// 008ba5ca  33c0                 xor eax, eax
// 008ba5cc  8bb0a4010000         mov esi, dword ptr [eax + 0x1a4]
// 008ba5d2  8d4c2408             lea ecx, [esp + 8]
// 008ba5d6  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008ba5de  e80df1f7ff           call 0x8396f0
// 008ba5e3  8bc6                 mov eax, esi
// 008ba5e5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ba5e9  64890d00000000       mov dword ptr fs:[0], ecx
// 008ba5f0  59                   pop ecx
// 008ba5f1  5e                   pop esi
// 008ba5f2  83c428               add esp, 0x28
// 008ba5f5  c3                   ret 
// 008ba5f6  8d4c2408             lea ecx, [esp + 8]
// 008ba5fa  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008ba602  e8e9f0f7ff           call 0x8396f0
// 008ba607  33c0                 xor eax, eax
// 008ba609  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ba60d  64890d00000000       mov dword ptr fs:[0], ecx
// 008ba614  59                   pop ecx
// 008ba615  5e                   pop esi
// 008ba616  83c428               add esp, 0x28
// 008ba619  c3                   ret 
// copied from an identical function in another client (function ?GetSelectedPane@CXTPDockingPanePaintManager@@SAPAVCXTPDockingPane@@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPanePaintManager.cpp