// roc 2009-12 008a9ef0  unit: CXTPDockingPaneAutoHideWnd  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a9ef0
//
// 008a9ef0  83ec40               sub esp, 0x40
// 008a9ef3  53                   push ebx
// 008a9ef4  56                   push esi
// 008a9ef5  8bf1                 mov esi, ecx
// 008a9ef7  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008a9efd  85c0                 test eax, eax
// 008a9eff  0f8429010000         je 0x8aa02e
// 008a9f05  83782000             cmp dword ptr [eax + 0x20], 0
// 008a9f09  0f841f010000         je 0x8aa02e
// 008a9f0f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a9f12  8d44242c             lea eax, [esp + 0x2c]
// 008a9f16  50                   push eax
// 008a9f17  51                   push ecx
// 008a9f18  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 008a9f20  ff1550cc9800         call dword ptr [0x98cc50]
// 008a9f26  8d54242c             lea edx, [esp + 0x2c]
// 008a9f2a  52                   push edx
// 008a9f2b  8d44241c             lea eax, [esp + 0x1c]
// 008a9f2f  50                   push eax
// 008a9f30  ff1564cc9800         call dword ptr [0x98cc64]
// 008a9f36  6a08                 push 8
// 008a9f38  ff1574cb9800         call dword ptr [0x98cb74]
// 008a9f3e  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 008a9f44  2b8e18010000         sub ecx, dword ptr [esi + 0x118]
// 008a9f4a  89442428             mov dword ptr [esp + 0x28], eax
// 008a9f4e  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008a9f54  2b8614010000         sub eax, dword ptr [esi + 0x114]
// 008a9f5a  c744240800000000     mov dword ptr [esp + 8], 0
// 008a9f62  89442410             mov dword ptr [esp + 0x10], eax
// 008a9f66  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008a9f6c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008a9f74  894c2414             mov dword ptr [esp + 0x14], ecx
// 008a9f78  83f803               cmp eax, 3
// 008a9f7b  776b                 ja 0x8a9fe8
// 008a9f7d  ff248538a08a00       jmp dword ptr [eax*4 + 0x8aa038]
// 008a9f84  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 008a9f8a  2b8e1c010000         sub ecx, dword ptr [esi + 0x11c]
// 008a9f90  6a00                 push 0
// 008a9f92  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 008a9f96  8d54240c             lea edx, [esp + 0xc]
// 008a9f9a  034c2424             add ecx, dword ptr [esp + 0x24]
// 008a9f9e  51                   push ecx
// 008a9f9f  52                   push edx
// 008a9fa0  ff156ccc9800         call dword ptr [0x98cc6c]
// 008a9fa6  836c241004           sub dword ptr [esp + 0x10], 4
// 008a9fab  eb3b                 jmp 0x8a9fe8
// 008a9fad  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 008a9fb3  2b8620010000         sub eax, dword ptr [esi + 0x120]
// 008a9fb9  8d4c2408             lea ecx, [esp + 8]
// 008a9fbd  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 008a9fc1  03442424             add eax, dword ptr [esp + 0x24]
// 008a9fc5  50                   push eax
// 008a9fc6  6a00                 push 0
// 008a9fc8  51                   push ecx
// 008a9fc9  ff156ccc9800         call dword ptr [0x98cc6c]
// 008a9fcf  836c241404           sub dword ptr [esp + 0x14], 4
// 008a9fd4  eb12                 jmp 0x8a9fe8
// 008a9fd6  c744240804000000     mov dword ptr [esp + 8], 4
// 008a9fde  eb08                 jmp 0x8a9fe8
// 008a9fe0  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 008a9fe8  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008a9fee  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008a9ff2  8b5054               mov edx, dword ptr [eax + 0x54]
// 008a9ff5  8b5224               mov edx, dword ptr [edx + 0x24]
// 008a9ff8  8d4854               lea ecx, [eax + 0x54]
// 008a9ffb  8d442428             lea eax, [esp + 0x28]
// 008a9fff  50                   push eax
// 008aa000  83ec10               sub esp, 0x10
// 008aa003  8bc4                 mov eax, esp
// 008aa005  8918                 mov dword ptr [eax], ebx
// 008aa007  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008aa00b  895804               mov dword ptr [eax + 4], ebx
// 008aa00e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008aa012  895808               mov dword ptr [eax + 8], ebx
// 008aa015  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008aa019  56                   push esi
// 008aa01a  89580c               mov dword ptr [eax + 0xc], ebx
// 008aa01d  ffd2                 call edx
// 008aa01f  8b442428             mov eax, dword ptr [esp + 0x28]
// 008aa023  85c0                 test eax, eax
// 008aa025  7407                 je 0x8aa02e
// 008aa027  50                   push eax
// 008aa028  ff156ccb9800         call dword ptr [0x98cb6c]
// 008aa02e  5e                   pop esi
// 008aa02f  5b                   pop ebx
// 008aa030  83c440               add esp, 0x40
// 008aa033  c20400               ret 4
// 008aa036  8bff                 mov edi, edi
// 008aa038  849f8a00d69f         test byte ptr [edi - 0x6029ff76], bl
// 008aa03e  8a00                 mov al, byte ptr [eax]
// 008aa040  ad                   lodsd eax, dword ptr [esi]
// 008aa041  9f                   lahf 
// 008aa042  8a00                 mov al, byte ptr [eax]
// 008aa044  e09f                 loopne 0x8a9fe5
// 008aa046  8a00                 mov al, byte ptr [eax]
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?RecalcLayout@CXTPDockingPaneAutoHideWnd@@EAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
