// roc 2009-06 00809930  unit: CXTShadowHook  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00809930
//
// 00809930  53                   push ebx
// 00809931  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00809935  56                   push esi
// 00809936  8b742410             mov esi, dword ptr [esp + 0x10]
// 0080993a  8b5604               mov edx, dword ptr [esi + 4]
// 0080993d  57                   push edi
// 0080993e  83ec10               sub esp, 0x10
// 00809941  8bc4                 mov eax, esp
// 00809943  8bf9                 mov edi, ecx
// 00809945  8b0e                 mov ecx, dword ptr [esi]
// 00809947  8908                 mov dword ptr [eax], ecx
// 00809949  8b4e08               mov ecx, dword ptr [esi + 8]
// 0080994c  895004               mov dword ptr [eax + 4], edx
// 0080994f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00809952  894808               mov dword ptr [eax + 8], ecx
// 00809955  53                   push ebx
// 00809956  6a01                 push 1
// 00809958  8bcf                 mov ecx, edi
// 0080995a  89500c               mov dword ptr [eax + 0xc], edx
// 0080995d  e83effffff           call 0x8098a0
// 00809962  8b0e                 mov ecx, dword ptr [esi]
// 00809964  8b5604               mov edx, dword ptr [esi + 4]
// 00809967  83ec10               sub esp, 0x10
// 0080996a  8bc4                 mov eax, esp
// 0080996c  8908                 mov dword ptr [eax], ecx
// 0080996e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00809971  895004               mov dword ptr [eax + 4], edx
// 00809974  8b560c               mov edx, dword ptr [esi + 0xc]
// 00809977  894808               mov dword ptr [eax + 8], ecx
// 0080997a  53                   push ebx
// 0080997b  6a00                 push 0
// 0080997d  8bcf                 mov ecx, edi
// 0080997f  89500c               mov dword ptr [eax + 0xc], edx
// 00809982  e819ffffff           call 0x8098a0
// 00809987  5f                   pop edi
// 00809988  5e                   pop esi
// 00809989  5b                   pop ebx
// 0080998a  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?SetShadow@CXTShadowsManager@@QAEXPAUHWND__@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
