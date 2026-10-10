// roc 2008-06 00702570  unit: CXTPControlTabWorkspace  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00702570
//
// 00702570  83ec10               sub esp, 0x10
// 00702573  56                   push esi
// 00702574  8bf1                 mov esi, ecx
// 00702576  8b4e88               mov ecx, dword ptr [esi - 0x78]
// 00702579  c786b000000001000000 mov dword ptr [esi + 0xb0], 1
// 00702583  8b01                 mov eax, dword ptr [ecx]
// 00702585  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0070258b  ffd2                 call edx
// 0070258d  8b8648ffffff         mov eax, dword ptr [esi - 0xb8]
// 00702593  8b9650ffffff         mov edx, dword ptr [esi - 0xb0]
// 00702599  8b8e4cffffff         mov ecx, dword ptr [esi - 0xb4]
// 0070259f  89442404             mov dword ptr [esp + 4], eax
// 007025a3  8b8654ffffff         mov eax, dword ptr [esi - 0xac]
// 007025a9  8954240c             mov dword ptr [esp + 0xc], edx
// 007025ad  8b16                 mov edx, dword ptr [esi]
// 007025af  8b5234               mov edx, dword ptr [edx + 0x34]
// 007025b2  89442410             mov dword ptr [esp + 0x10], eax
// 007025b6  6a00                 push 0
// 007025b8  8d442408             lea eax, [esp + 8]
// 007025bc  894c240c             mov dword ptr [esp + 0xc], ecx
// 007025c0  50                   push eax
// 007025c1  8bce                 mov ecx, esi
// 007025c3  ffd2                 call edx
// 007025c5  5e                   pop esi
// 007025c6  83c410               add esp, 0x10
// 007025c9  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnRecalcLayout@CXTPControlTabWorkspace@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
