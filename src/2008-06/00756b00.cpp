// roc 2008-06 00756b00  unit: CXTPDockingPaneAutoHideWnd  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00756b00
//
// 00756b00  83ec40               sub esp, 0x40
// 00756b03  53                   push ebx
// 00756b04  56                   push esi
// 00756b05  8bf1                 mov esi, ecx
// 00756b07  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00756b0d  85c0                 test eax, eax
// 00756b0f  0f8429010000         je 0x756c3e
// 00756b15  83782000             cmp dword ptr [eax + 0x20], 0
// 00756b19  0f841f010000         je 0x756c3e
// 00756b1f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00756b22  8d44242c             lea eax, [esp + 0x2c]
// 00756b26  50                   push eax
// 00756b27  51                   push ecx
// 00756b28  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 00756b30  ff15842d8000         call dword ptr [0x802d84]
// 00756b36  8d54242c             lea edx, [esp + 0x2c]
// 00756b3a  52                   push edx
// 00756b3b  8d44241c             lea eax, [esp + 0x1c]
// 00756b3f  50                   push eax
// 00756b40  ff15702d8000         call dword ptr [0x802d70]
// 00756b46  6a08                 push 8
// 00756b48  ff15f82b8000         call dword ptr [0x802bf8]
// 00756b4e  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 00756b54  2b8e18010000         sub ecx, dword ptr [esi + 0x118]
// 00756b5a  89442428             mov dword ptr [esp + 0x28], eax
// 00756b5e  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 00756b64  2b8614010000         sub eax, dword ptr [esi + 0x114]
// 00756b6a  c744240800000000     mov dword ptr [esp + 8], 0
// 00756b72  89442410             mov dword ptr [esp + 0x10], eax
// 00756b76  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00756b7c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00756b84  894c2414             mov dword ptr [esp + 0x14], ecx
// 00756b88  83f803               cmp eax, 3
// 00756b8b  776b                 ja 0x756bf8
// 00756b8d  ff2485486c7500       jmp dword ptr [eax*4 + 0x756c48]
// 00756b94  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 00756b9a  2b8e1c010000         sub ecx, dword ptr [esi + 0x11c]
// 00756ba0  6a00                 push 0
// 00756ba2  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00756ba6  8d54240c             lea edx, [esp + 0xc]
// 00756baa  034c2424             add ecx, dword ptr [esp + 0x24]
// 00756bae  51                   push ecx
// 00756baf  52                   push edx
// 00756bb0  ff15682d8000         call dword ptr [0x802d68]
// 00756bb6  836c241004           sub dword ptr [esp + 0x10], 4
// 00756bbb  eb3b                 jmp 0x756bf8
// 00756bbd  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00756bc3  2b8620010000         sub eax, dword ptr [esi + 0x120]
// 00756bc9  8d4c2408             lea ecx, [esp + 8]
// 00756bcd  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 00756bd1  03442424             add eax, dword ptr [esp + 0x24]
// 00756bd5  50                   push eax
// 00756bd6  6a00                 push 0
// 00756bd8  51                   push ecx
// 00756bd9  ff15682d8000         call dword ptr [0x802d68]
// 00756bdf  836c241404           sub dword ptr [esp + 0x14], 4
// 00756be4  eb12                 jmp 0x756bf8
// 00756be6  c744240804000000     mov dword ptr [esp + 8], 4
// 00756bee  eb08                 jmp 0x756bf8
// 00756bf0  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 00756bf8  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00756bfe  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00756c02  8b5054               mov edx, dword ptr [eax + 0x54]
// 00756c05  8b5224               mov edx, dword ptr [edx + 0x24]
// 00756c08  8d4854               lea ecx, [eax + 0x54]
// 00756c0b  8d442428             lea eax, [esp + 0x28]
// 00756c0f  50                   push eax
// 00756c10  83ec10               sub esp, 0x10
// 00756c13  8bc4                 mov eax, esp
// 00756c15  8918                 mov dword ptr [eax], ebx
// 00756c17  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00756c1b  895804               mov dword ptr [eax + 4], ebx
// 00756c1e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00756c22  895808               mov dword ptr [eax + 8], ebx
// 00756c25  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00756c29  56                   push esi
// 00756c2a  89580c               mov dword ptr [eax + 0xc], ebx
// 00756c2d  ffd2                 call edx
// 00756c2f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00756c33  85c0                 test eax, eax
// 00756c35  7407                 je 0x756c3e
// 00756c37  50                   push eax
// 00756c38  ff15f02b8000         call dword ptr [0x802bf0]
// 00756c3e  5e                   pop esi
// 00756c3f  5b                   pop ebx
// 00756c40  83c440               add esp, 0x40
// 00756c43  c20400               ret 4
// 00756c46  8bff                 mov edi, edi
// 00756c48  94                   xchg esp, eax
// 00756c49  6b7500e6             imul esi, dword ptr [ebp], -0x1a
// 00756c4d  6b7500bd             imul esi, dword ptr [ebp], -0x43
// 00756c51  6b7500f0             imul esi, dword ptr [ebp], -0x10
// library xtp-11.2.2-lib-strlen/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?RecalcLayout@CXTPDockingPaneAutoHideWnd@@EAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
