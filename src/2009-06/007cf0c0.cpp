// roc 2009-06 007cf0c0  unit: CXTPDockingPaneAutoHideWnd  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cf0c0
//
// 007cf0c0  83ec40               sub esp, 0x40
// 007cf0c3  53                   push ebx
// 007cf0c4  56                   push esi
// 007cf0c5  8bf1                 mov esi, ecx
// 007cf0c7  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 007cf0cd  85c0                 test eax, eax
// 007cf0cf  0f8429010000         je 0x7cf1fe
// 007cf0d5  83782000             cmp dword ptr [eax + 0x20], 0
// 007cf0d9  0f841f010000         je 0x7cf1fe
// 007cf0df  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cf0e2  8d44242c             lea eax, [esp + 0x2c]
// 007cf0e6  50                   push eax
// 007cf0e7  51                   push ecx
// 007cf0e8  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 007cf0f0  ff1514ee8900         call dword ptr [0x89ee14]
// 007cf0f6  8d54242c             lea edx, [esp + 0x2c]
// 007cf0fa  52                   push edx
// 007cf0fb  8d44241c             lea eax, [esp + 0x1c]
// 007cf0ff  50                   push eax
// 007cf100  ff1500ee8900         call dword ptr [0x89ee00]
// 007cf106  6a08                 push 8
// 007cf108  ff15bcec8900         call dword ptr [0x89ecbc]
// 007cf10e  8b8e20010000         mov ecx, dword ptr [esi + 0x120]
// 007cf114  2b8e18010000         sub ecx, dword ptr [esi + 0x118]
// 007cf11a  89442428             mov dword ptr [esp + 0x28], eax
// 007cf11e  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 007cf124  2b8614010000         sub eax, dword ptr [esi + 0x114]
// 007cf12a  c744240800000000     mov dword ptr [esp + 8], 0
// 007cf132  89442410             mov dword ptr [esp + 0x10], eax
// 007cf136  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007cf13c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007cf144  894c2414             mov dword ptr [esp + 0x14], ecx
// 007cf148  83f803               cmp eax, 3
// 007cf14b  776b                 ja 0x7cf1b8
// 007cf14d  ff248508f27c00       jmp dword ptr [eax*4 + 0x7cf208]
// 007cf154  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 007cf15a  2b8e1c010000         sub ecx, dword ptr [esi + 0x11c]
// 007cf160  6a00                 push 0
// 007cf162  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 007cf166  8d54240c             lea edx, [esp + 0xc]
// 007cf16a  034c2424             add ecx, dword ptr [esp + 0x24]
// 007cf16e  51                   push ecx
// 007cf16f  52                   push edx
// 007cf170  ff15f8ed8900         call dword ptr [0x89edf8]
// 007cf176  836c241004           sub dword ptr [esp + 0x10], 4
// 007cf17b  eb3b                 jmp 0x7cf1b8
// 007cf17d  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 007cf183  2b8620010000         sub eax, dword ptr [esi + 0x120]
// 007cf189  8d4c2408             lea ecx, [esp + 8]
// 007cf18d  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 007cf191  03442424             add eax, dword ptr [esp + 0x24]
// 007cf195  50                   push eax
// 007cf196  6a00                 push 0
// 007cf198  51                   push ecx
// 007cf199  ff15f8ed8900         call dword ptr [0x89edf8]
// 007cf19f  836c241404           sub dword ptr [esp + 0x14], 4
// 007cf1a4  eb12                 jmp 0x7cf1b8
// 007cf1a6  c744240804000000     mov dword ptr [esp + 8], 4
// 007cf1ae  eb08                 jmp 0x7cf1b8
// 007cf1b0  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 007cf1b8  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 007cf1be  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007cf1c2  8b5054               mov edx, dword ptr [eax + 0x54]
// 007cf1c5  8b5224               mov edx, dword ptr [edx + 0x24]
// 007cf1c8  8d4854               lea ecx, [eax + 0x54]
// 007cf1cb  8d442428             lea eax, [esp + 0x28]
// 007cf1cf  50                   push eax
// 007cf1d0  83ec10               sub esp, 0x10
// 007cf1d3  8bc4                 mov eax, esp
// 007cf1d5  8918                 mov dword ptr [eax], ebx
// 007cf1d7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007cf1db  895804               mov dword ptr [eax + 4], ebx
// 007cf1de  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 007cf1e2  895808               mov dword ptr [eax + 8], ebx
// 007cf1e5  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007cf1e9  56                   push esi
// 007cf1ea  89580c               mov dword ptr [eax + 0xc], ebx
// 007cf1ed  ffd2                 call edx
// 007cf1ef  8b442428             mov eax, dword ptr [esp + 0x28]
// 007cf1f3  85c0                 test eax, eax
// 007cf1f5  7407                 je 0x7cf1fe
// 007cf1f7  50                   push eax
// 007cf1f8  ff15c4ec8900         call dword ptr [0x89ecc4]
// 007cf1fe  5e                   pop esi
// 007cf1ff  5b                   pop ebx
// 007cf200  83c440               add esp, 0x40
// 007cf203  c20400               ret 4
// 007cf206  8bff                 mov edi, edi
// 007cf208  54                   push esp
// 007cf209  f1                   int1 
// 007cf20a  7c00                 jl 0x7cf20c
// 007cf20c  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 007cf20d  f1                   int1 
// 007cf20e  7c00                 jl 0x7cf210
// 007cf210  7df1                 jge 0x7cf203
// 007cf212  7c00                 jl 0x7cf214
// 007cf214  b0f1                 mov al, 0xf1
// 007cf216  7c00                 jl 0x7cf218
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?RecalcLayout@CXTPDockingPaneAutoHideWnd@@EAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
