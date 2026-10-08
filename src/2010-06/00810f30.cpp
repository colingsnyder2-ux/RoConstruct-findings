// roc 2010-06 00810f30  unit: CXTPDockingPane  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810f30
//
// 00810f30  56                   push esi
// 00810f31  57                   push edi
// 00810f32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00810f36  8bf1                 mov esi, ecx
// 00810f38  8b06                 mov eax, dword ptr [esi]
// 00810f3a  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00810f3d  57                   push edi
// 00810f3e  ffd2                 call edx
// 00810f40  8b442420             mov eax, dword ptr [esp + 0x20]
// 00810f44  85c0                 test eax, eax
// 00810f46  7409                 je 0x810f51
// 00810f48  833800               cmp dword ptr [eax], 0
// 00810f4b  0f8486000000         je 0x810fd7
// 00810f51  8b442410             mov eax, dword ptr [esp + 0x10]
// 00810f55  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00810f59  8b542418             mov edx, dword ptr [esp + 0x18]
// 00810f5d  89461c               mov dword ptr [esi + 0x1c], eax
// 00810f60  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00810f64  894e20               mov dword ptr [esi + 0x20], ecx
// 00810f67  895624               mov dword ptr [esi + 0x24], edx
// 00810f6a  894628               mov dword ptr [esi + 0x28], eax
// 00810f6d  85ff                 test edi, edi
// 00810f6f  7466                 je 0x810fd7
// 00810f71  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00810f74  85c9                 test ecx, ecx
// 00810f76  745f                 je 0x810fd7
// 00810f78  8b01                 mov eax, dword ptr [ecx]
// 00810f7a  8b7f20               mov edi, dword ptr [edi + 0x20]
// 00810f7d  6a02                 push 2
// 00810f7f  8d542414             lea edx, [esp + 0x14]
// 00810f83  52                   push edx
// 00810f84  8b5020               mov edx, dword ptr [eax + 0x20]
// 00810f87  ffd2                 call edx
// 00810f89  50                   push eax
// 00810f8a  57                   push edi
// 00810f8b  ff157cba9e00         call dword ptr [0x9eba7c]
// 00810f91  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00810f97  85c0                 test eax, eax
// 00810f99  7421                 je 0x810fbc
// 00810f9b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00810f9f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00810fa3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00810fa7  6a01                 push 1
// 00810fa9  2bd1                 sub edx, ecx
// 00810fab  52                   push edx
// 00810fac  8b542418             mov edx, dword ptr [esp + 0x18]
// 00810fb0  2bfa                 sub edi, edx
// 00810fb2  57                   push edi
// 00810fb3  51                   push ecx
// 00810fb4  52                   push edx
// 00810fb5  50                   push eax
// 00810fb6  ff15a0bb9e00         call dword ptr [0x9ebba0]
// 00810fbc  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00810fc2  85c0                 test eax, eax
// 00810fc4  7411                 je 0x810fd7
// 00810fc6  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00810fcc  83e101               and ecx, 1
// 00810fcf  51                   push ecx
// 00810fd0  50                   push eax
// 00810fd1  ff1544ba9e00         call dword ptr [0x9eba44]
// 00810fd7  5f                   pop edi
// 00810fd8  5e                   pop esi
// 00810fd9  c21800               ret 0x18
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?OnSizeParent@CXTPDockingPane@@MAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
