// from server: 100% by auto
// roc 2007-08 00713a10  unit: PAVCXTShadowWnd::?$CList  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713a10
//
// 00713a10  53                   push ebx
// 00713a11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00713a15  56                   push esi
// 00713a16  8b742410             mov esi, dword ptr [esp + 0x10]
// 00713a1a  8b5604               mov edx, dword ptr [esi + 4]
// 00713a1d  57                   push edi
// 00713a1e  83ec10               sub esp, 0x10
// 00713a21  8bc4                 mov eax, esp
// 00713a23  8bf9                 mov edi, ecx
// 00713a25  8b0e                 mov ecx, dword ptr [esi]
// 00713a27  8908                 mov dword ptr [eax], ecx
// 00713a29  8b4e08               mov ecx, dword ptr [esi + 8]
// 00713a2c  895004               mov dword ptr [eax + 4], edx
// 00713a2f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00713a32  894808               mov dword ptr [eax + 8], ecx
// 00713a35  53                   push ebx
// 00713a36  6a01                 push 1
// 00713a38  8bcf                 mov ecx, edi
// 00713a3a  89500c               mov dword ptr [eax + 0xc], edx
// 00713a3d  e83effffff           call 0x713980
// 00713a42  8b0e                 mov ecx, dword ptr [esi]
// 00713a44  8b5604               mov edx, dword ptr [esi + 4]
// 00713a47  83ec10               sub esp, 0x10
// 00713a4a  8bc4                 mov eax, esp
// 00713a4c  8908                 mov dword ptr [eax], ecx
// 00713a4e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00713a51  895004               mov dword ptr [eax + 4], edx
// 00713a54  8b560c               mov edx, dword ptr [esi + 0xc]
// 00713a57  894808               mov dword ptr [eax + 8], ecx
// 00713a5a  53                   push ebx
// 00713a5b  6a00                 push 0
// 00713a5d  8bcf                 mov ecx, edi
// 00713a5f  89500c               mov dword ptr [eax + 0xc], edx
// 00713a62  e819ffffff           call 0x713980
// 00713a67  5f                   pop edi
// 00713a68  5e                   pop esi
// 00713a69  5b                   pop ebx
// 00713a6a  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ?SetShadow@CXTShadowsManager@@QAEXPAUHWND__@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp
