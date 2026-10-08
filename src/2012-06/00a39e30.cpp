// roc 2012-06 00a39e30  unit: CXTPDockingPaneMiniWnd  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a39e30
//
// 00a39e30  83ec20               sub esp, 0x20
// 00a39e33  56                   push esi
// 00a39e34  8bf1                 mov esi, ecx
// 00a39e36  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 00a39e3c  85c0                 test eax, eax
// 00a39e3e  0f84e6000000         je 0xa39f2a
// 00a39e44  83bec800000000       cmp dword ptr [esi + 0xc8], 0
// 00a39e4b  0f85d9000000         jne 0xa39f2a
// 00a39e51  83a6e4000000f3       and dword ptr [esi + 0xe4], 0xfffffff3
// 00a39e58  8d4820               lea ecx, [eax + 0x20]
// 00a39e5b  c786c800000001000000 mov dword ptr [esi + 0xc8], 1
// 00a39e65  8b01                 mov eax, dword ptr [ecx]
// 00a39e67  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a39e6a  ffd2                 call edx
// 00a39e6c  85c0                 test eax, eax
// 00a39e6e  741f                 je 0xa39e8f
// 00a39e70  6a00                 push 0
// 00a39e72  8bce                 mov ecx, esi
// 00a39e74  e82b8cf4ff           call 0x982aa4
// 00a39e79  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 00a39e80  0f8488000000         je 0xa39f0e
// 00a39e86  8bce                 mov ecx, esi
// 00a39e88  e8f3fdffff           call 0xa39c80
// 00a39e8d  eb7f                 jmp 0xa39f0e
// 00a39e8f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a39e92  8d442408             lea eax, [esp + 8]
// 00a39e96  50                   push eax
// 00a39e97  51                   push ecx
// 00a39e98  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00a39ea0  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a39ea6  6a08                 push 8
// 00a39ea8  ff15803cb200         call dword ptr [0xb23c80]
// 00a39eae  8d542404             lea edx, [esp + 4]
// 00a39eb2  52                   push edx
// 00a39eb3  83ec10               sub esp, 0x10
// 00a39eb6  89442418             mov dword ptr [esp + 0x18], eax
// 00a39eba  8bc4                 mov eax, esp
// 00a39ebc  8d4c241c             lea ecx, [esp + 0x1c]
// 00a39ec0  51                   push ecx
// 00a39ec1  50                   push eax
// 00a39ec2  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a39ec8  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 00a39ece  8b5020               mov edx, dword ptr [eax + 0x20]
// 00a39ed1  8d4820               lea ecx, [eax + 0x20]
// 00a39ed4  8b4224               mov eax, dword ptr [edx + 0x24]
// 00a39ed7  56                   push esi
// 00a39ed8  ffd0                 call eax
// 00a39eda  8b442404             mov eax, dword ptr [esp + 4]
// 00a39ede  85c0                 test eax, eax
// 00a39ee0  7407                 je 0xa39ee9
// 00a39ee2  50                   push eax
// 00a39ee3  ff15883cb200         call dword ptr [0xb23c88]
// 00a39ee9  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 00a39eef  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a39ef2  83c13c               add ecx, 0x3c
// 00a39ef5  51                   push ecx
// 00a39ef6  52                   push edx
// 00a39ef7  ff15f83ab200         call dword ptr [0xb23af8]
// 00a39efd  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 00a39f03  83c03c               add eax, 0x3c
// 00a39f06  50                   push eax
// 00a39f07  8bce                 mov ecx, esi
// 00a39f09  e89091f4ff           call 0x98309e
// 00a39f0e  8d8ef8000000         lea ecx, [esi + 0xf8]
// 00a39f14  e857020000           call 0xa3a170
// 00a39f19  8bc8                 mov ecx, eax
// 00a39f1b  e870c9f8ff           call 0x9c6890
// 00a39f20  c786c800000000000000 mov dword ptr [esi + 0xc8], 0
// 00a39f2a  5e                   pop esi
// 00a39f2b  83c420               add esp, 0x20
// 00a39f2e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?RecalcLayout@CXTPDockingPaneMiniWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
